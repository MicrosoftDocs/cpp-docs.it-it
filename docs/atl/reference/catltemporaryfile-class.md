---
title: Classe CAtlTemporaryFile | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlTemporaryFile
- ATLFILE/ATL::CAtlTemporaryFile
- ATLFILE/ATL::CAtlTemporaryFile::CAtlTemporaryFile
- ATLFILE/ATL::CAtlTemporaryFile::Close
- ATLFILE/ATL::CAtlTemporaryFile::Create
- ATLFILE/ATL::CAtlTemporaryFile::Flush
- ATLFILE/ATL::CAtlTemporaryFile::GetPosition
- ATLFILE/ATL::CAtlTemporaryFile::GetSize
- ATLFILE/ATL::CAtlTemporaryFile::HandsOff
- ATLFILE/ATL::CAtlTemporaryFile::HandsOn
- ATLFILE/ATL::CAtlTemporaryFile::LockRange
- ATLFILE/ATL::CAtlTemporaryFile::Read
- ATLFILE/ATL::CAtlTemporaryFile::Seek
- ATLFILE/ATL::CAtlTemporaryFile::SetSize
- ATLFILE/ATL::CAtlTemporaryFile::TempFileName
- ATLFILE/ATL::CAtlTemporaryFile::UnlockRange
- ATLFILE/ATL::CAtlTemporaryFile::Write
dev_langs:
- C++
helpviewer_keywords:
- CAtlTemporaryFile class
ms.assetid: 05f0f2a5-94f6-4594-8dae-b114292ff5f9
caps.latest.revision: 18
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 9673c5a137feddb0eb696945ec6abeb5f3cb062e
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="catltemporaryfile-class"></a>Classe CAtlTemporaryFile
Questa classe fornisce metodi per la creazione e utilizzo di un file temporaneo.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAtlTemporaryFile
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile)|Costruttore.|  
|[CAtlTemporaryFile:: ~ CAtlTemporaryFile](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlTemporaryFile::Close](#close)|Chiamare questo metodo per chiudere un file temporaneo e l'eliminazione del contenuto o memorizzarli sotto il nome del file specificato.|  
|[CAtlTemporaryFile::Create](#create)|Chiamare questo metodo per creare un file temporaneo.|  
|[CAtlTemporaryFile::Flush](#flush)|Chiamare questo metodo per forzare tutti i dati rimanenti nel buffer di file in cui scrivere il file temporaneo.|  
|[CAtlTemporaryFile::GetPosition](#getposition)|Chiamare questo metodo per ottenere la posizione del puntatore file corrente.|  
|[CAtlTemporaryFile::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione in byte del file temporaneo.|  
|[CAtlTemporaryFile::HandsOff](#handsoff)|Chiamare questo metodo per separare il file di `CAtlTemporaryFile` oggetto.|  
|[CAtlTemporaryFile::HandsOn](#handson)|Chiamare questo metodo per aprire un file temporaneo esistente e posizionare il puntatore alla fine del file.|  
|[CAtlTemporaryFile::LockRange](#lockrange)|Chiamare questo metodo per bloccare un'area del file per impedire l'accesso di altri processi.|  
|[CAtlTemporaryFile::Read](#read)|Chiamare questo metodo per leggere il file temporaneo a partire dalla posizione indicata dal puntatore del file di dati.|  
|[CAtlTemporaryFile::Seek](#seek)|Chiamare questo metodo per spostare il puntatore del file del file temporaneo.|  
|[CAtlTemporaryFile::SetSize](#setsize)|Chiamare questo metodo per impostare le dimensioni del file temporaneo.|  
|[CAtlTemporaryFile::TempFileName](#tempfilename)|Chiamare questo metodo per restituire il nome del file temporaneo.|  
|[CAtlTemporaryFile::UnlockRange](#unlockrange)|Chiamare questo metodo per sbloccare un'area del file temporaneo.|  
|[CAtlTemporaryFile::Write](#write)|Chiamare questo metodo per scrivere il file temporaneo a partire dalla posizione indicata dal puntatore del file di dati.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlTemporaryFile::operator HANDLE](#operator_handle)|Restituisce un handle per il file temporaneo.|  
  
## <a name="remarks"></a>Note  
 `CAtlTemporaryFile`Consente di creare e utilizzare un file temporaneo. Automaticamente il file è denominato, aperte, chiuse ed eliminato. Se il contenuto del file è necessario dopo il file viene chiuso, possono essere salvati in un nuovo file con il nome specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlfile.h  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).  
  
##  <a name="catltemporaryfile"></a>CAtlTemporaryFile:: CAtlTemporaryFile  
 Costruttore.  
  
```
CAtlTemporaryFile() throw();
```  
  
### <a name="remarks"></a>Note  
 Un file non viene effettivamente aperto finché non viene effettuata una chiamata a [CAtlTemporaryFile::Create](#create).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#73;](../../atl/codesnippet/cpp/catltemporaryfile-class_1.cpp)]  
  
##  <a name="dtor"></a>CAtlTemporaryFile:: ~ CAtlTemporaryFile  
 Distruttore.  
  
```
~CAtlTemporaryFile() throw();
```  
  
### <a name="remarks"></a>Note  
 Le chiamate di distruttore [CAtlTemporaryFile::Close](#close).  
  
##  <a name="close"></a>CAtlTemporaryFile::Close  
 Chiamare questo metodo per chiudere un file temporaneo e l'eliminazione del contenuto o memorizzarli sotto il nome del file specificato.  
  
```
HRESULT Close(LPCTSTR szNewName = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *szNewName*  
 Il nome per il nuovo file archiviare il contenuto del file temporaneo in. Se questo argomento è NULL, il contenuto del file temporaneo viene eliminato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).  
  
##  <a name="create"></a>CAtlTemporaryFile::Create  
 Chiamare questo metodo per creare un file temporaneo.  
  
```
HRESULT Create(LPCTSTR pszDir = NULL, DWORD dwDesiredAccess = GENERIC_WRITE) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszDir`  
 Il percorso per il file temporaneo. Se è NULL, [GetTempPath](http://msdn.microsoft.com/library/windows/desktop/aa364992) verrà chiamata per assegnare un percorso.  
  
 `dwDesiredAccess`  
 L'accesso desiderato. Vedere `dwDesiredAccess` in [CreateFile](http://msdn.microsoft.com/library/windows/desktop/aa363858) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).  
  
##  <a name="flush"></a>CAtlTemporaryFile::Flush  
 Chiamare questo metodo per forzare tutti i dati rimanenti nel buffer di file in cui scrivere il file temporaneo.  
  
```
HRESULT Flush() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Simile a [CAtlTemporaryFile::HandsOff](#handsoff), ad eccezione del fatto che il file non viene chiuso.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).  
  
##  <a name="getposition"></a>CAtlTemporaryFile::GetPosition  
 Chiamare questo metodo per ottenere la posizione del puntatore file corrente.  
  
```
HRESULT GetPosition(ULONGLONG& nPos) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 La posizione in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Per modificare la posizione del puntatore del file, utilizzare [CAtlTemporaryFile::Seek](#seek).  
  
##  <a name="getsize"></a>CAtlTemporaryFile::GetSize  
 Chiamare questo metodo per ottenere la dimensione in byte del file temporaneo.  
  
```
HRESULT GetSize(ULONGLONG& nLen) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nLen`  
 Il numero di byte nel file.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
##  <a name="handsoff"></a>CAtlTemporaryFile::HandsOff  
 Chiamare questo metodo per separare il file di `CAtlTemporaryFile` oggetto.  
  
```
HRESULT HandsOff() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 `HandsOff`e [CAtlTemporaryFile::HandsOn](#handson) vengono utilizzati per separare il file dall'oggetto e ricollegarlo se necessario. `HandsOff`verrà forzare tutti i dati rimanenti nel buffer di file in cui scrivere il file temporaneo e quindi chiudere il file. Se si desidera chiudere ed eliminare definitivamente il file o se si desidera chiudere e mantenere il contenuto del file con un nome specificato, utilizzare [CAtlTemporaryFile::Close](#close).  
  
##  <a name="handson"></a>CAtlTemporaryFile::HandsOn  
 Chiamare questo metodo per aprire un file temporaneo esistente e posizionare il puntatore alla fine del file.  
  
```
HRESULT HandsOn() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 [CAtlTemporaryFile::HandsOff](#handsoff) e `HandsOn` vengono utilizzati per separare il file dall'oggetto e ricollegarlo se necessario.  
  
##  <a name="lockrange"></a>CAtlTemporaryFile::LockRange  
 Chiamare questo metodo per bloccare un'area nel file temporaneo per impedire l'accesso di altri processi.  
  
```
HRESULT LockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 La posizione del file in cui deve iniziare il blocco.  
  
 `nCount`  
 La lunghezza dell'intervallo di byte da bloccare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più di una regione di un file, ma non le aree di sovrapposizione sono consentite. Per sbloccare correttamente un'area, utilizzare [CAtlTemporaryFile::UnlockRange](#unlockrange), garantendo un intervallo di byte corrisponde esattamente all'area in cui è stato bloccato in precedenza. `LockRange`non vengono unite le aree adiacenti; Se due aree bloccate sono adiacenti, è necessario sbloccare ciascuno separatamente.  
  
##  <a name="operator_handle"></a>CAtlTemporaryFile::operator HANDLE  
 Restituisce un handle per il file temporaneo.  
  
```  
operator HANDLE() throw();
```  
  
##  <a name="read"></a>CAtlTemporaryFile::Read  
 Chiamare questo metodo per leggere il file temporaneo a partire dalla posizione indicata dal puntatore del file di dati.  
  
```
HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    DWORD& nBytesRead) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pBuffer`  
 Puntatore al buffer che riceverà i dati letti dal file.  
  
 `nBufSize`  
 Dimensioni del buffer, in byte.  
  
 `nBytesRead`  
 Numero di byte letti.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [CAtlFile::Read](../../atl/reference/catlfile-class.md#read). Per modificare la posizione del puntatore del file, chiamare [CAtlTemporaryFile::Seek](#seek).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).  
  
##  <a name="seek"></a>CAtlTemporaryFile::Seek  
 Chiamare questo metodo per spostare il puntatore del file del file temporaneo.  
  
```
HRESULT Seek(LONGLONG nOffset, DWORD dwFrom = FILE_CURRENT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nOffset`  
 Offset, in byte, dal punto di partenza specificato da *dwFrom.*  
  
 `dwFrom`  
 Il punto di partenza (FILE_BEGIN, FILE_CURRENT o FILE_END).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [CAtlFile::Seek](../../atl/reference/catlfile-class.md#seek). Per ottenere la posizione del puntatore file corrente, chiamare [CAtlTemporaryFile::GetPosition](#getposition).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).  
  
##  <a name="setsize"></a>CAtlTemporaryFile::SetSize  
 Chiamare questo metodo per impostare le dimensioni del file temporaneo.  
  
```
HRESULT SetSize(ULONGLONG nNewLen) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nNewLen`  
 La nuova lunghezza del file in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [CAtlFile::SetSize](../../atl/reference/catlfile-class.md#setsize). La restituzione, il puntatore del file è posizionato alla fine del file.  
  
##  <a name="tempfilename"></a>CAtlTemporaryFile::TempFileName  
 Chiamare questo metodo per restituire il nome del file temporaneo.  
  
```
LPCTSTR TempFileName() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il `LPCTSTR` che punta al nome del file.  
  
### <a name="remarks"></a>Note  
 Il nome del file viene generato in [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile) con una chiamata al [GetTempFile](http://msdn.microsoft.com/library/windows/desktop/aa364991) [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] (funzione). L'estensione del file sarà sempre "TFR" per il file temporaneo.  
  
##  <a name="unlockrange"></a>CAtlTemporaryFile::UnlockRange  
 Chiamare questo metodo per sbloccare un'area del file temporaneo.  
  
```
HRESULT UnlockRange(ULONGLONG nPos, ULONGLONG nCount) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 La posizione del file in cui deve iniziare lo sblocco.  
  
 `nCount`  
 La lunghezza dell'intervallo di byte da sbloccare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [CAtlFile::UnlockRange](../../atl/reference/catlfile-class.md#unlockrange).  
  
##  <a name="write"></a>CAtlTemporaryFile::Write  
 Chiamare questo metodo per scrivere il file temporaneo a partire dalla posizione indicata dal puntatore del file di dati.  
  
```
HRESULT Write(  
    LPCVOID pBuffer,
    DWORD nBufSize,
    DWORD* pnBytesWritten = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pBuffer`  
 Buffer contenente i dati da scrivere nel file.  
  
 `nBufSize`  
 Il numero di byte da trasferire dal buffer.  
  
 `pnBytesWritten`  
 Numero di byte scritti.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [CAtlFile::Write](../../atl/reference/catlfile-class.md#write).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CAtlTemporaryFile:: CAtlTemporaryFile](#catltemporaryfile).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CAtlFile](../../atl/reference/catlfile-class.md)

