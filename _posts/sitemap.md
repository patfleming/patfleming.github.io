---

layout: default

title: Sitemap 

permalink: /sitemap/ 

---

{% for post in site.posts %}
<a href="{{ post.url }}">{{ post.title }}</a> 
{% endfor %}
