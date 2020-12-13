---
description: "Altre informazioni su: classe all'CAtlTransactionManager"
title: Classe all'CAtlTransactionManager
ms.date: 11/04/2016
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
helpviewer_keywords:
- CAtlTransactionManager class
ms.assetid: b01732dc-1d16-4b42-bfac-b137fca2b740
ms.openlocfilehash: 25d5ea7e9b4838f483dd7f9ee408cdd5bd4c88cb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147186"
---
# <a name="catltransactionmanager-class"></a>Classe all'CAtlTransactionManager

La classe all'CAtlTransactionManager fornisce un wrapper per le funzioni di gestione transazioni kernel.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
class CAtlTransactionManager;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[~ All'CAtlTransactionManager](#dtor)|Distruttore all'CAtlTransactionManager.|
|[All'CAtlTransactionManager](#catltransactionmanager)|Costruttore all'CAtlTransactionManager.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[Close](#close)|Chiude un handle di transazione.|
|[Eseguire il commit](#commit)|Richiede che venga eseguito il commit della transazione.|
|[Creare](#create)|Crea l'handle della transazione.|
|[CreateFile](#createfile)|Crea o apre un file, un flusso di file o una directory come operazione transazionale.|
|[DeleteFile](#deletefile)|Elimina un file esistente come operazione transazionale.|
|[FindFirstFile](#findfirstfile)|Esegue la ricerca di un file o di una sottodirectory in una directory come operazione transazionale.|
|[GetFileAttributes](#getfileattributes)|Recupera gli attributi file system per un file o una directory specificata come operazione transazionale.|
|[GetFileAttributesEx](#getfileattributesex)|Recupera gli attributi file system per un file o una directory specificata come operazione transazionale.|
|[GetHandle](#gethandle)|Restituisce l'handle di transazione.|
|[Fallback](#isfallback)|Determina se le chiamate di fallback sono abilitate.|
|[MoveFile](#movefile)|Sposta un file o una directory esistente, inclusi i relativi elementi figlio, come operazione transazionale.|
|[RegCreateKeyEx](#regcreatekeyex)|Crea la chiave del registro di sistema specificata e la associa a una transazione. Se la chiave esiste già, la funzione la apre.|
|[RegDeleteKey](#regdeletekey)|Elimina una sottochiave e i relativi valori dalla visualizzazione specifica della piattaforma specificata del registro di sistema come operazione transazionale.|
|[RegOpenKeyEx](#regopenkeyex)|Apre la chiave del registro di sistema specificata e la associa a una transazione.|
|[Rollback](#rollback)|Richiede che venga eseguito il rollback della transazione.|
|[SetFileAttributes](#setfileattributes)|Imposta gli attributi per un file o una directory come operazione transazionale.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[m_bFallback](#m_bfallback)|TRUE se il fallback è supportato. In caso contrario, FALSE.|
|[m_hTransaction](#m_htransaction)|Handle di transazione.|

## <a name="remarks"></a>Commenti

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ATL:: all'CAtlTransactionManager](../../atl/reference/catltransactionmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** atltransactionmanager. h

## <a name="catltransactionmanager"></a><a name="dtor"></a>  ~ All'CAtlTransactionManager

Distruttore all'CAtlTransactionManager.

```cpp
virtual ~CAtlTransactionManager();
```

### <a name="remarks"></a>Commenti

Nell'elaborazione normale, la transazione viene automaticamente sottoposta a commit e chiusa. Se il distruttore viene chiamato durante la rimozione di un'eccezione, viene eseguito il rollback e la chiusura della transazione.

## <a name="catltransactionmanager"></a><a name="catltransactionmanager"></a> All'CAtlTransactionManager

Costruttore all'CAtlTransactionManager.

```cpp
CAtlTransactionManager(BOOL bFallback = TRUE, BOOL bAutoCreateTransaction = TRUE);
```

### <a name="parameters"></a>Parametri

*bFallback*<br/>
TRUE indica il fallback del supporto. Se la funzione transazionale ha esito negativo, la classe chiama automaticamente la funzione "non transazionale". FALSE indica nessuna chiamata di "fallback".

*bAutoCreateTransaction*<br/>
TRUE indica che il gestore transazioni viene creato automaticamente nel costruttore. FALSE indica che non lo è.

### <a name="remarks"></a>Commenti

## <a name="close"></a><a name="close"></a> Vicino

Chiude l'handle di transazione.

```cpp
inline BOOL Close();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `CloseHandle` funzione. Il metodo viene chiamato automaticamente nel distruttore.

## <a name="commit"></a><a name="commit"></a> Commit

Richiede che venga eseguito il commit della transazione.

```cpp
inline BOOL Commit();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `CommitTransaction` funzione. Il metodo viene chiamato automaticamente nel distruttore.

## <a name="create"></a><a name="create"></a> Creare

Crea l'handle della transazione.

```cpp
inline BOOL Create();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `CreateTransaction` funzione. Verifica

## <a name="createfile"></a><a name="createfile"></a> CreateFile

Crea o apre un file, un flusso di file o una directory come operazione transazionale.

```cpp
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

*lpFileName*<br/>
Nome di un oggetto da creare o aprire.

*dwDesiredAccess*<br/>
Accesso all'oggetto, che può essere riepilogato come Read, Write, both o nessuno dei due (zero). I valori usati più di frequente sono GENERIC_READ, GENERIC_WRITE o entrambi: GENERIC_READ &#124; GENERIC_WRITE.

*dwShareMode*<br/>
Modalità di condivisione di un oggetto, che può essere Read, Write, both, DELETE, all o None: 0, FILE_SHARE_DELETE, FILE_SHARE_READ, FILE_SHARE_WRITE.

*lpSecurityAttributes*<br/>
Puntatore a una struttura SECURITY_ATTRIBUTES che contiene un descrittore di sicurezza facoltativo e che determina se l'handle restituito può essere ereditato dai processi figlio. Il parametro può essere NULL.

*dwCreationDisposition*<br/>
Azione da eseguire sui file esistenti e che non esistono. Questo parametro deve essere uno dei valori seguenti, che non possono essere combinati: CREATE_ALWAYS, CREATE_NEW, OPEN_ALWAYS, OPEN_EXISTING o TRUNCATE_EXISTING.

*dwFlagsAndAttributes*<br/>
Attributi e flag del file. Questo parametro può includere qualsiasi combinazione degli attributi di file disponibili (FILE_ATTRIBUTE_ *). Tutti gli altri attributi di file eseguono l'override FILE_ATTRIBUTE_NORMAL. Questo parametro può inoltre contenere combinazioni di flag (FILE_FLAG_ \* ) per il controllo del comportamento del buffer, delle modalità di accesso e di altri flag per scopi specifici. Questi vengono combinati con qualsiasi \* valore FILE_ATTRIBUTE_.

*hTemplateFile*<br/>
Handle valido per un file modello con il diritto di accesso GENERIC_READ. Il file modello fornisce attributi di file ed attributi estesi per il file in fase di creazione. Questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Restituisce un handle che può essere utilizzato per accedere all'oggetto.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `CreateFileTransacted` funzione.

## <a name="deletefile"></a><a name="deletefile"></a> DeleteFile

Elimina un file esistente come operazione transazionale.

```cpp
inline BOOL DeleteFile(LPCTSTR lpFileName);
```

### <a name="parameters"></a>Parametri

*lpFileName*<br/>
Nome del file da eliminare.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `DeleteFileTransacted` funzione.

## <a name="findfirstfile"></a><a name="findfirstfile"></a> FindFirstFile

Esegue la ricerca di un file o di una sottodirectory in una directory come operazione transazionale.

```cpp
inline HANDLE FindFirstFile(
    LPCTSTR lpFileName,
    WIN32_FIND_DATA* pNextInfo);
```

### <a name="parameters"></a>Parametri

*lpFileName*<br/>
La directory o il percorso e il nome del file da cercare. Questo parametro può includere caratteri jolly, ad esempio un asterisco (*) o un punto interrogativo ().

*pNextInfo*<br/>
Puntatore alla struttura WIN32_FIND_DATA che riceve informazioni su un file o una sottodirectory trovata.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è un handle di ricerca utilizzato in una chiamata successiva a `FindNextFile` o `FindClose` . Se la funzione ha esito negativo o non riesce a individuare i file dalla stringa di ricerca nel parametro *lpFileName* , il valore restituito viene INVALID_HANDLE_VALUE.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `FindFirstFileTransacted` funzione.

## <a name="getfileattributes"></a><a name="getfileattributes"></a> GetFileAttributes

Recupera gli attributi file system per un file o una directory specificata come operazione transazionale.

```cpp
inline DWORD GetFileAttributes(LPCTSTR lpFileName);
```

### <a name="parameters"></a>Parametri

*lpFileName*<br/>
Nome del file o della directory.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `GetFileAttributesTransacted` funzione.

## <a name="getfileattributesex"></a><a name="getfileattributesex"></a> GetFileAttributesEx

Recupera gli attributi file system per un file o una directory specificata come operazione transazionale.

```cpp
inline BOOL GetFileAttributesEx(
    LPCTSTR lpFileName,
    GET_FILEEX_INFO_LEVELS fInfoLevelId,
    LPVOID lpFileInformation);
```

### <a name="parameters"></a>Parametri

*lpFileName*<br/>
Nome del file o della directory.

*fInfoLevelId*<br/>
Livello di informazioni sugli attributi da recuperare.

*lpFileInformation*<br/>
Puntatore a un buffer che riceve le informazioni sugli attributi. Il tipo di informazioni sugli attributi archiviato nel buffer è determinato dal valore di *fInfoLevelId*. Se il parametro *fInfoLevelId* è GetFileExInfoStandard, questo parametro punta a una struttura WIN32_FILE_ATTRIBUTE_DATA.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `GetFileAttributesTransacted` funzione.

## <a name="gethandle"></a><a name="gethandle"></a> GetHandle

Restituisce l'handle di transazione.

```cpp
HANDLE GetHandle() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle di transazione per una classe. Restituisce NULL se l'oggetto `CAtlTransactionManager` non è associato a un handle.

### <a name="remarks"></a>Commenti

## <a name="isfallback"></a><a name="isfallback"></a> Fallback

Determina se le chiamate di fallback sono abilitate.

```cpp
BOOL IsFallback() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la classe supporta le chiamate di fallback. In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="m_bfallback"></a><a name="m_bfallback"></a> m_bFallback

TRUE se il fallback è supportato. In caso contrario, FALSE.

```cpp
BOOL m_bFallback;
```

### <a name="remarks"></a>Commenti

## <a name="m_htransaction"></a><a name="m_htransaction"></a> m_hTransaction

Handle di transazione.

```cpp
HANDLE m_hTransaction;
```

### <a name="remarks"></a>Commenti

## <a name="movefile"></a><a name="movefile"></a> MoveFile

Sposta un file o una directory esistente, inclusi i relativi elementi figlio, come operazione transazionale.

```cpp
inline BOOL MoveFile(LPCTSTR lpOldFileName, LPCTSTR lpNewFileName);
```

### <a name="parameters"></a>Parametri

*lpOldFileName*<br/>
Nome corrente del file o della directory esistente nel computer locale.

*lpNewFileName*<br/>
Nuovo nome del file o della directory. Il nome non deve essere già esistente. Un nuovo file potrebbe trovarsi in una file system o in un'unità diversa. Una nuova directory deve trovarsi nella stessa unità.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `MoveFileTransacted` funzione.

## <a name="regcreatekeyex"></a><a name="regcreatekeyex"></a> RegCreateKeyEx

Crea la chiave del registro di sistema specificata e la associa a una transazione. Se la chiave esiste già, la funzione la apre.

```cpp
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

*hKey*<br/>
Handle per una chiave del registro di sistema aperta.

*lpSubKey*<br/>
Nome di una sottochiave aperta o creata da questa funzione.

*dwReserved*<br/>
Questo parametro è riservato e deve essere zero.

*lpClass*<br/>
Classe definita dall'utente della chiave. Questo parametro può essere ignorato. Questo parametro può essere NULL.

*dwOptions*<br/>
Il valore di questo parametro può essere uno dei seguenti: REG_OPTION_BACKUP_RESTORE, REG_OPTION_NON_VOLATILE o REG_OPTION_VOLATILE.

*samDesired*<br/>
Maschera che specifica i diritti di accesso per la chiave.

*lpSecurityAttributes*<br/>
Puntatore a una struttura SECURITY_ATTRIBUTES che determina se l'handle restituito può essere ereditato dai processi figlio. Se *lpSecurityAttributes* è null, l'handle non può essere ereditato.

*phkResult*<br/>
Puntatore a una variabile che riceve un handle per la chiave aperta o creata. Se la chiave non è una delle chiavi del registro di sistema predefinite, chiamare la `RegCloseKey` funzione dopo aver terminato di usare l'handle.

*lpdwDisposition*<br/>
Puntatore a una variabile che riceve uno dei seguenti valori di disposizione: REG_CREATED_NEW_KEY o REG_OPENED_EXISTING_KEY.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror. h.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `RegCreateKeyTransacted` funzione.

## <a name="regdeletekey"></a><a name="regdeletekey"></a> RegDeleteKey

Elimina una sottochiave e i relativi valori dalla visualizzazione specifica della piattaforma specificata del registro di sistema come operazione transazionale.

```cpp
inline LSTATUS RegDeleteKeyEx(HKEY hKey, LPCTSTR lpSubKey);
```

### <a name="parameters"></a>Parametri

*hKey*\
Handle per una chiave del registro di sistema aperta.

*lpSubKey*\
Nome della chiave da eliminare.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror. h.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `RegDeleteKeyTransacted` funzione.

## <a name="regopenkeyex"></a><a name="regopenkeyex"></a> RegOpenKeyEx

Apre la chiave del registro di sistema specificata e la associa a una transazione.

```cpp
inline LSTATUS RegOpenKeyEx(
    HKEY hKey,
    LPCTSTR lpSubKey,
    DWORD ulOptions,
    REGSAM samDesired,
    PHKEY phkResult);
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
Handle per una chiave del registro di sistema aperta.

*lpSubKey*<br/>
Nome della sottochiave del registro di sistema da aprire.

*ulOptions*<br/>
Questo parametro è riservato e deve essere zero.

*samDesired*<br/>
Maschera che specifica i diritti di accesso per la chiave.

*phkResult*<br/>
Puntatore a una variabile che riceve un handle per la chiave aperta o creata. Se la chiave non è una delle chiavi del registro di sistema predefinite, chiamare la `RegCloseKey` funzione dopo aver terminato di usare l'handle.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror. h

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `RegOpenKeyTransacted` funzione.

## <a name="rollback"></a><a name="rollback"></a> Rollback

Richiede che venga eseguito il rollback della transazione.

```cpp
inline BOOL Rollback();
```

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `RollbackTransaction` funzione.

## <a name="setfileattributes"></a><a name="setfileattributes"></a> SetFileAttributes

Imposta gli attributi per un file o una directory come operazione transazionale.

```cpp
inline BOOL SetFileAttributes(LPCTSTR lpFileName, DWORD dwAttributes);
```

### <a name="parameters"></a>Parametri

*lpFileName*<br/>
Nome del file o della directory.

*dwAttributes*<br/>
Attributi del file da impostare per il file. Per ulteriori informazioni, vedere [SetFileAttributesTransacted](/windows/win32/api/winbase/nf-winbase-setfileattributestransactedw).

### <a name="remarks"></a>Commenti

Questo wrapper chiama la `SetFileAttributesTransacted` funzione.

## <a name="see-also"></a>Vedi anche

[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)
