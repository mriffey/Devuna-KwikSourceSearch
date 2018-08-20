# Devuna-KwikSourceSearch #

With Kwik Source Search (KSS) you can perform powerful standard and regular expression searches through one or multiple text files, such as source code, log files, and debugging information.

KSS is capable of finding the exact text you are looking for in any ASCII file or files. Sometimes you have only part of the information that you want to match, or you want to find a wider range of information. In such cases, KSS has the powerful capability to search for patterns of text using regular expressions.

The underlying search engine for KSS is the Findstr command. KSS provides a convenient, user friendly, interface for the many command line options. Files with non-printable characters are always skipped and the regular expression functionality of the Findstr command is used for the main text search.

KSS captures and filters the output of the Findstr command, opens the file associated with the selected result list item, and displays it in a syntax highlighting editor. KSS has built-in styling for Clarion, C++, C#, HTML, Java, and XML source files and can easily be extended, through the use of special property files, to provide styling for other languages.


This version of KSS is slightly different from the last commercial release.

Most notably the Results List 'Print' and the 'CheckForUpdate' features have been removed as they required other 3rd party tools, some of which are no longer available.

**OPEN SOURCE RELEASE NOTES AND NEWS**

"KSSO" means "Kwik Source Search - Open Edition". 

KSSO does not allow registration. To register, purchase KSS via Devuna.com, if available. NOTE: I AM NOT DEVUNA. 

**1.0.14 2018-08-19** - Added feature (per Mark Goldberg's request) which allows KSSO to use Clarion's appname.cwproj.filelist.xml as the "list of files to search". It will automatically parse the list and search only the files noted as <Opened_Files>. It will not search the files created (generally binary) and it automatically excludes most undesirable file types from the <Opened_Files> list, such as .lib, .ico, etc. 

**1.0.14 2018-08-19** - Version numbering added, which is just a build date/time that's automatically generated. Might help you keep track of whether you're up to date or not. Please dont submit bug reports on old versions. Get current, then reproduce the problem. Thank you.

**1.0.14 2018-08-19** - Installer provided, which includes minor mods to the original Devuna SetupBuilder-based installer. Nothing major, mostly changes to support the version numbering noted above. 
