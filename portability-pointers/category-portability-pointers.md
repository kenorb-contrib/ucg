---
layout: archive
permalink: /categories/portability-pointers/index.html
title: "Portability Pointers"
author_profile: true
---

{% include base_path %}

Some hints, tips, and things I've discovered in my efforts to write portable code in the 21st century.

## The First Rule of Portability is: Nothing is Portable

While it sounds like hyperbole (I mean, after all, this *is* the 21st century!  ...Right?), the fact of the matter is,
virtually nothing is portable.  Ok, ok, maybe not _nothing_, but if you need to use it in your program, or to build
your program, or to test your program, chances are it ain't portable.  And I'm just talking POSIX-oid platforms here.

To wit:

{% comment %}

{% include group-by-array collection=site.posts field="categories" %}

{% assign category = "Portability Pointers" %}
{% assign posts = group_items[0] %}
<h2 id="{{ category | slugify }}" class="archive__subtitle">{{ category }}</h2>
{% for post in posts %}
  {% include archive-single.html %}
{% endfor %}

{% endcomment %}

<!-- start index.html body -->
{% include base_path %}

<h3 class="archive__subtitle">Recent Posts</h3>

{% for post in paginator.posts %}
  {% include archive-single.html %}
{% endfor %}

{% include paginator.html %}
<!-- end index.html body -->