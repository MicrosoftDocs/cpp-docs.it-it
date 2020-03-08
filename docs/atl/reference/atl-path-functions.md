---
title: Funzioni di percorso ATL
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, path
f1_keywords:
- ATLPATH/ATL::ATLPath::AddBackslash
- ATLPATH/ATL::ATLPath::AddExtension
- ATLPATH/ATL::ATLPath::Append
- ATLPATH/ATL::ATLPath::BuildRoot
- ATLPATH/ATL::ATLPath::Canonicalize
- ATLPATH/ATL::ATLPath::Combine
- ATLPATH/ATL::ATLPath::CommonPrefix
- ATLPATH/ATL::ATLPath::CompactPath
- ATLPATH/ATL::ATLPath::CompactPathEx
- ATLPATH/ATL::ATLPath::FileExists
- ATLPATH/ATL::ATLPath::FindExtension
- ATLPATH/ATL::ATLPath::FindFileName
- ATLPATH/ATL::ATLPath::GetDriveNumber
- ATLPATH/ATL::ATLPath::IsDirectory
- ATLPATH/ATL::ATLPath::IsFileSpec
- ATLPATH/ATL::ATLPath::IsPrefix
- ATLPATH/ATL::ATLPath::IsRelative
- ATLPATH/ATL::ATLPath::IsRoot
- ATLPATH/ATL::ATLPath::IsSameRoot
- ATLPATH/ATL::ATLPath::IsUNC
- ATLPATH/ATL::ATLPath::IsUNCServer
- ATLPATH/ATL::ATLPath::IsUNCServerShare
- ATLPATH/ATL::ATLPath::MakePretty
- ATLPATH/ATL::ATLPath::MatchSpec
- ATLPATH/ATL::ATLPath::QuoteSpaces
- ATLPATH/ATL::ATLPath::RelativePathTo
- ATLPATH/ATL::ATLPath::RemoveArgs
- ATLPATH/ATL::ATLPath::RemoveBackslash
- ATLPATH/ATL::ATLPath::RemoveBlanks
- ATLPATH/ATL::ATLPath::RemoveExtension
- ATLPATH/ATL::ATLPath::RemoveFileSpec
- ATLPATH/ATL::ATLPath::RenameExtension
- ATLPATH/ATL::ATLPath::SkipRoot
- ATLPATH/ATL::ATLPath::StripPath
- ATLPATH/ATL::ATLPath::StripToRoot
- ATLPATH/ATL::ATLPath::UnquoteSpaces
ms.assetid: d1ec2b8d-7ec7-43ea-90dd-0a740d2a742b
ms.openlocfilehash: 76efbb0bd43b800f186eac1afa168fc2a0c939f6
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865029"
---
# <a name="atl-path-functions"></a>Funzioni di percorso ATL

ATL fornisce la classe ATLPath per la modifica dei percorsi nel formato [CPathT](cpatht-class.md). Questo codice si trova in atlpath. h.

### <a name="related-classes"></a>Classi correlate

|||
|-|-|
|[Classe CPathT](cpatht-class.md)|Questa classe rappresenta un percorso.|

### <a name="related-typedefs"></a>Typedef correlati

|||
|-|-|
|`CPath`|Una specializzazione di [CPathT](cpatht-class.md) con `CString`.|
|`CPathA`|Una specializzazione di [CPathT](cpatht-class.md) con `CStringA`.|
|`CPathW`|Una specializzazione di [CPathT](cpatht-class.md) con `CStringW`.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[ATLPath:: AddBackslash](#addbackslash)|Questa funzione è un wrapper di overload per [PathAddBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw).|
|[ATLPath:: AddExtension](#addextension)|Questa funzione è un wrapper di overload per [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw).|
|[ATLPath:: Append](#append)|Questa funzione è un wrapper di overload per [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw).|
|[ATLPath:: elemento buildroot](#buildroot)|Questa funzione è un wrapper di overload per [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw).|
|[ATLPath:: Canonicalize](#canonicalize)|Questa funzione è un wrapper di overload per [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew).|
|[ATLPath:: combine](#combine)|Questa funzione è un wrapper di overload per [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew).|
|[ATLPath:: CommonPrefix](#commonprefix)|Questa funzione è un wrapper di overload per [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw).|
|[ATLPath:: CompactPath](#compactpath)|Questa funzione è un wrapper di overload per [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw).|
|[ATLPath:: CompactPathEx](#compactpathex)|Questa funzione è un wrapper di overload per [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw).|
|[ATLPath:: FileExists](#fileexists)|Questa funzione è un wrapper di overload per [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw).|
|[ATLPath:: FindExtension](#findextension)|Questa funzione è un wrapper di overload per [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw).|
|[ATLPath:: FindFileName](#findfilename)|Questa funzione è un wrapper di overload per [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew).|
|[ATLPath:: GetDriveNumber](#getdrivenumber)|Questa funzione è un wrapper di overload per [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw).|
|[ATLPath:: directory](#isdirectory)|Questa funzione è un wrapper di overload per [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw).|
|[ATLPath:: IsFileSpec](#isfilespec)|Questa funzione è un wrapper di overload per [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw).|
|[ATLPath:: prefix](#isprefix)|Questa funzione è un wrapper di overload per [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw).|
|[ATLPath:: è relativo](#isrelative)|Questa funzione è un wrapper di overload per [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew).|
|[ATLPath:: radice](#isroot)|Questa funzione è un wrapper di overload per [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw).|
|[ATLPath:: IsSameRoot](#issameroot)|Questa funzione è un wrapper di overload per [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw).|
|[ATLPath:: IsUNC](#isunc)|Questa funzione è un wrapper di overload per [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw).|
|[ATLPath:: IsUNCServer](#isuncserver)|Questa funzione è un wrapper di overload per [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw).|
|[ATLPath:: IsUNCServerShare](#isuncservershare)|Questa funzione è un wrapper di overload per [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew).|
|[ATLPath:: MakePretty](#makepretty)|Questa funzione è un wrapper di overload per [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw).|
|[ATLPath:: MatchSpec](#matchspec)|Questa funzione è un wrapper di overload per [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw).|
|[ATLPath:: QuoteSpaces](#quotespaces)|Questa funzione è un wrapper di overload per [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw).|
|[ATLPath:: RelativePathTo](#relativepathto)|Questa funzione è un wrapper di overload per [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow).|
|[ATLPath:: RemoveArgs](#removeargs)|Questa funzione è un wrapper di overload per [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw).|
|[ATLPath:: RemoveBackslash](#removebackslash)|Questa funzione è un wrapper di overload per [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw).|
|[ATLPath:: RemoveBlanks](#removeblanks)|Questa funzione è un wrapper di overload per [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw).|
|[ATLPath:: RemoveExtension](#removeextension)|Questa funzione è un wrapper di overload per [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw).|
|[ATLPath:: RemoveFileSpec](#removefilespec)|Questa funzione è un wrapper di overload per [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw).|
|[ATLPath:: RenameExtension](#renameextension)|Questa funzione è un wrapper di overload per [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw).|
|[ATLPath:: SkipRoot](#skiproot)|Questa funzione è un wrapper di overload per [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw).|
|[ATLPath:: StripPath](#strippath)|Questa funzione è un wrapper di overload per [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw).|
|[ATLPath:: StripToRoot](#striptoroot)|Questa funzione è un wrapper di overload per [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw).|
|[ATLPath:: UnquoteSpaces](#unquotespaces)|Questa funzione è un wrapper di overload per [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw).|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath. h

## <a name="addbackslash"></a>ATLPath:: AddBackSlash

Questa funzione è un wrapper di overload per [PathAddBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw).

### <a name="syntax"></a>Sintassi

```
inline char* AddBackslash(char* pszPath);
inline wchar_t* AddBackslash(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathAddBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw) .

## <a name="addextension"></a>ATLPath:: AddExtension

Questa funzione è un wrapper di overload per [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw).

### <a name="syntax"></a>Sintassi

```
inline BOOL AddExtension(char* pszPath, const char* pszExtension);
inline BOOL AddExtension(wchar_t* pszPath, const wchar_t* pszExtension);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw) .

## <a name="append"></a>ATLPath:: Append

Questa funzione è un wrapper di overload per [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw).

### <a name="syntax"></a>Sintassi

```
inline BOOL Append(char* pszPath, const char* pszMore);
inline BOOL Append(wchar_t* pszPath, const wchar_t* pszMore);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw) .

## <a name="buildroot"></a>ATLPath:: elemento buildroot

Questa funzione è un wrapper di overload per [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw).

### <a name="syntax"></a>Sintassi

```
inline char* BuildRoot(char* pszPath, int iDrive);
inline wchar_t* BuildRoot(wchar_t* pszPath, int iDrive);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw) .

## <a name="canonicalize"></a>ATLPath:: Canonicalize

Questa funzione è un wrapper di overload per [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew).

### <a name="syntax"></a>Sintassi

```
inline BOOL Canonicalize(char* pszDest, const char* pszSrc);
inline BOOL Canonicalize(wchar_t* pszDest, const wchar_t* pszSrc);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew) .

## <a name="combine"></a>ATLPath:: combine

Questa funzione è un wrapper di overload per [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew).

### <a name="syntax"></a>Sintassi

```
inline char* Combine(
   char* pszDest,
   const char* pszDir,
   const char* pszFile
);

inline wchar_t* Combine(
   wchar_t* pszDest,
   const wchar_t* pszDir,
   const wchar_t* pszFile);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere PathCombine.

## <a name="commonprefix"></a>ATLPath:: CommonPrefix

Questa funzione è un wrapper di overload per [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw).

### <a name="syntax"></a>Sintassi

```
inline int CommonPrefix(
   const char* pszFile1,
   const char* pszFile2,
   char* pszDest);

inline int CommonPrefix(
   const wchar_t* pszFile1,
   const wchar_t* pszFile2,
   wchar_t* pszDest);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw) .

## <a name="compactpath"></a>ATLPath:: CompactPath

Questa funzione è un wrapper di overload per [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw).

### <a name="syntax"></a>Sintassi

```
inline BOOL CompactPath(
   HDC hDC,
   char* pszPath,
   UINT dx);

inline BOOL CompactPath(
   HDC hDC,
   wchar_t* pszPath,
   UINT dx);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw) .

## <a name="compactpathex"></a>ATLPath:: CompactPathEx

Questa funzione è un wrapper di overload per [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw).

### <a name="syntax"></a>Sintassi

```
inline BOOL CompactPathEx(
   char* pszDest,
   const char* pszSrc,
   UINT nMaxChars,
   DWORD dwFlags);

inline BOOL CompactPathEx(
   wchar_t* pszDest,
   const wchar_t* pszSrc,
   UINT nMaxChars,
   DWORD dwFlags);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw) .

## <a name="fileexists"></a>ATLPath:: FileExists

Questa funzione è un wrapper di overload per [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw).

### <a name="syntax"></a>Sintassi

```
inline BOOL FileExists(const char* pszPath);
inline BOOL FileExists(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw) .

## <a name="findextension"></a>ATLPath:: FindExtension

Questa funzione è un wrapper di overload per [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw).

### <a name="syntax"></a>Sintassi

```
inline char* FindExtension(const char* pszPath);
inline wchar_t* FindExtension(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw) .

## <a name="findfilename"></a>ATLPath:: FindFileName

Questa funzione è un wrapper di overload per [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew).

### <a name="syntax"></a>Sintassi

```
inline char* FindFileName(const char* pszPath);
inline wchar_t* FindFileName(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew) .

## <a name="getdrivenumber"></a>ATLPath:: GetDriveNumber

Questa funzione è un wrapper di overload per [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw).

### <a name="syntax"></a>Sintassi

```
inline int GetDriveNumber(const char* pszPath);
inline int GetDriveNumber(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw) .

## <a name="isdirectory"></a>ATLPath:: directory

Questa funzione è un wrapper di overload per [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw).

```
inline BOOL IsDirectory(const char* pszPath);
inline BOOL IsDirectory(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere PathIsDirectory.

## <a name="isfilespec"></a>ATLPath:: IsFileSpec

Questa funzione è un wrapper di overload per [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsFileSpec(const char* pszPath);
inline BOOL IsFileSpec(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw) .

## <a name="isprefix"></a>ATLPath:: prefix

Questa funzione è un wrapper di overload per [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsPrefix(const char* pszPrefix, const char* pszPath);
inline BOOL IsPrefix(const wchar_t* pszPrefix, const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw) .

## <a name="isrelative"></a>ATLPath:: è relativo

Questa funzione è un wrapper di overload per [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsRelative(const char* pszPath);
inline BOOL IsRelative(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew) .

## <a name="isroot"></a>ATLPath:: radice

Questa funzione è un wrapper di overload per [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsRoot(const char* pszPath);
inline BOOL IsRoot(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw) .

## <a name="issameroot"></a>ATLPath:: IsSameRoot

Questa funzione è un wrapper di overload per [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsSameRoot(const char* pszPath1, const char* pszPath2);
inline BOOL IsSameRoot(const wchar_t* pszPath1, const wchar_t* pszPath2);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw) .

## <a name="isunc"></a>ATLPath:: IsUNC

Questa funzione è un wrapper di overload per [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsUNC(const char* pszPath);
inline BOOL IsUNC(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw) .

## <a name="isuncserver"></a>ATLPath:: IsUNCServer

Questa funzione è un wrapper di overload per [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsUNCServer(const char* pszPath);
inline BOOL IsUNCServer(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw) .

## <a name="isuncservershare"></a>ATLPath:: IsUNCServerShare

Questa funzione è un wrapper di overload per [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew).

### <a name="syntax"></a>Sintassi

```
inline BOOL IsUNCServerShare(const char* pszPath);
inline BOOL IsUNCServerShare(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew) .

## <a name="makepretty"></a>ATLPath:: MakePretty

Questa funzione è un wrapper di overload per [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw).

### <a name="syntax"></a>Sintassi

```
inline BOOL MakePretty(char* pszPath);
inline BOOL MakePretty(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw) .

## <a name="matchspec"></a>ATLPath:: MatchSpec

Questa funzione è un wrapper di overload per [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw).

### <a name="syntax"></a>Sintassi

```
inline BOOL MatchSpec(const char* pszPath, const char* pszSpec);
inline BOOL MatchSpec(const wchar_t* pszPath, const wchar_t* pszSpec);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw) .

## <a name="quotespaces"></a>ATLPath:: QuoteSpaces

Questa funzione è un wrapper di overload per [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw).

### <a name="syntax"></a>Sintassi

```
inline void QuoteSpaces(char* pszPath);
inline void QuoteSpaces(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw) .

## <a name="relativepathto"></a>ATLPath:: RelativePathTo

Questa funzione è un wrapper di overload per [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow).

### <a name="syntax"></a>Sintassi

```
inline BOOL RelativePathTo(
   char* pszPath,
   const char* pszFrom,
   DWORD dwAttrFrom,
   const char* pszTo,
   DWORD dwAttrTo);

inline BOOL RelativePathTo(
   wchar_t* pszPath,
   const wchar_t* pszFrom,
   DWORD dwAttrFrom,
   const wchar_t* pszTo,
   DWORD dwAttrTo);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow) .

## <a name="removeargs"></a>ATLPath:: RemoveArgs

Questa funzione è un wrapper di overload per [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw).

### <a name="syntax"></a>Sintassi

```
inline void RemoveArgs(char* pszPath);
inline void RemoveArgs(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw) .

## <a name="removebackslash"></a>ATLPath:: RemoveBackslash

Questa funzione è un wrapper di overload per [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw).

### <a name="syntax"></a>Sintassi

```
inline char* RemoveBackslash(char* pszPath);
inline wchar_t* RemoveBackslash(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw) .

## <a name="removeblanks"></a>ATLPath:: RemoveBlanks

Questa funzione è un wrapper di overload per [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw).

### <a name="syntax"></a>Sintassi

```
inline void RemoveBlanks(char* pszPath);
inline void RemoveBlanks(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw) .

## <a name="removeextension"></a>ATLPath:: RemoveExtension

Questa funzione è un wrapper di overload per [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw).

### <a name="syntax"></a>Sintassi

```
inline void RemoveExtension(char* pszPath);
inline void RemoveExtension(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw) .

## <a name="removefilespec"></a>ATLPath:: RemoveFileSpec

Questa funzione è un wrapper di overload per [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw).

### <a name="syntax"></a>Sintassi

```
inline BOOL RemoveFileSpec(char* pszPath);
inline BOOL RemoveFileSpec(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw) .

## <a name="renameextension"></a>ATLPath:: RenameExtension

Questa funzione è un wrapper di overload per [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw).

### <a name="syntax"></a>Sintassi

```
inline BOOL RenameExtension(char* pszPath, const char* pszExt);
inline BOOL RenameExtension(wchar_t* pszPath, const wchar_t* pszExt);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw) .

## <a name="skiproot"></a>ATLPath:: SkipRoot

Questa funzione è un wrapper di overload per [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw).

### <a name="syntax"></a>Sintassi

```
inline char* SkipRoot(const char* pszPath);
inline wchar_t* SkipRoot(const wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw) .

## <a name="strippath"></a>ATLPath:: StripPath

Questa funzione è un wrapper di overload per [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw).

### <a name="syntax"></a>Sintassi

```
inline void StripPath(char* pszPath);
inline void StripPath(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw) .

## <a name="striptoroot"></a>ATLPath:: StripToRoot

Questa funzione è un wrapper di overload per [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw).

### <a name="syntax"></a>Sintassi

```
inline BOOL StripToRoot(char* pszPath);
inline BOOL StripToRoot(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw) .

## <a name="unquotespaces"></a>ATLPath:: UnquoteSpaces

Questa funzione è un wrapper di overload per [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw).

### <a name="syntax"></a>Sintassi

```
inline void UnquoteSpaces(char* pszPath);
inline void UnquoteSpaces(wchar_t* pszPath);
```

### <a name="remarks"></a>Osservazioni

Per informazioni dettagliate, vedere [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw) .
