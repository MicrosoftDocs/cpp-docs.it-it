---
title: Classe da CAtlModule | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CAtlModule class
ms.assetid: 63fe02f1-4c4b-4e7c-ae97-7ad7b4252415
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5a06fc417902378c88e2e65a9b51ee5e4356a39d
ms.openlocfilehash: 75cb5b42cd6c9de14d9abf09b20a1e23716f1149
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="catlmodule-class"></a>Classe da CAtlModule
Questa classe fornisce i metodi utilizzati da diverse classi di modulo ATL.  
  
## <a name="syntax"></a>Sintassi  
  
```
class ATL_NO_VTABLE CAtlModule : public _ATL_MODULE
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlModule::CAtlModule](#catlmodule)|Costruttore.|  
|[CAtlModule:: ~ CAtlModule](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements)|Eseguire l'override di questo metodo per aggiungere parametri alla mappa di sostituzione del componente del Registro di sistema ATL (Registrar).|  
|[CAtlModule::AddTermFunc](#addtermfunc)|Aggiunge una nuova funzione da chiamare quando il modulo termina.|  
|[CAtlModule::GetGITPtr](#getgitptr)|Restituisce un puntatore a interfaccia globale.|  
|[CAtlModule::GetLockCount](#getlockcount)|Restituisce il conteggio dei blocchi.|  
|[CAtlModule::Lock](#lock)|Incrementa il conteggio dei blocchi.|  
|[CAtlModule::Term](#term)|Rilascia tutti i membri dati.|  
|[CAtlModule::Unlock](#unlock)|Consente di diminuire il conteggio dei blocchi.|  
|[CAtlModule:: UpdateRegistryFromResourceD](#updateregistryfromresourced)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto.|  
|[CAtlModule::UpdateRegistryFromResourceDHelper](#updateregistryfromresourcedhelper)|Questo metodo viene chiamato da `UpdateRegistryFromResourceD` per eseguire l'aggiornamento del Registro di sistema.|  
|[CAtlModule::UpdateRegistryFromResourceS](#updateregistryfromresources)|Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto. Questo metodo può essere collegata in modo statico al componente del Registro di sistema ATL.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlModule::m_libid](#m_libid)|Contiene il GUID del modulo corrente.|  
|[CAtlModule::m_pGIT](#m_pgit)|Puntatore alla tabella di interfaccia globale.|  
  
## <a name="remarks"></a>Note  
 Questa classe viene utilizzata da [CAtlDllModuleT classe](../../atl/reference/catldllmodulet-class.md), [classe CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md), e [CAtlServiceModuleT classe](../../atl/reference/catlservicemodulet-class.md) per fornire supporto per applicazioni DLL, EXE applicazioni e servizi di Windows, rispettivamente.  
  
 Per ulteriori informazioni sui moduli in ATL, vedere [classi di modulo ATL](../../atl/atl-module-classes.md).  
  
 Questa classe sostituisce obsoleta [CComModule (classi)](../../atl/reference/ccommodule-class.md) utilizzato nelle versioni precedenti di ATL.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  
  
 `CAtlModule`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="addcommonrgsreplacements"></a>CAtlModule::AddCommonRGSReplacements  
 Eseguire l'override di questo metodo per aggiungere parametri alla mappa di sostituzione del componente del Registro di sistema ATL (Registrar).  
  
```
virtual HRESULT AddCommonRGSReplacements(IRegistrarBase* /* pRegistrar*/) throw() = 0;
```  
  
### <a name="parameters"></a>Parametri  
 *pRegistrar*  
 Riservato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Parametri sostituibili consentono un client di registrazione specificare i dati in fase di esecuzione. A tale scopo, nel Registrar viene gestita una mappa di sostituzione in cui vengono immessi i valori associati ai parametri sostituibili nello script. Queste voci vengono poi in fase di esecuzione.  
  
 Vedere l'argomento [utilizzando parametri sostituibili (preprocessore del Registrar di)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) per ulteriori dettagli.  
  
##  <a name="addtermfunc"></a>CAtlModule::AddTermFunc  
 Aggiunge una nuova funzione da chiamare quando il modulo termina.  
  
```
HRESULT AddTermFunc(_ATL_TERMFUNC* pFunc, DWORD_PTR dw) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pFunc*  
 Puntatore alla funzione da aggiungere.  
  
 `dw`  
 Dati definiti dall'utente, passato alla funzione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="catlmodule"></a>CAtlModule::CAtlModule  
 Costruttore.  
  
```
CAtlModule() throw();
```  
  
### <a name="remarks"></a>Note  
 Inizializza i membri di dati e avvia una sezione critica intorno thread del modulo.  
  
##  <a name="dtor"></a>CAtlModule:: ~ CAtlModule  
 Distruttore.  
  
```
~CAtlModule() throw();
```  
  
### <a name="remarks"></a>Note  
 Rilascia tutti i membri dati.  
  
##  <a name="getgitptr"></a>CAtlModule::GetGITPtr  
 Recupera un puntatore alla tabella di interfaccia globale.  
  
```
virtual HRESULT GetGITPtr(IGlobalInterfaceTable** ppGIT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `ppGIT`  
 Puntatore alla variabile che verrà visualizzato il puntatore alla tabella di interfaccia globale.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un codice di errore. Se viene restituito E_POINTER `ppGIT` è uguale a NULL.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto tabella di interfaccia globale non esiste, viene creato e il relativo indirizzo viene archiviato nella variabile membro [CAtlModule::m_pGIT](#m_pgit).  
  
 Nelle build di debug si verifica un errore di asserzione se `ppGIT` è uguale a NULL, o se non è possibile ottenere il puntatore della tabella di interfaccia globale.  
  
 Vedere [IGlobalInterfaceTable](http://msdn.microsoft.com/library/windows/desktop/ms678517) per informazioni sulla tabella di interfaccia globale.  
  
##  <a name="getlockcount"></a>CAtlModule::GetLockCount  
 Restituisce il conteggio dei blocchi.  
  
```
virtual LONG GetLockCount() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il conteggio dei blocchi. Questo valore può essere utile per la diagnostica e debug.  
  
##  <a name="lock"></a>CAtlModule::Lock  
 Incrementa il conteggio dei blocchi.  
  
```
virtual LONG Lock() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Incrementa il conteggio dei blocchi e restituisce il valore aggiornato. Questo valore può essere utile per la diagnostica e debug.  
  
##  <a name="m_libid"></a>CAtlModule::m_libid  
 Contiene il GUID del modulo corrente.  
  
```
static GUID m_libid;
```  
  
##  <a name="m_pgit"></a>CAtlModule::m_pGIT  
 Puntatore alla tabella di interfaccia globale.  
  
```
IGlobalInterfaceTable* m_pGIT;
```  
  
##  <a name="term"></a>CAtlModule::Term  
 Rilascia tutti i membri dati.  
  
```
void Term() throw();
```  
  
### <a name="remarks"></a>Note  
 Rilascia tutti i membri dati. Questo metodo viene chiamato dal distruttore.  
  
##  <a name="unlock"></a>CAtlModule::Unlock  
 Consente di diminuire il conteggio dei blocchi.  
  
```
virtual LONG Unlock() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Decrementa il conteggio dei blocchi e restituisce il valore aggiornato. Questo valore può essere utile per la diagnostica e debug.  
  
##  <a name="updateregistryfromresourced"></a>CAtlModule:: UpdateRegistryFromResourceD  
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
 `lpszRes`  
 Un nome di risorsa.  
  
 `nResID`  
 Un ID risorsa.  
  
 `bRegister`  
 **TRUE** se l'oggetto deve essere registrato. **FALSE** in caso contrario.  
  
 `pMapEntries`  
 Puntatore alla mappa di sostituzione l'archiviazione dei valori associati a parametri sostituibili dello script. ATL utilizza automaticamente il modulo % %. Per utilizzare altri parametri sostituibili, vedere [CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements). In caso contrario, utilizzare il **NULL** il valore predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Esegue lo script contenuto nella risorsa specificata da *lpszRes o nResID*. Se `bRegister` è **TRUE**, questo metodo registra l'oggetto nel Registro di sistema; in caso contrario l'oggetto viene rimosso dal Registro di sistema.  
  
 Per collegare in modo statico per il componente del Registro di sistema ATL (Registrar), vedere [CAtlModule::UpdateRegistryFromResourceS](#updateregistryfromresources).  
  
 Questo metodo chiama [CAtlModule::UpdateRegistryFromResourceDHelper](#updateregistryfromresourcedhelper) e [IRegistrar::ResourceUnregister](iregistrar-class.md#resourceunregister).  
  
##  <a name="updateregistryfromresourcedhelper"></a>CAtlModule::UpdateRegistryFromResourceDHelper  
 Questo metodo viene chiamato da `UpdateRegistryFromResourceD` per eseguire l'aggiornamento del Registro di sistema.  
  
```
inline HRESULT WINAPI UpdateRegistryFromResourceDHelper(  
    LPCOLESTR lpszRes,
    BOOL bRegister,
    struct _ATL_REGMAP_ENTRY* pMapEntries = NULL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszRes`  
 Un nome di risorsa.  
  
 `bRegister`  
 Indica se l'oggetto deve essere registrato.  
  
 `pMapEntries`  
 Puntatore alla mappa di sostituzione l'archiviazione dei valori associati a parametri sostituibili dello script. ATL utilizza automaticamente il modulo % %. Per utilizzare altri parametri sostituibili, vedere [CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements). In caso contrario, utilizzare il **NULL** il valore predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo fornisce l'implementazione di [CAtlModule:: UpdateRegistryFromResourceD](#updateregistryfromresourced).  
  
##  <a name="updateregistryfromresources"></a>CAtlModule::UpdateRegistryFromResourceS  
 Esegue lo script contenuto in una risorsa specificata per registrare o annullare la registrazione di un oggetto. Questo metodo può essere collegata in modo statico al componente del Registro di sistema ATL.  
  
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
 `nResID`  
 Un ID risorsa.  
  
 `lpszRes`  
 Un nome di risorsa.  
  
 `bRegister`  
 Indica se lo script di risorsa deve essere registrato.  
  
 `pMapEntries`  
 Puntatore alla mappa di sostituzione l'archiviazione dei valori associati a parametri sostituibili dello script. ATL utilizza automaticamente il modulo % %. Per utilizzare altri parametri sostituibili, vedere [CAtlModule::AddCommonRGSReplacements](#addcommonrgsreplacements). In caso contrario, utilizzare il **NULL** il valore predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Simile a [CAtlModule:: UpdateRegistryFromResourceD](#updateregistryfromresourced) eccetto `CAtlModule::UpdateRegistryFromResourceS` crea un collegamento statico per il componente del Registro di sistema ATL (Registrar).  
  
## <a name="see-also"></a>Vedere anche  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)   
 [Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md)  

