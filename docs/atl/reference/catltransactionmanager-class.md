---
title: Classe CAtlTransactionManager | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- CAtlTransactionManager
- ATLTRANSACTIONMANAGER/ATL::CAtlTransactionManager
- ATLTRANSACTIONMANAGER/ATL::Close
- ATLTRANSACTIONMANAGER/ATL::Commit
- ATLTRANSACTIONMANAGER/ATL::Create
- ATLTRANSACTIONMANAGER/ATL::CreateFile
- ATLTRANSACTIONMANAGER/ATL::DeleteFile
- ATLTRANSACTIONMANAGER/ATL::FindFirstFile
- ATLTRANSACTIONMANAGER/ATL::GetFileAttributes
- ATLTRANSACTIONMANAGER/ATL::GetFileAttributesEx
- ATLTRANSACTIONMANAGER/ATL::GetHandle
- ATLTRANSACTIONMANAGER/ATL::IsFallback
- ATLTRANSACTIONMANAGER/ATL::MoveFile
- ATLTRANSACTIONMANAGER/ATL::RegCreateKeyEx
- ATLTRANSACTIONMANAGER/ATL::RegDeleteKey
- ATLTRANSACTIONMANAGER/ATL::RegOpenKeyEx
- ATLTRANSACTIONMANAGER/ATL::Rollback
- ATLTRANSACTIONMANAGER/ATL::SetFileAttributes
- ATLTRANSACTIONMANAGER/ATL::m_bFallback
- ATLTRANSACTIONMANAGER/ATL::m_hTransaction
dev_langs:
- C++
helpviewer_keywords:
- CAtlTransactionManager class
ms.assetid: b01732dc-1d16-4b42-bfac-b137fca2b740
caps.latest.revision: 25
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0def8aa809cd1ccc115ccc2a09b1ae752316098f
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="catltransactionmanager-class"></a>Classe CAtlTransactionManager
Classe CAtlTransactionManager fornisce un wrapper per le funzioni di gestione transazioni (kernel).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAtlTransactionManager;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[~ CAtlTransactionManager](#dtor)|Distruttore CAtlTransactionManager.|  
|[CAtlTransactionManager](#catltransactionmanager)|Costruttore CAtlTransactionManager.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Chiudi](#close)|Chiude una l'handle della transazione.|  
|[Eseguire il commit](#commit)|Richieste che eseguire il commit della transazione.|  
|[Creare](#create)|Crea l'handle della transazione.|  
|[CreateFile](#createfile)|Crea o apre un file, un flusso di file o directory come un'operazione transazionale.|  
|[DeleteFile](#deletefile)|Elimina un file esistente come un'operazione transazionale.|  
|[FindFirstFile](#findfirstfile)|Cerca una directory per un file o sottodirectory di un'operazione transazionale.|  
|[GetFileAttributes](#getfileattributes)|Recupera gli attributi di file system per un file o directory specificata come un'operazione transazionale.|  
|[GetFileAttributesEx](#getfileattributesex)|Recupera gli attributi di file system per un file o directory specificata come un'operazione transazionale.|  
|[GetHandle](#gethandle)|Restituisce l'handle della transazione.|  
|[IsFallback](#isfallback)|Determina se le chiamate di fallback sono abilitate.|  
|[MoveFile](#movefile)|Sposta un file esistente o una directory, inclusi i relativi elementi figlio, come un'operazione transazionale.|  
|[RegCreateKeyEx](#regcreatekeyex)|Crea la chiave del Registro di sistema specificato e lo associa a una transazione. Se la chiave esiste già, la funzione si apre.|  
|[RegDeleteKey](#regdeletekey)|Elimina una sottochiave e i relativi valori dalla visualizzazione del Registro di sistema specifiche della piattaforma specificata come un'operazione transazionale.|  
|[RegOpenKeyEx](#regopenkeyex)|Apre la chiave del Registro di sistema specificato e lo associa a una transazione.|  
|[Rollback](#rollback)|Richieste che è possibile eseguire il rollback della transazione.|  
|[SetFileAttributes](#setfileattributes)|Imposta gli attributi per un file o directory come un'operazione transazionale.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[m_bFallback](#m_bfallback)|`TRUE`Se il fallback è supportato. `FALSE` in caso contrario.|  
|[m_hTransaction](#m_htransaction)|L'handle della transazione.|  
  
## <a name="remarks"></a>Note  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ATL::CAtlTransactionManager](../../atl/reference/catltransactionmanager-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltransactionmanager.h  
  
##  <a name="dtor"></a>~ CAtlTransactionManager  
 Distruttore CAtlTransactionManager.  
  
```
virtual ~CAtlTransactionManager();
```  
  
### <a name="remarks"></a>Note  
 Nella normale elaborazione, la transazione viene automaticamente eseguito il commit e chiuso. Se il distruttore viene chiamato durante un'operazione di rimozione di eccezione, la transazione viene eseguito il rollback e chiuso.  
  
##  <a name="catltransactionmanager"></a>CAtlTransactionManager  
 Costruttore CAtlTransactionManager.  
  
```
CAtlTransactionManager(BOOL bFallback = TRUE, BOOL bAutoCreateTransaction = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bFallback`  
 `TRUE`indica il fallback di supporto. Se la funzione sottoposta a transazione non riesce, la classe chiama automaticamente la funzione "non in transazioni". `FALSE`non indica nessuna chiamata "fallback".  
  
 `bAutoCreateTransaction`  
 `TRUE`indica che il gestore delle transazioni viene creato automaticamente nel costruttore. `FALSE`indica che non è.  
  
### <a name="remarks"></a>Note  
  
##  <a name="close"></a>Chiudere  
 Chiude l'handle della transazione.  
  
```
inline BOOL Close();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `CloseHandle` (funzione). Il metodo viene chiamato automaticamente nel distruttore.  
  
##  <a name="commit"></a>Eseguire il commit  
 Richieste che eseguire il commit della transazione.  
  
```
inline BOOL Commit();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `CommitTransaction` (funzione). Il metodo viene chiamato automaticamente nel distruttore.  
  
##  <a name="create"></a>Creare  
 Crea l'handle della transazione.  
  
```
inline BOOL Create();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `CreateTransaction` (funzione). Per controllare  
  
##  <a name="createfile"></a>CreateFile  
 Crea o apre un file, un flusso di file o directory come un'operazione transazionale.  
  
```
inline HANDLE CreateFile(
  LPCTSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes,
    HANDLE hTemplateFile);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFileName`  
 Il nome di un oggetto può essere creato o aperto.  
  
 `dwDesiredAccess`  
 L'accesso all'oggetto, che può essere riepilogato come lettura, scrittura, entrambi o Nessuno (zero). I valori più diffusi sono GENERIC_READ, GENERIC_WRITE o entrambi: GENERIC_READ &#124; GENERIC_WRITE.  
  
 `dwShareMode`  
 La modalità di condivisione di un oggetto che può essere di lettura, scrittura, entrambi, eliminare, tutti questi o none: 0, FILE_SHARE_DELETE, FILE_SHARE_READ, FILE_SHARE_WRITE.  
  
 `lpSecurityAttributes`  
 Un puntatore a una struttura SECURITY_ATTRIBUTES che contiene un descrittore di sicurezza facoltativo e determina se l'handle restituito può essere ereditato dai processi figlio. Il parametro può essere `NULL`.  
  
 `dwCreationDisposition`  
 Un'operazione da eseguire sui file che esistano e non esistono. Questo parametro deve essere uno dei valori seguenti, che non possono essere combinati: CREATE_ALWAYS, CREATE_NEW, OPEN_ALWAYS, OPEN_EXISTING o TRUNCATE_EXISTING.  
  
 `dwFlagsAndAttributes`  
 Il flag e gli attributi di file. Questo parametro può includere qualsiasi combinazione degli attributi di file disponibili (FILE_ATTRIBUTE_ *). Tutti gli altri attributi di file di eseguire l'override FILE_ATTRIBUTE_NORMAL. Questo parametro può contenere anche le combinazioni di flag (FILE_FLAG_\*) per il controllo del comportamento di memorizzazione nel buffer, accedere a modalità e altri flag speciale. La loro combinazione con qualsiasi FILE_ATTRIBUTE_\* valori.  
  
 `hTemplateFile`  
 Un handle valido in un file di modello con il diritto di accesso GENERIC_READ. Il file del modello fornisce gli attributi di file e agli attributi estesi per il file che viene creato. Questo parametro può essere `NULL`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle che può essere usato per accedere all'oggetto.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `CreateFileTransacted` (funzione).  
  
##  <a name="deletefile"></a>DeleteFile  
 Elimina un file esistente come un'operazione transazionale.  
  
```
inline BOOL DeleteFile(LPCTSTR lpFileName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFileName`  
 Nome del file da eliminare.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `DeleteFileTransacted` (funzione).  
  
##  <a name="findfirstfile"></a>FindFirstFile  
 Cerca una directory per un file o sottodirectory di un'operazione transazionale.  
  
```
inline HANDLE FindFirstFile(
  LPCTSTR lpFileName,
  WIN32_FIND_DATA* pNextInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFileName`  
 La directory o percorso e il nome del file da cercare. Questo parametro può includere caratteri jolly, ad esempio un asterisco (*) o una (punto interrogativo).  
  
 `pNextInfo`  
 Puntatore alla struttura WIN32_FIND_DATA che riceve informazioni relative a un file trovato o una sottodirectory.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è un handle di ricerca utilizzato in una chiamata successiva a `FindNextFile` o `FindClose`. Se la funzione ha esito negativo o non riesce a individuare i file dalla stringa di ricerca nel `lpFileName` parametro, il valore restituito è INVALID_HANDLE_VALUE.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `FindFirstFileTransacted` (funzione).  
  
##  <a name="getfileattributes"></a>GetFileAttributes  
 Recupera gli attributi di file system per un file o directory specificata come un'operazione transazionale.  
  
```
inline DWORD GetFileAttributes(LPCTSTR lpFileName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFileName`  
 Il nome del file o directory.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `GetFileAttributesTransacted` (funzione).  
  
##  <a name="getfileattributesex"></a>GetFileAttributesEx  
 Recupera gli attributi di file system per un file o directory specificata come un'operazione transazionale.  
  
```
inline BOOL GetFileAttributesEx(
    LPCTSTR lpFileName,
    GET_FILEEX_INFO_LEVELS fInfoLevelId,
    LPVOID lpFileInformation);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFileName`  
 Il nome del file o directory.  
  
 `fInfoLevelId`  
 Il livello di informazioni di attributo da recuperare.  
  
 `lpFileInformation`  
 Un puntatore a un buffer che riceve le informazioni sugli attributi. Il tipo di informazioni sugli attributi che vengono archiviati in questo buffer viene determinato dal valore di `fInfoLevelId`. Se il `fInfoLevelId` parametro è GetFileExInfoStandard quindi questo parametro punta a una struttura WIN32_FILE_ATTRIBUTE_DATA.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `GetFileAttributesTransacted` (funzione).  
  
##  <a name="gethandle"></a>GetHandle  
 Restituisce l'handle della transazione.  
  
```
HANDLE GetHandle() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle della transazione per una classe. Restituisce `NULL` se il `CAtlTransactionManager` non è collegato a un handle.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isfallback"></a>IsFallback  
 Determina se le chiamate di fallback sono abilitate.  
  
```
BOOL IsFallback() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` è la classe supporta la chiamata di fallback. In caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_bfallback"></a>m_bFallback  
 `TRUE`Se il fallback è supportato. `FALSE` in caso contrario.  
  
```
BOOL m_bFallback;
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_htransaction"></a>m_hTransaction  
 L'handle della transazione.  
  
```
HANDLE m_hTransaction;
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="movefile"></a>MoveFile  
 Sposta un file esistente o una directory, inclusi i relativi elementi figlio, come un'operazione transazionale.  
  
```
inline BOOL MoveFile(LPCTSTR lpOldFileName, LPCTSTR lpNewFileName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpOldFileName`  
 Il nome corrente del file esistente o della directory nel computer locale.  
  
 `lpNewFileName`  
 Il nuovo nome per il file o directory. Questo nome non deve esistere già. Un nuovo file potrebbe essere in un'unità o un sistema di file diverso. Una nuova directory deve essere nella stessa unità.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `MoveFileTransacted` (funzione).  
  
##  <a name="regcreatekeyex"></a>RegCreateKeyEx  
 Crea la chiave del Registro di sistema specificato e lo associa a una transazione. Se la chiave esiste già, la funzione si apre.  
  
```
inline LSTATUS RegCreateKeyEx(
    HKEY hKey,
    LPCTSTR lpSubKey,
    DWORD dwReserved,
    LPTSTR lpClass,
    DWORD dwOptions,
    REGSAM samDesired,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    PHKEY phkResult,
    LPDWORD lpdwDisposition);
```  
  
### <a name="parameters"></a>Parametri  
 `hKey`  
 Un handle a una chiave del Registro di sistema aprire.  
  
 `lpSubKey`  
 Il nome di una sottochiave che questa funzione apre o crea.  
  
 `dwReserved`  
 Questo parametro è riservato e deve essere zero.  
  
 `lpClass`  
 La classe definita dall'utente di questa chiave. Questo parametro può essere ignorato. Questo parametro può essere NULL.  
  
 `dwOptions`  
 Questo parametro può essere uno dei seguenti valori: REG_OPTION_BACKUP_RESTORE, REG_OPTION_NON_VOLATILE o REG_OPTION_VOLATILE.  
  
 `samDesired`  
 Maschera che specifica i diritti di accesso per la chiave.  
  
 `lpSecurityAttributes`  
 Puntatore a una struttura SECURITY_ATTRIBUTES che determina se l'handle restituito può essere ereditato dai processi figlio. Se `lpSecurityAttributes` è `NULL`, l'handle non può essere ereditato.  
  
 `phkResult`  
 Puntatore a una variabile che riceve un handle per la chiave creata o aperta. Se la chiave non è una delle chiavi del Registro di sistema predefinito, chiamare il `RegCloseKey` dopo aver terminato di utilizzare l'handle.  
  
 `lpdwDisposition`  
 Un puntatore a una variabile che riceve il disposizione con i valori possibili seguenti: REG_CREATED_NEW_KEY o REG_OPENED_EXISTING_KEY.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `RegCreateKeyTransacted` (funzione).  
  
##  <a name="regdeletekey"></a>RegDeleteKey  
 Elimina una sottochiave e i relativi valori dalla visualizzazione del Registro di sistema specifiche della piattaforma specificata come un'operazione transazionale.  
  
```
inline LSTATUS RegDeleteKeyEx(HKEY hKey, LPCTSTR lpSubKey);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`hKey`|Un handle a una chiave del Registro di sistema aprire.|  
|`lpSubKey`|Il nome della chiave da eliminare.|  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `RegDeleteKeyTransacted` (funzione).  
  
##  <a name="regopenkeyex"></a>RegOpenKeyEx  
 Apre la chiave del Registro di sistema specificato e lo associa a una transazione.  
  
```
inline LSTATUS RegOpenKeyEx(
    HKEY hKey,
    LPCTSTR lpSubKey,
    DWORD ulOptions,
    REGSAM samDesired,
    PHKEY phkResult);
```  
  
### <a name="parameters"></a>Parametri  
 `hKey`  
 Un handle a una chiave del Registro di sistema aprire.  
  
 `lpSubKey`  
 Il nome della sottochiave del Registro di sistema da aprire.  
  
 `ulOptions`  
 Questo parametro è riservato e deve essere zero.  
  
 `samDesired`  
 Maschera che specifica i diritti di accesso per la chiave.  
  
 `phkResult`  
 Puntatore a una variabile che riceve un handle per la chiave creata o aperta. Se la chiave non è una delle chiavi del Registro di sistema predefinito, chiamare il `RegCloseKey` dopo aver terminato di utilizzare l'handle.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `RegOpenKeyTransacted` (funzione).  
  
##  <a name="rollback"></a>Rollback  
 Richieste che è possibile eseguire il rollback della transazione.  
  
```
inline BOOL Rollback();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `RollbackTransaction` (funzione).  
  
##  <a name="setfileattributes"></a>SetFileAttributes  
 Imposta gli attributi per un file o directory come un'operazione transazionale.  
  
```
inline BOOL SetFileAttributes(LPCTSTR lpFileName, DWORD dwAttributes);
```  
  
### <a name="parameters"></a>Parametri  
 `lpFileName`  
 Il nome del file o directory.  
  
 `dwAttributes`  
 Gli attributi del file da impostare per il file. Per ulteriori informazioni, vedere [SetFileAttributesTransacted](http://go.microsoft.com/fwlink/p/?linkid=158699).  
  
### <a name="remarks"></a>Note  
 Il wrapper chiama il `SetFileAttributesTransacted` (funzione).  
  
## <a name="see-also"></a>Vedere anche  
 [Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)
