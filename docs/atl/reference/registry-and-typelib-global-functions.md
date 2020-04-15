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
ms.openlocfilehash: 69df927ddd04c19d10703854aa8c8948894309d1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326084"
---
# <a name="registry-and-typelib-global-functions"></a>Funzioni globali Registry e TypeLib

Queste funzioni forniscono supporto per il caricamento e la registrazione di una libreria dei tipi.

> [!IMPORTANT]
> Le funzioni elencate nelle tabelle seguenti non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.

|||
|-|-|
|[AfxRegCreateKey](#afxregcreatekey)|Crea la chiave del Registro di sistema specificata.|
|[AfxRegDeleteKey](#afxregdeletekey)|Elimina la chiave del Registro di sistema specificata.|
|[AfxRegisterPreviewHandler](#afxregisterpreviewhandler)|Un helper per registrare un gestore di anteprime.|
|[AfxUnregisterPreviewHandler](#afxunregisterpreviewhandler)| Un helper per annullare la registrazione di un gestore di anteprima. |
|[AtlRegisterTypeLib](#atlregistertypelib)|Questa funzione viene chiamata per registrare una libreria dei tipi.|
|[AtlUnRegisterTypeLib](#atlunregistertypelib)|Questa funzione viene chiamata per annullare la registrazione di una libreria dei tipi|
|[AfxRegOpenKey](#afxregopenkey)|Apre la chiave del Registro di sistema specificata.|
|[AfxRegOpenKeyEx](#afxregopenkeyex)|Apre la chiave del Registro di sistema specificata.|
|[AtlLoadTypeLib](#atlloadtypelib)|Questa funzione viene chiamata per caricare una libreria dei tipi.|
|[AtlUpdateRegistryFromResourceD](#atlupdateregistryfromresourced)|Questa funzione viene chiamata per aggiornare il Registro di sistema dalla risorsa specificata.|
|[RegistryDataExchange](#registrydataexchange)|Questa funzione viene chiamata per leggere o scrivere nel Registro di sistema. Chiamato dalle macro di [scambio di dati del Registro di sistema](../../atl/reference/registry-data-exchange-macros.md).|

Queste funzioni controllano il nodo nel Registro di sistema utilizzato dal programma per archiviare le informazioni.

|||
|-|-|
|[AtlGetPerUserRegistration](#atlgetperuserregistration)|Recupera se l'applicazione reindirizza l'accesso del Registro di sistema al nodo **HKEY_CURRENT_USER** ( **HKCU**).|
|[AtlSetPerUserRegistration](#atlsetperuserregistration)|Imposta se l'applicazione reindirizza l'accesso del Registro di sistema al nodo **HKEY_CURRENT_USER** ( **HKCU**).|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="atlgetperuserregistration"></a><a name="atlgetperuserregistration"></a>Registrazione di AtlGetPerUser

Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso del Registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).

### <a name="syntax"></a>Sintassi

```
ATLINLINE ATLAPI AtlGetPerUserRegistration(bool* pEnabled);
```

### <a name="parameters"></a>Parametri

*pAbilitato*<br/>
[fuori] TRUE indica che le informazioni del Registro di sistema vengono indirizzate al nodo **HKCU.** FALSE indica che l'applicazione scrive le informazioni del Registro di sistema nel nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo, in caso contrario, il codice di errore HRESULT se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il reindirizzamento del Registro di sistema non è abilitato per impostazione predefinita. Se si abilita questa opzione, l'accesso al Registro di sistema viene reindirizzato a **HKEY_CURRENT_USER Software Classes**.

Il reindirizzamento non è globale. Solo i framework MFC e ATL sono interessati da questo reindirizzamento del Registro di sistema.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="afxregcreatekey"></a><a name="afxregcreatekey"></a>AfxRegCreateKey (chiave AfxRegCreateKey)

Crea la chiave del Registro di sistema specificata.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegCreateKey(HKEY hKey, LPCTSTR lpSubKey, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*Hkey*<br/>
Handle per una chiave del Registro di sistema aperta.

*lpSubChiave*<br/>
Nome di un tasto aperto o creato da questa funzione.

*PhkRisulta*<br/>
Puntatore a una variabile che riceve un handle per la chiave aperta o creata.

*Ptm*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror.h.If the function fails, the return value is a diverso da zero error code defined in Winerror.h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxregdeletekey"></a><a name="afxregdeletekey"></a>AfxRegDeleteKey (Chiave di afxRegDeleteKey)

Elimina la chiave del Registro di sistema specificata.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegDeleteKey(HKEY hKey, LPCTSTR lpSubKey, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*Hkey*<br/>
Handle per una chiave del Registro di sistema aperta.

*lpSubChiave*<br/>
Nome della chiave da eliminare.

*Ptm*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror.h.If the function fails, the return value is a diverso da zero error code defined in Winerror.h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxregisterpreviewhandler"></a>

Un helper per registrare un gestore di anteprime.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxRegisterPreviewHandler(LPCTSTR lpszCLSID, LPCTSTR lpszShortTypeName, LPCTSTR lpszFilterExt);
```

### <a name="parameters"></a>Parametri

*lpszCLSID (informazioni in stato di*<br/>
Specifica il CLSID del gestore.

*lpszShortTypeName (Nome tipo di campo)*<br/>
Specifica il ProgID del gestore.

*lpszFilterExt (filtro)*<br/>
Specifica l'estensione di file registrata con questo gestore.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="atlregistertypelib"></a><a name="atlregistertypelib"></a>AtlRegisterTypeLib (oggetto AtlRegisterTypeLib)

Questa funzione viene chiamata per registrare una libreria dei tipi.

```
ATLAPI AtlRegisterTypeLib(HINSTANCE hInstTypeLib, LPCOLESTR lpszIndex);
```

### <a name="parameters"></a>Parametri

*hInstTypeLib (instTypeLib)*<br/>
Handle per l'istanza del modulo.

*Indice di lpsz*<br/>
Stringa nel formato\\" . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . Può essere NULL se non è richiesto alcun indice.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione di supporto viene utilizzata da [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver) e [CAtlComModule::RegisterTypeLib](../../atl/reference/catlcommodule-class.md#registertypelib).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="afxregopenkey"></a><a name="afxregopenkey"></a>AfxRegOpenKey (chiave AfxRegOpenKey)

Apre la chiave del Registro di sistema specificata.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegOpenKey(HKEY hKey, LPCTSTR lpSubKey, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*Hkey*<br/>
Handle per una chiave del Registro di sistema aperta.

*lpSubChiave*<br/>
Nome di un tasto aperto o creato da questa funzione.

*PhkRisulta*<br/>
Puntatore a una variabile che riceve un handle per la chiave creata.

*Ptm*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror.h.If the function fails, the return value is a diverso da zero error code defined in Winerror.h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxregopenkeyex"></a><a name="afxregopenkeyex"></a>AfxRegOpenKeyEx

Apre la chiave del Registro di sistema specificata.

### <a name="syntax"></a>Sintassi

```
LONG AFXAPI AfxRegOpenKeyEx(HKEY hKey, LPCTSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*Hkey*<br/>
Handle per una chiave del Registro di sistema aperta.

*lpSubChiave*<br/>
Nome di un tasto aperto o creato da questa funzione.

*ulOpzioni*<br/>
Questo parametro è riservato e deve essere zero.

*samDesired*<br/>
Maschera che specifica i diritti di accesso desiderati alla chiave.

*PhkRisulta*<br/>
Puntatore a una variabile che riceve un handle per la chiave aperta.

*Ptm*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror.h.If the function fails, the return value is a diverso da zero error code defined in Winerror.h.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxunregisterpreviewhandler"></a><a name="afxunregisterpreviewhandler"></a>AfxUnregisterPreviewHandler

Un helper per annullare la registrazione di un gestore di anteprima.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxUnRegisterPreviewHandler(LPCTSTR lpszCLSID);
```

### <a name="parameters"></a>Parametri

*lpszCLSID (informazioni in stato di*<br/>
Specifica il CLSID del gestore di cui annullare la registrazione.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="atlsetperuserregistration"></a><a name="atlsetperuserregistration"></a>Registrazione di AtlSetPerUser

Imposta se l'applicazione reindirizza l'accesso del Registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).

### <a name="syntax"></a>Sintassi

```
ATLINLINE ATLAPI AtlSetPerUserRegistration(bool bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE indica che le informazioni del Registro di sistema vengono indirizzate al nodo **HKCU.** FALSE indica che l'applicazione scrive le informazioni del Registro di sistema nel nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo, in caso contrario, il codice di errore HRESULT se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il reindirizzamento del Registro di sistema non è abilitato per impostazione predefinita. Se si abilita questa opzione, l'accesso al Registro di sistema viene reindirizzato a **HKEY_CURRENT_USER Software Classes**.

Il reindirizzamento non è globale. Solo i framework MFC e ATL sono interessati da questo reindirizzamento del Registro di sistema.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="atlunregistertypelib"></a><a name="atlunregistertypelib"></a>AtlUnRegisterTypeLib

Questa funzione viene chiamata per annullare la registrazione di una libreria dei tipi.

### <a name="syntax"></a>Sintassi

```
ATLAPI AtlUnRegisterTypeLib(
    HINSTANCE hInstTypeLib,
    LPCOLESTR lpszIndex);
```

### <a name="parameters"></a>Parametri

*hInstTypeLib (instTypeLib)*<br/>
Handle per l'istanza del modulo.

*Indice di lpsz*<br/>
Stringa nel formato\\" . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . Può essere NULL se non è richiesto alcun indice.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione di supporto viene utilizzata da [CAtlComModule::UnRegisterTypeLib](../../atl/reference/catlcommodule-class.md#unregistertypelib) e [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="atlloadtypelib"></a><a name="atlloadtypelib"></a>AtlLoadTypeLib

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

*hInstTypeLib (instTypeLib)*<br/>
Handle per il modulo associato alla libreria dei tipi.

*Indice di lpsz*<br/>
Stringa nel formato\\" . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . Può essere NULL se non è richiesto alcun indice.

*pbstrPath (con sistemi pbstrPath)*<br/>
In caso di esito positivo, contiene il percorso completo del modulo associato alla libreria dei tipi.

*ppTypeLib (informazioni in questo gruppo)*<br/>
In caso di esito positivo, contiene un puntatore a un puntatore alla libreria dei tipi caricata.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione di supporto viene utilizzata da [AtlRegisterTypeLib](#atlregistertypelib) e [AtlUnRegisterTypeLib](#atlunregistertypelib).

## <a name="atlupdateregistryfromresourced"></a><a name="atlupdateregistryfromresourced"></a>AtlUpdateRegistryFromResourceD

Questa funzione è stata deprecata in Visual Studio 2013 ed è stata rimossa in Visual Studio 2015.

```
<removed>
```

## <a name="registrydataexchange"></a><a name="registrydataexchange"></a>Proprietà RegistryDataExchange

Questa funzione viene chiamata per leggere o scrivere nel Registro di sistema.

### <a name="syntax"></a>Sintassi

```
HRESULT RegistryDataExchange(
    T* pT,
    enum RDXOperations rdxOp,
    void* pItem = NULL);
```

### <a name="parameters"></a>Parametri

*Pt*<br/>
Puntatore all'oggetto corrente.

*rdxOp*<br/>
Valore di enumerazione che indica l'operazione che deve essere eseguita dalla funzione. Vedere la tabella nella sezione Osservazioni per i valori consentiti.

*pItem (elemento)*<br/>
Puntatore ai dati da leggere o da cui scrivere il Registro di sistema. I dati possono anche rappresentare una chiave da eliminare dal Registro di sistema. Il valore predefinito è NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Le macro [BEGIN_RDX_MAP](registry-data-exchange-macros.md#begin_rdx_map) e [END_RDX_MAP](registry-data-exchange-macros.md#end_rdx_map) espandono in una funzione che chiama `RegistryDataExchange`.

I possibili valori di enumerazione che indicano l'operazione che la funzione deve eseguire sono illustrati nella tabella seguente:

|Valore enum|Operazione|
|----------------|---------------|
|eReadFromReg|Leggere i dati dal Registro di sistema.|
|eWriteToReg (informazioni in ucraina)|Scrivere i dati nel Registro di sistema.|
|eDeleteFromReg|Eliminare la chiave dal Registro di sistema.|

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="see-also"></a>Vedere anche

[Funzioni](atl-functions.md)<br/>
[Macro di scambio di dati del Registro di sistema](registry-data-exchange-macros.md)
