// This may look like C code, but it's really -*- C++ -*-
/*
 * Copyright (C) 2009 Emweb bvba, Kessel-Lo, Belgium.
 *
 * See the LICENSE file for terms of use.
 */
#ifndef BLOG_RSS_FEED_H_
#define BLOG_RSS_FEED_H_

#include <Wt/WResource>

class BlogSession;

class BlogRSSFeed : public Wt::WResource
{
public:
  BlogRSSFeed(const std::string& sqliteDb,
	      const std::string& title,
	      const std::string& description);
  virtual ~BlogRSSFeed();

protected:
  virtual void handleRequest(const Wt::Http::Request &request,
			     Wt::Http::Response &response);

private:
  BlogSession *session_;

  std::string title_, url_, description_;
};

#endif // BLOG_RSS_FEED_H_