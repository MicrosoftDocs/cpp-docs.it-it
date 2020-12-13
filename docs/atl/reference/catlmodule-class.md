---
description: 'Altre informazioni su: classe CAtlModule'
title: Classe CAtlModule
ms.date: 11/04/2016
f1_keywords:
- CAtlModule
- ATLBASE/ATL::CAtlModule
- ATLBASE/ATL::CAtlModule::CAtlModule
- ATLBASE/ATL::CAtlModule::AddCommonRGSReplacements
- ATLBASE/ATL::CAtlModule::AddTermFunc
- ATLBASE/ATL::CAtlModule::GetGITPtr
- ATLBASE/ATL::CAtlModule::GetLockCount
- ATLBASE/ATL::CAtlModule::Lock
- ATLBASE/ATL::CAtlModule::Term
- ATLBASE/ATL::CAtlModule::Unlock
- ATLBASE/ATL::CAtlModule::UpdateRegistryFromResourceD
- ATLBASE/ATL::CAtlModule::UpdateRegistryFromResourceDHelper
- ATLBASE/ATL::CAtlModule::UpdateRegistryFromResourceS
- ATLBASE/ATL::CAtlModule::m_libid
- ATLBASE/ATL::CAtlModule::m_pGIT
helpviewer_keywords:
- CAtlModule class
ms.assetid: 63fe02f1-4c4b-4e7c-ae97-7ad7b4252415
ms.openlocfilehash: 3ae2caa59f330f9f43a3ae66e7f5eb38ddabc89c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147238"
---
# <a name="catlmodule-class"></a>Classe CAtlModule

Questa classe fornisce i metodi utilizzati da diverse classi di moduli ATL.

## <a name="syntax"></a>Sintassi

```cpp
class ATL_NO_VTABLE CAtlModule : public _ATL_MODULE
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlModule:: CAtlModule](#catlmodule)|Costruttore.|
|[CAtlModule:: ~ CAtlModule](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlModule:: AddCommonRGSReplacements](#addcommonrgsreplacements)|Eseguire l'override di questo metodo per aggiungere parametri alla mappa di sostituzione del componente del registro di sistema ATL (Registrar).|
|[CAtlModule:: AddTermFunc](#addtermfunc)|Aggiunge una nuova funzione da chiamare al termine del modulo.|
|[CAtlModule:: GetGITPtr](#getgitptr)|Restituisce il puntatore a interfaccia globale.|
|[CAtlModule:: GetLockCount](#getlockcount)|Restituisce il conteggio dei blocchi.|
|[CAtlModule:: Lock](#lock)|Incrementa il conteggio dei blocchi.|
|[CAtlModule:: term](#term)|Rilascia tutti i membri dati.|
|[CAtlModule:: Unlock](#unlock)|Consente di diminuire il conteggio dei blocchi.|
|[CAtlModule:: UpdateRegistryFromResourceD](#updateregistryfromresourced)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|
|[CAtlModule:: UpdateRegistryFromResourceDHelper](#updateregistryfromresourcedhelper)|Questo metodo viene chiamato da `UpdateRegistryFromResourceD` per eseguire l'aggiornamento del registro di sistema.|
|[CAtlModule:: UpdateRegistryFromResourceS](#updateregistryfromresources)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto. Questo metodo collega in modo statico il componente del registro di sistema ATL.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlModule:: m_libid](#m_libid)|Contiene il GUID del modulo corrente.|
|[CAtlModule:: m_pGIT](#m_pgit)|Puntatore alla tabella dell'interfaccia globale.|

## <a name="remarks"></a>Commenti

Questa classe viene usata dalla classe [CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md), dalla [classe CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md)e dalla [classe funzione CAtlServiceModuleT](../../atl/reference/catlservicemodulet-class.md) per fornire il supporto rispettivamente per le applicazioni dll, le applicazioni exe e i servizi Windows.

Per ulteriori informazioni sui moduli in ATL, vedere [ATL Module Classes](../../atl/atl-module-classes.md).

Questa classe sostituisce la [classe CComModule](../../atl/reference/ccommodule-class.md) obsoleta usata nelle versioni precedenti di ATL.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

`CAtlModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="catlmoduleaddcommonrgsreplacements"></a><a name="addcommonrgsreplacements"></a> CAtlModule:: AddCommonRGSReplacements

Eseguire l'override di questo metodo per aggiungere parametri alla mappa di sostituzione del componente del registro di sistema ATL (Registrar).

```cpp
virtual HRESULT AddCommonRGSReplacements(IRegistrarBase* /* pRegistrar*/) throw() = 0;
```

### <a name="parameters"></a>Parametri

*pRegistrar*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

I parametri sostituibili consentono a un client del registrar di specificare i dati in fase di esecuzione. A tale scopo, il registrar mantiene una mappa sostitutiva in cui immette i valori associati ai parametri sostituibili nello script. Il registrar esegue queste voci in fase di esecuzione.

Per ulteriori informazioni, vedere l'argomento [utilizzo di parametri sostituibili (preprocessore del registrar)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) .

## <a name="catlmoduleaddtermfunc"></a><a name="addtermfunc"></a> CAtlModule:: AddTermFunc

Aggiunge una nuova funzione da chiamare al termine del modulo.

```cpp
HRESULT AddTermFunc(_ATL_TERMFUNC* pFunc, DWORD_PTR dw) throw();
```

### <a name="parameters"></a>Parametri

*pFunc*<br/>
Puntatore alla funzione da aggiungere.

*dw*<br/>
Dati definiti dall'utente, passati alla funzione.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="catlmodulecatlmodule"></a><a name="catlmodule"></a> CAtlModule:: CAtlModule

Costruttore.

```cpp
CAtlModule() throw();
```

### <a name="remarks"></a>Commenti

Inizializza i membri dati e avvia una sezione critica intorno al thread del modulo.

## <a name="catlmodulecatlmodule"></a><a name="dtor"></a> CAtlModule:: ~ CAtlModule

Distruttore.

```cpp
~CAtlModule() throw();
```

### <a name="remarks"></a>Commenti

Rilascia tutti i membri dati.

## <a name="catlmodulegetgitptr"></a><a name="getgitptr"></a> CAtlModule:: GetGITPtr

Recupera un puntatore alla tabella dell'interfaccia globale.

```cpp
virtual HRESULT GetGITPtr(IGlobalInterfaceTable** ppGIT) throw();
```

### <a name="parameters"></a>Parametri

*ppGIT*<br/>
Puntatore alla variabile che riceverà il puntatore alla tabella dell'interfaccia globale.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un codice di errore in caso di errore. Se *ppGIT* è uguale a null, viene restituito E_POINTER.

### <a name="remarks"></a>Commenti

Se l'oggetto tabella dell'interfaccia globale non esiste, viene creato e il relativo indirizzo viene archiviato nella variabile membro [CAtlModule:: m_pGIT](#m_pgit).

Nelle build di debug, si verificherà un errore di asserzione se *ppGIT* è uguale a null o se non è possibile ottenere il puntatore alla tabella dell'interfaccia globale.

Per informazioni sulla tabella dell'interfaccia globale, vedere [IGlobalInterfaceTable](/windows/win32/api/objidl/nn-objidl-iglobalinterfacetable) .

## <a name="catlmodulegetlockcount"></a><a name="getlockcount"></a> CAtlModule:: GetLockCount

Restituisce il conteggio dei blocchi.

```cpp
virtual LONG GetLockCount() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il conteggio dei blocchi. Questo valore può essere utile per la diagnostica e il debug.

## <a name="catlmodulelock"></a><a name="lock"></a> CAtlModule:: Lock

Incrementa il conteggio dei blocchi.

```cpp
virtual LONG Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Incrementa il conteggio dei blocchi e restituisce il valore aggiornato. Questo valore può essere utile per la diagnostica e il debug.

## <a name="catlmodulem_libid"></a><a name="m_libid"></a> CAtlModule:: m_libid

Contiene il GUID del modulo corrente.

```cpp
static GUID m_libid;
```

## <a name="catlmodulem_pgit"></a><a name="m_pgit"></a> CAtlModule:: m_pGIT

Puntatore alla tabella dell'interfaccia globale.

```cpp
IGlobalInterfaceTable* m_pGIT;
```

## <a name="catlmoduleterm"></a><a name="term"></a> CAtlModule:: term

Rilascia tutti i membri dati.

```cpp
void Term() throw();
```

### <a name="remarks"></a>Commenti

Rilascia tutti i membri dati. Questo metodo viene chiamato dal distruttore.

## <a name="catlmoduleunlock"></a><a name="unlock"></a> CAtlModule:: Unlock

Consente di diminuire il conteggio dei blocchi.

```cpp
virtual LONG Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Decrementa il conteggio dei blocchi e restituisce il valore aggiornato. Questo valore può essere utile per la diagnostica e il debug.

## <a name="catlmoduleupdateregistryfromresourced"></a><a name="updateregistryfromresourced"></a> CAtlModule:: UpdateRegistryFromResourceD

Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.

```cpp
HRESULT WINAPI UpdateRegistryFromResourceD(
    UINT nResID,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();

HRESULT WINAPI UpdateRegistryFromResourceD(
    LPCTSTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();
```

### <a name="parameters"></a>Parametri

*lpszRes*<br/>
Nome della risorsa.

*nResID*<br/>
ID di risorsa.

*bRegister*<br/>
TRUE se l'oggetto deve essere registrato; In caso contrario, FALSE.

*pMapEntries*<br/>
Puntatore alla mappa sostitutiva che archivia i valori associati ai parametri sostituibili dello script. ATL utilizza automaticamente% MODULE%. Per usare parametri sostituibili aggiuntivi, vedere [CAtlModule:: AddCommonRGSReplacements](#addcommonrgsreplacements). In caso contrario, usare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Esegue lo script contenuto nella risorsa specificata da *lpszRes o nResID*. Se *bRegister* è true, questo metodo registra l'oggetto nel registro di sistema. in caso contrario, rimuove l'oggetto dal registro di sistema.

Per eseguire il collegamento statico al componente del registro di sistema ATL (Registrar), vedere [CAtlModule:: UpdateRegistryFromResourceS](#updateregistryfromresources).

Questo metodo chiama [CAtlModule:: UpdateRegistryFromResourceDHelper](#updateregistryfromresourcedhelper) e [IRegistrar:: ResourceUnregister](iregistrar-class.md#resourceunregister).

## <a name="catlmoduleupdateregistryfromresourcedhelper"></a><a name="updateregistryfromresourcedhelper"></a> CAtlModule:: UpdateRegistryFromResourceDHelper

Questo metodo viene chiamato da `UpdateRegistryFromResourceD` per eseguire l'aggiornamento del registro di sistema.

```cpp
inline HRESULT WINAPI UpdateRegistryFromResourceDHelper(
    LPCOLESTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();
```

### <a name="parameters"></a>Parametri

*lpszRes*<br/>
Nome della risorsa.

*bRegister*<br/>
Indica se l'oggetto deve essere registrato.

*pMapEntries*<br/>
Puntatore alla mappa sostitutiva che archivia i valori associati ai parametri sostituibili dello script. ATL utilizza automaticamente% MODULE%. Per usare parametri sostituibili aggiuntivi, vedere [CAtlModule:: AddCommonRGSReplacements](#addcommonrgsreplacements). In caso contrario, usare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Questo metodo fornisce l'implementazione di [CAtlModule:: UpdateRegistryFromResourceD](#updateregistryfromresourced).

## <a name="catlmoduleupdateregistryfromresources"></a><a name="updateregistryfromresources"></a> CAtlModule:: UpdateRegistryFromResourceS

Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto. Questo metodo collega in modo statico il componente del registro di sistema ATL.

```cpp
HRESULT WINAPI UpdateRegistryFromResourceS(
    UINT nResID,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();

HRESULT WINAPI UpdateRegistryFromResourceS(
    LPCTSTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();
```

### <a name="parameters"></a>Parametri

*nResID*<br/>
ID di risorsa.

*lpszRes*<br/>
Nome della risorsa.

*bRegister*<br/>
Indica se lo script di risorsa deve essere registrato.

*pMapEntries*<br/>
Puntatore alla mappa sostitutiva che archivia i valori associati ai parametri sostituibili dello script. ATL utilizza automaticamente% MODULE%. Per usare parametri sostituibili aggiuntivi, vedere [CAtlModule:: AddCommonRGSReplacements](#addcommonrgsreplacements). In caso contrario, usare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Analogamente a [CAtlModule:: UpdateRegistryFromResourceD](#updateregistryfromresourced) tranne `CAtlModule::UpdateRegistryFromResourceS` Crea un collegamento statico al componente del registro di sistema ATL (Registrar).

## <a name="see-also"></a>Vedi anche

[_ATL_MODULE](atl-typedefs.md#_atl_module)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi modulo](../../atl/atl-module-classes.md)<br/>
[Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md)
