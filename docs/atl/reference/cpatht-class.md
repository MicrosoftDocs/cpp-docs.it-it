---
title: Classe CPathT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CPathT class
ms.assetid: eba4137d-1fd2-4b44-a2e1-0944db64df3c
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 98b00e3f888d5f6bfb33f6ee24c4af2860bb470f
ms.lasthandoff: 04/01/2017

---
# <a name="cpatht-class"></a>Classe CPathT
Questa classe rappresenta un percorso.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename StringType>
class CPathT
```  
  
#### <a name="parameters"></a>Parametri  
 `StringType`  
 La classe string ATL/MFC da utilizzare per il percorso (vedere [CStringT](../../atl-mfc-shared/reference/cstringt-class.md)).  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPathT::PCXSTR](#pcxstr)|Un tipo stringa costante.|  
|[CPathT::PXSTR](#pxstr)|Un tipo stringa.|  
|[CPathT::XCHAR](#xchar)|Tipo di carattere.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPathT::CPathT](#cpatht)|Il costruttore per il percorso.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPathT::AddBackslash](#addbackslash)|Chiamare questo metodo per aggiungere una barra rovesciata alla fine di una stringa per creare la sintassi corretta per un percorso.|  
|[CPathT::AddExtension](#addextension)|Chiamare questo metodo per aggiungere un'estensione di file a un percorso.|  
|[CPathT::Append](#append)|Chiamare questo metodo per aggiungere una stringa per il percorso corrente.|  
|[CPathT::BuildRoot](#buildroot)|Chiamare questo metodo per creare un percorso radice da un numero di unità specificata.|  
|[CPathT::Canonicalize](#canonicalize)|Chiamare questo metodo per convertire il percorso in forma canonica.|  
|[CPathT::Combine](#combine)|Chiamare questo metodo per concatenare una stringa che rappresenta un nome di directory e una stringa che rappresenta un nome di percorso di file in un percorso.|  
|[CPathT::CommonPrefix](#commonprefix)|Chiamare questo metodo per determinare se il percorso specificato condivide un prefisso comune con il percorso corrente.|  
|[CPathT::CompactPath](#compactpath)|Chiamare questo metodo per troncare un percorso di file in base all'interno di una larghezza in pixel specificata sostituendo i componenti del percorso con i puntini di sospensione.|  
|[CPathT::CompactPathEx](#compactpathex)|Chiamare questo metodo per troncare un percorso di file in base all'interno di un determinato numero di caratteri sostituendo i componenti del percorso con i puntini di sospensione.|  
|[CPathT::FileExists](#fileexists)|Chiamare questo metodo per verificare se esiste il file con questo nome di percorso.|  
|[CPathT::FindExtension](#findextension)|Chiamare questo metodo per individuare la posizione dell'estensione di file all'interno del percorso.|  
|[CPathT::FindFileName](#findfilename)|Chiamare questo metodo per individuare la posizione del nome del file all'interno del percorso.|  
|[CPathT::GetDriveNumber](#getdrivenumber)|Chiamare questo metodo per cercare il percorso per una lettera di unità all'interno dell'intervallo di 'A' a 'Z' e restituire il numero di unità corrispondenti.|  
|[CPathT::GetExtension](#getextension)|Chiamare questo metodo per ottenere l'estensione di file dal percorso.|  
|[CPathT::IsDirectory](#isdirectory)|Chiamare questo metodo per verificare se il percorso è una directory valida.|  
|[CPathT::IsFileSpec](#isfilespec)|Chiamare questo metodo per cercare un percorso per tutti i caratteri che delimitano percorso (ad esempio, ':' o '\\'). Se non sono presenti caratteri che delimitano percorso, il percorso viene considerato un percorso di File specifiche.|  
|[CPathT::IsPrefix](#isprefix)|Chiamare questo metodo per determinare se un percorso contiene un prefisso valido del tipo passato `pszPrefix`.|  
|[CPathT::IsRelative](#isrelative)|Chiamare questo metodo per determinare se il percorso è relativo.|  
|[CPathT::IsRoot](#isroot)|Chiamare questo metodo per determinare se il percorso è una directory principale.|  
|[CPathT::IsSameRoot](#issameroot)|Chiamare questo metodo per determinare se un altro percorso è un componente radice comune con il percorso corrente.|  
|[CPathT::IsUNC](#isunc)|Chiamare questo metodo per determinare se il percorso è un percorso UNC (universal convenzione di denominazione) valido per un server e condividere.|  
|[CPathT::IsUNCServer](#isuncserver)|Chiamare questo metodo per determinare se il percorso è un percorso UNC (universal convenzione di denominazione) valido per un solo server.|  
|[CPathT::IsUNCServerShare](#isuncservershare)|Chiamare questo metodo per determinare se il percorso è un percorso di condivisione UNC (universal convenzione di denominazione) valido, \\ \  *server*\ *condividere*.|  
|[CPathT::MakePretty](#makepretty)|Chiamare questo metodo per convertire un percorso per tutti i caratteri minuscoli per fornire il percorso di un aspetto coerente.|  
|[CPathT::MatchSpec](#matchspec)|Chiamare questo metodo per cercare il percorso di una stringa che contiene un tipo di corrispondenza con caratteri jolly.|  
|[CPathT::QuoteSpaces](#quotespaces)|Chiamare questo metodo per racchiudere il percorso tra virgolette se contiene spazi.|  
|[CPathT::RelativePathTo](#relativepathto)|Chiamare questo metodo per creare un percorso relativo da un file o una cartella a altra.|  
|[CPathT::RemoveArgs](#removeargs)|Chiamare questo metodo per rimuovere eventuali argomenti della riga di comando dal percorso.|  
|[CPathT::RemoveBackslash](#removebackslash)|Chiamare questo metodo per rimuovere la barra rovesciata finale dal percorso.|  
|[CPathT::RemoveBlanks](#removeblanks)|Chiamare questo metodo per rimuovere tutti gli spazi iniziali e finali dal percorso.|  
|[CPathT::RemoveExtension](#removeextension)|Chiamare questo metodo per rimuovere l'estensione di file dal percorso, se presente.|  
|[CPathT::RemoveFileSpec](#removefilespec)|Chiamare questo metodo per rimuovere il percorso, il nome di file finali e la barra rovesciata se dispone di essi.|  
|[CPathT::RenameExtension](#renameextension)|Chiamare questo metodo per sostituire l'estensione del nome file nel percorso di una nuova estensione. Se il nome del file non contiene un'estensione, l'estensione verrà collegato alla fine della stringa.|  
|[CPathT::SkipRoot](#skiproot)|Chiamare questo metodo per analizzare un percorso, ignorando la lettera di unità o parti di percorso UNC o condivisione server.|  
|[CPathT::StripPath](#strippath)|Chiamare questo metodo per rimuovere la parte del percorso di un percorso completo e nome file.|  
|[CPathT::StripToRoot](#striptoroot)|Chiamare questo metodo per rimuovere tutte le parti del percorso, ad eccezione delle informazioni relative alla radice.|  
|[CPathT::UnquoteSpaces](#unquotespaces)|Chiamare questo metodo per rimuovere le virgolette all'inizio e fine di un percorso.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[StringType const CPathT::operator /](#operator_const_stringtype_amp)|Questo operatore consente all'oggetto di essere considerato come una stringa.|  
|[CPathT::operator CPathT::PCXSTR](#operator_cpatht__pcxstr)|Questo operatore consente all'oggetto di essere considerato come una stringa.|  
|[CPathT::operator StringType /](#operator_stringtype)|Questo operatore consente all'oggetto di essere considerato come una stringa.|  
|[+ = CPathT::operator](#operator_add_eq)|Questo operatore aggiunge una stringa per il percorso.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPathT::m_strPath](#m_strpath)|Percorso.|  
  
## <a name="remarks"></a>Note  
 `CPath`, `CPathA`, e `CPathW` sono creazioni di istanze di `CPathT` definito come segue:  
  
 `typedef CPathT< CString > CPath;`  
  
 `typedef CPathT< CStringA > CPathA;`  
  
 `typedef CPathT< CStringW > CPathW;`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlpath. h  
  
##  <a name="addbackslash"></a>CPathT::AddBackslash  
 Chiamare questo metodo per aggiungere una barra rovesciata alla fine di una stringa per creare la sintassi corretta per un percorso. Se il percorso esiste già una barra rovesciata finale, non verrà aggiunta alcuna barra rovesciata.  
  
```
void AddBackslash();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathAddBackSlash](http://msdn.microsoft.com/library/windows/desktop/bb773561).  
  
##  <a name="addextension"></a>CPathT::AddExtension  
 Chiamare questo metodo per aggiungere un'estensione di file a un percorso.  
  
```
BOOL AddExtension(PCXSTR pszExtension);
```  
  
### <a name="parameters"></a>Parametri  
 `pszExtension`  
 L'estensione di file da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathAddExtension](http://msdn.microsoft.com/library/windows/desktop/bb773563).  
  
##  <a name="append"></a>CPathT::Append  
 Chiamare questo metodo per aggiungere una stringa per il percorso corrente.  
  
```
BOOL Append(PCXSTR pszMore);
```  
  
### <a name="parameters"></a>Parametri  
 `pszMore`  
 Stringa da accodare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathAppend](http://msdn.microsoft.com/library/windows/desktop/bb773565).  
  
##  <a name="buildroot"></a>CPathT::BuildRoot  
 Chiamare questo metodo per creare un percorso radice da un numero di unità specificata.  
  
```
void BuildRoot(int iDrive);
```  
  
### <a name="parameters"></a>Parametri  
 *iDrive*  
 Il numero di unità (0 è r:, è 1, b e così via).  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathBuildRoot](http://msdn.microsoft.com/library/windows/desktop/bb773567).  
  
##  <a name="canonicalize"></a>CPathT::Canonicalize  
 Chiamare questo metodo per convertire il percorso in forma canonica.  
  
```
void Canonicalize();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathCanonicalize](http://msdn.microsoft.com/library/windows/desktop/bb773569).  
  
##  <a name="combine"></a>CPathT::Combine  
 Chiamare questo metodo per concatenare una stringa che rappresenta un nome di directory e una stringa che rappresenta un nome di percorso di file in un percorso.  
  
```
void Combine(PCXSTR pszDir, PCXSTR  pszFile);
```  
  
### <a name="parameters"></a>Parametri  
 `pszDir`  
 Il percorso della directory.  
  
 *pszFile*  
 Il percorso del file.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathCombine](http://msdn.microsoft.com/library/windows/desktop/bb773571).  
  
##  <a name="commonprefix"></a>CPathT::CommonPrefix  
 Chiamare questo metodo per determinare se il percorso specificato condivide un prefisso comune con il percorso corrente.  
  
```
CPathT<StringType> CommonPrefix(PCXSTR pszOther);
```  
  
### <a name="parameters"></a>Parametri  
 `pszOther`  
 Il percorso da confrontare con quello corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il prefisso comune.  
  
### <a name="remarks"></a>Note  
 Un prefisso è uno dei seguenti tipi: "c:\\\\",".","...","... \\\\". Per ulteriori informazioni, vedere [PathCommonPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773574).  
  
##  <a name="compactpath"></a>CPathT::CompactPath  
 Chiamare questo metodo per troncare un percorso di file in base all'interno di una larghezza in pixel specificata sostituendo i componenti del percorso con i puntini di sospensione.  
  
```
BOOL CompactPath(HDC hDC, UINT nWidth);
```  
  
### <a name="parameters"></a>Parametri  
 `hDC`  
 Il contesto di dispositivo utilizzato per le metriche del tipo di carattere.  
  
 `nWidth`  
 La larghezza, in pixel, che verrà forzata la stringa per le dimensioni.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathCompactPath](http://msdn.microsoft.com/library/windows/desktop/bb773575).  
  
##  <a name="compactpathex"></a>CPathT::CompactPathEx  
 Chiamare questo metodo per troncare un percorso di file in base all'interno di un determinato numero di caratteri sostituendo i componenti del percorso con i puntini di sospensione.  
  
```
BOOL CompactPathEx(UINT nMaxChars, DWORD dwFlags = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `nMaxChars`  
 Numero massimo di caratteri devono essere contenuti nella nuova stringa, incluso il carattere di terminazione NULL.  
  
 `dwFlags`  
 Riservato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathCompactPathEx](http://msdn.microsoft.com/library/windows/desktop/bb773578).  
  
##  <a name="cpatht"></a>CPathT::CPathT  
 Costruttore.  
  
```
CPathT(PCXSTR pszPath);
CPathT(const CPathT<StringType>& path);
CPathT() throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pszPath*  
 Puntatore a una stringa di percorso.  
  
 *path*  
 La stringa del percorso.  
  
##  <a name="fileexists"></a>CPathT::FileExists  
 Chiamare questo metodo per verificare se esiste il file con questo nome di percorso.  
  
```
BOOL FileExists() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il file esiste, FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathFileExists](http://msdn.microsoft.com/library/windows/desktop/bb773584).  
  
##  <a name="findextension"></a>CPathT::FindExtension  
 Chiamare questo metodo per individuare la posizione dell'estensione di file all'interno del percorso.  
  
```
int FindExtension() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione del "." che precede l'estensione. Se nessuna estensione viene trovata, restituisce -1.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathFindExtension](http://msdn.microsoft.com/library/windows/desktop/bb773587).  
  
##  <a name="findfilename"></a>CPathT::FindFileName  
 Chiamare questo metodo per individuare la posizione del nome del file all'interno del percorso.  
  
```
int FindFileName() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione del nome del file. Se viene trovato alcun nome di file, restituisce -1.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589).  
  
##  <a name="getdrivenumber"></a>CPathT::GetDriveNumber  
 Chiamare questo metodo per cercare il percorso per una lettera di unità all'interno dell'intervallo di 'A' a 'Z' e restituire il numero di unità corrispondenti.  
  
```
int GetDriveNumber() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di unità come numero intero compreso tra 0 e 25, corrispondente a 'A' a 'Z', se il percorso è una lettera di unità, oppure -1 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathGetDriveNumber](http://msdn.microsoft.com/library/windows/desktop/bb773612).  
  
##  <a name="getextension"></a>CPathT::GetExtension  
 Chiamare questo metodo per ottenere l'estensione di file dal percorso.  
  
```
StringType GetExtension() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'estensione di file.  
  
##  <a name="isdirectory"></a>CPathT::IsDirectory  
 Chiamare questo metodo per verificare se il percorso è una directory valida.  
  
```
BOOL IsDirectory() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero (16), se il percorso è una directory, `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathIsDirectory](http://msdn.microsoft.com/library/windows/desktop/bb773621).  
  
##  <a name="isfilespec"></a>CPathT::IsFileSpec  
 Chiamare questo metodo per cercare un percorso per tutti i caratteri che delimitano percorso (ad esempio, ':' o '\\'). Se non sono presenti caratteri che delimitano percorso, il percorso viene considerato un percorso di File specifiche.  
  
```
BOOL IsFileSpec() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se non sono presenti caratteri che delimitano percorso all'interno del percorso oppure FALSE se sono presenti caratteri che delimitano percorso.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathIsFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773627).  
  
##  <a name="isprefix"></a>CPathT::IsPrefix  
 Chiamare questo metodo per determinare se un percorso contiene un prefisso valido del tipo passato `pszPrefix`.  
  
```
BOOL IsPrefix(PCXSTR pszPrefix) const;
```  
  
### <a name="parameters"></a>Parametri  
 `pszPrefix`  
 Il prefisso per cui eseguire la ricerca. Un prefisso è uno dei seguenti tipi: "c:\\\\",".","...","... \\\\".  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il percorso contiene il prefisso o FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathIsPrefix](http://msdn.microsoft.com/library/windows/desktop/bb773650).  
  
##  <a name="isrelative"></a>CPathT::IsRelative  
 Chiamare questo metodo per determinare se il percorso è relativo.  
  
```
BOOL IsRelative() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il percorso è relativo o FALSE se è assoluto.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathIsRelative](http://msdn.microsoft.com/library/windows/desktop/bb773660).  
  
##  <a name="isroot"></a>CPathT::IsRoot  
 Chiamare questo metodo per determinare se il percorso è una directory principale.  
  
```
BOOL IsRoot() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il percorso è una radice o FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathIsRoot](http://msdn.microsoft.com/library/windows/desktop/bb773674).  
  
##  <a name="issameroot"></a>CPathT::IsSameRoot  
 Chiamare questo metodo per determinare se un altro percorso è un componente radice comune con il percorso corrente.  
  
```
BOOL IsSameRoot(PCXSTR pszOther) const;
```  
  
### <a name="parameters"></a>Parametri  
 `pszOther`  
 Il percorso.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se entrambe le stringhe hanno lo stesso componente radice, o FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathIsSameRoot](http://msdn.microsoft.com/library/windows/desktop/bb773687).  
  
##  <a name="isunc"></a>CPathT::IsUNC  
 Chiamare questo metodo per determinare se il percorso è un percorso UNC (universal convenzione di denominazione) valido per un server e condividere.  
  
```
BOOL IsUNC() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il percorso è un percorso UNC valido, o FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathIsUNC](http://msdn.microsoft.com/library/windows/desktop/bb773712).  
  
##  <a name="isuncserver"></a>CPathT::IsUNCServer  
 Chiamare questo metodo per determinare se il percorso è un percorso UNC (universal convenzione di denominazione) valido per un solo server.  
  
```
BOOL IsUNCServer() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se la stringa è un percorso UNC per un solo server (Nessun nome di condivisione) valido oppure FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathIsUNCServer](http://msdn.microsoft.com/library/windows/desktop/bb773722).  
  
##  <a name="isuncservershare"></a>CPathT::IsUNCServerShare  
 Chiamare questo metodo per determinare se il percorso è un percorso di condivisione UNC (universal convenzione di denominazione) valido, \\ \  *server*\ *condividere*.  
  
```
BOOL IsUNCServerShare() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il percorso è nel formato \\ \  *server*\ *condividere*, o FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathIsUNCServerShare](http://msdn.microsoft.com/library/windows/desktop/bb773723).  
  
##  <a name="m_strpath"></a>CPathT::m_strPath  
 Percorso.  
  
```
StringType m_strPath;
```  
  
### <a name="remarks"></a>Note  
 `StringType`è il parametro di modello `CPathT`.  
  
##  <a name="makepretty"></a>CPathT::MakePretty  
 Chiamare questo metodo per convertire un percorso per tutti i caratteri minuscoli per fornire il percorso di un aspetto coerente.  
  
```
BOOL MakePretty();
```  
  
### <a name="return-value"></a>Valore restituito  
 In caso contrario, restituisce TRUE se il percorso è stato convertito o FALSE.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathMakePretty](http://msdn.microsoft.com/library/windows/desktop/bb773725).  
  
##  <a name="matchspec"></a>CPathT::MatchSpec  
 Chiamare questo metodo per cercare il percorso di una stringa che contiene un tipo di corrispondenza con caratteri jolly.  
  
```
BOOL MatchSpec(PCXSTR pszSpec) const;
```  
  
### <a name="parameters"></a>Parametri  
 `pszSpec`  
 Puntatore a una stringa con terminazione null con il tipo di file da cercare. Ad esempio, per verificare se il file nel percorso corrente è un file DOC, `pszSpec` deve essere impostato su "*. doc".  
  
### <a name="return-value"></a>Valore restituito  
 In caso contrario, restituisce TRUE se la stringa corrisponde o FALSE.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathMatchSpec](http://msdn.microsoft.com/library/windows/desktop/bb773727).  
  
##  <a name="operator_add_eq"></a>+ = CPathT::operator  
 Questo operatore aggiunge una stringa per il percorso.  
  
```
CPathT<StringType>& operator+=(PCXSTR pszMore);
```  
  
### <a name="parameters"></a>Parametri  
 `pszMore`  
 Stringa da accodare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il percorso di aggiornamento.  
  
##  <a name="operator_const_stringtype_amp"></a>StringType const CPathT::operator&amp;  
 Questo operatore consente all'oggetto di essere considerato come una stringa.  
  
```
 operatorconst StringType&() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una stringa che rappresenta il percorso corrente gestito da questo oggetto.  
  
##  <a name="operator_cpatht__pcxstr"></a>CPathT::operator CPathT::PCXSTR  
 Questo operatore consente all'oggetto di essere considerato come una stringa.  
  
```
 operatorPCXSTR() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una stringa che rappresenta il percorso corrente gestito da questo oggetto.  
  
##  <a name="operator_stringtype__amp"></a>CPathT::operator StringType&amp;  
 Questo operatore consente all'oggetto di essere considerato come una stringa.  
  
```
 operatorStringType&() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una stringa che rappresenta il percorso corrente gestito da questo oggetto.  
  
##  <a name="pcxstr"></a>CPathT::PCXSTR  
 Un tipo stringa costante.  
  
```
typedef StringType::PCXSTR PCXSTR;
```  
  
### <a name="remarks"></a>Note  
 `StringType`è il parametro di modello `CPathT`.  
  
##  <a name="pxstr"></a>CPathT::PXSTR  
 Un tipo stringa.  
  
```
typedef StringType::PXSTR PXSTR;
```  
  
### <a name="remarks"></a>Note  
 `StringType`è il parametro di modello `CPathT`.  
  
##  <a name="quotespaces"></a>CPathT::QuoteSpaces  
 Chiamare questo metodo per racchiudere il percorso tra virgolette se contiene spazi.  
  
```
void QuoteSpaces();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathQuoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773739).  
  
##  <a name="relativepathto"></a>CPathT::RelativePathTo  
 Chiamare questo metodo per creare un percorso relativo da un file o una cartella a altra.  
  
```
BOOL RelativePathTo(
    PCXSTR pszFrom,
    DWORD dwAttrFrom,
    PCXSTR pszTo,
    DWORD dwAttrTo);
```  
  
### <a name="parameters"></a>Parametri  
 `pszFrom`  
 Inizio del percorso relativo.  
  
 *dwAttrFrom*  
 Gli attributi del File di `pszFrom`. Se questo valore contiene FILE_ATTRIBUTE_DIRECTORY, `pszFrom` assunto da una directory; in caso contrario, `pszFrom` si presuppone che sia un file.  
  
 `pszTo`  
 Il punto finale del percorso relativo.  
  
 *dwAttrTo*  
 Gli attributi del File di `pszTo`. Se questo valore contiene FILE_ATTRIBUTE_DIRECTORY, `pszTo` assunto da una directory; in caso contrario, `pszTo` si presuppone che sia un file.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathRelativePathTo](http://msdn.microsoft.com/library/windows/desktop/bb773740).  
  
##  <a name="removeargs"></a>CPathT::RemoveArgs  
 Chiamare questo metodo per rimuovere eventuali argomenti della riga di comando dal percorso.  
  
```
void RemoveArgs();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathRemoveArgs](http://msdn.microsoft.com/library/windows/desktop/bb773742).  
  
##  <a name="removebackslash"></a>CPathT::RemoveBackslash  
 Chiamare questo metodo per rimuovere la barra rovesciata finale dal percorso.  
  
```
void RemoveBackslash();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathRemoveBackslash](http://msdn.microsoft.com/library/windows/desktop/bb773743).  
  
##  <a name="removeblanks"></a>CPathT::RemoveBlanks  
 Chiamare questo metodo per rimuovere tutti gli spazi iniziali e finali dal percorso.  
  
```
void RemoveBlanks();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathRemoveBlanks](http://msdn.microsoft.com/library/windows/desktop/bb773745).  
  
##  <a name="removeextension"></a>CPathT::RemoveExtension  
 Chiamare questo metodo per rimuovere l'estensione di file dal percorso, se presente.  
  
```
void RemoveExtension();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathRemoveExtension](http://msdn.microsoft.com/library/windows/desktop/bb773746).  
  
##  <a name="removefilespec"></a>CPathT::RemoveFileSpec  
 Chiamare questo metodo per rimuovere il percorso, il nome di file finali e la barra rovesciata se dispone di essi.  
  
```
BOOL RemoveFileSpec();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathRemoveFileSpec](http://msdn.microsoft.com/library/windows/desktop/bb773748).  
  
##  <a name="renameextension"></a>CPathT::RenameExtension  
 Chiamare questo metodo per sostituire l'estensione del nome file nel percorso di una nuova estensione. Se il nome del file non contiene un'estensione, l'estensione verrà collegato alla fine del percorso.  
  
```
BOOL RenameExtension(PCXSTR pszExtension);
```  
  
### <a name="parameters"></a>Parametri  
 `pszExtension`  
 La nuova estensione di file, preceduto da un "." carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathRenameExtension](http://msdn.microsoft.com/library/windows/desktop/bb773749).  
  
##  <a name="skiproot"></a>CPathT::SkipRoot  
 Chiamare questo metodo per analizzare un percorso, ignorando la lettera di unità o parti del percorso server o condivisione UNC (universal convenzione di denominazione).  
  
```
int SkipRoot() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione di inizio del sottopercorso che segue la radice (lettera di unità o server UNC o condivisione).  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathSkipRoot](http://msdn.microsoft.com/library/windows/desktop/bb773754).  
  
##  <a name="strippath"></a>CPathT::StripPath  
 Chiamare questo metodo per rimuovere la parte del percorso di un percorso completo e nome file.  
  
```
void StripPath();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathStripPath](http://msdn.microsoft.com/library/windows/desktop/bb773756).  
  
##  <a name="striptoroot"></a>CPathT::StripToRoot  
 Chiamare questo metodo per rimuovere tutte le parti del percorso, ad eccezione delle informazioni relative alla radice.  
  
```
BOOL StripToRoot();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se una lettera di unità valido è stato trovato nel percorso, o FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathStripToRoot](http://msdn.microsoft.com/library/windows/desktop/bb773757).  
  
##  <a name="unquotespaces"></a>CPathT::UnquoteSpaces  
 Chiamare questo metodo per rimuovere le virgolette all'inizio e fine di un percorso.  
  
```
void UnquoteSpaces();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [PathUnquoteSpaces](http://msdn.microsoft.com/library/windows/desktop/bb773763).  
  
##  <a name="xchar"></a>CPathT::XCHAR  
 Tipo di carattere.  
  
```
typedef StringType::XCHAR XCHAR;
```  
  
### <a name="remarks"></a>Note  
 `StringType`è il parametro di modello `CPathT`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)   
 [Classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md)
