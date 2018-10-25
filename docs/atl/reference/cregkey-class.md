---
title: Classe CRegKey | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
dev_langs:
- C++
helpviewer_keywords:
- CRegKey class
- ATL, registry
- registry, deleting values
- registry, writing to
- registry, deleting keys
ms.assetid: 3afce82b-ba2c-4c1a-8404-dc969e1af74b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 26861b11aafd4bfcd4f1d5a7cc618ed27b60e6b8
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50071180"
---
# <a name="cregkey-class"></a>Classe CRegKey

Questa classe fornisce metodi per modificare le voci nel Registro di sistema.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

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
|[CRegKey::Close](#close)|Chiamare questo metodo per rilasciare il [m_hKey](#m_hkey) membro gestire e impostarla su NULL.|
|[CRegKey::Create](#create)|Chiamare questo metodo per creare la chiave specificata, se non esiste come una sottochiave della `hKeyParent`.|
|[CRegKey::DeleteSubKey](#deletesubkey)|Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema.|
|[CRegKey::DeleteValue](#deletevalue)|Chiamare questo metodo per rimuovere un campo del valore da [m_hKey](#m_hkey).|
|[CRegKey::Detach](#detach)|Chiamare questo metodo per scollegare il [m_hKey](#m_hkey) handle membro dalle `CRegKey` dell'oggetto e impostare `m_hKey` su NULL.|
|[CRegKey::EnumKey](#enumkey)|Chiamare questo metodo per enumerare le sottochiavi della chiave del Registro di sistema open.|
|[CRegKey::Flush](#flush)|Chiamare questo metodo per tutti gli attributi della chiave di registro aperto di scrittura nel Registro di sistema.|
|[CRegKey::GetKeySecurity](#getkeysecurity)|Chiamare questo metodo per recuperare una copia del descrittore di sicurezza protegge la chiave del Registro di sistema open.|
|[CRegKey::NotifyChangeKeyValue](#notifychangekeyvalue)|Questo metodo notifica al chiamante sulle modifiche per gli attributi o il contenuto della chiave del Registro di sistema open.|
|[CRegKey::Open](#open)|Chiamare questo metodo per aprire la chiave specificata e impostare [m_hKey](#m_hkey) all'handle di questa chiave.|
|[CRegKey::QueryBinaryValue](#querybinaryvalue)|Chiamare questo metodo per recuperare i dati binari per nome di un valore specificato.|
|[CRegKey::QueryDWORDValue](#querydwordvalue)|Chiamare questo metodo per recuperare i dati di valore DWORD per nome di un valore specificato.|
|[CRegKey::QueryGUIDValue](#queryguidvalue)|Chiamare questo metodo per recuperare i dati GUID per il nome di un valore specificato.|
|[CRegKey::QueryMultiStringValue](#querymultistringvalue)|Chiamare questo metodo per recuperare i dati delle multistringhe per nome di un valore specificato.|
|[CRegKey::QueryQWORDValue](#queryqwordvalue)|Chiamare questo metodo per recuperare i valori QWORD nome di un valore specificato.|
|[CRegKey::QueryStringValue](#querystringvalue)|Chiamare questo metodo per recuperare i dati di stringa per nome di un valore specificato.|
|[CRegKey::QueryValue](#queryvalue)|Chiamare questo metodo per recuperare i dati per il campo del valore specificato [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come ATL_DEPRECATED.|
|[CRegKey::RecurseDeleteKey](#recursedeletekey)|Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema e rimuovere in modo esplicito tutte le sottochiavi.|
|[CRegKey::SetBinaryValue](#setbinaryvalue)|Chiamare questo metodo per impostare il valore binario della chiave del Registro di sistema.|
|[CRegKey::SetDWORDValue](#setdwordvalue)|Chiamare questo metodo per impostare il valore della chiave del Registro di sistema DWORD.|
|[CRegKey::SetGUIDValue](#setguidvalue)|Chiamare questo metodo per impostare il valore GUID della chiave del Registro di sistema.|
|[CRegKey::SetKeySecurity](#setkeysecurity)|Chiamare questo metodo per impostare la sicurezza della chiave del Registro di sistema.|
|[CRegKey::SetKeyValue](#setkeyvalue)|Chiamare questo metodo per archiviare i dati in un campo del valore specificato di una chiave specificata.|
|[CRegKey::SetMultiStringValue](#setmultistringvalue)|Chiamare questo metodo per impostare il valore multistringa della chiave del Registro di sistema.|
|[CRegKey::SetQWORDValue](#setqwordvalue)|Chiamare questo metodo per impostare il valore QWORD della chiave del Registro di sistema.|
|[CRegKey::SetStringValue](#setstringvalue)|Chiamare questo metodo per impostare il valore di stringa della chiave del Registro di sistema.|
|[CRegKey::SetValue](#setvalue)|Chiamare questo metodo per archiviare i dati nel campo del valore specificato [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come ATL_DEPRECATED.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRegKey::operator HKEY](#operator_hkey)|Converte un `CRegKey` oggetto da un HKEY.|
|[CRegKey::operator =](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRegKey::m_hKey](#m_hkey)|Contiene un handle della chiave del Registro di sistema associato il `CRegKey` oggetto.|
|[CRegKey::m_pTM](#m_ptm)|Puntatore a `CAtlTransactionManager` oggetto|

## <a name="remarks"></a>Note

`CRegKey` fornisce metodi per la creazione e l'eliminazione di chiavi e valori nel Registro di sistema. Il Registro di sistema contiene un set di installazione specifiche delle definizioni per i componenti di sistema, ad esempio i numeri di versione del software, il mapping logico a fisico di hardware installato e oggetti COM.

`CRegKey` fornisce un'interfaccia di programmazione nel Registro di sistema per un determinato computer. Per aprire una chiave del Registro di sistema specifico, ad esempio, è consigliabile chiamare `CRegKey::Open`. Per recuperare o modificare un valore di dati, chiamare `CRegKey::QueryValue` o `CRegKey::SetValue`, rispettivamente. Per chiudere una chiave, chiamare `CRegKey::Close`.

Quando si chiude una chiave, i dati del Registro di sistema viene scritto (scaricato) per il disco rigido. Questo processo potrebbe richiedere qualche secondo. Se l'applicazione deve scrivere in modo esplicito i dati del Registro di sistema sul disco rigido, è possibile chiamare il [regflushkey ha](/windows/desktop/api/winreg/nf-winreg-regflushkey) funzione Win32. Tuttavia, `RegFlushKey` Usa molte risorse di sistema e deve essere chiamato solo se assolutamente necessario.

> [!IMPORTANT]
>  I metodi che consentono al chiamante di specificare un percorso del Registro di sistema hanno la possibilità di leggere i dati che non sono attendibili. Usano i metodi che rendono [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) deve prendere in considerazione che questa funzione non viene gestito in modo esplicito le stringhe che sono con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="attach"></a>  CRegKey::Attach

Chiamare questo metodo per collegare un HKEY dal `CRegKey` oggetto impostando il [m_hKey](#m_hkey) handle membro *hKey*.

```
void Attach(HKEY hKey) throw();
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
L'handle di una chiave del Registro di sistema.

### <a name="remarks"></a>Note

`Attach` genera un'asserzione se `m_hKey` è diverso da NULL.

##  <a name="close"></a>  CRegKey::Close

Chiamare questo metodo per rilasciare il [m_hKey](#m_hkey) membro gestire e impostarla su NULL.

```
LONG Close() throw();
```

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce ERROR_SUCCESS; in caso contrario, restituisce un valore di errore.

##  <a name="create"></a>  CRegKey::Create

Chiamare questo metodo per creare la chiave specificata, se non esiste come una sottochiave della *hKeyParent*.

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
L'handle di una chiave aperta.

*lpszKeyName*<br/>
Specifica il nome di una chiave può essere creato o aperto. Questo nome deve essere una sottochiave della *hKeyParent*.

*lpszClass*<br/>
Specifica la classe della chiave può essere creato o aperto. Il valore predefinito è REG_NONE.

*dwOptions*<br/>
Opzioni per la chiave. Il valore predefinito è REG_OPTION_NON_VOLATILE. Per un elenco di valori possibili e le descrizioni, vedere [RegCreateKeyEx](/windows/desktop/api/winreg/nf-winreg-regcreatekeyexa) nel SDK di Windows.

*samDesired*<br/>
L'accesso di sicurezza per la chiave. Il valore predefinito è KEY_READ &#124; KEY_WRITE. Per un elenco di valori possibili e le descrizioni, vedere `RegCreateKeyEx`.

*lpSecAttr*<br/>
Un puntatore a un [SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che indica se l'handle della chiave può essere ereditato da un processo figlio. Per impostazione predefinita, questo parametro è NULL (ovvero l'handle non può essere ereditato).

*lpdwDisposition*<br/>
[out] Se diverso da NULL, recupera REG_CREATED_NEW_KEY (se la chiave non esisteva ed è stata creata) o REG_OPENED_EXISTING_KEY (se la chiave esisteva ed è stato aperto).

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce ERROR_SUCCESS e apre la chiave. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

`Create` Imposta il [m_hKey](#m_hkey) membro per l'handle di questa chiave.

##  <a name="cregkey"></a>  CRegKey::CRegKey

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
Handle a una chiave del Registro di sistema.

*pTM*<br/>
Puntatore all'oggetto CAtlTransactionManager

### <a name="remarks"></a>Note

Crea un nuovo oggetto `CRegKey`. L'oggetto può essere creato da un oggetto esistente `CRegKey` oggetto, o da un handle a una chiave del Registro di sistema.

##  <a name="dtor"></a>  CRegKey:: ~ CRegKey

Distruttore.

```
~CRegKey() throw();
```

### <a name="remarks"></a>Note

Le versioni di distruttore `m_hKey`.

##  <a name="deletesubkey"></a>  CRegKey::DeleteSubKey

Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema.

```
LONG DeleteSubKey(LPCTSTR lpszSubKey) throw();
```

### <a name="parameters"></a>Parametri

*lpszSubKey*<br/>
Specifica il nome della chiave da eliminare. Questo nome deve essere una sottochiave della [m_hKey](#m_hkey).

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

`DeleteSubKey` possibile eliminare solo una chiave che dispone di sottochiavi. Se la chiave contiene sottochiavi, chiamare [RecurseDeleteKey](#recursedeletekey) invece.

##  <a name="deletevalue"></a>  CRegKey::DeleteValue

Chiamare questo metodo per rimuovere un campo del valore da [m_hKey](#m_hkey).

```
LONG DeleteValue(LPCTSTR lpszValue) throw();
```

### <a name="parameters"></a>Parametri

*lpszValue*<br/>
Specifica il campo del valore da rimuovere.

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

##  <a name="detach"></a>  CRegKey::Detach

Chiamare questo metodo per scollegare il [m_hKey](#m_hkey) handle membro dalle `CRegKey` dell'oggetto e impostare `m_hKey` su NULL.

```
HKEY Detach() throw();
```

### <a name="return-value"></a>Valore restituito

HKEY associato il `CRegKey` oggetto.

##  <a name="enumkey"></a>  CRegKey::EnumKey

Chiamare questo metodo per enumerare le sottochiavi della chiave del Registro di sistema open.

```
LONG EnumKey(
    DWORD iIndex,
    LPTSTR pszName,
    LPDWORD pnNameLength,
    FILETIME* pftLastWriteTime = NULL) throw();
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
L'indice della sottochiave. Questo parametro deve essere zero per la prima chiamata e quindi incrementato per le chiamate successive

*pszName*<br/>
Puntatore a un buffer che riceve il nome della sottochiave, incluso il carattere di terminazione null. Solo il nome della sottochiave viene copiato nel buffer, non la gerarchia di chiavi completa.

*pnNameLength*<br/>
Puntatore a una variabile che specifica la dimensione, in TCHARs, del buffer specificata per il *pszName* parametro. Questa dimensione deve includere il carattere di terminazione null. Quando il metodo termina, contiene la variabile a cui punta *pnNameLength* contiene il numero di caratteri memorizzati nel buffer. Il conteggio restituito non include il carattere di terminazione null.

*pftLastWriteTime*<br/>
Puntatore a una variabile che riceve l'ora della sottochiave enumerata ultima scrittura.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Per enumerare le sottochiavi, chiamare `CRegKey::EnumKey` con un indice pari a zero. Incrementare il valore di indice e ripetere fino a quando il metodo restituisce ERROR_NO_MORE_ITEMS. Per altre informazioni, vedere [RegEnumKeyEx](/windows/desktop/api/winreg/nf-winreg-regenumkeyexa) nel SDK di Windows.

##  <a name="flush"></a>  CRegKey::Flush

Chiamare questo metodo per tutti gli attributi della chiave di registro aperto di scrittura nel Registro di sistema.

```
LONG Flush() throw();
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [RegEnumFlush](/windows/desktop/api/winreg/nf-winreg-regflushkey) nel SDK di Windows.

##  <a name="getkeysecurity"></a>  CRegKey::GetKeySecurity

Chiamare questo metodo per recuperare una copia del descrittore di sicurezza protegge la chiave del Registro di sistema open.

```
LONG GetKeySecurity(
    SECURITY_INFORMATION si,
    PSECURITY_DESCRIPTOR psd,
    LPDWORD pnBytes) throw();
```

### <a name="parameters"></a>Parametri

*sistema internazionale di misura*<br/>
Il [SECURITY_INFORMATION](/windows/desktop/SecAuthZ/security-information) valore che indica le informazioni di sicurezza richiesto.

*file PSD*<br/>
Un puntatore a un buffer che riceve una copia del descrittore di sicurezza richiesto.

*pnBytes*<br/>
Le dimensioni, in byte, del buffer a cui punta *psd*.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è che un codice di errore diverso da zero è definito nel WINERROR. H.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [RegGetKeySecurity](/windows/desktop/api/winreg/nf-winreg-reggetkeysecurity).

##  <a name="m_hkey"></a>  CRegKey::m_hKey

Contiene un handle della chiave del Registro di sistema associato il `CRegKey` oggetto.

```
HKEY m_hKey;
```

##  <a name="m_ptm"></a>  CRegKey::m_pTM

Puntatore a un oggetto `CAtlTransactionManager`.

```
CAtlTransactionManager* m_pTM;
```

### <a name="remarks"></a>Note

##  <a name="notifychangekeyvalue"></a>  CRegKey::NotifyChangeKeyValue

Questo metodo notifica al chiamante sulle modifiche per gli attributi o il contenuto della chiave del Registro di sistema open.

```
LONG NotifyChangeKeyValue(
    BOOL bWatchSubtree,
    DWORD dwNotifyFilter,
    HANDLE hEvent,
    BOOL bAsync = TRUE) throw();
```

### <a name="parameters"></a>Parametri

*bWatchSubtree*<br/>
Specifica un flag che indica se segnalare le modifiche alla chiave specificata e tutte le relative sottochiavi o solo la chiave specificata. Se questo parametro è TRUE, il metodo segnala le modifiche nella chiave e le relative sottochiavi. Se il parametro è FALSE, il metodo segnala le modifiche apportate solo nella chiave.

*dwNotifyFilter*<br/>
Specifica un set di flag che controllano quali modifiche deve essere segnalato. Questo parametro può essere una combinazione dei valori seguenti:

|Valore|Significato|
|-----------|-------------|
|REG_NOTIFY_CHANGE_NAME|Notificare al chiamante se viene aggiunto o eliminata una sottochiave.|
|REG_NOTIFY_CHANGE_ATTRIBUTES|Notificare al chiamante di modifiche agli attributi della chiave, ad esempio le informazioni sul descrittore di sicurezza.|
|REG_NOTIFY_CHANGE_LAST_SET|Notificare al chiamante le modifiche apportate al valore della chiave. Può trattarsi di aggiunta o eliminazione di un valore o la modifica di un valore esistente.|
|REG_NOTIFY_CHANGE_SECURITY|Notificare al chiamante di modifiche al descrittore di sicurezza della chiave.|

*hEvent*<br/>
Handle per un evento. Se il *bAsync* parametro è TRUE, il metodo restituisce immediatamente e le modifiche vengono segnalate per segnalare questo evento. Se *bAsync* FALSO *hEvent* viene ignorato.

*bAsync*<br/>
Specifica un flag che indica come il metodo segnala le modifiche. Se questo parametro è TRUE, il metodo restituisce immediatamente e segnala le modifiche apportate tramite segnalazioni l'evento specificato. Se questo parametro è FALSE, il metodo non restituisce fino a quando non è stata modificata. Se *hEvent* non specifica un evento valido, il *bAsync* parametro non può essere TRUE.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

> [!NOTE]
>  Questo metodo notifica al chiamante se viene eliminata la chiave specificata.

Per altre informazioni e un programma di esempio, vedere [RegNotifyChangeKeyValue](/windows/desktop/api/winreg/nf-winreg-regnotifychangekeyvalue).

##  <a name="open"></a>  CRegKey::Open

Chiamare questo metodo per aprire la chiave specificata e impostare [m_hKey](#m_hkey) all'handle di questa chiave.

```
LONG Open(
    HKEY hKeyParent,
    LPCTSTR lpszKeyName,
    REGSAM samDesired = KEY_READ | KEY_WRITE) throw();
```

### <a name="parameters"></a>Parametri

*hKeyParent*<br/>
L'handle di una chiave aperta.

*lpszKeyName*<br/>
Specifica il nome di una chiave può essere creato o aperto. Questo nome deve essere una sottochiave della *hKeyParent*.

*samDesired*<br/>
L'accesso di sicurezza per la chiave. Il valore predefinito è KEY_ALL_ACCESS. Per un elenco di valori possibili e le descrizioni, vedere [RegCreateKeyEx](/windows/desktop/api/winreg/nf-winreg-regcreatekeyexa) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce ERROR_SUCCESS; in caso contrario, un valore di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Se il *lpszKeyName* parametro è NULL o i punti su una stringa vuota, `Open` apre un nuovo handle della chiave identificata da *hKeyParent*, ma non chiude eventuali handle aperto in precedenza.

A differenza [CRegKey::Create](#create), `Open` non creerà la chiave specificata se non esiste.

##  <a name="operator_hkey"></a>  CRegKey::operator HKEY

Converte un `CRegKey` oggetto da un HKEY.

```
operator HKEY() const throw();
```

##  <a name="operator_eq"></a>  CRegKey::operator =

Operatore di assegnazione.

```
CRegKey& operator= (CRegKey& key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave da copiare.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla nuova chiave.

### <a name="remarks"></a>Note

Questo operatore consente di scollegare *key* dal relativo oggetto corrente e la assegna al `CRegKey` invece dell'oggetto.

##  <a name="querybinaryvalue"></a>  CRegKey::QueryBinaryValue

Chiamare questo metodo per recuperare i dati binari per nome di un valore specificato.

```
LONG QueryBinaryValue(
    LPCTSTR pszValueName,
    void* pValue,
    ULONG* pnBytes) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore di query.

*pValue*<br/>
Puntatore a un buffer che riceve i dati del valore.

*pnBytes*<br/>
Puntatore a una variabile che specifica la dimensione, espressa in byte, del buffer a cui fa riferimento il *pValue* parametro. Quando il metodo termina, questa variabile contiene la dimensione dei dati copiati nel buffer.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati di riferimento non sono di tipo REG_BINARY, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Note

Questo metodo Usa `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Visualizzare [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) per altri dettagli.

> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura dei dati che non sono attendibili. Inoltre, il [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) funzione usata da questo metodo non gestisce in modo esplicito le stringhe che sono con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.

##  <a name="querydwordvalue"></a>  CRegKey::QueryDWORDValue

Chiamare questo metodo per recuperare i dati di valore DWORD per nome di un valore specificato.

```
LONG QueryDWORDValue(
    LPCTSTR pszValueName,
    DWORD& dwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore di query.

*dwValue*<br/>
Puntatore a un buffer che riceve il valore DWORD.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati di riferimento non sono di tipo REG_DWORD, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Note

Questo metodo Usa `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Visualizzare [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) per altri dettagli.

> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura dei dati che non sono attendibili. Inoltre, il [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) funzione usata da questo metodo non gestisce in modo esplicito le stringhe che sono con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.

##  <a name="queryguidvalue"></a>  CRegKey::QueryGUIDValue

Chiamare questo metodo per recuperare i dati GUID per il nome di un valore specificato.

```
LONG QueryGUIDValue(
    LPCTSTR pszValueName,
    GUID& guidValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore di query.

*guidValue*<br/>
Puntatore a una variabile che riceve il GUID.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati di riferimento non sono un GUID valido, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Note

Questo metodo Usa `CRegKey::QueryStringValue` e converte la stringa in un GUID usando [CLSIDFromString](/windows/desktop/api/combaseapi/nf-combaseapi-clsidfromstring).

> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura dei dati che non sono attendibili.

##  <a name="querymultistringvalue"></a>  CRegKey::QueryMultiStringValue

Chiamare questo metodo per recuperare i dati delle multistringhe per nome di un valore specificato.

```
LONG QueryMultiStringValue(
    LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore di query.

*pszValue*<br/>
Puntatore a un buffer che riceve i dati delle multistringhe. Una valore multistringa è una matrice di stringhe con terminazione null, terminate da due caratteri null.

*pnChars*<br/>
La dimensione in TCHARs, del buffer a cui punta *pszValue*. Quando termina, il metodo *pnChars* contiene la dimensione, in TCHARs, di valore multistringa recuperato, incluso un carattere di terminazione null.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati di riferimento non sono di tipo REG_MULTI_SZ, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Note

Questo metodo Usa `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Visualizzare [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) per altri dettagli.

> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura dei dati che non sono attendibili. Inoltre, il [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) funzione usata da questo metodo non gestisce in modo esplicito le stringhe che sono con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.

##  <a name="queryqwordvalue"></a>  CRegKey::QueryQWORDValue

Chiamare questo metodo per recuperare i valori QWORD nome di un valore specificato.

```
LONG QueryQWORDValue(
    LPCTSTR pszValueName,
    ULONGLONG& qwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore di query.

*qwValue*<br/>
Puntatore a un buffer che riceve il QWORD.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati di riferimento non sono di tipo REG_QWORD, viene restituito ERROR_INVALID_DATA.

### <a name="remarks"></a>Note

Questo metodo Usa `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Visualizzare [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) per altri dettagli.

> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura dei dati che non sono attendibili. Inoltre, il [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) funzione usata da questo metodo non gestisce in modo esplicito le stringhe che sono con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.

##  <a name="querystringvalue"></a>  CRegKey::QueryStringValue

Chiamare questo metodo per recuperare i dati di stringa per nome di un valore specificato.

```
LONG QueryStringValue(
    LPCTSTR pszValueName,
    LPTSTR pszValue,
    ULONG* pnChars) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del valore di query.

*pszValue*<br/>
Puntatore a un buffer che riceve i dati di stringa.

*pnChars*<br/>
La dimensione in TCHARs, del buffer a cui punta *pszValue*. Quando termina, il metodo *pnChars* contiene la dimensione, in TCHARs, della stringa recuperato, incluso un carattere di terminazione null.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito ERROR_SUCCESS. Se il metodo non riesce a leggere un valore, restituisce un codice di errore diverso da zero definito in WINERROR. H. Se i dati di riferimento non sono di tipo REG_SZ, viene restituito ERROR_INVALID_DATA. Se il metodo restituisce, ERROR_MORE_DATA *pnChars* è uguale a zero, non le dimensioni del buffer necessarie in byte.

### <a name="remarks"></a>Note

Questo metodo Usa `RegQueryValueEx` e conferma che viene restituito il tipo di dati corretto. Visualizzare [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) per altri dettagli.

> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura dei dati che non sono attendibili. Inoltre, il [RegQueryValueEx](/windows/desktop/api/winreg/nf-winreg-regqueryvalueexa) funzione usata da questo metodo non gestisce in modo esplicito le stringhe che sono con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.

##  <a name="queryvalue"></a>  CRegKey::QueryValue

Chiamare questo metodo per recuperare i dati per il campo del valore specificato [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come ATL_DEPRECATED.

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
Puntatore a una stringa con terminazione null che contiene il nome del valore di query. Se *pszValueName* è NULL o una stringa vuota "", il metodo recupera il tipo e i dati per la chiave del senza nome o valore predefinito, se presente.

*pdwType*<br/>
Puntatore a una variabile che riceve un codice che indica il tipo di dati memorizzati nel valore specificato. Il *pdwType* parametro può essere NULL se il codice del tipo non è necessario.

*pData*<br/>
Puntatore a un buffer che riceve i dati del valore. Questo parametro può essere NULL se non sono richiesti i dati.

*pnBytes*<br/>
Puntatore a una variabile che specifica la dimensione, espressa in byte, del buffer a cui fa riferimento il *pData* parametro. Quando il metodo termina, questa variabile contiene la dimensione dei dati copiati *pData.*

*dwValue*<br/>
Dati numerici del campo del valore.

*lpszValueName*<br/>
Specifica il campo del valore per eseguire una query.

*szValue*<br/>
Dati del campo del valore di tipo stringa.

*pdwCount*<br/>
Le dimensioni dei dati di stringa. Il valore è impostato inizialmente alle dimensioni dei *szValue* buffer.

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito nel WINERROR. H.

### <a name="remarks"></a>Note

Le due versioni originali di `QueryValue` non sono più supportate e sono contrassegnate come ATL_DEPRECATED. Il compilatore genererà un avviso se vengono utilizzate queste forme.

Le chiamate al metodo rimanenti RegQueryValueEx.

> [!IMPORTANT]
>  Questo metodo consente al chiamante di specificare qualsiasi percorso del Registro di sistema, potenzialmente la lettura dei dati che non sono attendibili. Inoltre, la funzione RegQueryValueEx usata da questo metodo non gestisce in modo esplicito le stringhe che sono con terminata NULL. Entrambe le condizioni devono essere controllate dal codice chiamante.

##  <a name="recursedeletekey"></a>  CRegKey::RecurseDeleteKey

Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema e rimuovere in modo esplicito tutte le sottochiavi.

```
LONG RecurseDeleteKey(LPCTSTR lpszKey) throw();
```

### <a name="parameters"></a>Parametri

*lpszKey*<br/>
Specifica il nome della chiave da eliminare. Questo nome deve essere una sottochiave della [m_hKey](#m_hkey).

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce ERROR_SUCCESS; in caso contrario, un valore di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Se la chiave contiene sottochiavi, è necessario chiamare questo metodo per eliminare la chiave.

##  <a name="setbinaryvalue"></a>  CRegKey::SetBinaryValue

Chiamare questo metodo per impostare il valore binario della chiave del Registro di sistema.

```
LONG SetBinaryValue(
    LPCTSTR pszValueName,
    const void* pValue,
    ULONG nBytes) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.

*pValue*<br/>
Puntatore a un buffer contenente i dati per l'archiviazione con il nome del valore specificato.

*nBytes*<br/>
Specifica la dimensione, espressa in byte, delle informazioni a cui fa riferimento il *pValue* parametro.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Questo metodo Usa [RegSetValueEx](/windows/desktop/api/winreg/nf-winreg-regsetvalueexa) per scrivere il valore del Registro di sistema.

##  <a name="setdwordvalue"></a>  CRegKey::SetDWORDValue

Chiamare questo metodo per impostare il valore della chiave del Registro di sistema DWORD.

```
LONG SetDWORDValue(LPCTSTR pszValueName, DWORD dwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.

*dwValue*<br/>
I dati DWORD deve essere archiviata con il nome del valore specificato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Questo metodo Usa [RegSetValueEx](/windows/desktop/api/winreg/nf-winreg-regsetvalueexa) per scrivere il valore del Registro di sistema.

##  <a name="setguidvalue"></a>  CRegKey::SetGUIDValue

Chiamare questo metodo per impostare il valore GUID della chiave del Registro di sistema.

```
LONG SetGUIDValue(LPCTSTR pszValueName, REFGUID guidValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.

*guidValue*<br/>
Riferimento al GUID per l'archiviazione con il nome del valore specificato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Questo metodo Usa `CRegKey::SetStringValue` e li converte GUID in una stringa usando [StringFromGUID2](/windows/desktop/api/combaseapi/nf-combaseapi-stringfromguid2).

##  <a name="setkeyvalue"></a>  CRegKey::SetKeyValue

Chiamare questo metodo per archiviare i dati in un campo del valore specificato di una chiave specificata.

```
LONG SetKeyValue(
    LPCTSTR lpszKeyName,
    LPCTSTR lpszValue,
    LPCTSTR lpszValueName = NULL) throw();
```

### <a name="parameters"></a>Parametri

*lpszKeyName*<br/>
Specifica il nome della chiave può essere creato o aperto. Questo nome deve essere una sottochiave della [m_hKey](#m_hkey).

*lpszValue*<br/>
Specifica i dati da archiviare. Questo parametro deve essere non NULL.

*lpszValueName*<br/>
Specifica il campo del valore da impostare. Se un campo del valore con lo stesso nome esiste già nella chiave, viene aggiunto.

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito nel WINERROR. H.

### <a name="remarks"></a>Note

Chiamare questo metodo per creare o aprire il *lpszKeyName* la chiave e archiviare le *lpszValue* i dati nel *lpszValueName* campo del valore.

##  <a name="setkeysecurity"></a>  CRegKey::SetKeySecurity

Chiamare questo metodo per impostare la sicurezza della chiave del Registro di sistema.

```
LONG SetKeySecurity(SECURITY_INFORMATION si, PSECURITY_DESCRIPTOR psd) throw();
```

### <a name="parameters"></a>Parametri

*sistema internazionale di misura*<br/>
Specifica i componenti del descrittore di sicurezza da impostare. Il valore può essere una combinazione dei valori seguenti:

|Valore|Significato|
|-----------|-------------|
|DACL_SECURITY_INFORMATION|Imposta l'elenco di controllo di accesso discrezionali della chiave (DACL). La chiave deve avere accesso WRITE_DAC, o il processo di chiamata deve essere il proprietario dell'oggetto.|
|GROUP_SECURITY_INFORMATION|Imposta l'ID di sicurezza della chiave primaria di gruppo (SID). La chiave deve avere accesso WRITE_OWNER o il processo di chiamata deve essere il proprietario dell'oggetto.|
|OWNER_SECURITY_INFORMATION|Imposta il SID del proprietario della chiave. La chiave deve avere accesso WRITE_OWNER o il processo di chiamata deve essere il proprietario dell'oggetto o disporre del privilegio SE_TAKE_OWNERSHIP_NAME abilitato.|
|SACL_SECURITY_INFORMATION|Imposta l'elenco di controllo di accesso della chiave del sistema (SACL). La chiave deve avere accesso ACCESS_SYSTEM_SECURITY. La modalità appropriata per ottenere l'accesso è per abilitare il SE_SECURITY_NAME [privilegio](https://msdn.microsoft.com/library/windows/desktop/aa379306) nel token di accesso corrente del chiamante, aprire l'handle per l'accesso ACCESS_SYSTEM_SECURITY e quindi disabilitare il privilegio.|

*file PSD*<br/>
Puntatore a un [SECURITY_DESCRIPTOR](/windows/desktop/api/winnt/ns-winnt-_security_descriptor) struttura che specifica gli attributi di sicurezza da impostare per la chiave specificata.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Imposta gli attributi di sicurezza della chiave. Visualizzare [RegSetKeySecurity](/windows/desktop/api/winreg/nf-winreg-regsetkeysecurity) per altri dettagli.

##  <a name="setmultistringvalue"></a>  CRegKey::SetMultiStringValue

Chiamare questo metodo per impostare il valore multistringa della chiave del Registro di sistema.

```
LONG SetMultiStringValue(LPCTSTR pszValueName, LPCTSTR pszValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.

*pszValue*<br/>
Puntatore ai dati delle multistringhe da archiviare con il nome del valore specificato. Una valore multistringa è una matrice di stringhe con terminazione null, terminate da due caratteri null.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Questo metodo Usa [RegSetValueEx](/windows/desktop/api/winreg/nf-winreg-regsetvalueexa) per scrivere il valore del Registro di sistema.

##  <a name="setqwordvalue"></a>  CRegKey::SetQWORDValue

Chiamare questo metodo per impostare il valore QWORD della chiave del Registro di sistema.

```
LONG SetQWORDValue(LPCTSTR pszValueName, ULONGLONG qwValue) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.

*qwValue*<br/>
I dati QWORD deve essere archiviata con il nome del valore specificato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Questo metodo Usa [RegSetValueEx](/windows/desktop/api/winreg/nf-winreg-regsetvalueexa) per scrivere il valore del Registro di sistema.

##  <a name="setstringvalue"></a>  CRegKey::SetStringValue

Chiamare questo metodo per impostare il valore di stringa della chiave del Registro di sistema.

```
LONG SetStringValue(
    LPCTSTR pszValueName,
    LPCTSTR pszValue,
    DWORD dwType = REG_SZ) throw();
```

### <a name="parameters"></a>Parametri

*pszValueName*<br/>
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente, il metodo lo aggiunge alla chiave.

*pszValue*<br/>
Puntatore ai dati di stringa per l'archiviazione con il nome del valore specificato.

*dwType*<br/>
Il tipo di stringa da scrivere nel Registro di sistema: REG_SZ (impostazione predefinita) o REG_EXPAND_SZ (per le multistringhe).

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, il valore restituito è ERROR_SUCCESS. Se il metodo ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in WINERROR. H.

### <a name="remarks"></a>Note

Questo metodo Usa [RegSetValueEx](/windows/desktop/api/winreg/nf-winreg-regsetvalueexa) per scrivere il valore del Registro di sistema.

##  <a name="setvalue"></a>  CRegKey::SetValue

Chiamare questo metodo per archiviare i dati nel campo del valore specificato [m_hKey](#m_hkey). Le versioni precedenti di questo metodo non sono più supportate e sono contrassegnate come ATL_DEPRECATED.

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
Puntatore a una stringa contenente il nome del valore da impostare. Se un valore con il nome specificato non è già presente nella chiave, il metodo lo aggiunge alla chiave. Se *pszValueName* è NULL o una stringa vuota "", il metodo imposta il tipo e i dati per la chiave del senza nome o il valore predefinito.

*dwType*<br/>
Specifica un codice che indica il tipo di dati a cui fa riferimento il *pValue* parametro.

*pValue*<br/>
Puntatore a un buffer contenente i dati per l'archiviazione con il nome del valore specificato.

*nBytes*<br/>
Specifica la dimensione, espressa in byte, delle informazioni a cui fa riferimento il *pValue* parametro. Se i dati sono di tipo, REG_MULTI_SZ, REG_EXPAND_SZ o REG_SZ *nBytes* deve includere le dimensioni del carattere null di terminazione.

*hKeyParent*<br/>
L'handle di una chiave aperta.

*lpszKeyName*<br/>
Specifica il nome di una chiave può essere creato o aperto. Questo nome deve essere una sottochiave della *hKeyParent*.

*lpszValue*<br/>
Specifica i dati da archiviare. Questo parametro deve essere non NULL.

*lpszValueName*<br/>
Specifica il campo del valore da impostare. Se un campo del valore con lo stesso nome esiste già nella chiave, viene aggiunto.

*dwValue*<br/>
Specifica i dati da archiviare.

*bMulti*<br/>
Se false, indica che la stringa è di tipo REG_SZ. Se true, indica che la stringa è una valore multistringa di tipo REG_MULTI_SZ.

*nValueLen*<br/>
Se *bMulti* è true, *nValueLen* è la lunghezza del *lpszValue* stringa in caratteri. Se *bMulti* è false, il valore -1 indica che il metodo calcolerà automaticamente la lunghezza.

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce ERROR_SUCCESS; in caso contrario, un codice di errore diverso da zero definito nel WINERROR. H.

### <a name="remarks"></a>Note

Le due versioni originali di `SetValue` vengono contrassegnati come ATL_DEPRECATED e non devono più essere utilizzati. Il compilatore genererà un avviso se vengono utilizzate queste forme.

Le chiamate al metodo terza [RegSetValueEx](/windows/desktop/api/winreg/nf-winreg-regsetvalueexa).

## <a name="see-also"></a>Vedere anche

[Esempio DCOM](../../visual-cpp-samples.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
