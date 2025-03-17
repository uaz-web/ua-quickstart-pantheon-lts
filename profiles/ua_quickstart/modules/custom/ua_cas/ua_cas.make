api = 2
core = 7.x

; CAS contrib module.
projects[cas][version] = 1.8
projects[cas][subdir] = contrib

; phpCAS library.
libraries[CAS][download][type] = get
libraries[CAS][download][url] = "https://github.com/apereo/phpCAS/archive/1.6.1.tar.gz"
libraries[CAS][patch][] = "https://gist.githubusercontent.com/trackleft/ee861a63344b7136866e4a7c3f47d981/raw/88f069b2b27a9c43db0d62926b05891471a2ce2d/UADIGITAL-2299.diff"