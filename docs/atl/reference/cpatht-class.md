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
ms.openlocfilehash: 13f46f549c7dd99852be0f322aef560cb454ed2a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331480"
---
# <a name="cpatht-class"></a>Classe CPathT

Questa classe rappresenta un percorso.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <typename StringType>
class CPathT
```

#### <a name="parameters"></a>Parametri

*TipoStringa*<br/>
Classe di stringhe ATL/MFC da utilizzare per il percorso (vedere [CStringT](../../atl-mfc-shared/reference/cstringt-class.md)).

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPathT::PCXSTR](#pcxstr)|Tipo di stringa costante.|
|[CPathT::PXSTR](#pxstr)|Un tipo stringa.|
|[CPathT::XCHAR](#xchar)|Tipo carattere.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPathT::CPathT](#cpatht)|Costruttore per il percorso.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPathT::AddBackslash](#addbackslash)|Chiamare questo metodo per aggiungere una barra rovesciata alla fine di una stringa per creare la sintassi corretta per un percorso.|
|[CPathT::AddExtension (Informazioni in base alla proprietà del pulsante](#addextension)|Chiamare questo metodo per aggiungere un'estensione di file a un percorso.|
|[CPathT::Accoda](#append)|Chiamare questo metodo per aggiungere una stringa al percorso corrente.|
|[CPathT::BuildRoot](#buildroot)|Chiamare questo metodo per creare un percorso radice da un numero di unità specificato.|
|[CPathT::Canonicalize](#canonicalize)|Chiamare questo metodo per convertire il percorso in formato canonico.|
|[CPathT::Combina](#combine)|Chiamare questo metodo per concatenare una stringa che rappresenta un nome di directory e una stringa che rappresenta un nome di percorso di file in un unico percorso.|
|[CPathT::CommonPrefix](#commonprefix)|Chiamare questo metodo per determinare se il percorso specificato condivide un prefisso comune con il percorso corrente.|
|[CPathT::CompactPath](#compactpath)|Chiamare questo metodo per troncare un percorso di file per adattarlo all'interno di una determinata larghezza in pixel sostituendo i componenti del percorso con puntini di sospensione.|
|[CPathT::CompactPathEx](#compactpathex)|Chiamare questo metodo per troncare un percorso di file per adattarsi all'interno di un determinato numero di caratteri sostituendo i componenti del percorso con puntini di sospensione.|
|[CPathT::FileExists](#fileexists)|Chiamare questo metodo per verificare se il file in questo nome di percorso esiste.|
|[CPathT::FindExtension](#findextension)|Chiamare questo metodo per trovare la posizione dell'estensione di file all'interno del percorso.|
|[Nome FileCPathT::FindFileName](#findfilename)|Chiamare questo metodo per trovare la posizione del nome del file all'interno del percorso.|
|[CPathT::NumeroUnità](#getdrivenumber)|Chiamare questo metodo per cercare il percorso di una lettera di unità compresa nell'intervallo tra 'A' e '' e restituire il numero di unità corrispondente.|
|[CPathT::GetExtension (Informazioni in base alla proprietà del logo o per la](#getextension)|Chiamare questo metodo per ottenere l'estensione del file dal percorso.|
|[CPathT::IsDirectory](#isdirectory)|Chiamare questo metodo per verificare se il percorso è una directory valida.|
|[Controllo dati::IsFileSpec](#isfilespec)|Chiamare questo metodo per cercare un percorso per eventuali caratteri che delimitano il percorso (ad esempio, ':' o '\\' ). Se non sono presenti caratteri che delimitano il percorso, il percorso viene considerato un percorso di file Spec.|
|[CPathT::IsPrefix](#isprefix)|Chiamare questo metodo per determinare se un percorso contiene un prefisso valido del tipo passato da *pszPrefix*.|
|[CPathT::IsRelative](#isrelative)|Chiamare questo metodo per determinare se il percorso è relativo.|
|[CPathT::IsRoot](#isroot)|Chiamare questo metodo per determinare se il percorso è una radice di directory.|
|[CPathT::IsSameRoot](#issameroot)|Chiamare questo metodo per determinare se un altro percorso dispone di un componente radice comune con il percorso corrente.|
|[CPathT::IsUNC](#isunc)|Chiamare questo metodo per determinare se il percorso è un percorso UNC (Universal Naming Convention) valido per un server e una condivisione.|
|[CPathT::IsUNCServer](#isuncserver)|Chiamare questo metodo per determinare se il percorso è un percorso UNC (Universal Naming Convention) valido solo per un server.|
|[CPathT::IsUNCServerShare](#isuncservershare)|Chiamare questo metodo per determinare se il percorso è un percorso \\ \ di condivisione UNC (Universal Naming Convention) valido,*condivisione* *server*\ .|
|[CPathT::MakePretty](#makepretty)|Chiamare questo metodo per convertire un percorso in tutti i caratteri minuscoli per conferire al percorso un aspetto coerente.|
|[CPathT::MatchSpec](#matchspec)|Chiamare questo metodo per cercare il percorso di una stringa contenente un tipo di corrispondenza con caratteri jolly.|
|[CPathT::QuoteSpaces](#quotespaces)|Chiamare questo metodo per racchiudere il percorso tra virgolette se contiene spazi.|
|[CPathT::RelativePathTo](#relativepathto)|Chiamare questo metodo per creare un percorso relativo da un file o una cartella a un altro.|
|[CPathT::RemoveArgs](#removeargs)|Chiamare questo metodo per rimuovere eventuali argomenti della riga di comando dal percorso.|
|[CPathT::RemoveBackslash](#removebackslash)|Chiamare questo metodo per rimuovere la barra rovesciata finale dal percorso.|
|[CPathT::RemoveBlanks](#removeblanks)|Chiamare questo metodo per rimuovere tutti gli spazi iniziali e finali dal percorso.|
|[CPathT::RemoveExtension (Percorso di chiamata)](#removeextension)|Chiamare questo metodo per rimuovere l'estensione del file dal percorso, se presente.|
|[CPathT::RemoveFileSpec](#removefilespec)|Chiamare questo metodo per rimuovere il nome del file finale e la barra rovesciata dal percorso, se presente.|
|CPathT::RenameExtension (Informazioni in base alla proprietà)|Chiamare questo metodo per sostituire l'estensione del nome file nel percorso con una nuova estensione. Se il nome del file non contiene un'estensione, l'estensione verrà allegata alla fine della stringa.|
|[CPathT::SkipRoot](#skiproot)|Chiamare questo metodo per analizzare un percorso, ignorando la lettera di unità o le parti del percorso di condivisione/server UNC.|
|[CPathT::StripPath](#strippath)|Chiamare questo metodo per rimuovere la parte del percorso di un percorso completo e il nome del file.|
|[CPathT::StripToRoot](#striptoroot)|Chiamare questo metodo per rimuovere tutte le parti del percorso ad eccezione delle informazioni radice.|
|[CPathT::UnquoteSpaces (Spazi di uncitatura)](#unquotespaces)|Chiamare questo metodo per rimuovere le virgolette dall'inizio e dalla fine di un percorso.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPathT::operator const StringType &](#operator_const_stringtype_amp)|Questo operatore consente all'oggetto di essere trattato come una stringa.|
|[CPathT::operatore CPathT::PCXSTR](#operator_cpatht__pcxstr)|Questo operatore consente all'oggetto di essere trattato come una stringa.|
|[CPathT::operatorStringType &](#operator_stringtype_amp)|Questo operatore consente all'oggetto di essere trattato come una stringa.|
|[CPathT::operatore](#operator_add_eq)|Questo operatore aggiunge una stringa al percorso.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPathT::m_strPath](#m_strpath)|Percorso.|

## <a name="remarks"></a>Osservazioni

`CPath`, `CPathA`, `CPathW` e sono le `CPathT` istanze di definite come segue:

`typedef CPathT< CString > CPath;`

`typedef CPathT< CStringA > CPathA;`

`typedef CPathT< CStringW > CPathW;`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath.h

## <a name="cpathtaddbackslash"></a><a name="addbackslash"></a>CPathT::AddBackslash

Chiamare questo metodo per aggiungere una barra rovesciata alla fine di una stringa per creare la sintassi corretta per un percorso. Se il percorso ha già una barra rovesciata finale, non verrà aggiunta alcuna barra rovesciata.

```
void AddBackslash();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathAddBackSlash](/windows/win32/api/shlwapi/nf-shlwapi-pathaddbackslashw).

## <a name="cpathtaddextension"></a><a name="addextension"></a>CPathT::AddExtension (Informazioni in base alla proprietà del pulsante

Chiamare questo metodo per aggiungere un'estensione di file a un percorso.

```
BOOL AddExtension(PCXSTR pszExtension);
```

### <a name="parameters"></a>Parametri

*spzEstensione*<br/>
Estensione del file da aggiungere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathAddExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathaddextensionw).

## <a name="cpathtappend"></a><a name="append"></a>CPathT::Accoda

Chiamare questo metodo per aggiungere una stringa al percorso corrente.

```
BOOL Append(PCXSTR pszMore);
```

### <a name="parameters"></a>Parametri

*pszMore (informazioni in base al stupe*<br/>
Stringa da accodare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathAppend](/windows/win32/api/shlwapi/nf-shlwapi-pathappendw).

## <a name="cpathtbuildroot"></a><a name="buildroot"></a>CPathT::BuildRoot

Chiamare questo metodo per creare un percorso radice da un numero di unità specificato.

```
void BuildRoot(int iDrive);
```

### <a name="parameters"></a>Parametri

*Idrive*<br/>
Il numero di unità (0 è A:, 1 è B: e così via).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathBuildRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathbuildrootw).

## <a name="cpathtcanonicalize"></a><a name="canonicalize"></a>CPathT::Canonicalize

Chiamare questo metodo per convertire il percorso in formato canonico.

```
void Canonicalize();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathCanonicalize](/windows/win32/api/shlwapi/nf-shlwapi-pathcanonicalizew).

## <a name="cpathtcombine"></a><a name="combine"></a>CPathT::Combina

Chiamare questo metodo per concatenare una stringa che rappresenta un nome di directory e una stringa che rappresenta un nome di percorso di file in un unico percorso.

```
void Combine(PCXSTR pszDir, PCXSTR  pszFile);
```

### <a name="parameters"></a>Parametri

*pszDir*<br/>
Percorso della directory.

*file psz*<br/>
Percorso del file.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathCombine](/windows/win32/api/shlwapi/nf-shlwapi-pathcombinew).

## <a name="cpathtcommonprefix"></a><a name="commonprefix"></a>CPathT::CommonPrefix

Chiamare questo metodo per determinare se il percorso specificato condivide un prefisso comune con il percorso corrente.

```
CPathT<StringType> CommonPrefix(PCXSTR pszOther);
```

### <a name="parameters"></a>Parametri

*pszOther (informazioni in stato di*<br/>
Percorso da confrontare con quello corrente.

### <a name="return-value"></a>Valore restituito

Restituisce il prefisso comune.

### <a name="remarks"></a>Osservazioni

Un prefisso è uno di\\\\questi tipi: "C: ", ".", "..", "... \\\\". Per ulteriori informazioni, vedere [PathCommonPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathcommonprefixw).

## <a name="cpathtcompactpath"></a><a name="compactpath"></a>CPathT::CompactPath

Chiamare questo metodo per troncare un percorso di file per adattarlo all'interno di una determinata larghezza in pixel sostituendo i componenti del percorso con puntini di sospensione.

```
BOOL CompactPath(HDC hDC, UINT nWidth);
```

### <a name="parameters"></a>Parametri

*Hdc*<br/>
Contesto di dispositivo utilizzato per le metriche dei tipi di carattere.

*nLarghezza*<br/>
Larghezza, in pixel, che la stringa verrà forzata ad adattarsi.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathCompactPath](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathw).

## <a name="cpathtcompactpathex"></a><a name="compactpathex"></a>CPathT::CompactPathEx

Chiamare questo metodo per troncare un percorso di file per adattarsi all'interno di un determinato numero di caratteri sostituendo i componenti del percorso con puntini di sospensione.

```
BOOL CompactPathEx(UINT nMaxChars, DWORD dwFlags = 0);
```

### <a name="parameters"></a>Parametri

*nMaxChars*<br/>
Numero massimo di caratteri da contenuto nella nuova stringa, incluso il carattere di terminazione NULL.

*dwFlags*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathCompactPathEx](/windows/win32/api/shlwapi/nf-shlwapi-pathcompactpathexw).

## <a name="cpathtcpatht"></a><a name="cpatht"></a>CPathT::CPathT

Costruttore.

```
CPathT(PCXSTR pszPath);
CPathT(const CPathT<StringType>& path);
CPathT() throw();
```

### <a name="parameters"></a>Parametri

*pszPath (percorso pszPath)*<br/>
Puntatore a una stringa di percorso.

*Percorso*<br/>
Stringa del percorso.

## <a name="cpathtfileexists"></a><a name="fileexists"></a>CPathT::FileExists

Chiamare questo metodo per verificare se il file in questo nome di percorso esiste.

```
BOOL FileExists() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il file esiste, FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathFileExists](/windows/win32/api/shlwapi/nf-shlwapi-pathfileexistsw).

## <a name="cpathtfindextension"></a><a name="findextension"></a>CPathT::FindExtension

Chiamare questo metodo per trovare la posizione dell'estensione di file all'interno del percorso.

```
int FindExtension() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce la posizione del "." che precede l'estensione. Se non viene trovata alcuna estensione, restituisce -1.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathFindExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathfindextensionw).

## <a name="cpathtfindfilename"></a><a name="findfilename"></a>Nome FileCPathT::FindFileName

Chiamare questo metodo per trovare la posizione del nome del file all'interno del percorso.

```
int FindFileName() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce la posizione del nome del file. Se non viene trovato alcun nome di file, restituisce -1.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathFindFileName](/windows/win32/api/shlwapi/nf-shlwapi-pathfindfilenamew).

## <a name="cpathtgetdrivenumber"></a><a name="getdrivenumber"></a>CPathT::NumeroUnità

Chiamare questo metodo per cercare il percorso di una lettera di unità compresa nell'intervallo tra 'A' e '' e restituire il numero di unità corrispondente.

```
int GetDriveNumber() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di unità come numero intero compreso tra 0 e 25 (corrispondente a 'A' a ''' se il percorso dispone di una lettera di unità o -1 in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathGetDriveNumber](/windows/win32/api/shlwapi/nf-shlwapi-pathgetdrivenumberw).

## <a name="cpathtgetextension"></a><a name="getextension"></a>CPathT::GetExtension (Informazioni in base alla proprietà del logo o per la

Chiamare questo metodo per ottenere l'estensione del file dal percorso.

```
StringType GetExtension() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'estensione del file.

## <a name="cpathtisdirectory"></a><a name="isdirectory"></a>CPathT::IsDirectory

Chiamare questo metodo per verificare se il percorso è una directory valida.

```
BOOL IsDirectory() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero (16) se il percorso è una directory, FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathIsDirectory](/windows/win32/api/shlwapi/nf-shlwapi-pathisdirectoryw).

## <a name="cpathtisfilespec"></a><a name="isfilespec"></a>Controllo dati::IsFileSpec

Chiamare questo metodo per cercare un percorso per eventuali caratteri che delimitano il percorso (ad esempio, ':' o '\\' ). Se non sono presenti caratteri che delimitano il percorso, il percorso viene considerato un percorso di file Spec.

```
BOOL IsFileSpec() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se non sono presenti caratteri che delimitano il percorso all'interno del percorso oppure FALSE se sono presenti caratteri che delimitano il percorso.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathIsFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathisfilespecw).

## <a name="cpathtisprefix"></a><a name="isprefix"></a>CPathT::IsPrefix

Chiamare questo metodo per determinare se un percorso contiene un prefisso valido del tipo passato da *pszPrefix*.

```
BOOL IsPrefix(PCXSTR pszPrefix) const;
```

### <a name="parameters"></a>Parametri

*PszPrefix (ppzPrefix)*<br/>
Prefisso per il quale eseguire la ricerca. Un prefisso è uno di\\\\questi tipi: "C: ", ".", "..", "... \\\\".

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso contiene il prefisso o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathIsPrefix](/windows/win32/api/shlwapi/nf-shlwapi-pathisprefixw).

## <a name="cpathtisrelative"></a><a name="isrelative"></a>CPathT::IsRelative

Chiamare questo metodo per determinare se il percorso è relativo.

```
BOOL IsRelative() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso è relativo o FALSE se è assoluto.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathIsRelative](/windows/win32/api/shlwapi/nf-shlwapi-pathisrelativew).

## <a name="cpathtisroot"></a><a name="isroot"></a>CPathT::IsRoot

Chiamare questo metodo per determinare se il percorso è una radice di directory.

```
BOOL IsRoot() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso è una radice o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathIsRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathisrootw).

## <a name="cpathtissameroot"></a><a name="issameroot"></a>CPathT::IsSameRoot

Chiamare questo metodo per determinare se un altro percorso dispone di un componente radice comune con il percorso corrente.

```
BOOL IsSameRoot(PCXSTR pszOther) const;
```

### <a name="parameters"></a>Parametri

*pszOther (informazioni in stato di*<br/>
L'altro percorso.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se entrambe le stringhe hanno lo stesso componente radice o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathIsSameRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathissamerootw).

## <a name="cpathtisunc"></a><a name="isunc"></a>CPathT::IsUNC

Chiamare questo metodo per determinare se il percorso è un percorso UNC (Universal Naming Convention) valido per un server e una condivisione.

```
BOOL IsUNC() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso è un percorso UNC valido o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathIsUNC](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncw).

## <a name="cpathtisuncserver"></a><a name="isuncserver"></a>CPathT::IsUNCServer

Chiamare questo metodo per determinare se il percorso è un percorso UNC (Universal Naming Convention) valido solo per un server.

```
BOOL IsUNCServer() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la stringa è un percorso UNC valido solo per un server (nessun nome di condivisione) o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathIsUNCServer](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserverw).

## <a name="cpathtisuncservershare"></a><a name="isuncservershare"></a>CPathT::IsUNCServerShare

Chiamare questo metodo per determinare se il percorso è un percorso \\ \ di condivisione UNC (Universal Naming Convention) valido,*condivisione* *server*\ .

```
BOOL IsUNCServerShare() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il \\ \ percorso si trova nella*condivisione* *server*\ del modulo o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathIsUNCServerShare](/windows/win32/api/shlwapi/nf-shlwapi-pathisuncserversharew).

## <a name="cpathtm_strpath"></a><a name="m_strpath"></a>CPathT::m_strPath

Percorso.

```
StringType m_strPath;
```

### <a name="remarks"></a>Osservazioni

`StringType`è il parametro di modello per `CPathT`.

## <a name="cpathtmakepretty"></a><a name="makepretty"></a>CPathT::MakePretty

Chiamare questo metodo per convertire un percorso in tutti i caratteri minuscoli per conferire al percorso un aspetto coerente.

```
BOOL MakePretty();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il percorso è stato convertito o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathMakePretty](/windows/win32/api/shlwapi/nf-shlwapi-pathmakeprettyw).

## <a name="cpathtmatchspec"></a><a name="matchspec"></a>CPathT::MatchSpec

Chiamare questo metodo per cercare il percorso di una stringa contenente un tipo di corrispondenza con caratteri jolly.

```
BOOL MatchSpec(PCXSTR pszSpec) const;
```

### <a name="parameters"></a>Parametri

*pszSpec (spzSpec)*<br/>
Puntatore a una stringa con terminazione null con il tipo di file per il quale eseguire la ricerca. Ad esempio, per verificare se il file nel percorso corrente è un file DOC, *pszSpec* deve essere impostato su ".doc".

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la stringa corrisponde o FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathMatchSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathmatchspecw).

## <a name="cpathtoperator-"></a><a name="operator_add_eq"></a>CPathT::operatore

Questo operatore aggiunge una stringa al percorso.

```
CPathT<StringType>& operator+=(PCXSTR pszMore);
```

### <a name="parameters"></a>Parametri

*pszMore (informazioni in base al stupe*<br/>
Stringa da accodare.

### <a name="return-value"></a>Valore restituito

Restituisce il percorso aggiornato.

## <a name="cpathtoperator-const-stringtype-amp"></a><a name="operator_const_stringtype_amp"></a>CPathT::operator const StringType&amp;

Questo operatore consente all'oggetto di essere trattato come una stringa.

```
operator const StringType&() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una stringa che rappresenta il percorso corrente gestito da questo oggetto.

## <a name="cpathtoperator-cpathtpcxstr"></a><a name="operator_cpatht__pcxstr"></a>CPathT::operatore CPathT::PCXSTR

Questo operatore consente all'oggetto di essere trattato come una stringa.

```
operator PCXSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una stringa che rappresenta il percorso corrente gestito da questo oggetto.

## <a name="cpathtoperator-stringtype-amp"></a><a name="operator_stringtype_amp"></a>CPathT::operatorStringType (Operator StringType)&amp;

Questo operatore consente all'oggetto di essere trattato come una stringa.

```
operator StringType&() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una stringa che rappresenta il percorso corrente gestito da questo oggetto.

## <a name="cpathtpcxstr"></a><a name="pcxstr"></a>CPathT::PCXSTR

Tipo di stringa costante.

```
typedef StringType::PCXSTR PCXSTR;
```

### <a name="remarks"></a>Osservazioni

`StringType`è il parametro di modello per `CPathT`.

## <a name="cpathtpxstr"></a><a name="pxstr"></a>CPathT::PXSTR

Un tipo stringa.

```
typedef StringType::PXSTR PXSTR;
```

### <a name="remarks"></a>Osservazioni

`StringType`è il parametro di modello per `CPathT`.

## <a name="cpathtquotespaces"></a><a name="quotespaces"></a>CPathT::QuoteSpaces

Chiamare questo metodo per racchiudere il percorso tra virgolette se contiene spazi.

```
void QuoteSpaces();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathQuoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathquotespacesw).

## <a name="cpathtrelativepathto"></a><a name="relativepathto"></a>CPathT::RelativePathTo

Chiamare questo metodo per creare un percorso relativo da un file o una cartella a un altro.

```
BOOL RelativePathTo(
    PCXSTR pszFrom,
    DWORD dwAttrFrom,
    PCXSTR pszTo,
    DWORD dwAttrTo);
```

### <a name="parameters"></a>Parametri

*pszDa*<br/>
Inizio del percorso relativo.

*dwAttrDa*<br/>
Gli attributi File di *pszFrom*. Se questo valore contiene FILE_ATTRIBUTE_DIRECTORY, si presuppone *che pszFrom* sia una directory. in caso contrario, *pszFrom* viene considerato come un file.

*pszTo (informazioni in stato di enoper*<br/>
Punto finale del percorso relativo.

*dwAttrTo*<br/>
Attributi File di *pszTo*. Se questo valore contiene FILE_ATTRIBUTE_DIRECTORY, si presuppone *che pszTo* sia una directory. in caso contrario, si presuppone *che pszTo* sia un file.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathRelativePathTo](/windows/win32/api/shlwapi/nf-shlwapi-pathrelativepathtow).

## <a name="cpathtremoveargs"></a><a name="removeargs"></a>CPathT::RemoveArgs

Chiamare questo metodo per rimuovere eventuali argomenti della riga di comando dal percorso.

```
void RemoveArgs();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathRemoveArgs](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveargsw).

## <a name="cpathtremovebackslash"></a><a name="removebackslash"></a>CPathT::RemoveBackslash

Chiamare questo metodo per rimuovere la barra rovesciata finale dal percorso.

```
void RemoveBackslash();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathRemoveBackslash](/windows/win32/api/shlwapi/nf-shlwapi-pathremovebackslashw).

## <a name="cpathtremoveblanks"></a><a name="removeblanks"></a>CPathT::RemoveBlanks

Chiamare questo metodo per rimuovere tutti gli spazi iniziali e finali dal percorso.

```
void RemoveBlanks();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathRemoveBlanks](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveblanksw).

## <a name="cpathtremoveextension"></a><a name="removeextension"></a>CPathT::RemoveExtension (Percorso di chiamata)

Chiamare questo metodo per rimuovere l'estensione del file dal percorso, se presente.

```
void RemoveExtension();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathRemoveExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathremoveextensionw).

## <a name="cpathtremovefilespec"></a><a name="removefilespec"></a>CPathT::RemoveFileSpec

Chiamare questo metodo per rimuovere il nome del file finale e la barra rovesciata dal percorso, se presente.

```
BOOL RemoveFileSpec();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathRemoveFileSpec](/windows/win32/api/shlwapi/nf-shlwapi-pathremovefilespecw).

## <a name="cpathtrenameextension"></a><a name="renameextension"></a>CPathT::RenameExtension (Informazioni in base alla proprietà)

Chiamare questo metodo per sostituire l'estensione del nome file nel percorso con una nuova estensione. Se il nome del file non contiene un'estensione, l'estensione verrà allegata alla fine del percorso.

```
BOOL RenameExtension(PCXSTR pszExtension);
```

### <a name="parameters"></a>Parametri

*spzEstensione*<br/>
Nuova estensione di file, preceduta da un carattere ".".

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathRenameExtension](/windows/win32/api/shlwapi/nf-shlwapi-pathrenameextensionw).

## <a name="cpathtskiproot"></a><a name="skiproot"></a>CPathT::SkipRoot

Chiamare questo metodo per analizzare un percorso, ignorando la lettera di unità o le parti del percorso server/condivisione UNC (convenzione di denominazione universale).

```
int SkipRoot() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce la posizione dell'inizio del sottopercorso che segue la radice (lettera di unità o server/condivisione UNC).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathSkipRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathskiprootw).

## <a name="cpathtstrippath"></a><a name="strippath"></a>CPathT::StripPath

Chiamare questo metodo per rimuovere la parte del percorso di un percorso completo e il nome del file.

```
void StripPath();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathStripPath](/windows/win32/api/shlwapi/nf-shlwapi-pathstrippathw).

## <a name="cpathtstriptoroot"></a><a name="striptoroot"></a>CPathT::StripToRoot

Chiamare questo metodo per rimuovere tutte le parti del percorso ad eccezione delle informazioni radice.

```
BOOL StripToRoot();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se è stata trovata una lettera di unità valida nel percorso oppure FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathStripToRoot](/windows/win32/api/shlwapi/nf-shlwapi-pathstriptorootw).

## <a name="cpathtunquotespaces"></a><a name="unquotespaces"></a>CPathT::UnquoteSpaces (Spazi di uncitatura)

Chiamare questo metodo per rimuovere le virgolette dall'inizio e dalla fine di un percorso.

```
void UnquoteSpaces();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [PathUnquoteSpaces](/windows/win32/api/shlwapi/nf-shlwapi-pathunquotespacesw).

## <a name="cpathtxchar"></a><a name="xchar"></a>CPathT::XCHAR

Tipo carattere.

```
typedef StringType::XCHAR XCHAR;
```

### <a name="remarks"></a>Osservazioni

`StringType`è il parametro di modello per `CPathT`.

## <a name="see-also"></a>Vedere anche

[Classi](../../atl/reference/atl-classes.md)<br/>
[Classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md)
