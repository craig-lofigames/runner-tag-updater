#pragma once

// Current version of the game
#define KENSHI_VERSION		"0.0.1"

// If the save game is older than this, it wont load.
#define REQUIRED_VERSION "0.0.1"
#define WARNING_VERSION "0.0.1"

#define MOST_RECENT_COMMIT_HASH "HASHGOESHERE"
#define MOST_RECENT_COMMIT_TIME "TIMESTAMPGOESHERE"

// Derived version stuff
#ifdef FORGOTTEN_DEBUG
#if defined(ARTIST_MODE)
#define KENSHI_BUILD "Fune - Artist Mode"
#else
#define KENSHI_BUILD "Fune - Dev Mode"
#endif
#else
#define KENSHI_BUILD "Fune"
#endif

#if defined(_WIN64)
#define KENSHI_ARCHITECTURE "x64"
#else
#define KENSHI_ARCHITECTURE "x32"
#endif

#define KENSHI_VERSION_ARCH	KENSHI_VERSION "_" KENSHI_ARCHITECTURE
#if defined(KENSHI_BUILD)
#define KENSHI_FULL_VERSION	KENSHI_VERSION " - " KENSHI_ARCHITECTURE " (" KENSHI_BUILD ")"
#else
#define KENSHI_FULL_VERSION	KENSHI_VERSION " - " KENSHI_ARCHITECTURE
#endif

#define KENSHI_FULL_NAME		"Kenshi 2 " KENSHI_FULL_VERSION
