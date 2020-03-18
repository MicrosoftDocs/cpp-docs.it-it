---
title: Funzioni globali Registry e TypeLib
ms.date: 03/27/2019
f1_keywords:
- atlbase/ATL::AtlGetPerUserRegistration
- afxpriv/ATL::AfxRegCreateKey
- afxpriv/ATL::AfxRegDeleteKey
- atlbase/ATL::AtlRegisterTypeLib
- afxpriv/ATL::AfxRegOpenKey
- afxpriv/ATL::AfxRegOpenKeyEx
- afxdisp/ATL::AfxUnregisterPreviewHandler
- atlbase/ATL::AtlSetPerUserRegistration
- atlbase/ATL::AtlUnRegisterTypeLib
- atlbase/ATL::AtlLoadTypeLib
- atlbase/ATL::AtlUpdateRegistryFromResourceD
- atlbase/ATL::RegistryDataExchange
helpviewer_keywords:
- RegistryDataExchange function, global functions
ms.assetid: d58b8a4e-975c-4417-8b34-d3c847f679b3
ms.openlocfilehash: c5fdaceb47b6cd09dd9d66f26af1337a8dc6bbae
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417495"
---
# <a name="registry-and-typelib-global-functions"></a>Funzioni globali Registry e TypeLib

Queste funzioni forniscono supporto per il caricamento e la registrazione di una libreria dei tipi.

> [!IMPORTANT]
>  Le funzioni elencate nelle tabelle seguenti non possono essere utilizzate nelle applicazioni eseguite nel Windows Runtime.

|||
|-|-|
|[AfxRegCreateKey](#afxregcreatekey)|Crea la chiave del registro di sistema specificata.|
|[AfxRegDeleteKey](#afxregdeletekey)|Elimina la chiave del registro di sistema specificata.|
|[AfxRegisterPreviewHandler](#afxregisterpreviewhandler)|Helper per registrare un gestore di anteprime.|
|[AfxUnregisterPreviewHandler](#afxunregisterpreviewhandler)| Helper per annullare la registrazione di un gestore di anteprime. |
|[AtlRegisterTypeLib](#atlregistertypelib)|Questa funzione viene chiamata per registrare una libreria dei tipi.|
|[AtlUnRegisterTypeLib](#atlunregistertypelib)|Questa funzione viene chiamata per annullare la registrazione di una libreria di tipi|
|[AfxRegOpenKey](#afxregopenkey)|Apre la chiave del registro di sistema specificata.|
|[AfxRegOpenKeyEx](#afxregopenkeyex)|Apre la chiave del registro di sistema specificata.|
|[AtlLoadTypeLib](#atlloadtypelib)|Questa funzione viene chiamata per caricare una libreria dei tipi.|
|[AtlUpdateRegistryFromResourceD](#atlupdateregistryfromresourced)|Questa funzione viene chiamata per aggiornare il Registro di sistema dalla risorsa specificata.|
|[RegistryDataExchange](#registrydataexchange)|Questa funzione viene chiamata per leggere o scrivere nel Registro di sistema. Chiamato dalle [macro di scambio dei dati del registro di sistema](../../atl/reference/registry-data-exchange-macros.md).|

Queste funzioni controllano il nodo del registro di sistema usato dal programma per archiviare le informazioni.

|||
|-|-|
|[AtlGetPerUserRegistration](#atlgetperuserregistration)|Recupera un valore che indica se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** ( **HKCU**).|
|[AtlSetPerUserRegistration](#atlsetperuserregistration)|Imposta un valore che indica se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** ( **HKCU**).|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="atlgetperuserregistration"></a>AtlGetPerUserRegistration

Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).

### <a name="syntax"></a>Sintassi

```
ATLINLINE ATLAPI AtlGetPerUserRegistration(bool* pEnabled);
```

### <a name="parameters"></a>Parametri

*pEnabled*<br/>
out TRUE indica che le informazioni del registro di sistema vengono indirizzate al nodo **HKCU** ; FALSE indica che l'applicazione scrive le informazioni del registro di sistema nel nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario, il codice di errore HRESULT se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il reindirizzamento del registro di sistema non è abilitato per impostazione predefinita. Se si abilita questa opzione, l'accesso al registro di sistema viene reindirizzato a **HKEY_CURRENT_USER \SOFTWARE\classes**.

Il reindirizzamento non è globale. Questo reindirizzamento del registro di sistema influisce solo sui framework MFC e ATL.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="afxregcreatekey"></a>AfxRegCreateKey

Crea la chiave del registro di sistema specificata.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegCreateKey(HKEY hKey, LPCTSTR lpSubKey, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
Handle per una chiave del registro di sistema aperta.

*lpSubKey*<br/>
Nome di una chiave che viene aperta o creata da questa funzione.

*phkResult*<br/>
Puntatore a una variabile che riceve un handle per la chiave aperta o creata.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror. h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxregdeletekey"></a>AfxRegDeleteKey

Elimina la chiave del registro di sistema specificata.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegDeleteKey(HKEY hKey, LPCTSTR lpSubKey, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
Handle per una chiave del registro di sistema aperta.

*lpSubKey*<br/>
Nome della chiave da eliminare.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror. h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxregisterpreviewhandler"></a>

Helper per registrare un gestore di anteprime.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxRegisterPreviewHandler(LPCTSTR lpszCLSID, LPCTSTR lpszShortTypeName, LPCTSTR lpszFilterExt);
```

### <a name="parameters"></a>Parametri

*lpszCLSID*<br/>
Specifica il CLSID del gestore.

*lpszShortTypeName*<br/>
Specifica il ProgID del gestore.

*lpszFilterExt*<br/>
Specifica l'estensione di file registrata con questo gestore.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="atlregistertypelib"></a>AtlRegisterTypeLib

Questa funzione viene chiamata per registrare una libreria dei tipi.

```
ATLAPI AtlRegisterTypeLib(HINSTANCE hInstTypeLib, LPCOLESTR lpszIndex);
```

### <a name="parameters"></a>Parametri

*hInstTypeLib*<br/>
Handle per l'istanza del modulo.

*lpszIndex*<br/>
Stringa nel formato "\\\n", dove N è l'indice Integer della risorsa della libreria dei tipi. Può essere NULL se non è richiesto alcun indice.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questa funzione helper viene utilizzata da [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver) e [CAtlComModule:: RegisterTypeLib](../../atl/reference/catlcommodule-class.md#registertypelib).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="afxregopenkey"></a>AfxRegOpenKey

Apre la chiave del registro di sistema specificata.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegOpenKey(HKEY hKey, LPCTSTR lpSubKey, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
Handle per una chiave del registro di sistema aperta.

*lpSubKey*<br/>
Nome di una chiave che viene aperta o creata da questa funzione.

*phkResult*<br/>
Puntatore a una variabile che riceve un handle per la chiave creata.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror. h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxregopenkeyex"></a>AfxRegOpenKeyEx

Apre la chiave del registro di sistema specificata.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegOpenKeyEx(HKEY hKey, LPCTSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
Handle per una chiave del registro di sistema aperta.

*lpSubKey*<br/>
Nome di una chiave che viene aperta o creata da questa funzione.

*ulOptions*<br/>
Questo parametro è riservato e deve essere zero.

*samDesired*<br/>
Maschera che specifica i diritti di accesso desiderati alla chiave.

*phkResult*<br/>
Puntatore a una variabile che riceve un handle per la chiave aperta.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror. h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxunregisterpreviewhandler"></a>AfxUnregisterPreviewHandler

Helper per annullare la registrazione di un gestore di anteprime.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxUnRegisterPreviewHandler(LPCTSTR lpszCLSID);
```

### <a name="parameters"></a>Parametri

*lpszCLSID*<br/>
Specifica il CLSID del gestore di cui annullare la registrazione.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="atlsetperuserregistration"></a>AtlSetPerUserRegistration

Imposta un valore che indica se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).

### <a name="syntax"></a>Sintassi

```
ATLINLINE ATLAPI AtlSetPerUserRegistration(bool bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE indica che le informazioni del registro di sistema vengono indirizzate al nodo **HKCU** ; FALSE indica che l'applicazione scrive le informazioni del registro di sistema nel nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario, il codice di errore HRESULT se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il reindirizzamento del registro di sistema non è abilitato per impostazione predefinita. Se si abilita questa opzione, l'accesso al registro di sistema viene reindirizzato a **HKEY_CURRENT_USER \SOFTWARE\classes**.

Il reindirizzamento non è globale. Questo reindirizzamento del registro di sistema influisce solo sui framework MFC e ATL.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="atlunregistertypelib"></a>AtlUnRegisterTypeLib

Questa funzione viene chiamata per annullare la registrazione di una libreria dei tipi.

### <a name="syntax"></a>Sintassi

```
ATLAPI AtlUnRegisterTypeLib(
    HINSTANCE hInstTypeLib,
    LPCOLESTR lpszIndex);
```

### <a name="parameters"></a>Parametri

*hInstTypeLib*<br/>
Handle per l'istanza del modulo.

*lpszIndex*<br/>
Stringa nel formato "\\\n", dove N è l'indice Integer della risorsa della libreria dei tipi. Può essere NULL se non è richiesto alcun indice.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questa funzione helper viene utilizzata da [CAtlComModule:: UnRegisterTypeLib](../../atl/reference/catlcommodule-class.md#unregistertypelib) e [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="atlloadtypelib"></a>AtlLoadTypeLib

Questa funzione viene chiamata per caricare una libreria dei tipi.

### <a name="syntax"></a>Sintassi

```
ATLINLINE ATLAPI AtlLoadTypeLib(
    HINSTANCE hInstTypeLib,
    LPCOLESTR lpszIndex,
    BSTR* pbstrPath,
    ITypeLib** ppTypeLib);
```

### <a name="parameters"></a>Parametri

*hInstTypeLib*<br/>
Handle per il modulo associato alla libreria dei tipi.

*lpszIndex*<br/>
Stringa nel formato "\\\n", dove N è l'indice Integer della risorsa della libreria dei tipi. Può essere NULL se non è richiesto alcun indice.

*pbstrPath*<br/>
In esito positivo, contiene il percorso completo del modulo associato alla libreria dei tipi.

*ppTypeLib*<br/>
In esito positivo, contiene un puntatore a un puntatore alla libreria dei tipi caricati.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Questa funzione helper viene utilizzata da [AtlRegisterTypeLib](#atlregistertypelib) e [AtlUnRegisterTypeLib](#atlunregistertypelib).

##  <a name="atlupdateregistryfromresourced"></a>AtlUpdateRegistryFromResourceD

Questa funzione è stata deprecata in Visual Studio 2013 ed è stata rimossa in Visual Studio 2015.

```
<removed>
```

##  <a name="registrydataexchange"></a>RegistryDataExchange

Questa funzione viene chiamata per leggere o scrivere nel Registro di sistema.

### <a name="syntax"></a>Sintassi

```
HRESULT RegistryDataExchange(
    T* pT,
    enum RDXOperations rdxOp,
    void* pItem = NULL);
```

### <a name="parameters"></a>Parametri

*pT*<br/>
Puntatore all'oggetto corrente.

*rdxOp*<br/>
Valore enum che indica l'operazione che deve essere eseguita dalla funzione. Vedere la tabella nella sezione Osservazioni per i valori consentiti.

*pItem*<br/>
Puntatore ai dati da leggere o scrivere nel registro di sistema. I dati possono anche rappresentare una chiave da eliminare dal registro di sistema. Il valore predefinito è NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Le macro [BEGIN_RDX_MAP](registry-data-exchange-macros.md#begin_rdx_map) e [END_RDX_MAP](registry-data-exchange-macros.md#end_rdx_map) si espandono in una funzione che chiama `RegistryDataExchange`.

I possibili valori di enumerazione che indicano l'operazione che la funzione deve eseguire sono riportati nella tabella seguente:

|Valore enum|Operazione|
|----------------|---------------|
|eReadFromReg|Leggere i dati dal registro di sistema.|
|eWriteToReg|Scrivere i dati nel registro di sistema.|
|eDeleteFromReg|Eliminare la chiave dal registro di sistema.|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Funzioni](atl-functions.md)<br/>
[Macro di scambio dati del Registro di sistema](registry-data-exchange-macros.md)
