/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef SYSTEMMETADATA_BAKE_CONFIG_H
#define SYSTEMMETADATA_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <reflecs>

/* Headers of private dependencies */
#ifdef SYSTEMMETADATA_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if SYSTEMMETADATA_IMPL && defined _MSC_VER
#define SYSTEMMETADATA_EXPORT __declspec(dllexport)
#elif SYSTEMMETADATA_IMPL
#define SYSTEMMETADATA_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define SYSTEMMETADATA_EXPORT __declspec(dllimport)
#else
#define SYSTEMMETADATA_EXPORT
#endif

#endif

