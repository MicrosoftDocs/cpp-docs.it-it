---
title: Classe CComClassFactoryAutoThread | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComClassFactoryAutoThread
- ATLCOM/ATL::CComClassFactoryAutoThread
- ATLCOM/ATL::CComClassFactoryAutoThread::CreateInstance
- ATLCOM/ATL::CComClassFactoryAutoThread::LockServer
dev_langs:
- C++
helpviewer_keywords:
- CComClassFactoryAutoThread class
ms.assetid: 22008042-533f-4dd9-bf7e-191ee571f9a1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f3a38f3320a507b8bd4ce3095ed2c7a02b7bf573
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37883060"
---
# <a name="ccomclassfactoryautothread-class"></a>Classe CComClassFactoryAutoThread
Questa classe implementa il [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interfaccia e consente di creare in apartment più oggetti.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComClassFactoryAutoThread 
   : public IClassFactory, 
     public CComObjectRootEx<CComGlobalsThreadModel>
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComClassFactoryAutoThread::CreateInstance](#createinstance)|Crea un oggetto di CLSID specificato.|  
|[CComClassFactoryAutoThread::LockServer](#lockserver)|Blocca la class factory nella memoria.|  
  
## <a name="remarks"></a>Note  
 `CComClassFactoryAutoThread` è simile a [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), ma consente di creare in apartment più oggetti. Per sfruttare i vantaggi di questo supporto, il modulo EXE da derivare [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  
  
 Gli oggetti ATL acquisire normalmente una class factory derivando da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Per utilizzare `CComClassFactoryAutoThread`, specificare il [: DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) macro nella definizione di classe dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/ccomclassfactoryautothread-class_1.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IClassFactory`  
  
 `CComClassFactoryAutoThread`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="createinstance"></a>  CComClassFactoryAutoThread::CreateInstance  
 Crea un oggetto di CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.  
  
```
STDMETHODIMP CreateInstance(
    LPUNKNOWN pUnkOuter,
    REFIID riid,
    void** ppvObj);
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
 Se il modulo deriva da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), `CreateInstance` Seleziona prima un thread per creare l'oggetto nell'apartment associato.  
  
##  <a name="lockserver"></a>  CComClassFactoryAutoThread::LockServer  
 Incrementa e decrementa il modulo conteggio dei blocchi chiamando `_Module::Lock` e `_Module::Unlock`, rispettivamente.  
  
```
STDMETHODIMP LockServer(BOOL fLock);
```  
  
### <a name="parameters"></a>Parametri  
 *branco*  
 [in] Se TRUE, viene incrementato il conteggio dei blocchi; in caso contrario, il conteggio dei blocchi viene decrementato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Quando si usa `CComClassFactoryAutoThread`, `_Module` si riferisce solitamente all'istanza di global [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  
  
 La chiamata `LockServer` consente a un client di contenere una class factory in modo che più oggetti possono essere creati rapidamente.  
  
## <a name="see-also"></a>Vedere anche  
 [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364)   
 [Classe CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)   
 [Classe CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md)   
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
