---
title: Classe CPathT
ms.date: 03/27/2019
f1_keywords:
- CPathT
- ATLPATH/ATL::CPathT
- ATLPATH/ATL::CPathT::PCXSTR
- ATLPATH/ATL::CPathT::PXSTR
- ATLPATH/ATL::CPathT::XCHAR
- ATLPATH/ATL::CPathT::CPathT
- ATLPATH/ATL::CPathT::AddBackslash
- ATLPATH/ATL::CPathT::AddExtension
- ATLPATH/ATL::CPathT::Append
- ATLPATH/ATL::CPathT::BuildRoot
- ATLPATH/ATL::CPathT::Canonicalize
- ATLPATH/ATL::CPathT::Combine
- ATLPATH/ATL::CPathT::CommonPrefix
- ATLPATH/ATL::CPathT::CompactPath
- ATLPATH/ATL::CPathT::CompactPathEx
- ATLPATH/ATL::CPathT::FileExists
- ATLPATH/ATL::CPathT::FindExtension
- ATLPATH/ATL::CPathT::FindFileName
- ATLPATH/ATL::CPathT::GetDriveNumber
- ATLPATH/ATL::CPathT::GetExtension
- ATLPATH/ATL::CPathT::IsDirectory
- ATLPATH/ATL::CPathT::IsFileSpec
- ATLPATH/ATL::CPathT::IsPrefix
- ATLPATH/ATL::CPathT::IsRelative
- ATLPATH/ATL::CPathT::IsRoot
- ATLPATH/ATL::CPathT::IsSameRoot
- ATLPATH/ATL::CPathT::IsUNC
- ATLPATH/ATL::CPathT::IsUNCServer
- ATLPATH/ATL::CPathT::IsUNCServerShare
- ATLPATH/ATL::CPathT::MakePretty
- ATLPATH/ATL::CPathT::MatchSpec
- ATLPATH/ATL::CPathT::QuoteSpaces
- ATLPATH/ATL::CPathT::RelativePathTo
- ATLPATH/ATL::CPathT::RemoveArgs
- ATLPATH/ATL::CPathT::RemoveBackslash
- ATLPATH/ATL::CPathT::RemoveBlanks
- ATLPATH/ATL::CPathT::RemoveExtension
- ATLPATH/ATL::CPathT::RemoveFileSpec
- ATLPATH/ATL::CPathT::RenameExtension
- ATLPATH/ATL::CPathT::SkipRoot
- ATLPATH/ATL::CPathT::StripPath
- ATLPATH/ATL::CPathT::StripToRoot
- ATLPATH/ATL::CPathT::UnquoteSpaces
- ATLPATH/ATL::CPathT::m_strPath
helpviewer_keywords:
- CPathT class
ms.assetid: eba4137d-1fd2-4b44-a2e1-0944db64df3c
ms.openlocfilehash: ba1c831d772deef34449d17adc2c8e7a6f90eaef
ms.sourcegitcommit: 8178d22701047d24f69f10d01ba37490e3d67241
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/18/2019
ms.locfileid: "69496612"
---
# <a name="cpatht-class"></a>Classe CPathT

Questa classe rappresenta un percorso.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <typename StringType>
class CPathT
```

#### <a name="parameters"></a>Parametri

*StringType*<br/>
Classe di stringa ATL/MFC da usare per il percorso (vedere [CStringT](../../atl-mfc-shared/reference/cstringt-class.md)).

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Name|Descrizione|
|----------|-----------------|
|[CPathT::P CXSTR](#pcxstr)|Tipo stringa costante.|
|[CPathT::P XSTR](#pxstr)|Tipo di stringa.|
|[CPathT:: XCHAR](#xchar)|Tipo carattere.|

### <a name="public-constructors"></a>Costruttori pubblici

|Name|Descrizione|
|----------|-----------------|
|[CPathT:: CPathT](#cpatht)|Costruttore per il percorso.|

### <a name="public-methods"></a>Metodi pubblici

|Name|Descrizione|
|----------|-----------------|
|[CPathT:: AddBackslash](#addbackslash)|Chiamare questo metodo per aggiungere una barra rovesciata alla fine di una stringa per creare la sintassi corretta per un percorso.|
|[CPathT:: AddExtension](#addextension)|Chiamare questo metodo per aggiungere un'estensione di file a un percorso.|
|[CPathT:: Append](#append)|Chiamare questo metodo per aggiungere una stringa al percorso corrente.|
|[CPathT:: elemento buildroot](#buildroot)|Chiamare questo metodo per creare un percorso radice da un numero di unità specificato.|
|[CPathT:: Canonicalize](#canonicalize)|Chiamare questo metodo per convertire il percorso in formato canonico.|
|[CPathT:: combine](#combine)|Chiamare questo metodo per concatenare una stringa che rappresenta un nome di directory e una stringa che rappresenta il nome di un percorso di file in un unico percorso.|
|[CPathT:: CommonPrefix](#commonprefix)|Chiamare questo metodo per determinare se il percorso specificato condivide un prefisso comune con il percorso corrente.|
|[CPathT:: CompactPath](#compactpath)|Chiamare questo metodo per troncare un percorso di file per adattarlo all'interno di una larghezza di pixel specificata sostituendo i componenti del percorso con ellissi.|
|[CPathT:: CompactPathEx](#compactpathex)|Chiamare questo metodo per troncare un percorso di file per adattarlo a un numero specificato di caratteri sostituendo i componenti del percorso con ellissi.|
|[CPathT:: FileExists](#fileexists)|Chiamare questo metodo per verificare se il file con questo percorso esiste.|
|[CPathT:: FindExtension](#findextension)|Chiamare questo metodo per trovare la posizione dell'estensione di file all'interno del percorso.|
|[CPathT:: FindFileName](#findfilename)|Chiamare questo metodo per trovare la posizione del nome file all'interno del percorso.|
|[CPathT:: GetDriveNumber](#getdrivenumber)|Chiamare questo metodo per eseguire una ricerca nel percorso di una lettera di unità compresa nell'intervallo tra' A ' è Z ' e restituire il numero di unità corrispondente.|
|[CPathT:: GetExtension](#getextension)|Chiamare questo metodo per ottenere l'estensione del file dal percorso.|
|[CPathT:: directory](#isdirectory)|Chiamare questo metodo per verificare se il percorso è una directory valida.|
|[CPathT:: IsFileSpec](#isfilespec)|Chiamare questo metodo per eseguire la ricerca in un percorso di eventuali caratteri di delimitazione del percorso (ad esempio,':' o ' \\'). Se non sono presenti caratteri di delimitazione del percorso, il percorso viene considerato un percorso di specifica del file.|
|[CPathT:: prefix](#isprefix)|Chiamare questo metodo per determinare se un percorso contiene un prefisso valido del tipo passato da *pszPrefix*.|
|[CPathT:: è relativo](#isrelative)|Chiamare questo metodo per determinare se il percorso è relativo.|
|[CPathT:: radice](#isroot)|Chiamare questo metodo per determinare se il percorso è una directory radice.|
|[CPathT:: IsSameRoot](#issameroot)|Chiamare questo metodo per determinare se un altro percorso dispone di un componente radice comune con il percorso corrente.|
|[CPathT:: IsUNC](#isunc)|Chiamare questo metodo per determinare se il percorso è un percorso UNC (Universal Naming Convention) valido per un server e una condivisione.|
|[CPathT:: IsUNCServer](#isuncserver)|Chiamare questo metodo per determinare se il percorso è un percorso UNC (Universal Naming Convention) valido solo per un server.|
|[CPathT:: IsUNCServerShare](#isuncservershare)|Chiamare questo metodo per determinare se il percorso è un percorso di condivisione UNC (Universal Naming Convention) valido, \\ \ *server* \ *condivisione*.|
|[CPathT:: MakePretty](#makepretty)|Chiamare questo metodo per convertire un percorso in tutti i caratteri minuscoli per fornire al percorso un aspetto coerente.|
|[CPathT:: MatchSpec](#matchspec)|Chiamare questo metodo per eseguire una ricerca nel percorso di una stringa contenente un tipo di corrispondenza con caratteri jolly.|
|[CPathT:: QuoteSpaces](#quotespaces)|Chiamare questo metodo per racchiudere il percorso tra virgolette se contiene spazi.|
|[CPathT:: RelativePathTo](#relativepathto)|Chiamare questo metodo per creare un percorso relativo da un file o una cartella a un altro.|
|[CPathT:: RemoveArgs](#removeargs)|Chiamare questo metodo per rimuovere eventuali argomenti della riga di comando dal percorso.|
|[CPathT:: RemoveBackslash](#removebackslash)|Chiamare questo metodo per rimuovere la barra rovesciata finale dal percorso.|
|[CPathT:: RemoveBlanks](#removeblanks)|Chiamare questo metodo per rimuovere tutti gli spazi iniziali e finali dal percorso.|
|[CPathT:: RemoveExtension](#removeextension)|Chiamare questo metodo per rimuovere l'estensione di file dal percorso, se presente.|
|[CPathT:: RemoveFileSpec](#removefilespec)|Chiamare questo metodo per rimuovere il nome del file finale e la barra rovesciata dal percorso, se presenti.|
|[CPathT:: RenameExtension](#renameextension)|Chiamare questo metodo per sostituire l'estensione del nome di file nel percorso con una nuova estensione. Se il nome file non contiene un'estensione, l'estensione verrà allegata alla fine della stringa.|
|[CPathT:: SkipRoot](#skiproot)|Chiamare questo metodo per analizzare un percorso, ignorando la lettera di unità o il server UNC/parti del percorso di condivisione.|
|[CPathT:: StripPath](#strippath)|Chiamare questo metodo per rimuovere la parte del percorso di un percorso completo e un nome file.|
|[CPathT:: StripToRoot](#striptoroot)|Chiamare questo metodo per rimuovere tutte le parti del percorso ad eccezione delle informazioni della radice.|
|[CPathT:: UnquoteSpaces](#unquotespaces)|Chiamare questo metodo per rimuovere le virgolette dall'inizio e dalla fine di un percorso.|

### <a name="public-operators"></a>Operatori pubblici

|Name|Descrizione|
|----------|-----------------|
|[CPathT:: operator const StringType &](#operator_const_stringtype_amp)|Questo operatore consente di trattare l'oggetto come una stringa.|
|[CPathT:: operator CPathT::P CXSTR](#operator_cpatht__pcxstr)|Questo operatore consente di trattare l'oggetto come una stringa.|
|[& CPathT:: operator StringType](#operator_stringtype_amp)|Questo operatore consente di trattare l'oggetto come una stringa.|
|[CPathT:: operator + =](#operator_add_eq)|Questo operatore aggiunge una stringa al percorso.|

### <a name="public-data-members"></a>Membri dati pubblici

|Name|Descrizione|
|----------|-----------------|
|[CPathT:: m_strPath](#m_strpath)|Percorso.|

## <a name="remarks"></a>Note

`CPath`, `CPathA` e `CPathW` sono creazioni di istanze di `CPathT` definite come segue:

`typedef CPathT< CString > CPath;`

`typedef CPathT< CStringA > CPathA;`

`typedef CPathT< CStringW > CPathW;`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath. h

##  <a name="addbackslash"></a>CPathT:: AddBackslash

Chiamare questo metodo per aggiungere una barra rovesciata alla fine di una stringa per creare la sintassi corretta per un percorso. Se il percorso dispone già di una barra rovesciata finale, non verrà aggiunta alcuna barra rovesciata.

```
void AddBackslash();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathAddBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw).

##  <a name="addextension"></a>CPathT:: AddExtension

Chiamare questo metodo per aggiungere un'estensione di file a un percorso.

```
BOOL AddExtension(PCXSTR pszExtension);
```

### <a name="parameters"></a>Parametri

*pszExtension*<br/>
Estensione di file da aggiungere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw).

##  <a name="append"></a>CPathT:: Append

Chiamare questo metodo per aggiungere una stringa al percorso corrente.

```
BOOL Append(PCXSTR pszMore);
```

### <a name="parameters"></a>Parametri

*pszMore*<br/>
Stringa da accodare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw).

##  <a name="buildroot"></a>CPathT:: elemento buildroot

Chiamare questo metodo per creare un percorso radice da un numero di unità specificato.

```
void BuildRoot(int iDrive);
```

### <a name="parameters"></a>Parametri

*iDrive*<br/>
Il numero di unità (0 è A:, 1 è B: e così via).

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw).

##  <a name="canonicalize"></a>CPathT:: Canonicalize

Chiamare questo metodo per convertire il percorso in formato canonico.

```
void Canonicalize();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew).

##  <a name="combine"></a>CPathT:: combine

Chiamare questo metodo per concatenare una stringa che rappresenta un nome di directory e una stringa che rappresenta il nome di un percorso di file in un unico percorso.

```
void Combine(PCXSTR pszDir, PCXSTR  pszFile);
```

### <a name="parameters"></a>Parametri

*pszDir*<br/>
Percorso della directory.

*pszFile*<br/>
Percorso del file.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew).

##  <a name="commonprefix"></a>CPathT:: CommonPrefix

Chiamare questo metodo per determinare se il percorso specificato condivide un prefisso comune con il percorso corrente.

```
CPathT<StringType> CommonPrefix(PCXSTR pszOther);
```

### <a name="parameters"></a>Parametri

*pszOther*<br/>
Percorso da confrontare con quello corrente.

### <a name="return-value"></a>Valore restituito

Restituisce il prefisso comune.

### <a name="remarks"></a>Note

Un prefisso è uno dei seguenti tipi: "C: \\ \\", ".", "..", ".. \\ \\ ". Per ulteriori informazioni, vedere [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw).

##  <a name="compactpath"></a>CPathT:: CompactPath

Chiamare questo metodo per troncare un percorso di file per adattarlo all'interno di una larghezza di pixel specificata sostituendo i componenti del percorso con ellissi.

```
BOOL CompactPath(HDC hDC, UINT nWidth);
```

### <a name="parameters"></a>Parametri

*hDC*<br/>
Il contesto di dispositivo usato per la metrica del tipo di carattere.

*nWidth*<br/>
Larghezza, in pixel, in base alla quale verrà forzata la stringa.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw).

##  <a name="compactpathex"></a>CPathT:: CompactPathEx

Chiamare questo metodo per troncare un percorso di file per adattarlo a un numero specificato di caratteri sostituendo i componenti del percorso con ellissi.

```
BOOL CompactPathEx(UINT nMaxChars, DWORD dwFlags = 0);
```

### <a name="parameters"></a>Parametri

*nMaxChars*<br/>
Numero massimo di caratteri da contenere nella nuova stringa, incluso il carattere NULL di terminazione.

*dwFlags*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw).

##  <a name="cpatht"></a>CPathT:: CPathT

Costruttore.

```
CPathT(PCXSTR pszPath);
CPathT(const CPathT<StringType>& path);
CPathT() throw();
```

### <a name="parameters"></a>Parametri

*pszPath*<br/>
Puntatore a una stringa di percorso.

*path*<br/>
Stringa del percorso.

##  <a name="fileexists"></a>CPathT:: FileExists

Chiamare questo metodo per verificare se il file con questo percorso esiste.

```
BOOL FileExists() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il file esiste; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw).

##  <a name="findextension"></a>CPathT:: FindExtension

Chiamare questo metodo per trovare la posizione dell'estensione di file all'interno del percorso.

```
int FindExtension() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce la posizione del "." che precede l'estensione. Se non viene trovata alcuna estensione, restituisce-1.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw).

##  <a name="findfilename"></a>CPathT:: FindFileName

Chiamare questo metodo per trovare la posizione del nome file all'interno del percorso.

```
int FindFileName() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce la posizione del nome file. Se non viene trovato alcun nome file, restituisce-1.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew).

##  <a name="getdrivenumber"></a>CPathT:: GetDriveNumber

Chiamare questo metodo per eseguire una ricerca nel percorso di una lettera di unità compresa nell'intervallo tra' A ' è Z ' e restituire il numero di unità corrispondente.

```
int GetDriveNumber() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di unità come intero compreso tra 0 e 25 (corrispondente a' A ' a' Z ') se il percorso ha una lettera di unità oppure-1 in caso contrario.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw).

##  <a name="getextension"></a>CPathT:: GetExtension

Chiamare questo metodo per ottenere l'estensione del file dal percorso.

```
StringType GetExtension() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'estensione del file.

##  <a name="isdirectory"></a>CPathT:: directory

Chiamare questo metodo per verificare se il percorso è una directory valida.

```
BOOL IsDirectory() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero (16) se il percorso è una directory; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw).

##  <a name="isfilespec"></a>CPathT:: IsFileSpec

Chiamare questo metodo per eseguire la ricerca in un percorso di eventuali caratteri di delimitazione del percorso (ad esempio,':' o ' \\'). Se non sono presenti caratteri di delimitazione del percorso, il percorso viene considerato un percorso di specifica del file.

```
BOOL IsFileSpec() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se non sono presenti caratteri di delimitazione del percorso all'interno del percorso, oppure FALSE se sono presenti caratteri di delimitazione del percorso.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw).

##  <a name="isprefix"></a>CPathT:: prefix

Chiamare questo metodo per determinare se un percorso contiene un prefisso valido del tipo passato da *pszPrefix*.

```
BOOL IsPrefix(PCXSTR pszPrefix) const;
```

### <a name="parameters"></a>Parametri

*pszPrefix*<br/>
Prefisso per il quale eseguire la ricerca. Un prefisso è uno dei seguenti tipi: "C: \\ \\", ".", "..", ".. \\ \\ ".

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso contiene il prefisso. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw).

##  <a name="isrelative"></a>CPathT:: è relativo

Chiamare questo metodo per determinare se il percorso è relativo.

```
BOOL IsRelative() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso è relativo oppure FALSE se è assoluto.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew).

##  <a name="isroot"></a>CPathT:: radice

Chiamare questo metodo per determinare se il percorso è una directory radice.

```
BOOL IsRoot() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso è una radice; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw).

##  <a name="issameroot"></a>CPathT:: IsSameRoot

Chiamare questo metodo per determinare se un altro percorso dispone di un componente radice comune con il percorso corrente.

```
BOOL IsSameRoot(PCXSTR pszOther) const;
```

### <a name="parameters"></a>Parametri

*pszOther*<br/>
Altro percorso.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se entrambe le stringhe hanno lo stesso componente radice; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw).

##  <a name="isunc"></a>CPathT:: IsUNC

Chiamare questo metodo per determinare se il percorso è un percorso UNC (Universal Naming Convention) valido per un server e una condivisione.

```
BOOL IsUNC() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso è un percorso UNC valido. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw).

##  <a name="isuncserver"></a>CPathT:: IsUNCServer

Chiamare questo metodo per determinare se il percorso è un percorso UNC (Universal Naming Convention) valido solo per un server.

```
BOOL IsUNCServer() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la stringa è un percorso UNC valido per un server (nessun nome di condivisione) o FALSE in caso contrario.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw).

##  <a name="isuncservershare"></a>CPathT:: IsUNCServerShare

Chiamare questo metodo per determinare se il percorso è un percorso di condivisione UNC (Universal Naming Convention) valido, \\ \ *server* \ *condivisione*.

```
BOOL IsUNCServerShare() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso è nel formato \\ \ *server* \ *condivisione*. in caso contrario, false.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew).

##  <a name="m_strpath"></a>CPathT:: m_strPath

Percorso.

```
StringType m_strPath;
```

### <a name="remarks"></a>Note

`StringType` è il parametro di modello da `CPathT`.

##  <a name="makepretty"></a>CPathT:: MakePretty

Chiamare questo metodo per convertire un percorso in tutti i caratteri minuscoli per fornire al percorso un aspetto coerente.

```
BOOL MakePretty();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso è stato convertito; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw).

##  <a name="matchspec"></a>CPathT:: MatchSpec

Chiamare questo metodo per eseguire una ricerca nel percorso di una stringa contenente un tipo di corrispondenza con caratteri jolly.

```
BOOL MatchSpec(PCXSTR pszSpec) const;
```

### <a name="parameters"></a>Parametri

*pszSpec*<br/>
Puntatore a una stringa con terminazione null con il tipo di file in cui eseguire la ricerca. Per verificare, ad esempio, se il file nel percorso corrente è un file DOC, *pszSpec* deve essere impostato su "*. doc".

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la stringa corrisponde a o FALSE in caso contrario.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw).

##  <a name="operator_add_eq"></a>CPathT:: operator + =

Questo operatore aggiunge una stringa al percorso.

```
CPathT<StringType>& operator+=(PCXSTR pszMore);
```

### <a name="parameters"></a>Parametri

*pszMore*<br/>
Stringa da accodare.

### <a name="return-value"></a>Valore restituito

Restituisce il percorso aggiornato.

##  <a name="operator_const_stringtype_amp"></a>CPathT:: operator const StringType &amp;

Questo operatore consente di trattare l'oggetto come una stringa.

```
operator const StringType&() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una stringa che rappresenta il percorso corrente gestito da questo oggetto.

##  <a name="operator_cpatht__pcxstr"></a>CPathT:: operator CPathT::P CXSTR

Questo operatore consente di trattare l'oggetto come una stringa.

```
operator PCXSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una stringa che rappresenta il percorso corrente gestito da questo oggetto.

##  <a name="operator_stringtype_amp"></a>@No__t_1 CPathT:: operator StringType

Questo operatore consente di trattare l'oggetto come una stringa.

```
operator StringType&() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una stringa che rappresenta il percorso corrente gestito da questo oggetto.

##  <a name="pcxstr"></a>CPathT::P CXSTR

Tipo stringa costante.

```
typedef StringType::PCXSTR PCXSTR;
```

### <a name="remarks"></a>Note

`StringType` è il parametro di modello da `CPathT`.

##  <a name="pxstr"></a>CPathT::P XSTR

Tipo di stringa.

```
typedef StringType::PXSTR PXSTR;
```

### <a name="remarks"></a>Note

`StringType` è il parametro di modello da `CPathT`.

##  <a name="quotespaces"></a>CPathT:: QuoteSpaces

Chiamare questo metodo per racchiudere il percorso tra virgolette se contiene spazi.

```
void QuoteSpaces();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw).

##  <a name="relativepathto"></a>CPathT:: RelativePathTo

Chiamare questo metodo per creare un percorso relativo da un file o una cartella a un altro.

```
BOOL RelativePathTo(
    PCXSTR pszFrom,
    DWORD dwAttrFrom,
    PCXSTR pszTo,
    DWORD dwAttrTo);
```

### <a name="parameters"></a>Parametri

*pszFrom*<br/>
Inizio del percorso relativo.

*dwAttrFrom*<br/>
Attributi di file di *pszFrom*. Se questo valore contiene FILE_ATTRIBUTE_DIRECTORY, si presuppone che *pszFrom* sia una directory; in caso contrario, si presuppone che *pszFrom* sia un file.

*pszTo*<br/>
Punto finale del percorso relativo.

*dwAttrTo*<br/>
Attributi di file di *pszTo*. Se questo valore contiene FILE_ATTRIBUTE_DIRECTORY, si presuppone che *pszTo* sia una directory; in caso contrario, si presuppone che *pszTo* sia un file.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow).

##  <a name="removeargs"></a>CPathT:: RemoveArgs

Chiamare questo metodo per rimuovere eventuali argomenti della riga di comando dal percorso.

```
void RemoveArgs();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw).

##  <a name="removebackslash"></a>CPathT:: RemoveBackslash

Chiamare questo metodo per rimuovere la barra rovesciata finale dal percorso.

```
void RemoveBackslash();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw).

##  <a name="removeblanks"></a>CPathT:: RemoveBlanks

Chiamare questo metodo per rimuovere tutti gli spazi iniziali e finali dal percorso.

```
void RemoveBlanks();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw).

##  <a name="removeextension"></a>CPathT:: RemoveExtension

Chiamare questo metodo per rimuovere l'estensione di file dal percorso, se presente.

```
void RemoveExtension();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw).

##  <a name="removefilespec"></a>CPathT:: RemoveFileSpec

Chiamare questo metodo per rimuovere il nome del file finale e la barra rovesciata dal percorso, se presenti.

```
BOOL RemoveFileSpec();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw).

##  <a name="renameextension"></a>CPathT:: RenameExtension

Chiamare questo metodo per sostituire l'estensione del nome di file nel percorso con una nuova estensione. Se il nome file non contiene un'estensione, l'estensione verrà allegata alla fine del percorso.

```
BOOL RenameExtension(PCXSTR pszExtension);
```

### <a name="parameters"></a>Parametri

*pszExtension*<br/>
Nuova estensione del nome di file, preceduta da un carattere ".".

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw).

##  <a name="skiproot"></a>CPathT:: SkipRoot

Chiamare questo metodo per analizzare un percorso, ignorando la lettera di unità o le parti del percorso del server/condivisione UNC (Universal Naming Convention).

```
int SkipRoot() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce la posizione dell'inizio del sottopercorso che segue la radice (lettera di unità o server/condivisione UNC).

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw).

##  <a name="strippath"></a>CPathT:: StripPath

Chiamare questo metodo per rimuovere la parte del percorso di un percorso completo e un nome file.

```
void StripPath();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw).

##  <a name="striptoroot"></a>CPathT:: StripToRoot

Chiamare questo metodo per rimuovere tutte le parti del percorso ad eccezione delle informazioni della radice.

```
BOOL StripToRoot();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se è stata trovata una lettera di unità valida nel percorso. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw).

##  <a name="unquotespaces"></a>CPathT:: UnquoteSpaces

Chiamare questo metodo per rimuovere le virgolette dall'inizio e dalla fine di un percorso.

```
void UnquoteSpaces();
```

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw).

##  <a name="xchar"></a>CPathT:: XCHAR

Tipo carattere.

```
typedef StringType::XCHAR XCHAR;
```

### <a name="remarks"></a>Note

`StringType` è il parametro di modello da `CPathT`.

## <a name="see-also"></a>Vedere anche

[Classi](../../atl/reference/atl-classes.md)<br/>
[Classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md)
