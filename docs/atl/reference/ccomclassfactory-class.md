---
title: Classe CComClassFactory | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComClassFactory
- ATLCOM/ATL::CComClassFactory
- ATLCOM/ATL::CComClassFactory::CreateInstance
- ATLCOM/ATL::CComClassFactory::LockServer
dev_langs:
- C++
helpviewer_keywords:
- CComClassFactory class
ms.assetid: e56dacf7-d5c4-4c42-aef4-a86d91981a1b
caps.latest.revision: 20
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
translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: a0c1c115bfffa1de9a2a8c91c5268de66c68e7cd
ms.lasthandoff: 03/31/2017

---
# <a name="ccomclassfactory-class"></a>CComClassFactory (classe)
Questa classe implementa il [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComClassFactory 
   : public IClassFactory,  
     public CComObjectRootEx<CComGlobalsThreadModel>
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComClassFactory::CreateInstance](#createinstance)|Crea un oggetto del CLSID specificato.|  
|[CComClassFactory::LockServer](#lockserver)|Blocca la class factory in memoria.|  
  
## <a name="remarks"></a>Note  
 `CComClassFactory`implementa il [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interfaccia, che contiene metodi per la creazione di un oggetto di un particolare CLSID, come il blocco della class factory in memoria per consentire di nuovi oggetti possono essere creati più rapidamente. **IClassFactory** deve essere implementato per ogni classe che si registra nel Registro di sistema e a cui si assegna un CLSID.  
  
 Gli oggetti ATL mediante derivazione da acquisire una class factory [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara `CComClassFactory` come la class factory predefinita. Per eseguire l'override di questa impostazione predefinita, specificare uno del `DECLARE_CLASSFACTORY` *XXX* macro nella definizione della classe. Ad esempio, il [DECLARE_CLASSFACTORY_EX](aggregation-and-class-factory-macros.md#declare_classfactory_ex) (macro) utilizza la classe specificata per la class factory:  
  
 [!code-cpp[NVC_ATL_COM N. 8](../../atl/codesnippet/cpp/ccomclassfactory-class_1.h)]  
  
 Consente di specificare che la precedente definizione di classe **CMyClassFactory** verrà utilizzato come una class factory predefinita dell'oggetto. **CMyClassFactory** deve derivare da `CComClassFactory` ed eseguire l'override `CreateInstance`.  
  
 ATL fornisce tre altre macro che dichiara una class factory:  
  
- [Macro DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) Usa [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), che controlla la creazione tramite una licenza.  
  
- [: DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) Usa [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), che consente di creare oggetti in più apartment.  
  
- [DECLARE_CLASSFACTORY_SINGLETON](aggregation-and-class-factory-macros.md#declare_classfactory_singleton) Usa [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), che costruisce una singola [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="createinstance"></a>CComClassFactory::CreateInstance  
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
  
##  <a name="lockserver"></a>CComClassFactory::LockServer  
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
  
 La chiamata `LockServer` consente di conservare una class factory, in modo che più oggetti è possibile creare rapidamente un client.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

