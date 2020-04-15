---
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
ms.openlocfilehash: 378c8634e00935c622f0bf5d06a4f6c50cc60cb6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321433"
---
# <a name="catlmodule-class"></a>Classe CAtlModule

Questa classe fornisce i metodi utilizzati da diverse classi di moduli ATL.

## <a name="syntax"></a>Sintassi

```
class ATL_NO_VTABLE CAtlModule : public _ATL_MODULE
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlModule::CAtlModule](#catlmodule)|Costruttore.|
|[CAtlModule::](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlModule::AddCommonRGSReplacements (Modulo CAtlModule::AddCommonRGS)](#addcommonrgsreplacements)|Eseguire l'override di questo metodo per aggiungere parametri alla mappa di sostituzione del componente registro ATL (Registrar).|
|[CAtlModule::AddTermFunc](#addtermfunc)|Aggiunge una nuova funzione da chiamare quando il modulo termina.|
|[CAtlModule::GetGITPtr](#getgitptr)|Restituisce il puntatore a interfaccia globale.|
|[CAtlModule::GetLockCount](#getlockcount)|Restituisce il conteggio dei blocchi.|
|[CAtlModule::Lock](#lock)|Incrementa il conteggio dei blocchi.|
|[CAtlModule::Term](#term)|Rilascia tutti i membri dati.|
|[CAtlModule::Sblocca](#unlock)|Consente di diminuire il conteggio dei blocchi.|
|[CAtlModule::UpdateRegistryFromResourceD](#updateregistryfromresourced)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|
|[CAtlModule::UpdateRegistryFromResourceDHelper](#updateregistryfromresourcedhelper)|Questo metodo viene `UpdateRegistryFromResourceD` chiamato da per eseguire l'aggiornamento del Registro di sistema.|
|[CAtlModule::UpdateRegistryFromResourceS](#updateregistryfromresources)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto. Questo metodo si collega in modo statico al componente del Registro di sistema ATL.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlModule::m_libid](#m_libid)|Contiene il GUID del modulo corrente.|
|[CAtlModule::m_pGIT](#m_pgit)|Puntatore alla tabella di interfaccia globale.|

## <a name="remarks"></a>Osservazioni

Questa classe viene utilizzata da [CAtlDllModuleT Class](../../atl/reference/catldllmodulet-class.md), [CAtlExeModuleT Class](../../atl/reference/catlexemodulet-class.md)e [CAtlServiceModuleT Class](../../atl/reference/catlservicemodulet-class.md) per fornire il supporto rispettivamente per applicazioni DLL, applicazioni EXE e servizi Windows .

Per ulteriori informazioni sui moduli in ATL, vedere [Classi di moduli ATL](../../atl/atl-module-classes.md).

Questa classe sostituisce la [classe CComModule](../../atl/reference/ccommodule-class.md) obsoleta utilizzata nelle versioni precedenti di ATL.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

`CAtlModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="catlmoduleaddcommonrgsreplacements"></a><a name="addcommonrgsreplacements"></a>CAtlModule::AddCommonRGSReplacements (Modulo CAtlModule::AddCommonRGS)

Eseguire l'override di questo metodo per aggiungere parametri alla mappa di sostituzione del componente registro ATL (Registrar).

```
virtual HRESULT AddCommonRGSReplacements(IRegistrarBase* /* pRegistrar*/) throw() = 0;
```

### <a name="parameters"></a>Parametri

*pRegistrare*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

I parametri sostituibili consentono al client di una funzione di registrazione di specificare i dati di runtime. A tale scopo, la funzione di registrazione mantiene una mappa di sostituzione in cui immette i valori associati ai parametri sostituibili nello script. La funzione di registrazione crea queste voci in fase di esecuzione.

Per ulteriori informazioni, vedere l'argomento Utilizzo di [parametri sostituibili (il preprocessore della funzione](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) di registrazione).

## <a name="catlmoduleaddtermfunc"></a><a name="addtermfunc"></a>CAtlModule::AddTermFunc

Aggiunge una nuova funzione da chiamare quando il modulo termina.

```
HRESULT AddTermFunc(_ATL_TERMFUNC* pFunc, DWORD_PTR dw) throw();
```

### <a name="parameters"></a>Parametri

*pFunc*<br/>
Puntatore alla funzione da aggiungere.

*dw*<br/>
Dati definiti dall'utente, passati alla funzione.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="catlmodulecatlmodule"></a><a name="catlmodule"></a>CAtlModule::CAtlModule

Costruttore.

```
CAtlModule() throw();
```

### <a name="remarks"></a>Osservazioni

Inizializza i membri dati e avvia una sezione critica intorno al thread del modulo.

## <a name="catlmodulecatlmodule"></a><a name="dtor"></a>CAtlModule::

Distruttore.

```
~CAtlModule() throw();
```

### <a name="remarks"></a>Osservazioni

Rilascia tutti i membri dati.

## <a name="catlmodulegetgitptr"></a><a name="getgitptr"></a>CAtlModule::GetGITPtr

Recupera un puntatore alla tabella di interfaccia globale.

```
virtual HRESULT GetGITPtr(IGlobalInterfaceTable** ppGIT) throw();
```

### <a name="parameters"></a>Parametri

*ppGIT*<br/>
Puntatore alla variabile che riceverà il puntatore alla tabella di interfaccia globale.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un codice di errore in caso di errore. E_POINTER viene restituito se *ppGIT* è uguale a NULL.

### <a name="remarks"></a>Osservazioni

Se l'oggetto tabella interfaccia globale non esiste, viene creato e il relativo indirizzo viene archiviato nella variabile membro [CAtlModule::m_pGIT](#m_pgit).

Nelle build di debug, si verificherà un errore di asserzione se *ppGIT* è uguale a NULL o se non è possibile ottenere il puntatore della tabella di interfaccia globale.

Vedere [IGlobalInterfaceTable](/windows/win32/api/objidl/nn-objidl-iglobalinterfacetable) per informazioni sulla tabella dell'interfaccia globale.

## <a name="catlmodulegetlockcount"></a><a name="getlockcount"></a>CAtlModule::GetLockCount

Restituisce il conteggio dei blocchi.

```
virtual LONG GetLockCount() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il conteggio dei blocchi. Questo valore può essere utile per la diagnostica e il debug.

## <a name="catlmodulelock"></a><a name="lock"></a>CAtlModule::Lock

Incrementa il conteggio dei blocchi.

```
virtual LONG Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Incrementa il conteggio dei blocchi e restituisce il valore aggiornato. Questo valore può essere utile per la diagnostica e il debug.

## <a name="catlmodulem_libid"></a><a name="m_libid"></a>CAtlModule::m_libid

Contiene il GUID del modulo corrente.

```
static GUID m_libid;
```

## <a name="catlmodulem_pgit"></a><a name="m_pgit"></a>CAtlModule::m_pGIT

Puntatore alla tabella di interfaccia globale.

```
IGlobalInterfaceTable* m_pGIT;
```

## <a name="catlmoduleterm"></a><a name="term"></a>CAtlModule::Term

Rilascia tutti i membri dati.

```
void Term() throw();
```

### <a name="remarks"></a>Osservazioni

Rilascia tutti i membri dati. Questo metodo viene chiamato dal distruttore.

## <a name="catlmoduleunlock"></a><a name="unlock"></a>CAtlModule::Sblocca

Consente di diminuire il conteggio dei blocchi.

```
virtual LONG Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Decrementa il conteggio dei blocchi e restituisce il valore aggiornato. Questo valore può essere utile per la diagnostica e il debug.

## <a name="catlmoduleupdateregistryfromresourced"></a><a name="updateregistryfromresourced"></a>CAtlModule::UpdateRegistryFromResourceD

Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.

```
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
Un nome di risorsa.

*nResID (informazioni in stato inquestoe utente*<br/>
Un ID risorsa.

*bRegistrare*<br/>
TRUESe l'oggetto deve essere registrato. FALSE in caso contrario.

*pMapEvoci*<br/>
Puntatore alla mappa di sostituzione che memorizza i valori associati ai parametri sostituibili dello script. ATL utilizza automaticamente %MODULE%. Per utilizzare parametri sostituibili aggiuntivi, vedere [CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements). In caso contrario, utilizzare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Esegue lo script contenuto nella risorsa specificata da *lpszRes o nResID*. Se *bRegister* è TRUE, questo metodo registra l'oggetto nel Registro di sistema; in caso contrario rimuove l'oggetto dal Registro di sistema.

Per eseguire il collegamento statico al componente registro ATL (Registrar), vedere [CAtlModule::UpdateRegistryFromResourceS](#updateregistryfromresources).

Questo metodo chiama [CAtlModule::UpdateRegistryFromResourceDHelper](#updateregistryfromresourcedhelper) e [IRegistrar::ResourceUnregister](iregistrar-class.md#resourceunregister).

## <a name="catlmoduleupdateregistryfromresourcedhelper"></a><a name="updateregistryfromresourcedhelper"></a>CAtlModule::UpdateRegistryFromResourceDHelper

Questo metodo viene `UpdateRegistryFromResourceD` chiamato da per eseguire l'aggiornamento del Registro di sistema.

```
inline HRESULT WINAPI UpdateRegistryFromResourceDHelper(
    LPCOLESTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();
```

### <a name="parameters"></a>Parametri

*lpszRes*<br/>
Un nome di risorsa.

*bRegistrare*<br/>
Indica se l'oggetto deve essere registrato.

*pMapEvoci*<br/>
Puntatore alla mappa di sostituzione che memorizza i valori associati ai parametri sostituibili dello script. ATL utilizza automaticamente %MODULE%. Per utilizzare parametri sostituibili aggiuntivi, vedere [CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements). In caso contrario, utilizzare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo fornisce l'implementazione di [CAtlModule::UpdateRegistryFromResourceD](#updateregistryfromresourced).

## <a name="catlmoduleupdateregistryfromresources"></a><a name="updateregistryfromresources"></a>CAtlModule::UpdateRegistryFromResourceS

Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto. Questo metodo si collega in modo statico al componente del Registro di sistema ATL.

```
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

*nResID (informazioni in stato inquestoe utente*<br/>
Un ID risorsa.

*lpszRes*<br/>
Un nome di risorsa.

*bRegistrare*<br/>
Indica se lo script di risorsa deve essere registrato.

*pMapEvoci*<br/>
Puntatore alla mappa di sostituzione che memorizza i valori associati ai parametri sostituibili dello script. ATL utilizza automaticamente %MODULE%. Per utilizzare parametri sostituibili aggiuntivi, vedere [CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements). In caso contrario, utilizzare il valore predefinito NULL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Simile a [CAtlModule::UpdateRegistryFromResourceD](#updateregistryfromresourced) tranne che `CAtlModule::UpdateRegistryFromResourceS` crea un collegamento statico al componente del Registro di sistema ATL (Registrar).

## <a name="see-also"></a>Vedere anche

[_ATL_MODULE](atl-typedefs.md#_atl_module)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)<br/>
[Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md)
