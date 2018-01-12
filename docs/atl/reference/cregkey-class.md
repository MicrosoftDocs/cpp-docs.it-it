---
title: Classe CRegKey | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRegKey
- ATLBASE/ATL::CRegKey
- ATLBASE/ATL::CRegKey::CRegKey
- ATLBASE/ATL::CRegKey::Attach
- ATLBASE/ATL::CRegKey::Close
- ATLBASE/ATL::CRegKey::Create
- ATLBASE/ATL::CRegKey::DeleteSubKey
- ATLBASE/ATL::CRegKey::DeleteValue
- ATLBASE/ATL::CRegKey::Detach
- ATLBASE/ATL::CRegKey::EnumKey
- ATLBASE/ATL::CRegKey::Flush
- ATLBASE/ATL::CRegKey::GetKeySecurity
- ATLBASE/ATL::CRegKey::NotifyChangeKeyValue
- ATLBASE/ATL::CRegKey::Open
- ATLBASE/ATL::CRegKey::QueryBinaryValue
- ATLBASE/ATL::CRegKey::QueryDWORDValue
- ATLBASE/ATL::CRegKey::QueryGUIDValue
- ATLBASE/ATL::CRegKey::QueryMultiStringValue
- ATLBASE/ATL::CRegKey::QueryQWORDValue
- ATLBASE/ATL::CRegKey::QueryStringValue
- ATLBASE/ATL::CRegKey::QueryValue
- ATLBASE/ATL::CRegKey::RecurseDeleteKey
- ATLBASE/ATL::CRegKey::SetBinaryValue
- ATLBASE/ATL::CRegKey::SetDWORDValue
- ATLBASE/ATL::CRegKey::SetGUIDValue
- ATLBASE/ATL::CRegKey::SetKeySecurity
- ATLBASE/ATL::CRegKey::SetKeyValue
- ATLBASE/ATL::CRegKey::SetMultiStringValue
- ATLBASE/ATL::CRegKey::SetQWORDValue
- ATLBASE/ATL::CRegKey::SetStringValue
- ATLBASE/ATL::CRegKey::SetValue
- ATLBASE/ATL::CRegKey::m_hKey
- ATLBASE/ATL::CRegKey::m_pTM
dev_langs: C++
helpviewer_keywords:
- CRegKey class
- ATL, registry
- registry, deleting values
- registry, writing to
- registry, deleting keys
ms.assetid: 3afce82b-ba2c-4c1a-8404-dc969e1af74b
caps.latest.revision: "25"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dffc650c54c4a50fb4b3b1fe2c22ac82501b8b45
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cregkey-class"></a>Classe CRegKey
Questa classe fornisce metodi per modificare le voci nel Registro di sistema.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CRegKey
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRegKey::CRegKey](#cregkey)|Costruttore.|  
|[CRegKey:: ~ CRegKey](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRegKey::Attach](#attach)|Chiamare questo metodo per collegare un HKEY dal `CRegKey` oggetto impostando il [m_hKey](#m_hkey) handle membro `hKey`.|  
|[CRegKey::Close](#close)|Chiamare questo metodo per rilasciare il [m_hKey](#m_hkey) membro gestire e impostarlo su NULL.|  
|[CRegKey::Create](#create)|Chiamare questo metodo per creare la chiave specificata, se non esiste come sottochiave di `hKeyParent`.|  
|[CRegKey::DeleteSubKey](#deletesubkey)|Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema.|  
|[CRegKey::DeleteValue](#deletevalue)|Chiamare questo metodo per rimuovere un campo del valore da [m_hKey](#m_hkey).|  
|[CRegKey::Detach](#detach)|Chiamare questo metodo per scollegare il [m_hKey](#m_hkey) membro handle dal `CRegKey` e impostare `m_hKey` su NULL.|  
|[CRegKey::EnumKey](#enumkey)|Chiamare questo metodo per enumerare le sottochiavi della chiave del Registro di sistema aprire.|  
|[CRegKey::Flush](#flush)|Chiamare questo metodo per scrivere tutti gli attributi della chiave del Registro di sistema aprire nel Registro di sistema.|  
|[CRegKey::GetKeySecurity](#getkeysecurity)|Chiamare questo metodo per recuperare una copia del descrittore di sicurezza protegge la chiave del Registro di sistema aprire.|  
|[CRegKey::NotifyChangeKeyValue](#notifychangekeyvalue)|Questo metodo di notifica al chiamante sulle modifiche al contenuto della chiave del Registro di sistema open o attributi.|  
|[CRegKey::Open](#open)|Chiamare questo metodo per aprire la chiave specificata e impostare [m_hKey](#m_hkey) all'handle di questa chiave.|  
|[CRegKey::QueryBinaryValue](#querybinaryvalue)|Chiamare questo metodo per recuperare i dati binari per nome di un valore specificato.|  
|[CRegKey::QueryDWORDValue](#querydwordvalue)|Chiamare questo metodo per recuperare i dati DWORD per nome di un valore specificato.|  
|[CRegKey::QueryGUIDValue](#queryguidvalue)|Chiamare questo metodo per recuperare i dati GUID per il nome di un valore specificato.|  
|[CRegKey::QueryMultiStringValue](#querymultistringvalue)|Chiamare questo metodo per recuperare i dati delle multistringhe per nome di un valore specificato.|  
|[CRegKey::QueryQWORDValue](#queryqwordvalue)|Chiamare questo metodo per recuperare i dati QWORD per nome di un valore specificato.|  
|[CRegKey::QueryStringValue](#querystringvalue)|Chiamare questo metodo per recuperare i dati di stringa per nome di un valore specificato.|  
|[CRegKey::QueryValue](#queryvalue)|Chiamare questo metodo per recuperare i dati per il campo del valore specificato di [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come **ATL_DEPRECATED**.|  
|[CRegKey::RecurseDeleteKey](#recursedeletekey)|Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema e rimuovere in modo esplicito il sottochiavi.|  
|[CRegKey::SetBinaryValue](#setbinaryvalue)|Chiamare questo metodo per impostare il valore della chiave del Registro di sistema binario.|  
|[CRegKey::SetDWORDValue](#setdwordvalue)|Chiamare questo metodo per impostare il valore DWORD della chiave del Registro di sistema.|  
|[CRegKey::SetGUIDValue](#setguidvalue)|Chiamare questo metodo per impostare il valore GUID della chiave del Registro di sistema.|  
|[CRegKey::SetKeySecurity](#setkeysecurity)|Chiamare questo metodo per impostare la protezione della chiave del Registro di sistema.|  
|[CRegKey::SetKeyValue](#setkeyvalue)|Chiamare questo metodo per archiviare i dati in un campo del valore specificato di una chiave specificata.|  
|[CRegKey::SetMultiStringValue](#setmultistringvalue)|Chiamare questo metodo per impostare il valore multistringa della chiave del Registro di sistema.|  
|[CRegKey::SetQWORDValue](#setqwordvalue)|Chiamare questo metodo per impostare il valore QWORD della chiave del Registro di sistema.|  
|[CRegKey::SetStringValue](#setstringvalue)|Chiamare questo metodo per impostare il valore di stringa della chiave del Registro di sistema.|  
|[CRegKey::SetValue](#setvalue)|Chiamare questo metodo per archiviare i dati nel campo del valore specificato [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come **ATL_DEPRECATED**.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[HKEY CRegKey::operator](#operator_hkey)|Converte un `CRegKey` oggetto da un HKEY.|  
|[CRegKey::operator =](#operator_eq)|Operatore di assegnazione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRegKey::m_hKey](#m_hkey)|Contiene un handle della chiave del Registro di sistema associata con il `CRegKey` oggetto.|  
|[CRegKey::m_pTM](#m_ptm)|Puntatore a `CAtlTransactionManager` oggetto|  
  
## <a name="remarks"></a>Note  
 `CRegKey`fornisce metodi per la creazione e l'eliminazione di chiavi e valori nel Registro di sistema. Il Registro di sistema contiene un set di specifiche dell'installazione di definizioni per i componenti di sistema, ad esempio numeri di versione del software, il mapping logico fisica dell'hardware installato e gli oggetti COM.  
  
 `CRegKey`fornisce un'interfaccia di programmazione nel Registro di sistema per un determinato computer. Per aprire una chiave del Registro di sistema specifico, ad esempio, è consigliabile chiamare `CRegKey::Open`. Per recuperare o modificare un valore di dati, chiamare `CRegKey::QueryValue` o `CRegKey::SetValue`, rispettivamente. Per chiudere una chiave, chiamare `CRegKey::Close`.  
  
 Quando si chiude una chiave, i dati del Registro di sistema viene scritto (scaricato) per il disco rigido. Questo processo potrebbe richiedere alcuni secondi. Se l'applicazione deve in modo esplicito di scrivere i dati del Registro di sistema sul disco rigido, è possibile chiamare il [RegFlushKey](http://msdn.microsoft.com/library/windows/desktop/ms724867) funzione Win32. Tuttavia, **RegFlushKey** utilizza molte risorse di sistema e deve essere chiamato solo quando strettamente necessario.  
  
> [!IMPORTANT]
>  I metodi che consentono al chiamante di specificare un percorso del Registro di sistema sono in grado di leggere i dati che non possono essere considerato attendibili. Utilizzano metodi che consentono di [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) deve prendere in considerazione che questa funzione non gestito in modo esplicito di stringhe che sono a terminazione NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="attach"></a>CRegKey::Attach  
 Chiamare questo metodo per collegare un HKEY dal `CRegKey` oggetto impostando il [m_hKey](#m_hkey) handle membro `hKey`.  
  
```
void Attach(HKEY hKey) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hKey`  
 L'handle di una chiave del Registro di sistema.  
  
### <a name="remarks"></a>Note  
 **Collegare** verrà verificata se `m_hKey` è diverso da NULL.  
  
##  <a name="close"></a>CRegKey::Close  
 Chiamare questo metodo per rilasciare il [m_hKey](#m_hkey) membro gestire e impostarlo su NULL.  
  
```
LONG Close() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, restituisce un valore di errore.  
  
##  <a name="create"></a>CRegKey::Create  
 Chiamare questo metodo per creare la chiave specificata, se non esiste come sottochiave di `hKeyParent`.  
  
```
LONG Create(  
    HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    LPTSTR lpszClass = REG_NONE,
    DWORD dwOptions = REG_OPTION_NON_VOLATILE,
    REGSAM samDesired = KEY_READ | KEY_WRITE,
    LPSECURITY_ATTRIBUTES lpSecAttr = NULL,
    LPDWORD lpdwDisposition = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hKeyParent`  
 L'handle di una chiave aperta.  
  
 `lpszKeyName`  
 Specifica il nome di una chiave può essere creato o aperto. Questo nome deve essere una sottochiave di `hKeyParent`.  
  
 `lpszClass`  
 Specifica la classe della chiave da creare o aprire. Il valore predefinito è REG_NONE.  
  
 `dwOptions`  
 Opzioni per la chiave. Il valore predefinito è REG_OPTION_NON_VOLATILE. Per un elenco di valori possibili e le descrizioni, vedere [RegCreateKeyEx](http://msdn.microsoft.com/library/windows/desktop/ms724844) in Windows SDK.  
  
 `samDesired`  
 L'accesso di sicurezza per la chiave. Il valore predefinito è KEY_READ &#124; KEY_WRITE. Per un elenco di valori possibili e le descrizioni, vedere **RegCreateKeyEx**.  
  
 *lpSecAttr*  
 Un puntatore a un [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che indica se l'handle della chiave può essere ereditato da un processo figlio. Per impostazione predefinita, questo parametro è NULL (che indica l'handle non può essere ereditato).  
  
 *lpdwDisposition*  
 [out] Se diverso da NULL, recupera REG_CREATED_NEW_KEY (se la chiave non esisteva ed è stata creata) o REG_OPENED_EXISTING_KEY (se la chiave esisteva ed è stato aperto).  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce ERROR_SUCCESS e apre la chiave. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 **Creare** imposta il [m_hKey](#m_hkey) membro per l'handle della chiave.  
  
##  <a name="cregkey"></a>CRegKey::CRegKey  
 Costruttore.  
  
```
CRegKey() throw();
CRegKey(CRegKey& key) throw();
explicit CRegKey(HKEY hKey) throw();
CRegKey(CAtlTransactionManager* pTM) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Riferimento a un oggetto `CRegKey`.  
  
 `hKey`  
 Un handle a una chiave del Registro di sistema.  
  
 `pTM`  
 Puntatore all'oggetto CAtlTransactionManager  
  
### <a name="remarks"></a>Note  
 Crea un nuovo oggetto `CRegKey`. L'oggetto può essere creato da un oggetto esistente `CRegKey` oggetto, o da un handle a una chiave del Registro di sistema.  
  
##  <a name="dtor"></a>CRegKey:: ~ CRegKey  
 Distruttore.  
  
```
~CRegKey() throw();
```  
  
### <a name="remarks"></a>Note  
 Le versioni di distruttore `m_hKey`.  
  
##  <a name="deletesubkey"></a>CRegKey::DeleteSubKey  
 Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema.  
  
```
LONG DeleteSubKey(LPCTSTR lpszSubKey) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszSubKey`  
 Specifica il nome della chiave da eliminare. Questo nome deve essere una sottochiave di [m_hKey](#m_hkey).  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 `DeleteSubKey`possibile eliminare solo una chiave che dispone di sottochiavi. Se la chiave contiene sottochiavi, chiamare [RecurseDeleteKey](#recursedeletekey) invece.  
  
##  <a name="deletevalue"></a>CRegKey::DeleteValue  
 Chiamare questo metodo per rimuovere un campo del valore da [m_hKey](#m_hkey).  
  
```
LONG DeleteValue(LPCTSTR lpszValue) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszValue`  
 Specifica il campo del valore da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
##  <a name="detach"></a>CRegKey::Detach  
 Chiamare questo metodo per scollegare il [m_hKey](#m_hkey) membro handle dal `CRegKey` e impostare `m_hKey` su NULL.  
  
```
HKEY Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 HKEY è associato il `CRegKey` oggetto.  
  
##  <a name="enumkey"></a>CRegKey::EnumKey  
 Chiamare questo metodo per enumerare le sottochiavi della chiave del Registro di sistema aprire.  
  
```
LONG EnumKey(  
    DWORD iIndex,
    LPTSTR pszName,
    LPDWORD pnNameLength,
    FILETIME* pftLastWriteTime = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `iIndex`  
 Indice della sottochiave. Questo parametro deve essere zero per la prima chiamata e quindi incrementato per le chiamate successive  
  
 `pszName`  
 Puntatore a un buffer che riceve il nome della sottochiave, incluso il carattere di terminazione null. Solo il nome della sottochiave viene copiato nel buffer, non la gerarchia di chiavi completa.  
  
 *pnNameLength*  
 Puntatore a una variabile che specifica la dimensione, in TCHARs, del buffer specificato per il `pszName` parametro. Questa dimensione deve includere il carattere di terminazione null. Quando il metodo restituisce, la variabile a cui puntava *pnNameLength* contiene il numero di caratteri archiviati nel buffer. Il conteggio restituito non include il carattere di terminazione null.  
  
 *pftLastWriteTime*  
 Puntatore a una variabile che riceve l'ora ultima scrittura per la sottochiave enumerata.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Per enumerare le sottochiavi, chiamare `CRegKey::EnumKey` con un indice pari a zero. Incrementare il valore di indice e ripetere il metodo restituisce ERROR_NO_MORE_ITEMS. Per ulteriori informazioni, vedere [RegEnumKeyEx](http://msdn.microsoft.com/library/windows/desktop/ms724862) in Windows SDK.  
  
##  <a name="flush"></a>CRegKey::Flush  
 Chiamare questo metodo per scrivere tutti gli attributi della chiave del Registro di sistema aprire nel Registro di sistema.  
  
```
LONG Flush() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [RegEnumFlush](http://msdn.microsoft.com/library/windows/desktop/ms724867) in Windows SDK.  
  
##  <a name="getkeysecurity"></a>CRegKey::GetKeySecurity  
 Chiamare questo metodo per recuperare una copia del descrittore di sicurezza protegge la chiave del Registro di sistema aprire.  
  
```
LONG GetKeySecurity(  
    SECURITY_INFORMATION si,
    PSECURITY_DESCRIPTOR psd,
    LPDWORD pnBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `si`  
 Il [SECURITY_INFORMATION](http://msdn.microsoft.com/library/windows/desktop/aa379573) valore che indica le informazioni di sicurezza richiesto.  
  
 `psd`  
 Un puntatore a un buffer che riceve una copia del descrittore di sicurezza richiesto.  
  
 `pnBytes`  
 Le dimensioni, in byte, del buffer a cui puntata `psd`.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è che un codice di errore diverso da zero è definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [RegGetKeySecurity](http://msdn.microsoft.com/library/windows/desktop/aa379313).  
  
##  <a name="m_hkey"></a>CRegKey::m_hKey  
 Contiene un handle della chiave del Registro di sistema associata con il `CRegKey` oggetto.  
  
```
HKEY m_hKey;
```  
  
##  <a name="m_ptm"></a>CRegKey::m_pTM  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
```
CAtlTransactionManager* m_pTM;
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="notifychangekeyvalue"></a>CRegKey::NotifyChangeKeyValue  
 Questo metodo di notifica al chiamante sulle modifiche al contenuto della chiave del Registro di sistema open o attributi.  
  
```
LONG NotifyChangeKeyValue(  
    BOOL bWatchSubtree,
    DWORD dwNotifyFilter,
    HANDLE hEvent,
    BOOL bAsync = TRUE) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *bWatchSubtree*  
 Specifica un flag che indica se segnalare le modifiche alla chiave specificata e tutte le relative sottochiavi o solo la chiave specificata. Se questo parametro è TRUE, il metodo segnala le modifiche in cui la chiave e le relative sottochiavi. Se il parametro è FALSE, il metodo segnala le modifiche apportate solo nella chiave.  
  
 *dwNotifyFilter*  
 Specifica un set di flag che controllano quali modifiche deve essere segnalato. Questo parametro può essere una combinazione dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|REG_NOTIFY_CHANGE_NAME|Notificare al chiamante se una sottochiave viene aggiunto o eliminata.|  
|REG_NOTIFY_CHANGE_ATTRIBUTES|Notificare al chiamante di modifiche agli attributi della chiave, ad esempio le informazioni sul descrittore di sicurezza.|  
|REG_NOTIFY_CHANGE_LAST_SET|Notificare al chiamante di modifiche a un valore della chiave. Può trattarsi di aggiunta o eliminazione di un valore o la modifica di un valore esistente.|  
|REG_NOTIFY_CHANGE_SECURITY|Notificare al chiamante di modifiche al descrittore di sicurezza della chiave.|  
  
 `hEvent`  
 Handle per un evento. Se il *bAsync* parametro è TRUE, il metodo restituisce immediatamente e vengono riportate le modifiche mediante la segnalazione di questo evento. Se `bAsync` è FALSE, `hEvent` viene ignorato.  
  
 `bAsync`  
 Specifica un flag che indica come il metodo segnala le modifiche. Se questo parametro è TRUE, il metodo restituisce immediatamente e segnala le modifiche apportate da segnalare l'evento specificato. Se questo parametro è FALSE, il metodo non restituisce fino a quando non si è verificata una modifica. Se `hEvent` non specifica un evento valido, il `bAsync` parametro non può essere TRUE.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Questo metodo non notificare al chiamante se viene eliminata la chiave specificata.  
  
 Per ulteriori informazioni e un programma di esempio, vedere [RegNotifyChangeKeyValue](http://msdn.microsoft.com/library/windows/desktop/ms724892).  
  
##  <a name="open"></a>CRegKey::Open  
 Chiamare questo metodo per aprire la chiave specificata e impostare [m_hKey](#m_hkey) all'handle di questa chiave.  
  
```
LONG Open(  
    HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    REGSAM samDesired = KEY_READ | KEY_WRITE) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hKeyParent`  
 L'handle di una chiave aperta.  
  
 `lpszKeyName`  
 Specifica il nome di una chiave può essere creato o aperto. Questo nome deve essere una sottochiave di `hKeyParent`.  
  
 `samDesired`  
 L'accesso di sicurezza per la chiave. Il valore predefinito è KEY_ALL_ACCESS. Per un elenco di valori possibili e le descrizioni, vedere [RegCreateKeyEx](http://msdn.microsoft.com/library/windows/desktop/ms724844) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un valore di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Se il `lpszKeyName` parametro è NULL o punti a una stringa vuota, **aprire** apre un nuovo handle della chiave identificata `hKeyParent`, ma non chiude qualsiasi handle aperto in precedenza.  
  
 A differenza di [CRegKey::Create](#create), **aprire** non crea la chiave specificata se non esiste.  
  
##  <a name="operator_hkey"></a>HKEY CRegKey::operator  
 Converte un `CRegKey` oggetto da un HKEY.  
  
```  
operator HKEY() const throw();
```  
  
##  <a name="operator_eq"></a>CRegKey::operator =  
 Operatore di assegnazione.  
  
```
CRegKey& operator= (CRegKey& key) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Chiave da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento alla nuova chiave.  
  
### <a name="remarks"></a>Note  
 Questo operatore consente di scollegare `key` dal relativo oggetto corrente e lo assegna al `CRegKey` invece dell'oggetto.  
  
##  <a name="querybinaryvalue"></a>CRegKey::QueryBinaryValue  
 Chiamare questo metodo per recuperare i dati binari per nome di un valore specificato.  
  
```
LONG QueryBinaryValue(  
    LPCTSTR pszValueName,
    void* pValue,
    ULONG* pnBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa con terminazione null contenente il nome del valore per la query.  
  
 `pValue`  
 Puntatore a un buffer che riceve i dati del valore.  
  
 `pnBytes`  
 Puntatore a una variabile che specifica la dimensione, in byte, del buffer a cui punta il `pValue` parametro. Quando il metodo restituisce, questa variabile contiene la dimensione dei dati copiati nel buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui fa riferimento non sono di tipo REG_BINARY, viene restituito ERROR_INVALID_DATA.  
  
### <a name="remarks"></a>Note  
 Questo metodo si avvalgono di **RegQueryValueEx** e conferma che viene restituito il tipo di dati corretto. Vedere [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) per altri dettagli.  
  
> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare un percorso del Registro di sistema, potenzialmente la lettura dei dati che non possono essere considerato attendibili. Inoltre, il [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) funzione usata da questo metodo non gestisce in modo esplicito le stringhe con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.  
  
##  <a name="querydwordvalue"></a>CRegKey::QueryDWORDValue  
 Chiamare questo metodo per recuperare i dati DWORD per nome di un valore specificato.  
  
```
LONG QueryDWORDValue(  
    LPCTSTR pszValueName,
    DWORD& dwValue) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa con terminazione null contenente il nome del valore per la query.  
  
 `dwValue`  
 Puntatore a un buffer che riceve il valore DWORD.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui fa riferimento non sono di tipo REG_DWORD, viene restituito ERROR_INVALID_DATA.  
  
### <a name="remarks"></a>Note  
 Questo metodo si avvalgono di **RegQueryValueEx** e conferma che viene restituito il tipo di dati corretto. Vedere [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) per altri dettagli.  
  
> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare un percorso del Registro di sistema, potenzialmente la lettura dei dati che non possono essere considerato attendibili. Inoltre, il [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) funzione usata da questo metodo non gestisce in modo esplicito le stringhe con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.  
  
##  <a name="queryguidvalue"></a>CRegKey::QueryGUIDValue  
 Chiamare questo metodo per recuperare i dati GUID per il nome di un valore specificato.  
  
```
LONG QueryGUIDValue(  
    LPCTSTR pszValueName,
    GUID& guidValue) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa con terminazione null contenente il nome del valore per la query.  
  
 `guidValue`  
 Puntatore a una variabile che riceve il GUID.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui fa riferimento non sono un GUID valido, viene restituito ERROR_INVALID_DATA.  
  
### <a name="remarks"></a>Note  
 Questo metodo si avvalgono di `CRegKey::QueryStringValue` e la stringa viene convertita in un GUID utilizzando [CLSIDFromString](http://msdn.microsoft.com/library/windows/desktop/ms680589).  
  
> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare un percorso del Registro di sistema, potenzialmente la lettura dei dati che non possono essere considerato attendibili.  
  
##  <a name="querymultistringvalue"></a>CRegKey::QueryMultiStringValue  
 Chiamare questo metodo per recuperare i dati delle multistringhe per nome di un valore specificato.  
  
```
LONG QueryMultiStringValue(  
    LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa con terminazione null contenente il nome del valore per la query.  
  
 `pszValue`  
 Puntatore a un buffer che riceve i dati delle multistringhe. Una valore multistringa è una matrice di stringhe con terminazione null, terminate da due caratteri null.  
  
 `pnChars`  
 La dimensione in TCHARs, del buffer a cui puntata `pszValue`. Quando termina, il metodo `pnChars` contiene la dimensione, in TCHARs, di valore multistringa recuperato, incluso un carattere di terminazione null.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui fa riferimento non sono di tipo REG_MULTI_SZ, viene restituito ERROR_INVALID_DATA.  
  
### <a name="remarks"></a>Note  
 Questo metodo si avvalgono di **RegQueryValueEx** e conferma che viene restituito il tipo di dati corretto. Vedere [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) per altri dettagli.  
  
> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare un percorso del Registro di sistema, potenzialmente la lettura dei dati che non possono essere considerato attendibili. Inoltre, il [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) funzione usata da questo metodo non gestisce in modo esplicito le stringhe con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.  
  
##  <a name="queryqwordvalue"></a>CRegKey::QueryQWORDValue  
 Chiamare questo metodo per recuperare i dati QWORD per nome di un valore specificato.  
  
```
LONG QueryQWORDValue(  
    LPCTSTR pszValueName,
    ULONGLONG& qwValue) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa con terminazione null contenente il nome del valore per la query.  
  
 `qwValue`  
 Puntatore a un buffer che riceve il QWORD.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui fa riferimento non sono di tipo REG_QWORD, viene restituito ERROR_INVALID_DATA.  
  
### <a name="remarks"></a>Note  
 Questo metodo si avvalgono di **RegQueryValueEx** e conferma che viene restituito il tipo di dati corretto. Vedere [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) per altri dettagli.  
  
> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare un percorso del Registro di sistema, potenzialmente la lettura dei dati che non possono essere considerato attendibili. Inoltre, il [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) funzione usata da questo metodo non gestisce in modo esplicito le stringhe con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.  
  
##  <a name="querystringvalue"></a>CRegKey::QueryStringValue  
 Chiamare questo metodo per recuperare i dati di stringa per nome di un valore specificato.  
  
```
LONG QueryStringValue(  
    LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa con terminazione null contenente il nome del valore per la query.  
  
 `pszValue`  
 Puntatore a un buffer che riceve i dati di stringa.  
  
 `pnChars`  
 La dimensione in TCHARs, del buffer a cui puntata `pszValue`. Quando termina, il metodo `pnChars` contiene la dimensione, in TCHARs, della stringa recuperato, incluso un carattere di terminazione null.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui fa riferimento non sono di tipo REG_SZ, viene restituito ERROR_INVALID_DATA. Se il metodo restituisce ERROR_MORE_DATA, `pnChars` uguale a zero, non la dimensione richiesta del buffer in byte.  
  
### <a name="remarks"></a>Note  
 Questo metodo si avvalgono di **RegQueryValueEx** e conferma che viene restituito il tipo di dati corretto. Vedere [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) per altri dettagli.  
  
> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare un percorso del Registro di sistema, potenzialmente la lettura dei dati che non possono essere considerato attendibili. Inoltre, il [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) funzione usata da questo metodo non gestisce in modo esplicito le stringhe con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.  
  
##  <a name="queryvalue"></a>CRegKey::QueryValue  
 Chiamare questo metodo per recuperare i dati per il campo del valore specificato di [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come **ATL_DEPRECATED**.  
  
```
LONG QueryValue(  
    LPCTSTR pszValueName,
    DWORD* pdwType,
    void* pData,
    ULONG* pnBytes) throw();

ATL_DEPRECATED LONG QueryValue(
    DWORD& dwValue,
    LPCTSTR lpszValueName);

ATL_DEPRECATED LONG QueryValue(
    LPTSTR szValue,
    LPCTSTR lpszValueName,
    DWORD* pdwCount);
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa con terminazione null contenente il nome del valore per la query. Se `pszValueName` è NULL o una stringa vuota, "", il metodo recupera il tipo e che i dati per la chiave del senza nome o valore predefinito, se presente.  
  
 `pdwType`  
 Puntatore a una variabile che riceve un codice che indica il tipo di dati archiviati nel valore specificato. Il `pdwType` parametro può essere NULL se il codice di tipo non è obbligatorio.  
  
 `pData`  
 Puntatore a un buffer che riceve i dati del valore. Questo parametro può essere NULL se i dati non sono necessari.  
  
 `pnBytes`  
 Puntatore a una variabile che specifica la dimensione, in byte, del buffer a cui punta il `pData` parametro. Quando il metodo restituisce, questa variabile contiene la dimensione dei dati copiati *pData.*  
  
 `dwValue`  
 Dati numerici del campo valore.  
  
 `lpszValueName`  
 Specifica il campo del valore deve essere sottoposto a query.  
  
 `szValue`  
 Dati di stringa del campo valore.  
  
 `pdwCount`  
 Le dimensioni dei dati di stringa. Alle dimensioni di cui è inizialmente impostato sul valore di `szValue` buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Le due versioni originali di `QueryValue` non sono più supportate e sono contrassegnati come **ATL_DEPRECATED**. Il compilatore emetterà un avviso se questi formati vengono utilizzati.  
  
 Le chiamate al metodo rimanenti RegQueryValueEx.  
  
> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare un percorso del Registro di sistema, potenzialmente la lettura dei dati che non possono essere considerato attendibili. Inoltre, la funzione RegQueryValueEx usata da questo metodo non gestire in modo esplicito le stringhe che `NULL` terminato. Entrambe le condizioni devono essere controllate dal codice chiamante.  
  
##  <a name="recursedeletekey"></a>CRegKey::RecurseDeleteKey  
 Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema e rimuovere in modo esplicito il sottochiavi.  
  
```
LONG RecurseDeleteKey(LPCTSTR lpszKey) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *lpszKey*  
 Specifica il nome della chiave da eliminare. Questo nome deve essere una sottochiave di [m_hKey](#m_hkey).  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un valore di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Se la chiave contiene sottochiavi, è necessario chiamare questo metodo per eliminare la chiave.  
  
##  <a name="setbinaryvalue"></a>CRegKey::SetBinaryValue  
 Chiamare questo metodo per impostare il valore della chiave del Registro di sistema binario.  
  
```
LONG SetBinaryValue(  
    LPCTSTR pszValueName,
    const void* pValue,
    ULONG nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.  
  
 `pValue`  
 Puntatore a un buffer contenente i dati da archiviare con il nome del valore specificato.  
  
 `nBytes`  
 Specifica la dimensione, in byte, le informazioni a cui fa riferimento il `pValue` parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Questo metodo Usa [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923) per scrivere il valore del Registro di sistema.  
  
##  <a name="setdwordvalue"></a>CRegKey::SetDWORDValue  
 Chiamare questo metodo per impostare il valore DWORD della chiave del Registro di sistema.  
  
```
LONG SetDWORDValue(LPCTSTR pszValueName, DWORD dwValue) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.  
  
 `dwValue`  
 I dati DWORD deve essere archiviata con il nome del valore specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Questo metodo Usa [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923) per scrivere il valore del Registro di sistema.  
  
##  <a name="setguidvalue"></a>CRegKey::SetGUIDValue  
 Chiamare questo metodo per impostare il valore GUID della chiave del Registro di sistema.  
  
```
LONG SetGUIDValue(LPCTSTR pszValueName, REFGUID guidValue) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.  
  
 `guidValue`  
 Riferimento al GUID deve essere archiviata con il nome del valore specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Questo metodo si avvalgono di `CRegKey::SetStringValue` e converte GUID in una stringa utilizzando [StringFromGUID2](http://msdn.microsoft.com/library/windows/desktop/ms683893).  
  
##  <a name="setkeyvalue"></a>CRegKey::SetKeyValue  
 Chiamare questo metodo per archiviare i dati in un campo del valore specificato di una chiave specificata.  
  
```
LONG SetKeyValue(  
    LPCTSTR lpszKeyName,
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszKeyName`  
 Specifica il nome della chiave da creare o aprire. Questo nome deve essere una sottochiave di [m_hKey](#m_hkey).  
  
 `lpszValue`  
 Specifica i dati da archiviare. Questo parametro deve essere non NULL.  
  
 `lpszValueName`  
 Specifica il campo del valore da impostare. Se un campo del valore con questo nome esiste già nella chiave, viene aggiunto.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per creare o aprire il `lpszKeyName` chiave e archiviare il `lpszValue` dati il `lpszValueName` campo del valore.  
  
##  <a name="setkeysecurity"></a>CRegKey::SetKeySecurity  
 Chiamare questo metodo per impostare la protezione della chiave del Registro di sistema.  
  
```
LONG SetKeySecurity(SECURITY_INFORMATION si, PSECURITY_DESCRIPTOR psd) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `si`  
 Specifica i componenti del descrittore di sicurezza da impostare. Il valore può essere una combinazione dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|DACL_SECURITY_INFORMATION|Imposta l'elenco della chiave controllo di accesso discrezionali (DACL). La chiave deve avere accesso WRITE_DAC o il processo di chiamata deve essere il proprietario dell'oggetto.|  
|GROUP_SECURITY_INFORMATION|Imposta l'identificatore di sicurezza della chiave primaria gruppo (SID). La chiave deve avere accesso WRITE_OWNER o il processo di chiamata deve essere il proprietario dell'oggetto.|  
|OWNER_SECURITY_INFORMATION|Imposta il SID del proprietario della chiave. La chiave deve avere accesso WRITE_OWNER o il processo di chiamata deve essere il proprietario dell'oggetto o disporre del privilegio SE_TAKE_OWNERSHIP_NAME abilitato.|  
|SACL_SECURITY_INFORMATION|Imposta l'elenco di controllo di accesso della chiave del sistema (SACL). La chiave deve avere accesso ACCESS_SYSTEM_SECURITY. Il metodo migliore per ottenere l'accesso è per abilitare il SE_SECURITY_NAME [privilegio](http://msdn.microsoft.com/library/windows/desktop/aa379306) nel token di accesso corrente del chiamante, aprire l'handle per l'accesso ACCESS_SYSTEM_SECURITY e quindi disabilitare il privilegio.|  
  
 `psd`  
 Puntatore a un [SECURITY_DESCRIPTOR](http://msdn.microsoft.com/library/windows/desktop/aa379561) struttura che specifica gli attributi di sicurezza da impostare per la chiave specificata.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Imposta gli attributi di sicurezza della chiave. Vedere [RegSetKeySecurity](http://msdn.microsoft.com/library/windows/desktop/aa379314) per altri dettagli.  
  
##  <a name="setmultistringvalue"></a>CRegKey::SetMultiStringValue  
 Chiamare questo metodo per impostare il valore multistringa della chiave del Registro di sistema.  
  
```
LONG SetMultiStringValue(LPCTSTR pszValueName, LPCTSTR pszValue) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.  
  
 `pszValue`  
 Puntatore ai dati delle multistringhe deve essere archiviata con il nome del valore specificato. Una valore multistringa è una matrice di stringhe con terminazione null, terminate da due caratteri null.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Questo metodo Usa [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923) per scrivere il valore del Registro di sistema.  
  
##  <a name="setqwordvalue"></a>CRegKey::SetQWORDValue  
 Chiamare questo metodo per impostare il valore QWORD della chiave del Registro di sistema.  
  
```
LONG SetQWORDValue(LPCTSTR pszValueName, ULONGLONG qwValue) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.  
  
 `qwValue`  
 I dati QWORD deve essere archiviata con il nome del valore specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Questo metodo Usa [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923) per scrivere il valore del Registro di sistema.  
  
##  <a name="setstringvalue"></a>CRegKey::SetStringValue  
 Chiamare questo metodo per impostare il valore di stringa della chiave del Registro di sistema.  
  
```
LONG SetStringValue(  
    LPCTSTR pszValueName,
    LPCTSTR pszValue,
    DWORD dwType = REG_SZ) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.  
  
 `pszValue`  
 Puntatore ai dati di stringa deve essere archiviata con il nome del valore specificato.  
  
 `dwType`  
 Il tipo di stringa da scrivere nel Registro di sistema: REG_SZ (predefinito) o REG_EXPAND_SZ (per multistringhe).  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Questo metodo Usa [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923\(v=vs.85\).aspx) per scrivere il valore del Registro di sistema.  
  
##  <a name="setvalue"></a>CRegKey::SetValue  
 Chiamare questo metodo per archiviare i dati nel campo del valore specificato [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come **ATL_DEPRECATED**.  
  
```
LONG SetValue(  
    LPCTSTR pszValueName,
    DWORD dwType,
    const void* pValue,
    ULONG nBytes) throw();
    
static LONG WINAPI SetValue(  
    HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL);

ATL_DEPRECATED LONG SetValue(  
    DWORD dwValue,
    LPCTSTR lpszValueName);

ATL_DEPRECATED LONG SetValue(  
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL,
    bool bMulti = false,
    int nValueLen = -1);
```  
  
### <a name="parameters"></a>Parametri  
 `pszValueName`  
 Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente nella chiave, il metodo lo aggiunge alla chiave. Se `pszValueName` è NULL o una stringa vuota, "", il metodo imposta il tipo e che i dati per la chiave del senza nome o il valore predefinito.  
  
 `dwType`  
 Specifica un codice che indica il tipo di dati a cui fa riferimento il `pValue` parametro.  
  
 `pValue`  
 Puntatore a un buffer contenente i dati da archiviare con il nome del valore specificato.  
  
 `nBytes`  
 Specifica la dimensione, in byte, le informazioni a cui fa riferimento il `pValue` parametro. Se i dati sono di tipo REG_SZ, REG_EXPAND_SZ o REG_MULTI_SZ, `nBytes` deve includere le dimensioni del carattere di terminazione null.  
  
 `hKeyParent`  
 L'handle di una chiave aperta.  
  
 `lpszKeyName`  
 Specifica il nome di una chiave può essere creato o aperto. Questo nome deve essere una sottochiave di `hKeyParent`.  
  
 `lpszValue`  
 Specifica i dati da archiviare. Questo parametro deve essere non NULL.  
  
 `lpszValueName`  
 Specifica il campo del valore da impostare. Se un campo del valore con questo nome esiste già nella chiave, viene aggiunto.  
  
 `dwValue`  
 Specifica i dati da archiviare.  
  
 `bMulti`  
 Se false, indica che la stringa è di tipo REG_SZ. Se true, indica che la stringa è una valore multistringa di tipo REG_MULTI_SZ.  
  
 `nValueLen`  
 Se `bMulti` è true, `nValueLen` è la lunghezza del *lpszValue* stringa in caratteri. Se `bMulti` è false, il valore-1 indica che il metodo calcolerà automaticamente la lunghezza.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito in WINERROR. H.  
  
### <a name="remarks"></a>Note  
 Le due versioni originali di `SetValue` sono contrassegnati come **ATL_DEPRECATED** e non deve più essere usato. Il compilatore emetterà un avviso se questi formati vengono utilizzati.  
  
 Le chiamate al metodo terzo [RegSetValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724923).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio DCOM](../../visual-cpp-samples.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
