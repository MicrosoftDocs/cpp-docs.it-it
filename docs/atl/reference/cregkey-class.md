---
description: 'Altre informazioni su: classe CRegKey'
title: Classe CRegKey
ms.date: 11/04/2016
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
helpviewer_keywords:
- CRegKey class
- ATL, registry
- registry, deleting values
- registry, writing to
- registry, deleting keys
ms.assetid: 3afce82b-ba2c-4c1a-8404-dc969e1af74b
ms.openlocfilehash: f95a4f165d2d2d3d964c74c0c2c07db7a03e6fb3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140868"
---
# <a name="cregkey-class"></a>Classe CRegKey

Questa classe fornisce metodi per modificare le voci nel registro di sistema.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CRegKey
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CRegKey:: CRegKey](#cregkey)|Costruttore.|
|[CRegKey:: ~ CRegKey](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CRegKey:: Connetti](#attach)|Chiamare questo metodo per alleghire un HKEY all'oggetto impostando `CRegKey` il [m_hKey](#m_hkey) handle del membro su `hKey` .|
|[CRegKey:: Close](#close)|Chiamare questo metodo per rilasciare l'handle del membro [m_hKey](#m_hkey) e impostarlo su null.|
|[CRegKey:: create](#create)|Chiamare questo metodo per creare la chiave specificata, se non esiste come sottochiave di `hKeyParent` .|
|[CRegKey::D eleteSubKey](#deletesubkey)|Chiamare questo metodo per rimuovere la chiave specificata dal registro di sistema.|
|[CRegKey::D eleteValue](#deletevalue)|Chiamare questo metodo per rimuovere un campo valore da [m_hKey](#m_hkey).|
|[CRegKey::D etach](#detach)|Chiamare questo metodo per scollegare l'handle del membro [m_hKey](#m_hkey) dall' `CRegKey` oggetto e impostare `m_hKey` su null.|
|[CRegKey:: EnumKey](#enumkey)|Chiamare questo metodo per enumerare le sottochiavi della chiave del registro di sistema aperta.|
|[CRegKey:: Flush](#flush)|Chiamare questo metodo per scrivere tutti gli attributi della chiave del registro di sistema aperta nel registro di sistema.|
|[CRegKey:: GetKeySecurity](#getkeysecurity)|Chiamare questo metodo per recuperare una copia del descrittore di sicurezza che protegge la chiave del registro di sistema Open.|
|[CRegKey:: NotifyChangeKeyValue](#notifychangekeyvalue)|Questo metodo notifica al chiamante le modifiche apportate agli attributi o al contenuto della chiave del registro di sistema Open.|
|[CRegKey:: Open](#open)|Chiamare questo metodo per aprire la chiave specificata e impostare [m_hKey](#m_hkey) sull'handle della chiave.|
|[CRegKey:: QueryBinaryValue](#querybinaryvalue)|Chiamare questo metodo per recuperare i dati binari per un nome di valore specificato.|
|[CRegKey:: QueryDWORDValue](#querydwordvalue)|Chiamare questo metodo per recuperare i dati DWORD per un nome di valore specificato.|
|[CRegKey:: QueryGUIDValue](#queryguidvalue)|Chiamare questo metodo per recuperare i dati GUID per un nome di valore specificato.|
|[CRegKey:: QueryMultiStringValue](#querymultistringvalue)|Chiamare questo metodo per recuperare i dati MultiString per un nome di valore specificato.|
|[CRegKey:: QueryQWORDValue](#queryqwordvalue)|Chiamare questo metodo per recuperare i dati QWORD per un nome di valore specificato.|
|[CRegKey:: QueryStringValue](#querystringvalue)|Chiamare questo metodo per recuperare i dati stringa per un nome di valore specificato.|
|[CRegKey:: QueryValue](#queryvalue)|Chiamare questo metodo per recuperare i dati per il campo del valore specificato di [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come ATL_DEPRECATED.|
|[CRegKey:: RecurseDeleteKey](#recursedeletekey)|Chiamare questo metodo per rimuovere la chiave specificata dal registro di sistema e rimuovere in modo esplicito eventuali sottochiavi.|
|[CRegKey:: SetBinaryValue](#setbinaryvalue)|Chiamare questo metodo per impostare il valore binario della chiave del registro di sistema.|
|[CRegKey:: SetDWORDValue](#setdwordvalue)|Chiamare questo metodo per impostare il valore DWORD della chiave del registro di sistema.|
|[CRegKey:: SetGUIDValue](#setguidvalue)|Chiamare questo metodo per impostare il valore GUID della chiave del registro di sistema.|
|[CRegKey:: SetKeySecurity](#setkeysecurity)|Chiamare questo metodo per impostare la sicurezza della chiave del registro di sistema.|
|[CRegKey:: SetKeyValue](#setkeyvalue)|Chiamare questo metodo per archiviare i dati in un campo valore specificato di una chiave specificata.|
|[CRegKey:: SetMultiStringValue](#setmultistringvalue)|Chiamare questo metodo per impostare il valore multistringa della chiave del registro di sistema.|
|[CRegKey:: SetQWORDValue](#setqwordvalue)|Chiamare questo metodo per impostare il valore QWORD della chiave del registro di sistema.|
|[CRegKey:: SetStringValue](#setstringvalue)|Chiamare questo metodo per impostare il valore stringa della chiave del registro di sistema.|
|[CRegKey:: SetValue](#setvalue)|Chiamare questo metodo per archiviare i dati nel campo del valore specificato di [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come ATL_DEPRECATED.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CRegKey:: operator HKEY](#operator_hkey)|Converte un `CRegKey` oggetto in un HKEY.|
|[CRegKey:: operator =](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CRegKey:: m_hKey](#m_hkey)|Contiene un handle della chiave del registro di sistema associata all' `CRegKey` oggetto.|
|[CRegKey:: m_pTM](#m_ptm)|Puntatore all' `CAtlTransactionManager` oggetto|

## <a name="remarks"></a>Commenti

`CRegKey` fornisce metodi per la creazione e l'eliminazione di chiavi e valori nel registro di sistema. Il registro di sistema contiene un set di definizioni specifico per l'installazione per i componenti di sistema, ad esempio i numeri di versione del software, i mapping da logica a fisica dell'hardware installato e gli oggetti COM.

`CRegKey` fornisce un'interfaccia di programmazione per il registro di sistema per un determinato computer. Ad esempio, per aprire una particolare chiave del registro di sistema, chiamare `CRegKey::Open` . Per recuperare o modificare un valore di dati, `CRegKey::QueryValue` chiamare `CRegKey::SetValue` rispettivamente o. Per chiudere una chiave, chiamare `CRegKey::Close` .

Quando si chiude una chiave, i relativi dati del registro di sistema vengono scritti (scaricati) sul disco rigido. Questo processo potrebbe richiedere alcuni secondi. Se l'applicazione deve scrivere in modo esplicito i dati del registro di sistema sul disco rigido, è possibile chiamare la funzione Win32 [RegFlushKey ha](/windows/win32/api/winreg/nf-winreg-regflushkey) . Tuttavia, `RegFlushKey` utilizza molte risorse di sistema e deve essere chiamato solo quando è strettamente necessario.

> [!IMPORTANT]
> Tutti i metodi che consentono al chiamante di specificare un percorso del registro di sistema possono leggere i dati che non possono essere considerati attendibili. I metodi che usano [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) devono considerare che questa funzione non gestisce in modo esplicito le stringhe con terminazione null. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="cregkeyattach"></a><a name="attach"></a> CRegKey:: Connetti

Chiamare questo metodo per alleghire un HKEY all'oggetto impostando `CRegKey` il [m_hKey](#m_hkey) handle del membro su *HKEY*.

```cpp
void Attach(HKEY hKey) throw();
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
Handle di una chiave del registro di sistema.

### <a name="remarks"></a>Commenti

`Attach` asserirà se `m_hKey` è diverso da null.

## <a name="cregkeyclose"></a><a name="close"></a> CRegKey:: Close

Chiamare questo metodo per rilasciare l'handle del membro [m_hKey](#m_hkey) e impostarlo su null.

```
LONG Close() throw();
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, restituisce un valore di errore.

## <a name="cregkeycreate"></a><a name="create"></a> CRegKey:: create

Chiamare questo metodo per creare la chiave specificata, se non esiste come sottochiave di *hKeyParent*.

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

*hKeyParent*<br/>
Handle di una chiave aperta.

*lpszKeyName*<br/>
Specifica il nome di una chiave da creare o aprire. Questo nome deve essere una sottochiave di *hKeyParent*.

*lpszClass*<br/>
Specifica la classe della chiave da creare o aprire. Il valore predefinito è REG_NONE.

*dwOptions*<br/>
Opzioni per la chiave. Il valore predefinito è REG_OPTION_NON_VOLATILE. Per un elenco di valori e descrizioni possibili, vedere [RegCreateKeyEx](/windows/win32/api/winreg/nf-winreg-regcreatekeyexw) nel Windows SDK.

*samDesired*<br/>
Accesso di sicurezza per la chiave. Il valore predefinito è KEY_READ &#124; KEY_WRITE. Per un elenco di valori e descrizioni possibili, vedere `RegCreateKeyEx` .

*lpSecAttr*<br/>
Puntatore a una struttura [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che indica se l'handle della chiave può essere ereditato da un processo figlio. Per impostazione predefinita, questo parametro è NULL, vale a dire che l'handle non può essere ereditato.

*lpdwDisposition*<br/>
out Se diverso da NULL, recupera REG_CREATED_NEW_KEY (se la chiave non esiste ed è stata creata) o REG_OPENED_EXISTING_KEY (se la chiave esiste ed è stata aperta).

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS e apre la chiave. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

`Create` imposta il membro [m_hKey](#m_hkey) sull'handle della chiave.

## <a name="cregkeycregkey"></a><a name="cregkey"></a> CRegKey:: CRegKey

Costruttore.

```
CRegKey() throw();
CRegKey(CRegKey& key) throw();
explicit CRegKey(HKEY hKey) throw();
CRegKey(CAtlTransactionManager* pTM) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Riferimento a un oggetto `CRegKey`.

*hKey*<br/>
Handle per una chiave del registro di sistema.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Commenti

Crea un nuovo oggetto `CRegKey`. L'oggetto può essere creato da un `CRegKey` oggetto esistente o da un handle a una chiave del registro di sistema.

## <a name="cregkeycregkey"></a><a name="dtor"></a> CRegKey:: ~ CRegKey

Distruttore.

```
~CRegKey() throw();
```

### <a name="remarks"></a>Commenti

Rilasci del distruttore `m_hKey` .

## <a name="cregkeydeletesubkey"></a><a name="deletesubkey"></a> CRegKey::D eleteSubKey

Chiamare questo metodo per rimuovere la chiave specificata dal registro di sistema.

```
LONG DeleteSubKey(LPCTSTR lpszSubKey) throw();
```

### <a name="parameters"></a>Parametri

*lpszSubKey*<br/>
Specifica il nome della chiave da eliminare. Questo nome deve essere una sottochiave di [m_hKey](#m_hkey).

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

`DeleteSubKey` è possibile eliminare solo una chiave priva di sottochiavi. Se la chiave contiene sottochiavi, chiamare invece [RecurseDeleteKey](#recursedeletekey) .

## <a name="cregkeydeletevalue"></a><a name="deletevalue"></a> CRegKey::D eleteValue

Chiamare questo metodo per rimuovere un campo valore da [m_hKey](#m_hkey).

```
LONG DeleteValue(LPCTSTR lpszValue) throw();
```

### <a name="parameters"></a>Parametri

*lpszValue*<br/>
Specifica il campo del valore da rimuovere.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

## <a name="cregkeydetach"></a><a name="detach"></a> CRegKey::D etach

Chiamare questo metodo per scollegare l'handle del membro [m_hKey](#m_hkey) dall' `CRegKey` oggetto e impostare `m_hKey` su null.

```
HKEY Detach() throw();
```

### <a name="return-value"></a>Valore restituito

HKEY associato all' `CRegKey` oggetto.

## <a name="cregkeyenumkey"></a><a name="enumkey"></a> CRegKey:: EnumKey

Chiamare questo metodo per enumerare le sottochiavi della chiave del registro di sistema aperta.

```
LONG EnumKey(
    DWORD iIndex,
    LPTSTR pszName,
    LPDWORD pnNameLength,
    FILETIME* pftLastWriteTime = NULL) throw();
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
Indice della sottochiave. Questo parametro deve essere zero per la prima chiamata e quindi incrementato per le chiamate successive

*pszName*<br/>
Puntatore a un buffer che riceve il nome della sottochiave, incluso il carattere null di terminazione. Solo il nome della sottochiave viene copiato nel buffer, non nella gerarchia di chiavi completa.

*pnNameLength*<br/>
Puntatore a una variabile che specifica la dimensione, in TCHARs, del buffer specificato dal parametro *pszName* . Questa dimensione deve includere il carattere null di terminazione. Quando il metodo restituisce un risultato, la variabile a cui punta *pnNameLength* contiene il numero di caratteri archiviati nel buffer. Il conteggio restituito non include il carattere null di terminazione.

*pftLastWriteTime*<br/>
Puntatore a una variabile che riceve l'ora dell'ultima scrittura della sottochiave enumerata.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Per enumerare le sottochiavi, chiamare `CRegKey::EnumKey` con un indice di zero. Incrementa il valore di indice e Ripeti fino a quando il metodo non restituisce ERROR_NO_MORE_ITEMS. Per ulteriori informazioni, vedere [RegEnumKeyEx](/windows/win32/api/winreg/nf-winreg-regenumkeyexw) nel Windows SDK.

## <a name="cregkeyflush"></a><a name="flush"></a> CRegKey:: Flush

Chiamare questo metodo per scrivere tutti gli attributi della chiave del registro di sistema aperta nel registro di sistema.

```
LONG Flush() throw();
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [RegEnumFlush](/windows/win32/api/winreg/nf-winreg-regflushkey) nel Windows SDK.

## <a name="cregkeygetkeysecurity"></a><a name="getkeysecurity"></a> CRegKey:: GetKeySecurity

Chiamare questo metodo per recuperare una copia del descrittore di sicurezza che protegge la chiave del registro di sistema Open.

```
LONG GetKeySecurity(
    SECURITY_INFORMATION si,
    PSECURITY_DESCRIPTOR psd,
    LPDWORD pnBytes) throw();
```

### <a name="parameters"></a>Parametri

*si*<br/>
Valore [SECURITY_INFORMATION](/windows/win32/SecAuthZ/security-information) che indica le informazioni di sicurezza richieste.

*PSD*<br/>
Puntatore a un buffer che riceve una copia del descrittore di sicurezza richiesto.

*pnBytes*<br/>
Dimensione, in byte, del buffer a cui punta il *PSD*.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero è definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [RegGetKeySecurity](/windows/win32/api/winreg/nf-winreg-reggetkeysecurity).

## <a name="cregkeym_hkey"></a><a name="m_hkey"></a> CRegKey:: m_hKey

Contiene un handle della chiave del registro di sistema associata all' `CRegKey` oggetto.

```
HKEY m_hKey;
```

## <a name="cregkeym_ptm"></a><a name="m_ptm"></a> CRegKey:: m_pTM

Puntatore a un oggetto `CAtlTransactionManager`.

```
CAtlTransactionManager* m_pTM;
```

### <a name="remarks"></a>Commenti

## <a name="cregkeynotifychangekeyvalue"></a><a name="notifychangekeyvalue"></a> CRegKey:: NotifyChangeKeyValue

Questo metodo notifica al chiamante le modifiche apportate agli attributi o al contenuto della chiave del registro di sistema Open.

```
LONG NotifyChangeKeyValue(
    BOOL bWatchSubtree,
    DWORD dwNotifyFilter,
    HANDLE hEvent,
    BOOL bAsync = TRUE) throw();
```

### <a name="parameters"></a>Parametri

*bWatchSubtree*<br/>
Specifica un flag che indica se segnalare le modifiche nella chiave specificata e in tutte le relative sottochiavi o solo nella chiave specificata. Se questo parametro è TRUE, il metodo segnala le modifiche apportate alla chiave e alle relative sottochiavi. Se il parametro è FALSE, il metodo segnala solo le modifiche apportate alla chiave.

*dwNotifyFilter*<br/>
Specifica un set di flag che controllano le modifiche da segnalare. Questo parametro può essere una combinazione dei valori seguenti:

|Valore|Significato|
|-----------|-------------|
|REG_NOTIFY_CHANGE_NAME|Notifica al chiamante se una sottochiave viene aggiunta o eliminata.|
|REG_NOTIFY_CHANGE_ATTRIBUTES|Notifica al chiamante le modifiche apportate agli attributi della chiave, ad esempio le informazioni sul descrittore di sicurezza.|
|REG_NOTIFY_CHANGE_LAST_SET|Notifica al chiamante le modifiche apportate a un valore della chiave. Ciò può includere l'aggiunta o l'eliminazione di un valore o la modifica di un valore esistente.|
|REG_NOTIFY_CHANGE_SECURITY|Notifica al chiamante le modifiche apportate al descrittore di sicurezza della chiave.|

*hEvent*<br/>
Handle per un evento. Se il parametro *bAsync* è true, il metodo restituisce immediatamente un valore e le modifiche vengono segnalate segnalando questo evento. Se *bAsync* è false, *hEvent* viene ignorato.

*bAsync*<br/>
Specifica un flag che indica il modo in cui il metodo segnala le modifiche. Se questo parametro è TRUE, il metodo restituisce immediatamente un valore e segnala le modifiche segnalando l'evento specificato. Quando questo parametro è FALSE, il metodo non restituisce alcun risultato fino a quando non si è verificata una modifica. Se *hEvent* non specifica un evento valido, il parametro *bAsync* non può essere true.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

> [!NOTE]
> Questo metodo non notifica al chiamante se la chiave specificata è stata eliminata.

Per altri dettagli e un programma di esempio, vedere [RegNotifyChangeKeyValue](/windows/win32/api/winreg/nf-winreg-regnotifychangekeyvalue).

## <a name="cregkeyopen"></a><a name="open"></a> CRegKey:: Open

Chiamare questo metodo per aprire la chiave specificata e impostare [m_hKey](#m_hkey) sull'handle della chiave.

```
LONG Open(
    HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    REGSAM samDesired = KEY_READ | KEY_WRITE) throw();
```

### <a name="parameters"></a>Parametri

*hKeyParent*<br/>
Handle di una chiave aperta.

*lpszKeyName*<br/>
Specifica il nome di una chiave da creare o aprire. Questo nome deve essere una sottochiave di *hKeyParent*.

*samDesired*<br/>
Accesso di sicurezza per la chiave. Il valore predefinito è KEY_ALL_ACCESS. Per un elenco di valori e descrizioni possibili, vedere [RegCreateKeyEx](/windows/win32/api/winreg/nf-winreg-regcreatekeyexw) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, viene definito un valore di errore diverso da zero in WINERROR. H.

### <a name="remarks"></a>Commenti

Se il parametro *lpszKeyName* è null o punta a una stringa vuota, `Open` apre un nuovo handle della chiave identificata da *hKeyParent*, ma non chiude gli handle aperti in precedenza.

A differenza di [CRegKey:: create](#create), `Open` non creerà la chiave specificata se non esiste.

## <a name="cregkeyoperator-hkey"></a><a name="operator_hkey"></a> CRegKey:: operator HKEY

Converte un `CRegKey` oggetto in un HKEY.

```
operator HKEY() const throw();
```

## <a name="cregkeyoperator-"></a><a name="operator_eq"></a> CRegKey:: operator =

Operatore di assegnazione.

```
CRegKey& operator= (CRegKey& key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave da copiare.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla nuova chiave.

### <a name="remarks"></a>Commenti

Questo operatore scollega la *chiave* dall'oggetto corrente e la assegna all' `CRegKey` oggetto.

## <a name="cregkeyquerybinaryvalue"></a><a name="querybinaryvalue"></a> CRegKey:: QueryBinaryValue

Chiamare questo metodo per recuperare i dati binari per un nome di valore specificato.

```
LONG QueryBinaryValue(
    LPCTSTR pszValueName,
    void* pValue,
    ULONG* pnBytes) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore su cui eseguire una query.

*pValue*<br/>
Puntatore a un buffer che riceve i dati del valore.

*pnBytes*<br/>
Puntatore a una variabile che specifica la dimensione, in byte, del buffer a cui punta il parametro *pValue* . Quando il metodo restituisce, questa variabile contiene la dimensione dei dati copiati nel buffer.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, viene restituito un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono di tipo REG_BINARY, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Commenti

Questo metodo si avvale di `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Per ulteriori informazioni, vedere [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) .

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del registro di sistema, leggendo potenzialmente i dati che non possono essere considerati attendibili. Inoltre, la funzione [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) utilizzata da questo metodo non gestisce in modo esplicito le stringhe con terminazione null. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyquerydwordvalue"></a><a name="querydwordvalue"></a> CRegKey:: QueryDWORDValue

Chiamare questo metodo per recuperare i dati DWORD per un nome di valore specificato.

```
LONG QueryDWORDValue(
    LPCTSTR pszValueName,
    DWORD& dwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore su cui eseguire una query.

*dwValue*<br/>
Puntatore a un buffer che riceve il valore DWORD.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, viene restituito un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono di tipo REG_DWORD, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Commenti

Questo metodo si avvale di `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Per ulteriori informazioni, vedere [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) .

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del registro di sistema, leggendo potenzialmente i dati che non possono essere considerati attendibili. Inoltre, la funzione [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) utilizzata da questo metodo non gestisce in modo esplicito le stringhe con terminazione null. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyqueryguidvalue"></a><a name="queryguidvalue"></a> CRegKey:: QueryGUIDValue

Chiamare questo metodo per recuperare i dati GUID per un nome di valore specificato.

```
LONG QueryGUIDValue(
    LPCTSTR pszValueName,
    GUID& guidValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore su cui eseguire una query.

*guidValue*<br/>
Puntatore a una variabile che riceve il GUID.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, viene restituito un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono GUID validi, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Commenti

Questo metodo utilizza `CRegKey::QueryStringValue` e converte la stringa in un GUID utilizzando [CLSIDFromString](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromstring).

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del registro di sistema, leggendo potenzialmente i dati che non possono essere considerati attendibili.

## <a name="cregkeyquerymultistringvalue"></a><a name="querymultistringvalue"></a> CRegKey:: QueryMultiStringValue

Chiamare questo metodo per recuperare i dati MultiString per un nome di valore specificato.

```
LONG QueryMultiStringValue(
    LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore su cui eseguire una query.

*pszValue*<br/>
Puntatore a un buffer che riceve i dati multistringa. Una multistringa è una matrice di stringhe con terminazione null, terminata da due caratteri null.

*pnChars*<br/>
Dimensione, in TCHARs, del buffer a cui punta *pszValue*. Quando il metodo restituisce, *pnChars* contiene le dimensioni, in TCHARs, della multistringa recuperate, incluso un carattere null di terminazione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, viene restituito un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono di tipo REG_MULTI_SZ, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Commenti

Questo metodo si avvale di `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Per ulteriori informazioni, vedere [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) .

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del registro di sistema, leggendo potenzialmente i dati che non possono essere considerati attendibili. Inoltre, la funzione [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) utilizzata da questo metodo non gestisce in modo esplicito le stringhe con terminazione null. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyqueryqwordvalue"></a><a name="queryqwordvalue"></a> CRegKey:: QueryQWORDValue

Chiamare questo metodo per recuperare i dati QWORD per un nome di valore specificato.

```
LONG QueryQWORDValue(
    LPCTSTR pszValueName,
    ULONGLONG& qwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore su cui eseguire una query.

*qwValue*<br/>
Puntatore a un buffer che riceve l'QWORD.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, viene restituito un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono di tipo REG_QWORD, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Commenti

Questo metodo si avvale di `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Per ulteriori informazioni, vedere [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) .

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del registro di sistema, leggendo potenzialmente i dati che non possono essere considerati attendibili. Inoltre, la funzione [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) utilizzata da questo metodo non gestisce in modo esplicito le stringhe con terminazione null. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyquerystringvalue"></a><a name="querystringvalue"></a> CRegKey:: QueryStringValue

Chiamare questo metodo per recuperare i dati stringa per un nome di valore specificato.

```
LONG QueryStringValue(
    LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore su cui eseguire una query.

*pszValue*<br/>
Puntatore a un buffer che riceve i dati di stringa.

*pnChars*<br/>
Dimensione, in TCHARs, del buffer a cui punta *pszValue*. Quando il metodo restituisce, *pnChars* contiene le dimensioni, in TCHARs, della stringa recuperata, incluso un carattere null di terminazione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, viene restituito un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono di tipo REG_SZ, viene restituito ERROR_INVALID_DATA. Se il metodo restituisce ERROR_MORE_DATA, *pnChars* è uguale a zero, non la dimensione del buffer richiesta in byte.

### <a name="remarks"></a>Commenti

Questo metodo si avvale di `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Per ulteriori informazioni, vedere [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) .

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del registro di sistema, leggendo potenzialmente i dati che non possono essere considerati attendibili. Inoltre, la funzione [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) utilizzata da questo metodo non gestisce in modo esplicito le stringhe con terminazione null. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyqueryvalue"></a><a name="queryvalue"></a> CRegKey:: QueryValue

Chiamare questo metodo per recuperare i dati per il campo del valore specificato di [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come ATL_DEPRECATED.

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

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore su cui eseguire una query. Se *pszValueName* è null o una stringa vuota, "", il metodo recupera il tipo e i dati per il valore predefinito o senza nome della chiave, se disponibile.

*pdwType*<br/>
Puntatore a una variabile che riceve un codice che indica il tipo di dati archiviati nel valore specificato. Il parametro *pdwType* può essere null se il codice di tipo non è obbligatorio.

*pData*<br/>
Puntatore a un buffer che riceve i dati del valore. Questo parametro può essere NULL se i dati non sono obbligatori.

*pnBytes*<br/>
Puntatore a una variabile che specifica la dimensione, in byte, del buffer a cui punta il parametro *pData* . Quando il metodo restituisce, questa variabile contiene le dimensioni dei dati copiati in *pData.*

*dwValue*<br/>
Dati numerici del campo valore.

*lpszValueName*<br/>
Specifica il campo del valore su cui eseguire la query.

*szValue*<br/>
Dati stringa del campo valore.

*pdwCount*<br/>
Dimensione dei dati di stringa. Il valore viene inizialmente impostato sulla dimensione del buffer *szValue* .

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Le due versioni originali di `QueryValue` non sono più supportate e sono contrassegnate come ATL_DEPRECATED. Il compilatore emetterà un avviso se vengono usati questi moduli.

Il metodo rimanente chiama RegQueryValueEx.

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del registro di sistema, leggendo potenzialmente i dati che non possono essere considerati attendibili. Inoltre, la funzione RegQueryValueEx utilizzata da questo metodo non gestisce in modo esplicito le stringhe con terminazione NULL. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyrecursedeletekey"></a><a name="recursedeletekey"></a> CRegKey:: RecurseDeleteKey

Chiamare questo metodo per rimuovere la chiave specificata dal registro di sistema e rimuovere in modo esplicito eventuali sottochiavi.

```
LONG RecurseDeleteKey(LPCTSTR lpszKey) throw();
```

### <a name="parameters"></a>Parametri

*lpszKey*<br/>
Specifica il nome della chiave da eliminare. Questo nome deve essere una sottochiave di [m_hKey](#m_hkey).

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, viene definito un valore di errore diverso da zero in WINERROR. H.

### <a name="remarks"></a>Commenti

Se la chiave include sottochiavi, è necessario chiamare questo metodo per eliminare la chiave.

## <a name="cregkeysetbinaryvalue"></a><a name="setbinaryvalue"></a> CRegKey:: SetBinaryValue

Chiamare questo metodo per impostare il valore binario della chiave del registro di sistema.

```
LONG SetBinaryValue(
    LPCTSTR pszValueName,
    const void* pValue,
    ULONG nBytes) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa che contiene il nome del valore da impostare. Se non è già presente un valore con questo nome, il metodo lo aggiunge alla chiave.

*pValue*<br/>
Puntatore a un buffer contenente i dati da archiviare con il nome del valore specificato.

*nBytes*<br/>
Specifica la dimensione, in byte, delle informazioni a cui punta il parametro *pValue* .

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Questo metodo usa [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) per scrivere il valore nel registro di sistema.

## <a name="cregkeysetdwordvalue"></a><a name="setdwordvalue"></a> CRegKey:: SetDWORDValue

Chiamare questo metodo per impostare il valore DWORD della chiave del registro di sistema.

```
LONG SetDWORDValue(LPCTSTR pszValueName, DWORD dwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa che contiene il nome del valore da impostare. Se non è già presente un valore con questo nome, il metodo lo aggiunge alla chiave.

*dwValue*<br/>
Dati DWORD da archiviare con il nome del valore specificato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Questo metodo usa [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) per scrivere il valore nel registro di sistema.

## <a name="cregkeysetguidvalue"></a><a name="setguidvalue"></a> CRegKey:: SetGUIDValue

Chiamare questo metodo per impostare il valore GUID della chiave del registro di sistema.

```
LONG SetGUIDValue(LPCTSTR pszValueName, REFGUID guidValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa che contiene il nome del valore da impostare. Se non è già presente un valore con questo nome, il metodo lo aggiunge alla chiave.

*guidValue*<br/>
Riferimento al GUID da archiviare con il nome del valore specificato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Questo metodo utilizza `CRegKey::SetStringValue` e converte il GUID in una stringa utilizzando [StringFromGUID2](/windows/win32/api/combaseapi/nf-combaseapi-stringfromguid2).

## <a name="cregkeysetkeyvalue"></a><a name="setkeyvalue"></a> CRegKey:: SetKeyValue

Chiamare questo metodo per archiviare i dati in un campo valore specificato di una chiave specificata.

```
LONG SetKeyValue(
    LPCTSTR lpszKeyName,
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL) throw();
```

### <a name="parameters"></a>Parametri

*lpszKeyName*<br/>
Specifica il nome della chiave da creare o aprire. Questo nome deve essere una sottochiave di [m_hKey](#m_hkey).

*lpszValue*<br/>
Specifica i dati da archiviare. Questo parametro deve essere non NULL.

*lpszValueName*<br/>
Specifica il campo del valore da impostare. Se un campo valore con questo nome non esiste già nella chiave, viene aggiunto.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per creare o aprire la chiave *lpszKeyName* e archiviare i dati *lpszValue* nel campo del valore *lpszValueName* .

## <a name="cregkeysetkeysecurity"></a><a name="setkeysecurity"></a> CRegKey:: SetKeySecurity

Chiamare questo metodo per impostare la sicurezza della chiave del registro di sistema.

```
LONG SetKeySecurity(SECURITY_INFORMATION si, PSECURITY_DESCRIPTOR psd) throw();
```

### <a name="parameters"></a>Parametri

*si*<br/>
Specifica i componenti del descrittore di sicurezza da impostare. Il valore può essere una combinazione dei valori seguenti:

|Valore|Significato|
|-----------|-------------|
|DACL_SECURITY_INFORMATION|Imposta l'elenco di controllo di accesso discrezionale (DACL) della chiave. La chiave deve avere accesso WRITE_DAC oppure il processo chiamante deve essere il proprietario dell'oggetto.|
|GROUP_SECURITY_INFORMATION|Imposta l'ID di sicurezza (SID) del gruppo primario della chiave. La chiave deve avere accesso WRITE_OWNER oppure il processo chiamante deve essere il proprietario dell'oggetto.|
|OWNER_SECURITY_INFORMATION|Imposta il SID del proprietario della chiave. La chiave deve avere accesso WRITE_OWNER oppure il processo chiamante deve essere il proprietario dell'oggetto o avere abilitato il privilegio di SE_TAKE_OWNERSHIP_NAME.|
|SACL_SECURITY_INFORMATION|Imposta l'elenco di controllo di accesso di sistema (SACL) della chiave. La chiave deve avere accesso ACCESS_SYSTEM_SECURITY. Il modo corretto per ottenere questo accesso consiste nell'abilitare il [privilegio](/windows/win32/secauthz/privileges) SE_SECURITY_NAME nel token di accesso corrente del chiamante, aprire l'handle per ACCESS_SYSTEM_SECURITY Access e quindi disabilitare il privilegio.|

*PSD*<br/>
Puntatore a una struttura [SECURITY_DESCRIPTOR](/windows/win32/api/winnt/ns-winnt-security_descriptor) che specifica gli attributi di sicurezza da impostare per la chiave specificata.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Imposta gli attributi di sicurezza della chiave. Per ulteriori informazioni, vedere [RegSetKeySecurity](/windows/win32/api/winreg/nf-winreg-regsetkeysecurity) .

## <a name="cregkeysetmultistringvalue"></a><a name="setmultistringvalue"></a> CRegKey:: SetMultiStringValue

Chiamare questo metodo per impostare il valore multistringa della chiave del registro di sistema.

```
LONG SetMultiStringValue(LPCTSTR pszValueName, LPCTSTR pszValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa che contiene il nome del valore da impostare. Se non è già presente un valore con questo nome, il metodo lo aggiunge alla chiave.

*pszValue*<br/>
Puntatore ai dati a più stringhe da archiviare con il nome del valore specificato. Una multistringa è una matrice di stringhe con terminazione null, terminata da due caratteri null.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Questo metodo usa [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) per scrivere il valore nel registro di sistema.

## <a name="cregkeysetqwordvalue"></a><a name="setqwordvalue"></a> CRegKey:: SetQWORDValue

Chiamare questo metodo per impostare il valore QWORD della chiave del registro di sistema.

```
LONG SetQWORDValue(LPCTSTR pszValueName, ULONGLONG qwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa che contiene il nome del valore da impostare. Se non è già presente un valore con questo nome, il metodo lo aggiunge alla chiave.

*qwValue*<br/>
Dati QWORD da archiviare con il nome del valore specificato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Questo metodo usa [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) per scrivere il valore nel registro di sistema.

## <a name="cregkeysetstringvalue"></a><a name="setstringvalue"></a> CRegKey:: SetStringValue

Chiamare questo metodo per impostare il valore stringa della chiave del registro di sistema.

```
LONG SetStringValue(
    LPCTSTR pszValueName,
    LPCTSTR pszValue,
    DWORD dwType = REG_SZ) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa che contiene il nome del valore da impostare. Se non è già presente un valore con questo nome, il metodo lo aggiunge alla chiave.

*pszValue*<br/>
Puntatore ai dati stringa da archiviare con il nome del valore specificato.

*dwType*<br/>
Tipo di stringa da scrivere nel registro di sistema: REG_SZ (impostazione predefinita) o REG_EXPAND_SZ (per le multistringhe).

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Questo metodo usa [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) per scrivere il valore nel registro di sistema.

## <a name="cregkeysetvalue"></a><a name="setvalue"></a> CRegKey:: SetValue

Chiamare questo metodo per archiviare i dati nel campo del valore specificato di [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come ATL_DEPRECATED.

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

*pszValueName*<br/>
Puntatore a una stringa che contiene il nome del valore da impostare. Se un valore con questo nome non è già presente nella chiave, il metodo lo aggiunge alla chiave. Se *pszValueName* è null o una stringa vuota, "", il metodo imposta il tipo e i dati per il valore predefinito o senza nome della chiave.

*dwType*<br/>
Specifica un codice che indica il tipo di dati a cui punta il parametro *pValue* .

*pValue*<br/>
Puntatore a un buffer contenente i dati da archiviare con il nome del valore specificato.

*nBytes*<br/>
Specifica la dimensione, in byte, delle informazioni a cui punta il parametro *pValue* . Se i dati sono di tipo REG_SZ, REG_EXPAND_SZ o REG_MULTI_SZ, *nBytes* deve includere la dimensione del carattere null di terminazione.

*hKeyParent*<br/>
Handle di una chiave aperta.

*lpszKeyName*<br/>
Specifica il nome di una chiave da creare o aprire. Questo nome deve essere una sottochiave di *hKeyParent*.

*lpszValue*<br/>
Specifica i dati da archiviare. Questo parametro deve essere non NULL.

*lpszValueName*<br/>
Specifica il campo del valore da impostare. Se un campo valore con questo nome non esiste già nella chiave, viene aggiunto.

*dwValue*<br/>
Specifica i dati da archiviare.

*bMulti*<br/>
Se false, indica che la stringa è di tipo REG_SZ. Se true, indica che la stringa è una multistringa di tipo REG_MULTI_SZ.

*nValueLen*<br/>
Se *bMulti* è true, *nValueLen* è la lunghezza della stringa *lpszValue* in caratteri. Se *bMulti* è false, il valore-1 indica che il metodo calcolerà la lunghezza automaticamente.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Commenti

Le due versioni originali di `SetValue` sono contrassegnate come ATL_DEPRECATED e non devono più essere utilizzate. Il compilatore emetterà un avviso se vengono usati questi moduli.

Il terzo metodo chiama [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw).

## <a name="see-also"></a>Vedi anche

[Esempio DCOM](../../overview/visual-cpp-samples.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
