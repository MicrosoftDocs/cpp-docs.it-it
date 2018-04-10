---
title: Classe CAtlFile | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- CAtlFile
- ATLFILE/ATL::CAtlFile
- ATLFILE/ATL::CAtlFile::CAtlFile
- ATLFILE/ATL::CAtlFile::Create
- ATLFILE/ATL::CAtlFile::Flush
- ATLFILE/ATL::CAtlFile::GetOverlappedResult
- ATLFILE/ATL::CAtlFile::GetPosition
- ATLFILE/ATL::CAtlFile::GetSize
- ATLFILE/ATL::CAtlFile::LockRange
- ATLFILE/ATL::CAtlFile::Read
- ATLFILE/ATL::CAtlFile::Seek
- ATLFILE/ATL::CAtlFile::SetSize
- ATLFILE/ATL::CAtlFile::UnlockRange
- ATLFILE/ATL::CAtlFile::Write
- ATLFILE/ATL::CAtlFile::m_pTM
dev_langs:
- C++
helpviewer_keywords:
- CAtlFile class
ms.assetid: 93ed160b-af2a-448c-9cbe-e5fa46c199bb
caps.latest.revision: 23
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a66e697a3599e7bfeef0f1d5d147e19b668222ce
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="catlfile-class"></a>Classe CAtlFile
Questa classe fornisce un semplice wrapper per le finestre di API di gestione di file.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAtlFile : public CHandle
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlFile::CAtlFile](#catlfile)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlFile::Create](#create)|Chiamare questo metodo per creare o aprire un file.|  
|[CAtlFile::Flush](#flush)|Chiamare questo metodo per cancellare il buffer per il file e che tutti i dati memorizzati nel buffer in cui scrivere il file.|  
|[CAtlFile::GetOverlappedResult](#getoverlappedresult)|Chiamare questo metodo per ottenere i risultati di un'operazione sovrapposta sul file.|  
|[CAtlFile::GetPosition](#getposition)|Chiamare questo metodo per ottenere la posizione corrente del puntatore di file dal file.|  
|[CAtlFile::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione in byte del file.|  
|[CAtlFile::LockRange](#lockrange)|Chiamare questo metodo per bloccare un'area nel file per impedire l'accesso di altri processi.|  
|[CAtlFile::Read](#read)|Chiamare questo metodo per leggere i dati da un file a partire dalla posizione indicata dal puntatore del file.|  
|[CAtlFile::Seek](#seek)|Chiamare questo metodo per spostare il puntatore del file del file.|  
|[CAtlFile::SetSize](#setsize)|Chiamare questo metodo per impostare le dimensioni del file.|  
|[CAtlFile::UnlockRange](#unlockrange)|Chiamare questo metodo per sbloccare un'area del file.|  
|[CAtlFile::Write](#write)|Chiamare questo metodo per scrivere il file a partire dalla posizione indicata dal puntatore del file di dati.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CAtlFile::m_pTM](#m_ptm)|Puntatore a `CAtlTransactionManager` oggetto|  
  
## <a name="remarks"></a>Note  
 Utilizzare questa classe quando esigenze di gestione dei file sono relativamente semplici, ma maggiore di astrazione che fornisce l'API di Windows è necessario, senza includere le dipendenze MFC.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CHandle](../../atl/reference/chandle-class.md)  
  
 `CAtlFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlfile.h  
  
##  <a name="catlfile"></a>CAtlFile::CAtlFile  
 Costruttore.  
  
```
CAtlFile() throw();
CAtlFile(CAtlTransactionManager* pTM = NULL) throw();
CAtlFile(CAtlFile& file) throw();
explicit CAtlFile(HANDLE hFile) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `file`  
 L'oggetto file.  
  
 `hFile`  
 L'handle di file.  
  
 `pTM`  
 Puntatore all'oggetto CAtlTransactionManager  
  
### <a name="remarks"></a>Note  
 Il costruttore di copia trasferisce la proprietà dell'handle di file da originale `CAtlFile` all'oggetto appena creata.  
  
##  <a name="create"></a>CAtlFile::Create  
 Chiamare questo metodo per creare o aprire un file.  
  
```
HRESULT Create(
    LPCTSTR szFilename,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes = FILE_ATTRIBUTE_NORMAL,
    LPSECURITY_ATTRIBUTES lpsa = NULL,
    HANDLE hTemplateFile = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *szFilename*  
 Nome file.  
  
 `dwDesiredAccess`  
 L'accesso desiderato. Vedere `dwDesiredAccess` in [CreateFile](http://msdn.microsoft.com/library/windows/desktop/aa363858) in Windows SDK.  
  
 `dwShareMode`  
 La modalità di condivisione. Vedere `dwShareMode` in **CreateFile**.  
  
 `dwCreationDisposition`  
 La disposizione di creazione. Vedere `dwCreationDisposition` in **CreateFile**.  
  
 `dwFlagsAndAttributes`  
 I flag e gli attributi. Vedere `dwFlagsAndAttributes` in **CreateFile**.  
  
 `lpsa`  
 Gli attributi di sicurezza. Vedere *lpSecurityAttributes* in **CreateFile**.  
  
 `hTemplateFile`  
 Il file di modello. Vedere `hTemplateFile` in **CreateFile**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [CreateFile](http://msdn.microsoft.com/library/windows/desktop/aa363858) per creare o aprire il file.  
  
##  <a name="flush"></a>CAtlFile::Flush  
 Chiamare questo metodo per cancellare il buffer per il file e che tutti i dati memorizzati nel buffer in cui scrivere il file.  
  
```
HRESULT Flush() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [FlushFileBuffers](http://msdn.microsoft.com/library/windows/desktop/aa364439) lo scaricamento di dati memorizzati nel buffer nel file.  
  
##  <a name="getoverlappedresult"></a>CAtlFile::GetOverlappedResult  
 Chiamare questo metodo per ottenere i risultati di un'operazione sovrapposta sul file.  
  
```
HRESULT GetOverlappedResult(
    LPOVERLAPPED pOverlapped,
    DWORD& dwBytesTransferred,
    BOOL bWait) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pOverlapped`  
 La struttura sovrapposta. Vedere `lpOverlapped` in [GetOverlappedResult](http://msdn.microsoft.com/library/windows/desktop/ms683209) in Windows SDK.  
  
 *dwBytesTransferred*  
 I byte trasferiti. Vedere *lpNumberOfBytesTransferred* in `GetOverlappedResult`.  
  
 `bWait`  
 L'opzione di attesa. Vedere `bWait` in `GetOverlappedResult`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [GetOverlappedResult](http://msdn.microsoft.com/library/windows/desktop/ms683209) per ottenere i risultati di un'operazione sovrapposta sul file.  
  
##  <a name="getposition"></a>CAtlFile::GetPosition  
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
 Chiamate [SetFilePointer](http://msdn.microsoft.com/library/windows/desktop/aa365541) per ottenere la posizione del puntatore file corrente.  
  
##  <a name="getsize"></a>CAtlFile::GetSize  
 Chiamare questo metodo per ottenere la dimensione in byte del file.  
  
```
HRESULT GetSize(ULONGLONG& nLen) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nLen`  
 Il numero di byte nel file.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [GetFileSize](http://msdn.microsoft.com/library/windows/desktop/aa364955) per ottenere la dimensione in byte del file.  
  
##  <a name="lockrange"></a>CAtlFile::LockRange  
 Chiamare questo metodo per bloccare un'area nel file per impedire l'accesso di altri processi.  
  
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
 Chiamate [era](http://msdn.microsoft.com/library/windows/desktop/aa365202) di bloccare un'area nel file. Il blocco di byte in un file impedisce l'accesso a tali byte da altri processi. È possibile bloccare più di una parte di un file, ma non le aree di sovrapposizione sono consentite. Quando si sblocca un'area, utilizzando [CAtlFile::UnlockRange](#unlockrange), l'intervallo di byte deve corrispondere esattamente all'area in cui è stato bloccato in precedenza. `LockRange`non vengono unite le aree adiacenti. Se due aree bloccate sono adiacenti, è necessario sbloccare ogni separatamente.  
  
##  <a name="m_ptm"></a>CAtlFile::m_pTM  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
```
CAtlTransactionManager* m_pTM;
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="read"></a>CAtlFile::Read  
 Chiamare questo metodo per leggere i dati da un file a partire dalla posizione indicata dal puntatore del file.  
  
```
HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize) throw();

HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    DWORD& nBytesRead) throw();

HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped) throw();

HRESULT Read(
    LPVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped,
    LPOVERLAPPED_COMPLETION_ROUTINE pfnCompletionRoutine) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pBuffer`  
 Puntatore al buffer che riceverà i dati letti dal file.  
  
 `nBufSize`  
 Dimensioni del buffer, in byte.  
  
 `nBytesRead`  
 Numero di byte letti.  
  
 `pOverlapped`  
 La struttura sovrapposta. Vedere `lpOverlapped` in [ReadFile](http://msdn.microsoft.com/library/windows/desktop/aa365467) in Windows SDK.  
  
 `pfnCompletionRoutine`  
 La routine di completamento. Vedere *lpCompletionRoutine* in [ReadFileEx](http://msdn.microsoft.com/library/windows/desktop/aa365468) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 I primi tre moduli chiamare [ReadFile](http://msdn.microsoft.com/library/windows/desktop/aa365467), l'ultima [ReadFileEx](http://msdn.microsoft.com/library/windows/desktop/aa365468) per leggere i dati dal file. Utilizzare [CAtlFile::Seek](#seek) per spostare il puntatore del file.  
  
##  <a name="seek"></a>CAtlFile::Seek  
 Chiamare questo metodo per spostare il puntatore del file del file.  
  
```
HRESULT Seek(
    LONGLONG nOffset,
    DWORD dwFrom = FILE_CURRENT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nOffset`  
 L'offset dal punto di partenza fornito da `dwFrom`.  
  
 `dwFrom`  
 Punto di partenza (FILE_BEGIN, FILE_CURRENT o FILE_END).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [SetFilePointer](http://msdn.microsoft.com/library/windows/desktop/aa365541) per spostare il puntatore del file.  
  
##  <a name="setsize"></a>CAtlFile::SetSize  
 Chiamare questo metodo per impostare le dimensioni del file.  
  
```
HRESULT SetSize(ULONGLONG nNewLen) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nNewLen`  
 Nuova lunghezza del file in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Chiamate [SetFilePointer](http://msdn.microsoft.com/library/windows/desktop/aa365541) e [SetEndOfFile](http://msdn.microsoft.com/library/windows/desktop/aa365531) per impostare le dimensioni del file. In fase di restituzione, il puntatore del file è posizionato alla fine del file.  
  
##  <a name="unlockrange"></a>CAtlFile::UnlockRange  
 Chiamare questo metodo per sbloccare un'area del file.  
  
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
 Chiamate [UnlockFile](http://msdn.microsoft.com/library/windows/desktop/aa365715) per sbloccare un'area del file.  
  
##  <a name="write"></a>CAtlFile::Write  
 Chiamare questo metodo per scrivere il file a partire dalla posizione indicata dal puntatore del file di dati.  
  
```
HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped,
    LPOVERLAPPED_COMPLETION_ROUTINE pfnCompletionRoutine) throw();

HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    DWORD* pnBytesWritten = NULL) throw();

HRESULT Write(
    LPCVOID pBuffer,
    DWORD nBufSize,
    LPOVERLAPPED pOverlapped) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pBuffer`  
 Buffer contenente i dati da scrivere nel file.  
  
 `nBufSize`  
 Il numero di byte da trasferire dal buffer.  
  
 `pOverlapped`  
 La struttura sovrapposta. Vedere `lpOverlapped` in [WriteFile](http://msdn.microsoft.com/library/windows/desktop/aa365747) in Windows SDK.  
  
 `pfnCompletionRoutine`  
 La routine di completamento. Vedere *lpCompletionRoutine* in [WriteFileEx](http://msdn.microsoft.com/library/windows/desktop/aa365748) in Windows SDK.  
  
 `pnBytesWritten`  
 Byte scritti.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo o un errore `HRESULT` in caso di errore.  
  
### <a name="remarks"></a>Note  
 I primi tre moduli chiamare [WriteFile](http://msdn.microsoft.com/library/windows/desktop/aa365747), le chiamate ultimo [WriteFileEx](http://msdn.microsoft.com/library/windows/desktop/aa365748) per scrivere il file di dati. Utilizzare [CAtlFile::Seek](#seek) per spostare il puntatore del file.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di testo scorrevole](../../visual-cpp-samples.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CHandle](../../atl/reference/chandle-class.md)
