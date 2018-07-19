---
title: Classe CComClassFactory2 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComClassFactory2
- ATLCOM/ATL::CComClassFactory2
- ATLCOM/ATL::CComClassFactory2::CreateInstance
- ATLCOM/ATL::CComClassFactory2::CreateInstanceLic
- ATLCOM/ATL::CComClassFactory2::GetLicInfo
- ATLCOM/ATL::CComClassFactory2::LockServer
- ATLCOM/ATL::CComClassFactory2::RequestLicKey
dev_langs:
- C++
helpviewer_keywords:
- CComClassFactory2 class
ms.assetid: 19b66fd6-b9ed-47a0-822c-8132184f5a3e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 42ee8ab5fe6e410cf812c7c147f4673803b81903
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37880190"
---
# <a name="ccomclassfactory2-class"></a>Classe CComClassFactory2
Questa classe implementa il [IClassFactory2](http://msdn.microsoft.com/library/windows/desktop/ms692720) interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class license>  
class CComClassFactory2 : public IClassFactory2,
    public CComObjectRootEx<CComGlobalsThreadModel>,
    public license
```  
  
#### <a name="parameters"></a>Parametri  
 *licenza*  
 Una classe che implementa le funzioni statiche seguenti:  
  
- **VerifyLicenseKey BOOL statico (BSTR** `bstr` **);**  
  
- **GetLicenseKey BOOL statico (valore DWORD** `dwReserved` **, BSTR\***  `pBstr` **);**  
  
- **(statico) IsLicenseValid BOOL;**  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComClassFactory2::CreateInstance](#createinstance)|Crea un oggetto di CLSID specificato.|  
|[CComClassFactory2::CreateInstanceLic](#createinstancelic)|Dato un codice di licenza, crea un oggetto di CLSID specificato.|  
|[CComClassFactory2::GetLicInfo](#getlicinfo)|Recupera le informazioni che descrivono le funzionalità di gestione delle licenze della class factory.|  
|[CComClassFactory2::LockServer](#lockserver)|Blocca la class factory nella memoria.|  
|[CComClassFactory2::RequestLicKey](#requestlickey)|Crea e restituisce un codice Product key.|  
  
## <a name="remarks"></a>Note  
 `CComClassFactory2` implementa il [IClassFactory2](http://msdn.microsoft.com/library/windows/desktop/ms692720) interfaccia, che è un'estensione del [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364). `IClassFactory2` creazione di oggetti di controlli tramite una licenza. Una classe factory l'esecuzione di un computer con licenza può fornire una chiave di licenza in fase di esecuzione. Questo codice di licenza consente a un'applicazione creare gli oggetti quando una licenza completa macchina non esiste.  
  
 Gli oggetti ATL acquisire normalmente una class factory derivando da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Per utilizzare `CComClassFactory2`, specificare il [macro DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) macro nella definizione di classe dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/ccomclassfactory2-class_1.h)]  
  
 `CMyLicense`, il parametro di modello per `CComClassFactory2`, deve implementare le funzioni statiche `VerifyLicenseKey`, `GetLicenseKey`, e `IsLicenseValid`. Di seguito è riportato un esempio di una classe semplice di licenza:  
  
 [!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/cpp/ccomclassfactory2-class_2.h)]  
  
 `CComClassFactory2` deriva da entrambe `CComClassFactory2Base` e *licenza*. `CComClassFactory2Base`, a sua volta deriva da `IClassFactory2` e `CComObjectRootEx< CComGlobalsThreadModel >`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 `license`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IClassFactory2`  
  
 `CComClassFactory2`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="createinstance"></a>  CComClassFactory2::CreateInstance  
 Crea un oggetto di CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.  
  
```
STDMETHOD(CreateInstance)(LPUNKNOWN pUnkOuter, REFIID riid, void** ppvObj);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkOuter*  
 [in] Se l'oggetto è stata creata come parte di un'aggregazione, quindi *pUnkOuter* deve essere unknown esterno. In caso contrario, *pUnkOuter* deve essere NULL.  
  
 *riid*  
 [in] IID dell'interfaccia richiesta. Se *pUnkOuter* è diverso da NULL, *riid* deve essere `IID_IUnknown`.  
  
 *ppvObj*  
 [out] Un puntatore al puntatore a interfaccia identificato dal *riid*. Se l'oggetto non supporta questa interfaccia, *ppvObj* è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Richiede che la macchina per essere concesso in licenza completa. Se una licenza completa macchina non esiste, chiamare [CreateInstanceLic](#createinstancelic).  
  
##  <a name="createinstancelic"></a>  CComClassFactory2::CreateInstanceLic  
 Simile a [CreateInstance](#createinstance), ad eccezione del fatto che `CreateInstanceLic` richiede una chiave di licenza.  
  
```
STDMETHOD(CreateInstanceLic)(
    IUnknown* pUnkOuter,
    IUnknown* /* pUnkReserved
 */,
    REFIID riid,
    BSTR bstrKey,
    void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkOuter*  
 [in] Se l'oggetto è stata creata come parte di un'aggregazione, quindi *pUnkOuter* deve essere unknown esterno. In caso contrario, *pUnkOuter* deve essere NULL.  
  
 *pUnkReserved*  
 [in] Non utilizzato. Deve essere NULL.  
  
 *riid*  
 [in] IID dell'interfaccia richiesta. Se *pUnkOuter* è diverso da NULL, *riid* deve essere `IID_IUnknown`.  
  
 *bstrKey*  
 [in] La chiave di licenza runtime ottenuto in precedenza da una chiamata a `RequestLicKey`. Questa chiave è necessaria per creare l'oggetto.  
  
 *ppvObject*  
 [out] Un puntatore al puntatore a interfaccia specificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 È possibile ottenere una chiave di licenza tramite [RequestLicKey](#requestlickey). Per creare un oggetto in un computer senza licenza, è necessario chiamare `CreateInstanceLic`.  
  
##  <a name="getlicinfo"></a>  CComClassFactory2::GetLicInfo  
 Riempie una [LICINFO](http://msdn.microsoft.com/library/windows/desktop/ms690590) struttura con le informazioni che descrivono la class factory le funzionalità di licenza.  
  
```
STDMETHOD(GetLicInfo)(LICINFO* pLicInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *pLicInfo*  
 [out] Puntatore a un `LICINFO` struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Il `fRuntimeKeyAvail` membro di questa struttura indica se, dato un codice Product key, la class factory consente di oggetti da creare in un computer senza licenza. Il *fLicVerified* membro indica l'esistenza di una licenza di computer completo.  
  
##  <a name="lockserver"></a>  CComClassFactory2::LockServer  
 Incrementa e decrementa il modulo conteggio dei blocchi chiamando `_Module::Lock` e `_Module::Unlock`, rispettivamente.  
  
```
STDMETHOD(LockServer)(BOOL fLock);
```  
  
### <a name="parameters"></a>Parametri  
 *branco*  
 [in] Se TRUE, viene incrementato il conteggio dei blocchi; in caso contrario, il conteggio dei blocchi viene decrementato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `_Module` fa riferimento all'istanza di global [CComModule](../../atl/reference/ccommodule-class.md) o una classe derivata da esso.  
  
 La chiamata `LockServer` consente a un client di contenere una class factory in modo che più oggetti possono essere creati rapidamente.  
  
##  <a name="requestlickey"></a>  CComClassFactory2::RequestLicKey  
 Crea e restituisce un codice di licenza, a condizione che il `fRuntimeKeyAvail` membro della [LICINFO](http://msdn.microsoft.com/library/windows/desktop/ms690590) struttura è TRUE.  
  
```
STDMETHOD(RequestLicKey)(DWORD dwReserved, BSTR* pbstrKey);
```  
  
### <a name="parameters"></a>Parametri  
 *dwReserved*  
 [in] Non utilizzato. Deve essere zero.  
  
 *pbstrKey*  
 [out] Puntatore alla chiave di licenza.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 È necessaria per chiamare una chiave di licenza [CreateInstanceLic](#createinstancelic) per creare un oggetto in un computer senza licenza. Se `fRuntimeKeyAvail` è FALSE, quindi gli oggetti possono essere creati solo in un computer con licenza completa.  
  
 Chiamare [GetLicInfo](#getlicinfo) per recuperare il valore di `fRuntimeKeyAvail`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md)   
 [Classe CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md)   
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
