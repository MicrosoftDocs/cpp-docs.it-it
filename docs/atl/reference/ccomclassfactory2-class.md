---
title: Classe CComClassFactory2 | Documenti Microsoft
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
ms.openlocfilehash: da2b47290d3d0be525ca65b16733c9f42835d24e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
 *Licenza*  
 Una classe che implementa le seguenti funzioni statiche:  
  
- **VerifyLicenseKey BOOL statico (BSTR** `bstr` **);**  
  
- **GetLicenseKey BOOL statico (DWORD** `dwReserved` **, BSTR\***  `pBstr` **);**  
  
- **(statico) BOOL IsLicenseValid;**  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComClassFactory2::CreateInstance](#createinstance)|Crea un oggetto del CLSID specificato.|  
|[CComClassFactory2::CreateInstanceLic](#createinstancelic)|Specificato un codice di licenza, crea un oggetto del CLSID specificato.|  
|[CComClassFactory2::GetLicInfo](#getlicinfo)|Recupera le informazioni che descrivono le funzionalità di gestione delle licenze della class factory.|  
|[CComClassFactory2::LockServer](#lockserver)|Blocca la class factory in memoria.|  
|[CComClassFactory2::RequestLicKey](#requestlickey)|Crea e restituisce un codice di licenza.|  
  
## <a name="remarks"></a>Note  
 `CComClassFactory2` implementa il [IClassFactory2](http://msdn.microsoft.com/library/windows/desktop/ms692720) interfaccia, che è un'estensione di [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364). **IClassFactory2** creazione tramite una licenza di oggetti ai controlli. Una classe factory l'esecuzione di un computer con licenza, è possibile fornire un codice di licenza in fase di esecuzione. Questo codice di licenza consente a un'applicazione creare istanze degli oggetti quando non esiste una licenza di computer completo.  
  
 Gli oggetti ATL mediante derivazione da acquisire una class factory [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Per utilizzare `CComClassFactory2`, specificare il [macro DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) macro nella definizione di classe dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/ccomclassfactory2-class_1.h)]  
  
 **CMyLicense**, il parametro di modello `CComClassFactory2`, deve implementare le funzioni statiche `VerifyLicenseKey`, `GetLicenseKey`, e `IsLicenseValid`. Di seguito è riportato un esempio di una classe semplice di licenza:  
  
 [!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/cpp/ccomclassfactory2-class_2.h)]  
  
 `CComClassFactory2` deriva da entrambi **CComClassFactory2Base** e *licenza*. **CComClassFactory2Base**, a sua volta deriva da **IClassFactory2** e **CComObjectRootEx\< CComGlobalsThreadModel >**.  
  
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
 `pUnkOuter`  
 [in] Se l'oggetto è stata creata come parte di un'aggregazione, quindi `pUnkOuter` deve essere unknown esterno. In caso contrario, `pUnkOuter` deve essere **NULL**.  
  
 `riid`  
 [in] IID dell'interfaccia richiesta. Se `pUnkOuter` è non **NULL**, `riid` deve essere **IID_IUnknown**.  
  
 `ppvObj`  
 [out] Un puntatore al puntatore a interfaccia identificato dal `riid`. Se l'oggetto non supporta questa interfaccia, `ppvObj` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Richiede il computer di una licenza completa. Se non esiste una licenza di computer completo, chiamare [CreateInstanceLic](#createinstancelic).  
  
##  <a name="createinstancelic"></a>  CComClassFactory2::CreateInstanceLic  
 Simile a [CreateInstance](#createinstance), ad eccezione del fatto che `CreateInstanceLic` richiede un codice di licenza.  
  
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
 `pUnkOuter`  
 [in] Se l'oggetto è stata creata come parte di un'aggregazione, quindi `pUnkOuter` deve essere unknown esterno. In caso contrario, `pUnkOuter` deve essere **NULL**.  
  
 *pUnkReserved*  
 [in] Non usato. Deve essere **NULL**.  
  
 `riid`  
 [in] IID dell'interfaccia richiesta. Se `pUnkOuter` è non **NULL**, `riid` deve essere **IID_IUnknown**.  
  
 `bstrKey`  
 [in] Il codice di licenza in fase di esecuzione può essere ottenuto in precedenza da una chiamata a `RequestLicKey`. Questa chiave è necessaria per creare l'oggetto.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia specificato da `riid`. Se l'oggetto non supporta questa interfaccia, `ppvObject` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 È possibile ottenere una chiave di licenza tramite [RequestLicKey](#requestlickey). Per creare un oggetto in un computer senza licenza, è necessario chiamare `CreateInstanceLic`.  
  
##  <a name="getlicinfo"></a>  CComClassFactory2::GetLicInfo  
 Riempie una [LICINFO](http://msdn.microsoft.com/library/windows/desktop/ms690590) struttura con informazioni che descrivono la class factory del privilegi relativi alle licenze.  
  
```
STDMETHOD(GetLicInfo)(LICINFO* pLicInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *pLicInfo*  
 [out] Puntatore a un **LICINFO** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Il `fRuntimeKeyAvail` membro di questa struttura indica se, dato un codice di licenza, la class factory consente di oggetti da creare in un computer senza licenza. Il *fLicVerified* membro indica l'esistenza di una licenza di computer completo.  
  
##  <a name="lockserver"></a>  CComClassFactory2::LockServer  
 Incrementa e decrementa il modulo conteggio dei blocchi chiamando **_Module::Lock** e **_Module::Unlock**, rispettivamente.  
  
```
STDMETHOD(LockServer)(BOOL fLock);
```  
  
### <a name="parameters"></a>Parametri  
 `fLock`  
 [in] Se **TRUE**, il conteggio dei blocchi viene incrementato; in caso contrario, il conteggio dei blocchi viene decrementato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 **Module** fa riferimento all'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o una classe derivata da esso.  
  
 La chiamata `LockServer` consente a un client conservi una class factory, in modo che sia possono creare rapidamente più oggetti.  
  
##  <a name="requestlickey"></a>  CComClassFactory2::RequestLicKey  
 Crea e restituisce un codice di licenza, a condizione che il `fRuntimeKeyAvail` appartenente il [LICINFO](http://msdn.microsoft.com/library/windows/desktop/ms690590) struttura è **TRUE**.  
  
```
STDMETHOD(RequestLicKey)(DWORD dwReserved, BSTR* pbstrKey);
```  
  
### <a name="parameters"></a>Parametri  
 `dwReserved`  
 [in] Non usato. Deve essere zero.  
  
 `pbstrKey`  
 [out] Puntatore alla chiave di licenza.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 È necessaria per chiamare una chiave di licenza [CreateInstanceLic](#createinstancelic) per creare un oggetto in un computer senza licenza. Se `fRuntimeKeyAvail` è **FALSE**, quindi gli oggetti possono essere creati solo in un computer con licenza completa.  
  
 Chiamare [GetLicInfo](#getlicinfo) per recuperare il valore di `fRuntimeKeyAvail`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md)   
 [Classe CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md)   
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
