date: 2025-11-19
---

layout: default

title: Sitemap 

permalink: /sitemap/ 

---

{% for post in site.posts %}
<a href="{{ post.url }}">{{ post.title }}</a> 
{% endfor %}
