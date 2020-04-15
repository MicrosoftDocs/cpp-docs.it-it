---
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
ms.openlocfilehash: 01810c16ff3e7fbc930983b9a52dc3a80f779f14
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331035"
---
# <a name="cregkey-class"></a>Classe CRegKey

Questa classe fornisce metodi per la modifica delle voci nel Registro di sistema.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CRegKey
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRegKey::CRegKey](#cregkey)|Costruttore.|
|[CRegKey:: CRegKey](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRegKey::Attach](#attach)|Chiamare questo metodo per associare `CRegKey` una chiave HKEY `hKey`all'oggetto impostando l'handle del membro [m_hKey](#m_hkey) su .|
|[CRegKey::Close](#close)|Chiamare questo metodo per rilasciare l'handle del membro [m_hKey](#m_hkey) e impostarlo su NULL.|
|[CRegKey::Create](#create)|Chiamare questo metodo per creare la chiave specificata, se `hKeyParent`non esiste come sottochiave di .|
|[CRegKey::DeleteSubKey](#deletesubkey)|Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema.|
|[CRegKey::DeleteValue](#deletevalue)|Chiamare questo metodo per rimuovere un campo valore da [m_hKey](#m_hkey).|
|[CRegKey::Detach](#detach)|Chiamare questo metodo per scollegare `CRegKey` l'handle `m_hKey` del membro [m_hKey](#m_hkey) dall'oggetto e impostare su NULL.|
|[CRegKey::EnumKey](#enumkey)|Chiamare questo metodo per enumerare le sottochiavi della chiave del Registro di sistema aperta.|
|[CRegKey::Flush](#flush)|Chiamare questo metodo per scrivere tutti gli attributi della chiave del Registro di sistema aperta nel Registro di sistema.|
|[CRegKey::GetKeySecurity](#getkeysecurity)|Chiamare questo metodo per recuperare una copia del descrittore di protezione che protegge la chiave del Registro di sistema aperta.|
|[CRegKey::NotifyChangeKeyValue](#notifychangekeyvalue)|Questo metodo notifica al chiamante le modifiche apportate agli attributi o al contenuto della chiave del Registro di sistema aperta.|
|[CRegKey::Open](#open)|Chiamare questo metodo per aprire la chiave specificata e impostare [m_hKey](#m_hkey) sull'handle di questa chiave.|
|[Valore di CRegKey::QueryBinary](#querybinaryvalue)|Chiamare questo metodo per recuperare i dati binari per un nome di valore specificato.|
|[Valore DiCRegKey::QueryDWORDValue](#querydwordvalue)|Chiamare questo metodo per recuperare i dati DWORD per un nome di valore specificato.|
|[Valore di CRegKey::QueryGUID](#queryguidvalue)|Chiamare questo metodo per recuperare i dati GUID per un nome di valore specificato.|
|[CRegKey::QueryMultiStringValue](#querymultistringvalue)|Chiamare questo metodo per recuperare i dati multistringa per un nome di valore specificato.|
|[Valore CRegKey::QueryQWORDValue](#queryqwordvalue)|Chiamare questo metodo per recuperare i dati QWORD per un nome di valore specificato.|
|[Valore di CRegKey::QueryStringValueCRegKey::QueryStringValue](#querystringvalue)|Chiamare questo metodo per recuperare i dati di stringa per un nome di valore specificato.|
|[CRegKey::QueryValue](#queryvalue)|Chiamare questo metodo per recuperare i dati per il campo del valore specificato di [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come ATL_DEPRECATED.|
|[CRegKey::RecurseDeleteKey](#recursedeletekey)|Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema e rimuovere in modo esplicito tutte le sottochiavi.|
|[Valore CRegKey::SetBinary](#setbinaryvalue)|Chiamare questo metodo per impostare il valore binario della chiave del Registro di sistema.|
|[Valore CRegKey::SetDWORD](#setdwordvalue)|Chiamare questo metodo per impostare il valore DWORD della chiave del Registro di sistema.|
|[Valore di CRegKey::SetGUID](#setguidvalue)|Chiamare questo metodo per impostare il valore GUID della chiave del Registro di sistema.|
|[CRegKey::SetKeySecurity](#setkeysecurity)|Chiamare questo metodo per impostare la protezione della chiave del Registro di sistema.|
|[Valore CRegKey::SetKey](#setkeyvalue)|Chiamare questo metodo per archiviare i dati in un campo valore specificato di una chiave specificata.|
|[CRegKey::SetMultiStringValue](#setmultistringvalue)|Chiamare questo metodo per impostare il valore multistringa della chiave del Registro di sistema.|
|[Valore CRegKey::SetQWORD](#setqwordvalue)|Chiamare questo metodo per impostare il valore QWORD della chiave del Registro di sistema.|
|[Valore di CRegKey::SetStringValueCRegKey::SetStringValue](#setstringvalue)|Chiamare questo metodo per impostare il valore di stringa della chiave del Registro di sistema.|
|[CRegKey::SetValue](#setvalue)|Chiamare questo metodo per archiviare i dati nel campo del valore specificato di [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come ATL_DEPRECATED.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRegKey::operatorHKEY](#operator_hkey)|Converte `CRegKey` un oggetto in una Chiave HKEY.|
|[CRegKey::operatore](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRegKey::m_hKey](#m_hkey)|Contiene un handle della chiave `CRegKey` del Registro di sistema associata all'oggetto.|
|[CRegKey::m_pTM](#m_ptm)|Puntatore `CAtlTransactionManager` all'oggetto|

## <a name="remarks"></a>Osservazioni

`CRegKey`fornisce metodi per la creazione e l'eliminazione di chiavi e valori nel Registro di sistema. Il Registro di sistema contiene un insieme di definizioni specifiche dell'installazione per i componenti di sistema, ad esempio i numeri di versione del software, i mapping logico-fisico dell'hardware installato e gli oggetti COM.

`CRegKey`fornisce un'interfaccia di programmazione al Registro di sistema per un determinato computer. Ad esempio, per aprire una `CRegKey::Open`particolare chiave del Registro di sistema, chiamare . Per recuperare o modificare un `CRegKey::QueryValue` `CRegKey::SetValue`valore di dati, chiamare o , rispettivamente. Per chiudere una `CRegKey::Close`chiave, chiamare .

Quando si chiude una chiave, i relativi dati del Registro di sistema vengono scritti (scaricati) sul disco rigido. Questo processo potrebbe richiedere alcuni secondi. Se l'applicazione deve scrivere in modo esplicito i dati del Registro di sistema sul disco rigido, è possibile chiamare la funzione [Win32 RegFlushKey.](/windows/win32/api/winreg/nf-winreg-regflushkey) Tuttavia, `RegFlushKey` utilizza molte risorse di sistema e deve essere chiamato solo quando assolutamente necessario.

> [!IMPORTANT]
> Tutti i metodi che consentono al chiamante di specificare un percorso del Registro di sistema possono leggere dati che non possono essere considerati attendibili. I metodi che utilizzano [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) devono prendere in considerazione che questa funzione non gestisce in modo esplicito le stringhe con terminazione NULL. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="cregkeyattach"></a><a name="attach"></a>CRegKey::Attach

Chiamare questo metodo per associare `CRegKey` una Chiave HKEY all'oggetto impostando l'handle del membro [m_hKey](#m_hkey) su *hKey*.

```
void Attach(HKEY hKey) throw();
```

### <a name="parameters"></a>Parametri

*Hkey*<br/>
Handle di una chiave del Registro di sistema.

### <a name="remarks"></a>Osservazioni

`Attach`asserirà `m_hKey` se non è NULL.

## <a name="cregkeyclose"></a><a name="close"></a>CRegKey::Close

Chiamare questo metodo per rilasciare l'handle del membro [m_hKey](#m_hkey) e impostarlo su NULL.

```
LONG Close() throw();
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario restituisce un valore di errore.

## <a name="cregkeycreate"></a><a name="create"></a>CRegKey::Create

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

*hKeyParent (chiave padre)*<br/>
Handle di un tasto aperto.

*lpszKeyName (nome di chiave di lavoro)*<br/>
Specifica il nome di una chiave da creare o aprire. Questo nome deve essere una sottochiave di *hKeyParent*.

*Classe lpsz*<br/>
Specifica la classe della chiave da creare o aprire. Il valore predefinito è REG_NONE.

*DwOpzioni (informazioni in base alle opzioni utente)*<br/>
Opzioni per la chiave. Il valore predefinito è REG_OPTION_NON_VOLATILE. Per un elenco dei valori e delle descrizioni possibili, vedere [RegCreateKeyEx](/windows/win32/api/winreg/nf-winreg-regcreatekeyexw) in Windows SDK.

*samDesired*<br/>
Accesso di sicurezza per la chiave. Il valore predefinito è KEY_READ &#124; KEY_WRITE. Per un elenco dei valori `RegCreateKeyEx`e delle descrizioni possibili, vedere .

*lpSecAttr (inatto)*<br/>
Puntatore a una struttura [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che indica se l'handle della chiave può essere ereditato da un processo figlio. Per impostazione predefinita, questo parametro è NULL (ovvero l'handle non può essere ereditato).

*lpdwDisposizione*<br/>
[fuori] Se non NULL, recupera REG_CREATED_NEW_KEY (se la chiave non esisteva ed è stata creata) o REG_OPENED_EXISTING_KEY (se la chiave esisteva ed è stata aperta).

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS e apre la chiave. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

`Create`imposta il [membro m_hKey](#m_hkey) sull'handle di questa chiave.

## <a name="cregkeycregkey"></a><a name="cregkey"></a>CRegKey::CRegKey

Costruttore.

```
CRegKey() throw();
CRegKey(CRegKey& key) throw();
explicit CRegKey(HKEY hKey) throw();
CRegKey(CAtlTransactionManager* pTM) throw();
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Riferimento a un oggetto `CRegKey`.

*Hkey*<br/>
Handle per una chiave del Registro di sistema.

*Ptm*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Osservazioni

Crea un nuovo oggetto `CRegKey`. L'oggetto può essere `CRegKey` creato da un oggetto esistente o da un handle a una chiave del Registro di sistema.

## <a name="cregkeycregkey"></a><a name="dtor"></a>CRegKey:: CRegKey

Distruttore.

```
~CRegKey() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore `m_hKey`rilascia .

## <a name="cregkeydeletesubkey"></a><a name="deletesubkey"></a>CRegKey::DeleteSubKey

Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema.

```
LONG DeleteSubKey(LPCTSTR lpszSubKey) throw();
```

### <a name="parameters"></a>Parametri

*lpszSubKey (Chiave non pppszSubKey)*<br/>
Specifica il nome della chiave da eliminare. Questo nome deve essere una sottochiave di [m_hKey](#m_hkey).

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

`DeleteSubKey`possibile eliminare solo una chiave senza sottochiavi. Se la chiave dispone di sottochiavi, chiamare [RecurseDeleteKey.](#recursedeletekey)

## <a name="cregkeydeletevalue"></a><a name="deletevalue"></a>CRegKey::DeleteValue

Chiamare questo metodo per rimuovere un campo valore da [m_hKey](#m_hkey).

```
LONG DeleteValue(LPCTSTR lpszValue) throw();
```

### <a name="parameters"></a>Parametri

*lpszValore*<br/>
Specifica il campo del valore da rimuovere.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

## <a name="cregkeydetach"></a><a name="detach"></a>CRegKey::Detach

Chiamare questo metodo per scollegare `CRegKey` l'handle `m_hKey` del membro [m_hKey](#m_hkey) dall'oggetto e impostare su NULL.

```
HKEY Detach() throw();
```

### <a name="return-value"></a>Valore restituito

HKEY associato all'oggetto. `CRegKey`

## <a name="cregkeyenumkey"></a><a name="enumkey"></a>CRegKey::EnumKey

Chiamare questo metodo per enumerare le sottochiavi della chiave del Registro di sistema aperta.

```
LONG EnumKey(
    DWORD iIndex,
    LPTSTR pszName,
    LPDWORD pnNameLength,
    FILETIME* pftLastWriteTime = NULL) throw();
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
Indice della sottochiave. Questo parametro deve essere zero per la prima chiamata e quindi incrementato per le chiamate successive

*nomedi psz*<br/>
Puntatore a un buffer che riceve il nome della sottochiave, incluso il carattere di terminazione null. Solo il nome della sottochiave viene copiato nel buffer, non nella gerarchia di chiavi completa.

*pnNameLunghezza*<br/>
Puntatore a una variabile che specifica la dimensione, in TCHAR, del buffer specificato dal parametro *pszName.* Questa dimensione deve includere il carattere di terminazione null. Quando il metodo termina, la variabile a cui punta *pnNameLength* contiene il numero di caratteri archiviati nel buffer. Il conteggio restituito non include il carattere di terminazione null.

*pftLastWriteTime (tempo pftLastWriteTime)*<br/>
Puntatore a una variabile che riceve l'ora dell'ultima scrittura della sottochiave enumerata.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Per enumerare le `CRegKey::EnumKey` sottochiavi, chiamare con un indice pari a zero. Incrementare il valore di indice e ripetere fino a quando il metodo restituisce ERROR_NO_MORE_ITEMS. Per ulteriori informazioni, vedere [RegEnumKeyEx](/windows/win32/api/winreg/nf-winreg-regenumkeyexw) in Windows SDK.

## <a name="cregkeyflush"></a><a name="flush"></a>CRegKey::Flush

Chiamare questo metodo per scrivere tutti gli attributi della chiave del Registro di sistema aperta nel Registro di sistema.

```
LONG Flush() throw();
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [RegEnumFlush](/windows/win32/api/winreg/nf-winreg-regflushkey) in Windows SDK.

## <a name="cregkeygetkeysecurity"></a><a name="getkeysecurity"></a>CRegKey::GetKeySecurity

Chiamare questo metodo per recuperare una copia del descrittore di protezione che protegge la chiave del Registro di sistema aperta.

```
LONG GetKeySecurity(
    SECURITY_INFORMATION si,
    PSECURITY_DESCRIPTOR psd,
    LPDWORD pnBytes) throw();
```

### <a name="parameters"></a>Parametri

*si*<br/>
Il [valore SECURITY_INFORMATION](/windows/win32/SecAuthZ/security-information) che indica le informazioni di sicurezza richieste.

*Psd*<br/>
Puntatore a un buffer che riceve una copia del descrittore di sicurezza richiesto.

*pnByte (file pnBytes)*<br/>
Dimensione, in byte, del buffer a cui punta *psd*.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero viene definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [RegGetKeySecurity](/windows/win32/api/winreg/nf-winreg-reggetkeysecurity).

## <a name="cregkeym_hkey"></a><a name="m_hkey"></a>CRegKey::m_hKey

Contiene un handle della chiave `CRegKey` del Registro di sistema associata all'oggetto.

```
HKEY m_hKey;
```

## <a name="cregkeym_ptm"></a><a name="m_ptm"></a>CRegKey::m_pTM

Puntatore a un oggetto `CAtlTransactionManager`.

```
CAtlTransactionManager* m_pTM;
```

### <a name="remarks"></a>Osservazioni

## <a name="cregkeynotifychangekeyvalue"></a><a name="notifychangekeyvalue"></a>CRegKey::NotifyChangeKeyValue

Questo metodo notifica al chiamante le modifiche apportate agli attributi o al contenuto della chiave del Registro di sistema aperta.

```
LONG NotifyChangeKeyValue(
    BOOL bWatchSubtree,
    DWORD dwNotifyFilter,
    HANDLE hEvent,
    BOOL bAsync = TRUE) throw();
```

### <a name="parameters"></a>Parametri

*bWatchSubtree (informazioni in inglese)*<br/>
Specifica un flag che indica se segnalare le modifiche nella chiave specificata e in tutte le relative sottochiavi o solo nella chiave specificata. Se questo parametro è TRUE, il metodo segnala le modifiche nella chiave e nelle relative sottochiavi. Se il parametro è FALSE, il metodo segnala le modifiche solo nella chiave.

*dwNotifyFilter (filtro per instato)*<br/>
Specifica un set di flag che controllano quali modifiche devono essere segnalate. Questo parametro può essere una combinazione dei seguenti valori:

|Valore|Significato|
|-----------|-------------|
|REG_NOTIFY_CHANGE_NAME|Notificare al chiamante se una sottochiave viene aggiunta o eliminata.|
|REG_NOTIFY_CHANGE_ATTRIBUTES|Notificare al chiamante le modifiche apportate agli attributi della chiave, ad esempio le informazioni sul descrittore di sicurezza.|
|REG_NOTIFY_CHANGE_LAST_SET|Notificare al chiamante le modifiche apportate a un valore della chiave. Ciò può includere l'aggiunta o l'eliminazione di un valore o la modifica di un valore esistente.|
|REG_NOTIFY_CHANGE_SECURITY|Notificare al chiamante le modifiche al descrittore di protezione della chiave.|

*hEvento*<br/>
Handle per un evento. Se il *bAsync* parametro è TRUE, il metodo restituisce immediatamente e le modifiche vengono segnalate segnalando questo evento. Se *bAsync* è FALSE, *hEvent* viene ignorato.

*bAsync*<br/>
Specifica un flag che indica come il metodo segnala le modifiche. Se questo parametro è TRUE, il metodo restituisce immediatamente e segnala le modifiche segnalando l'evento specificato. Quando questo parametro è FALSE, il metodo non restituisce fino a quando non si è verificata una modifica. Se *hEvent* non specifica un evento valido, il *bAsync* parametro non può essere TRUE.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Questo metodo non notifica al chiamante se la chiave specificata viene eliminata.

Per ulteriori dettagli e un programma di esempio, vedere [RegNotifyChangeKeyValue](/windows/win32/api/winreg/nf-winreg-regnotifychangekeyvalue).

## <a name="cregkeyopen"></a><a name="open"></a>CRegKey::Open

Chiamare questo metodo per aprire la chiave specificata e impostare [m_hKey](#m_hkey) sull'handle di questa chiave.

```
LONG Open(
    HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    REGSAM samDesired = KEY_READ | KEY_WRITE) throw();
```

### <a name="parameters"></a>Parametri

*hKeyParent (chiave padre)*<br/>
Handle di un tasto aperto.

*lpszKeyName (nome di chiave di lavoro)*<br/>
Specifica il nome di una chiave da creare o aprire. Questo nome deve essere una sottochiave di *hKeyParent*.

*samDesired*<br/>
Accesso di sicurezza per la chiave. Il valore predefinito è KEY_ALL_ACCESS. Per un elenco dei valori e delle descrizioni possibili, vedere [RegCreateKeyEx](/windows/win32/api/winreg/nf-winreg-regcreatekeyexw) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un valore di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Se il *lpszKeyName* parametro è NULL `Open` o punta a una stringa vuota, apre un nuovo handle della chiave identificata da *hKeyParent*, ma non chiude qualsiasi handle aperto in precedenza.

A differenza di [CRegKey::Create](#create), `Open` la chiave specificata non verrà creata se non esiste.

## <a name="cregkeyoperator-hkey"></a><a name="operator_hkey"></a>CRegKey::operatorHKEY

Converte `CRegKey` un oggetto in una Chiave HKEY.

```
operator HKEY() const throw();
```

## <a name="cregkeyoperator-"></a><a name="operator_eq"></a>CRegKey::operatore

Operatore di assegnazione.

```
CRegKey& operator= (CRegKey& key) throw();
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Chiave da copiare.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla nuova chiave.

### <a name="remarks"></a>Osservazioni

Questo operatore scollega *key* dall'oggetto corrente `CRegKey` e lo assegna all'oggetto.

## <a name="cregkeyquerybinaryvalue"></a><a name="querybinaryvalue"></a>Valore di CRegKey::QueryBinary

Chiamare questo metodo per recuperare i dati binari per un nome di valore specificato.

```
LONG QueryBinaryValue(
    LPCTSTR pszValueName,
    void* pValue,
    ULONG* pnBytes) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa con terminazione null contenente il nome del valore di cui eseguire la query.

*pValue*<br/>
Puntatore a un buffer che riceve i dati del valore.

*pnByte (file pnBytes)*<br/>
Puntatore a una variabile che specifica la dimensione, in byte, del buffer a cui punta il *pValue* parametro. Quando il metodo termina, questa variabile contiene la dimensione dei dati copiati nel buffer.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono di tipo REG_BINARY, viene restituita ERROR_INVALID_DATA.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Vedere [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) per ulteriori dettagli.

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura di dati che non possono essere considerati attendibili. Inoltre, la funzione [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) utilizzata da questo metodo non gestisce in modo esplicito le stringhe che sono NULL terminato. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyquerydwordvalue"></a><a name="querydwordvalue"></a>Valore DiCRegKey::QueryDWORDValue

Chiamare questo metodo per recuperare i dati DWORD per un nome di valore specificato.

```
LONG QueryDWORDValue(
    LPCTSTR pszValueName,
    DWORD& dwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa con terminazione null contenente il nome del valore di cui eseguire la query.

*dwValue (valore in dwValue)*<br/>
Puntatore a un buffer che riceve il valore DWORD.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono di tipo REG_DWORD, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Vedere [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) per ulteriori dettagli.

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura di dati che non possono essere considerati attendibili. Inoltre, la funzione [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) utilizzata da questo metodo non gestisce in modo esplicito le stringhe che sono NULL terminato. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyqueryguidvalue"></a><a name="queryguidvalue"></a>Valore di CRegKey::QueryGUID

Chiamare questo metodo per recuperare i dati GUID per un nome di valore specificato.

```
LONG QueryGUIDValue(
    LPCTSTR pszValueName,
    GUID& guidValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa con terminazione null contenente il nome del valore di cui eseguire la query.

*guidValue (valore guid)*<br/>
Puntatore a una variabile che riceve il GUID.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono un GUID valido, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza `CRegKey::QueryStringValue` e converte la stringa in un GUID utilizzando [CLSIDFromString](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromstring).

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura di dati che non possono essere considerati attendibili.

## <a name="cregkeyquerymultistringvalue"></a><a name="querymultistringvalue"></a>CRegKey::QueryMultiStringValue

Chiamare questo metodo per recuperare i dati multistringa per un nome di valore specificato.

```
LONG QueryMultiStringValue(
    LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa con terminazione null contenente il nome del valore di cui eseguire la query.

*pszValore*<br/>
Puntatore a un buffer che riceve i dati multistringa. Una multistring è una matrice di stringhe con terminazione null, terminata da due caratteri null.

*pnChars*<br/>
Dimensione, in WAR, del buffer a cui punta *pszValue*. Quando il metodo termina, *pnChars* contiene la dimensione, in TCHAR, della multistringa recuperata, incluso un carattere di terminazione null.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono di tipo REG_MULTI_SZ, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Vedere [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) per ulteriori dettagli.

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura di dati che non possono essere considerati attendibili. Inoltre, la funzione [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) utilizzata da questo metodo non gestisce in modo esplicito le stringhe che sono NULL terminato. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyqueryqwordvalue"></a><a name="queryqwordvalue"></a>Valore CRegKey::QueryQWORDValue

Chiamare questo metodo per recuperare i dati QWORD per un nome di valore specificato.

```
LONG QueryQWORDValue(
    LPCTSTR pszValueName,
    ULONGLONG& qwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa con terminazione null contenente il nome del valore di cui eseguire la query.

*qwValore*<br/>
Puntatore a un buffer che riceve il Valore QWORD.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono di tipo REG_QWORD, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Vedere [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) per ulteriori dettagli.

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura di dati che non possono essere considerati attendibili. Inoltre, la funzione [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) utilizzata da questo metodo non gestisce in modo esplicito le stringhe che sono NULL terminato. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyquerystringvalue"></a><a name="querystringvalue"></a>Valore di CRegKey::QueryStringValueCRegKey::QueryStringValue

Chiamare questo metodo per recuperare i dati di stringa per un nome di valore specificato.

```
LONG QueryStringValue(
    LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa con terminazione null contenente il nome del valore di cui eseguire la query.

*pszValore*<br/>
Puntatore a un buffer che riceve i dati di stringa.

*pnChars*<br/>
Dimensione, in WAR, del buffer a cui punta *pszValue*. Quando il metodo termina, *pnChars* contiene la dimensione, in WAV, della stringa recuperata, incluso un carattere di terminazione null.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati a cui si fa riferimento non sono di tipo REG_SZ, viene restituito ERROR_INVALID_DATA. Se il metodo restituisce ERROR_MORE_DATA, *pnChars* è uguale a zero, non la dimensione del buffer richiesta in byte.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Vedere [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) per ulteriori dettagli.

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura di dati che non possono essere considerati attendibili. Inoltre, la funzione [RegQueryValueEx](/windows/win32/api/winreg/nf-winreg-regqueryvalueexw) utilizzata da questo metodo non gestisce in modo esplicito le stringhe che sono NULL terminato. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyqueryvalue"></a><a name="queryvalue"></a>CRegKey::QueryValue

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

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa con terminazione null contenente il nome del valore di cui eseguire la query. Se *pszValueName* è NULL o una stringa vuota, "", il metodo recupera il tipo e i dati per il valore predefinito o senza nome della chiave, se presente.

*pdwType (tipo pdw)*<br/>
Puntatore a una variabile che riceve un codice che indica il tipo di dati archiviati nel valore specificato. Il *pdwType* parametro può essere NULL se il codice del tipo non è necessario.

*pDati*<br/>
Puntatore a un buffer che riceve i dati del valore. Questo parametro può essere NULL se i dati non sono necessari.

*pnByte (file pnBytes)*<br/>
Puntatore a una variabile che specifica la dimensione, in byte, del buffer a cui punta il *pData* parametro. Quando il metodo termina, questa variabile contiene la dimensione dei dati copiati *in pData.*

*dwValue (valore in dwValue)*<br/>
Dati numerici del campo valore.

*lpszValueName (nome di valore lpsz)*<br/>
Specifica il campo valore su cui eseguire la query.

*Valore sz*<br/>
Dati stringa del campo valore.

*PdfWCount (conteggio dei p: in base al*<br/>
Dimensione dei dati stringa. Il valore è inizialmente impostato sulla dimensione del buffer *szValue.*

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Le due versioni `QueryValue` originali di non sono più supportate e sono contrassegnate come ATL_DEPRECATED. Il compilatore emetterà un avviso se vengono utilizzati questi moduli.

Il metodo rimanente chiama RegQueryValueEx.

> [!IMPORTANT]
> Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura di dati che non possono essere considerati attendibili. Inoltre, la funzione RegQueryValueEx utilizzata da questo metodo non gestisce in modo esplicito le stringhe che sono NULL terminato. Entrambe le condizioni devono essere verificate dal codice chiamante.

## <a name="cregkeyrecursedeletekey"></a><a name="recursedeletekey"></a>CRegKey::RecurseDeleteKey

Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema e rimuovere in modo esplicito tutte le sottochiavi.

```
LONG RecurseDeleteKey(LPCTSTR lpszKey) throw();
```

### <a name="parameters"></a>Parametri

*lpszKey (chiave del servizio)*<br/>
Specifica il nome della chiave da eliminare. Questo nome deve essere una sottochiave di [m_hKey](#m_hkey).

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un valore di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Se la chiave dispone di sottochiavi, è necessario chiamare questo metodo per eliminare la chiave.

## <a name="cregkeysetbinaryvalue"></a><a name="setbinaryvalue"></a>Valore CRegKey::SetBinary

Chiamare questo metodo per impostare il valore binario della chiave del Registro di sistema.

```
LONG SetBinaryValue(
    LPCTSTR pszValueName,
    const void* pValue,
    ULONG nBytes) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con questo nome non è già presente, il metodo lo aggiunge alla chiave.

*pValue*<br/>
Puntatore a un buffer contenente i dati da archiviare con il nome del valore specificato.

*nByte*<br/>
Specifica la dimensione, in byte, delle informazioni a cui fa riferimento il parametro *pValue.*

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) per scrivere il valore nel Registro di sistema.

## <a name="cregkeysetdwordvalue"></a><a name="setdwordvalue"></a>Valore CRegKey::SetDWORD

Chiamare questo metodo per impostare il valore DWORD della chiave del Registro di sistema.

```
LONG SetDWORDValue(LPCTSTR pszValueName, DWORD dwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con questo nome non è già presente, il metodo lo aggiunge alla chiave.

*dwValue (valore in dwValue)*<br/>
Dati DWORD da archiviare con il nome del valore specificato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) per scrivere il valore nel Registro di sistema.

## <a name="cregkeysetguidvalue"></a><a name="setguidvalue"></a>Valore di CRegKey::SetGUID

Chiamare questo metodo per impostare il valore GUID della chiave del Registro di sistema.

```
LONG SetGUIDValue(LPCTSTR pszValueName, REFGUID guidValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con questo nome non è già presente, il metodo lo aggiunge alla chiave.

*guidValue (valore guid)*<br/>
Riferimento al GUID da archiviare con il nome del valore specificato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza `CRegKey::SetStringValue` e converte il GUID in una stringa utilizzando [StringFromGUID2](/windows/win32/api/combaseapi/nf-combaseapi-stringfromguid2).

## <a name="cregkeysetkeyvalue"></a><a name="setkeyvalue"></a>Valore CRegKey::SetKey

Chiamare questo metodo per archiviare i dati in un campo valore specificato di una chiave specificata.

```
LONG SetKeyValue(
    LPCTSTR lpszKeyName,
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL) throw();
```

### <a name="parameters"></a>Parametri

*lpszKeyName (nome di chiave di lavoro)*<br/>
Specifica il nome della chiave da creare o aprire. Questo nome deve essere una sottochiave di [m_hKey](#m_hkey).

*lpszValore*<br/>
Specifica i dati da archiviare. Questo parametro deve essere diverso da NULL.

*lpszValueName (nome di valore lpsz)*<br/>
Specifica il campo del valore da impostare. Se un campo valore con questo nome non esiste già nella chiave, viene aggiunto.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per creare o aprire la chiave *lpszKeyName* e archiviare i dati *lpszValue* nel campo del valore *lpszValueName* .

## <a name="cregkeysetkeysecurity"></a><a name="setkeysecurity"></a>CRegKey::SetKeySecurity

Chiamare questo metodo per impostare la protezione della chiave del Registro di sistema.

```
LONG SetKeySecurity(SECURITY_INFORMATION si, PSECURITY_DESCRIPTOR psd) throw();
```

### <a name="parameters"></a>Parametri

*si*<br/>
Specifica i componenti del descrittore di protezione da impostare. Il valore può essere una combinazione dei seguenti valori:

|Valore|Significato|
|-----------|-------------|
|DACL_SECURITY_INFORMATION|Imposta l'elenco di controllo di accesso discrezionale (DACL) della chiave. La chiave deve avere accesso WRITE_DAC oppure il processo chiamante deve essere il proprietario dell'oggetto.|
|GROUP_SECURITY_INFORMATION|Imposta l'identificatore di protezione (SID) del gruppo primario della chiave. La chiave deve disporre dell'accesso WRITE_OWNER oppure il processo chiamante deve essere il proprietario dell'oggetto.|
|OWNER_SECURITY_INFORMATION|Imposta il SID del proprietario della chiave. La chiave deve disporre dell'accesso WRITE_OWNER oppure il processo chiamante deve essere il proprietario dell'oggetto o avere il privilegio di SE_TAKE_OWNERSHIP_NAME abilitato.|
|SACL_SECURITY_INFORMATION|Imposta l'elenco di controllo di accesso di sistema (SACL) della chiave. La chiave deve avere accesso ACCESS_SYSTEM_SECURITY. Il modo corretto per ottenere questo accesso consiste nell'abilitare il [privilegio](/windows/win32/secauthz/privileges) SE_SECURITY_NAME nel token di accesso corrente del chiamante, aprire l'handle per l'accesso ACCESS_SYSTEM_SECURITY e quindi disabilitare il privilegio.|

*Psd*<br/>
Puntatore a una struttura [di SECURITY_DESCRIPTOR](/windows/win32/api/winnt/ns-winnt-security_descriptor) che specifica gli attributi di sicurezza da impostare per la chiave specificata.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Imposta gli attributi di sicurezza della chiave. Vedere [RegSetKeySecurity](/windows/win32/api/winreg/nf-winreg-regsetkeysecurity) per ulteriori dettagli.

## <a name="cregkeysetmultistringvalue"></a><a name="setmultistringvalue"></a>CRegKey::SetMultiStringValue

Chiamare questo metodo per impostare il valore multistringa della chiave del Registro di sistema.

```
LONG SetMultiStringValue(LPCTSTR pszValueName, LPCTSTR pszValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con questo nome non è già presente, il metodo lo aggiunge alla chiave.

*pszValore*<br/>
Puntatore ai dati multistringa da archiviare con il nome del valore specificato. Una multistring è una matrice di stringhe con terminazione null, terminata da due caratteri null.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) per scrivere il valore nel Registro di sistema.

## <a name="cregkeysetqwordvalue"></a><a name="setqwordvalue"></a>Valore CRegKey::SetQWORD

Chiamare questo metodo per impostare il valore QWORD della chiave del Registro di sistema.

```
LONG SetQWORDValue(LPCTSTR pszValueName, ULONGLONG qwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con questo nome non è già presente, il metodo lo aggiunge alla chiave.

*qwValore*<br/>
Dati QWORD da archiviare con il nome del valore specificato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) per scrivere il valore nel Registro di sistema.

## <a name="cregkeysetstringvalue"></a><a name="setstringvalue"></a>Valore di CRegKey::SetStringValueCRegKey::SetStringValue

Chiamare questo metodo per impostare il valore di stringa della chiave del Registro di sistema.

```
LONG SetStringValue(
    LPCTSTR pszValueName,
    LPCTSTR pszValue,
    DWORD dwType = REG_SZ) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con questo nome non è già presente, il metodo lo aggiunge alla chiave.

*pszValore*<br/>
Puntatore ai dati stringa da archiviare con il nome del valore specificato.

*dwType (da disgrazia*<br/>
Tipo della stringa da scrivere nel Registro di sistema: REG_SZ (impostazione predefinita) o REG_EXPAND_SZ (per più stringhe).

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw) per scrivere il valore nel Registro di sistema.

## <a name="cregkeysetvalue"></a><a name="setvalue"></a>CRegKey::SetValue

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

*pszValueName (nome pszValue)*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con questo nome non è già presente nella chiave, il metodo lo aggiunge alla chiave. Se *pszValueName* è NULL o una stringa vuota, "", il metodo imposta il tipo e i dati per il valore predefinito o senza nome della chiave.

*dwType (da disgrazia*<br/>
Specifica un codice che indica il tipo di dati a cui punta il parametro *pValue.*

*pValue*<br/>
Puntatore a un buffer contenente i dati da archiviare con il nome del valore specificato.

*nByte*<br/>
Specifica la dimensione, in byte, delle informazioni a cui fa riferimento il parametro *pValue.* Se i dati sono di tipo REG_SZ, REG_EXPAND_SZ o REG_MULTI_SZ, *nBytes* deve includere la dimensione del carattere di terminazione null.

*hKeyParent (chiave padre)*<br/>
Handle di un tasto aperto.

*lpszKeyName (nome di chiave di lavoro)*<br/>
Specifica il nome di una chiave da creare o aprire. Questo nome deve essere una sottochiave di *hKeyParent*.

*lpszValore*<br/>
Specifica i dati da archiviare. Questo parametro deve essere diverso da NULL.

*lpszValueName (nome di valore lpsz)*<br/>
Specifica il campo del valore da impostare. Se un campo valore con questo nome non esiste già nella chiave, viene aggiunto.

*dwValue (valore in dwValue)*<br/>
Specifica i dati da archiviare.

*bMulti*<br/>
Se false, indica che la stringa è di tipo REG_SZ. Se true, indica che la stringa è una multistringa di tipo REG_MULTI_SZ.

*nValueLen (valore)*<br/>
Se *bMulti* è true, *nValueLen* è la lunghezza della stringa *lpszValue* in caratteri. Se *bMulti* è false, un valore di -1 indica che il metodo calcolerà automaticamente la lunghezza.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Osservazioni

Le due versioni `SetValue` originali di sono contrassegnate come ATL_DEPRECATED e non devono più essere utilizzate. Il compilatore emetterà un avviso se vengono utilizzati questi moduli.

Il terzo metodo chiama [RegSetValueEx](/windows/win32/api/winreg/nf-winreg-regsetvalueexw).

## <a name="see-also"></a>Vedere anche

[Esempio DCOM](../../overview/visual-cpp-samples.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
