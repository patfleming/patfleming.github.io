---
layout: default
title: Sitemap 
date: 2025-11-19
permalink: /sitemap/ 
---

{% for post in site.posts %}
<a href="{{ post.url }}">{{ post.title }}</a> 
{% endfor %}
