---
title: Funzioni globali Registry e TypeLib
ms.date: 11/04/2016
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
ms.openlocfilehash: 85af8504fffa980d495cef59729ff5fcb145e318
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50486587"
---
# <a name="registry-and-typelib-global-functions"></a>Funzioni globali Registry e TypeLib

Queste funzioni forniscono il supporto per il caricamento e la registrazione di una libreria dei tipi.

> [!IMPORTANT]
>  Le funzioni elencate nelle tabelle seguenti non possono essere utilizzate nelle applicazioni eseguite nel Runtime di Windows.

|||
|-|-|
|[AfxRegCreateKey](#afxrefcreatekey)|Crea la chiave del Registro di sistema.|
|[AfxRegDeleteKey](#afxrefdeletekey)|Elimina la chiave del Registro di sistema.|
|[AfxRegisterPreviewHandler](#afxregisterpreviewhandler)|Helper per registrare un gestore di anteprime.|
|[AfxUnregisterPreviewHandler](#afxunregisterpreviewhandler)| Helper per annullare la registrazione di un gestore di anteprime. |
|[AtlRegisterTypeLib](#atlregistertypelib)|Questa funzione viene chiamata per registrare una libreria dei tipi.|
|[AtlUnRegisterTypeLib](#atlunregistertypelib)|Questa funzione viene chiamata per annullare la registrazione di una libreria dei tipi|
|[AfxRegOpenKey](#afxregopenkey)|Apre la chiave del Registro di sistema.|
|[AfxRegOpenKeyEx](#afxregopenkeyex)|Apre la chiave del Registro di sistema.|
|[AtlLoadTypeLib](#atlloadtypelib)|Questa funzione viene chiamata per caricare una libreria dei tipi.|
|[AtlUpdateRegistryFromResourceD](#atlupdateregistryfromresourced)|Questa funzione viene chiamata per aggiornare il Registro di sistema dalla risorsa specificata.|
|[RegistryDataExchange](#registrydataexchange)|Questa funzione viene chiamata per leggere o scrivere nel Registro di sistema. Chiamato il [macro di scambio di dati del Registro di sistema](../../atl/reference/registry-data-exchange-macros.md).|

Queste funzioni controllano quale nodo nel Registro di sistema il programma utilizza per archiviare le informazioni.

|||
|-|-|
|[AtlGetPerUserRegistration](#atlgetperuserregistration)|Specifica se l'applicazione reindirizza l'accesso al Registro di sistema per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.|
|[AtlSetPerUserRegistration](#atlsetperuserregistration)|Imposta se l'applicazione reindirizza l'accesso al Registro di sistema per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="atlgetperuserregistration"></a> AtlGetPerUserRegistration

Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al Registro di sistema per il **HKEY_CURRENT_USER** (**HKCU**) nodo.

### <a name="syntax"></a>Sintassi

```
ATLINLINE ATLAPI AtlGetPerUserRegistration(bool* pEnabled);
```

### <a name="parameters"></a>Parametri

*pEnabled*<br/>
[out] TRUE indica che le informazioni del Registro di sistema viene indirizzate per il **HKCU** un nodo attributo. FALSE indica che l'applicazione scrive le informazioni del Registro di sistema per il nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo, in caso contrario, l'errore HRESULT del codice se si verifica un errore.

### <a name="remarks"></a>Note

Il reindirizzamento del Registro di sistema non è abilitato per impostazione predefinita. Se si abilita questa opzione, l'accesso del Registro di sistema viene reindirizzato alla **HKEY_CURRENT_USER\Software\Classes**.

Il reindirizzamento non è globale. Solo i framework MFC e ATL sono interessati da questo reindirizzamento del Registro di sistema.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="afxregcreatekey"></a> AfxRegCreateKey

Crea la chiave del Registro di sistema.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegCreateKey(HKEY hKey, LPCTSTR lpSubKey, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
Handle a una chiave del Registro di sistema open.

*lpSubKey*<br/>
Il nome di questa funzione si apre o crea una chiave.

*phkResult*<br/>
Puntatore a una variabile che riceve un handle per la chiave creata o aperta.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxregdeletekey"></a> AfxRegDeleteKey

Elimina la chiave del Registro di sistema.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegDeleteKey(HKEY hKey, LPCTSTR lpSubKey, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
Handle a una chiave del Registro di sistema open.

*lpSubKey*<br/>
Il nome della chiave da eliminare.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.

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
Specifica l'estensione di file registrati con questo gestore.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="atlregistertypelib"></a>  AtlRegisterTypeLib

Questa funzione viene chiamata per registrare una libreria dei tipi.

```
ATLAPI AtlRegisterTypeLib(HINSTANCE hInstTypeLib, LPCOLESTR lpszIndex);
```

### <a name="parameters"></a>Parametri

*hInstTypeLib*<br/>
Handle per l'istanza del modulo.

*lpszIndex*<br/>
Stringa nel formato "\\\N", dove N è l'indice integer della risorsa libreria dei tipi. Può essere NULL se è richiesto alcun indice.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questa funzione helper usata da [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver) e [CAtlComModule::RegisterTypeLib](../../atl/reference/catlcommodule-class.md#registertypelib).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="afxregopenkey"></a> AfxRegOpenKey

Apre la chiave del Registro di sistema.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegOpenKey(HKEY hKey, LPCTSTR lpSubKey, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
Handle a una chiave del Registro di sistema open.

*lpSubKey*<br/>
Il nome di questa funzione si apre o crea una chiave.

*phkResult*<br/>
Puntatore a una variabile che riceve un handle per la chiave creata.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxregopenkeyex"></a>  AfxRegOpenKeyEx

Apre la chiave del Registro di sistema.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegOpenKeyEx(HKEY hKey, LPCTSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*hKey*<br/>
Handle a una chiave del Registro di sistema open.

*lpSubKey*<br/>
Il nome di questa funzione si apre o crea una chiave.

*ulOptions*<br/>
Questo parametro è riservato e deve essere zero.

*samDesired*<br/>
Maschera che specifica i diritti di accesso desiderato alla chiave.

*phkResult*<br/>
Puntatore a una variabile che riceve un handle per la chiave aperta.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxunregisterpreviewhandler"></a> AfxUnregisterPreviewHandler

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

## <a name="atlsetperuserregistration"></a> AtlSetPerUserRegistration

Imposta se l'applicazione reindirizza l'accesso al Registro di sistema per il **HKEY_CURRENT_USER** (**HKCU**) nodo.

### <a name="syntax"></a>Sintassi

```
ATLINLINE ATLAPI AtlSetPerUserRegistration(bool bEnable);
```

### <a name="parameters"></a>Parametri

*bAttivare il*<br/>
[in] TRUE indica che le informazioni del Registro di sistema viene indirizzate per il **HKCU** un nodo attributo. FALSE indica che l'applicazione scrive le informazioni del Registro di sistema per il nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo, in caso contrario, l'errore HRESULT del codice se si verifica un errore.

### <a name="remarks"></a>Note

Il reindirizzamento del Registro di sistema non è abilitato per impostazione predefinita. Se si abilita questa opzione, l'accesso del Registro di sistema viene reindirizzato alla **HKEY_CURRENT_USER\Software\Classes**.

Il reindirizzamento non è globale. Solo i framework MFC e ATL sono interessati da questo reindirizzamento del Registro di sistema.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="atlunregistertypelib"></a>  AtlUnRegisterTypeLib

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
Stringa nel formato "\\\N", dove N è l'indice integer della risorsa libreria dei tipi. Può essere NULL se è richiesto alcun indice.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questa funzione helper usata da [CAtlComModule::UnRegisterTypeLib](../../atl/reference/catlcommodule-class.md#unregistertypelib) e [AtlComModuleUnregisterServer](#atlcommoduleunregisterserver).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="atlloadtypelib"></a>  AtlLoadTypeLib

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
Handle per il modulo associato con la libreria dei tipi.

*lpszIndex*<br/>
Stringa nel formato "\\\N", dove N è l'indice integer della risorsa libreria dei tipi. Può essere NULL se è richiesto alcun indice.

*pbstrPath*<br/>
In caso di esito positivo, contiene il percorso completo del modulo associato con la libreria dei tipi.

*ppTypeLib*<br/>
In caso di esito positivo, contiene un puntatore a un puntatore alla libreria dei tipi caricati.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questa funzione helper usata da [AtlRegisterTypeLib](#atlregistertypelib) e [AtlUnRegisterTypeLib](#atlunregistertypelib).

##  <a name="atlupdateregistryfromresourced"></a>  AtlUpdateRegistryFromResourceD

Questa funzione è stata deprecata in Visual Studio 2013 ed è stata rimossa in Visual Studio 2015.

```
<removed>
```

##  <a name="registrydataexchange"></a>  RegistryDataExchange

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
Un puntatore all'oggetto corrente.

*rdxOp*<br/>
Un valore di enumerazione che indica che l'operazione deve eseguire la funzione. Vedere la tabella nella sezione Osservazioni per i valori consentiti.

*pItem*<br/>
Puntatore ai dati che deve essere letto o scritto su, il Registro di sistema. I dati possono anche rappresentare una chiave da eliminare dal Registro di sistema. Il valore predefinito è NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Le macro [BEGIN_RDX_MAP](registry-data-exchange-macros.md#begin_rdx_map) e [END_RDX_MAP](registry-data-exchange-macros.md#end_rdx_map) espandere a una funzione che chiama `RegistryDataExchange`.

I valori enum possibili che indicano che l'operazione, la funzione deve eseguire vengono mostrati nella tabella seguente:

|Valore enum|Operazione|
|----------------|---------------|
|eReadFromReg|Dati letti dal Registro di sistema.|
|eWriteToReg|Scrivere dati nel Registro di sistema.|
|eDeleteFromReg|Eliminare la chiave dal Registro di sistema.|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Funzioni](atl-functions.md)<br/>
[Macro di scambio dati del Registro di sistema](registry-data-exchange-macros.md)
