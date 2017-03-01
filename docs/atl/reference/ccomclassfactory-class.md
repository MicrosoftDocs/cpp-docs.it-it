---
title: Classe CComClassFactory | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CComClassFactory
- CComClassFactory
- ATL::CComClassFactory
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: c7c488732d7b32248acaaa5c5c9c6a29404c3872
ms.lasthandoff: 02/24/2017

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
 `CComClassFactory`implementa il [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interfaccia, che contiene metodi per la creazione di un oggetto di un particolare CLSID, come il blocco della class factory in memoria per consentire nuovi oggetti possono essere creati più rapidamente. **IClassFactory** deve essere implementato per ogni classe che la registrazione nel Registro di sistema e a cui assegnare un CLSID.  
  
 Gli oggetti ATL mediante la derivazione da acquisiscono una class factory [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](http://msdn.microsoft.com/library/51a6b925-07c0-4d3a-9174-0b8c808975e4), che dichiara `CComClassFactory` come la class factory predefinita. Per eseguire l'override di questa impostazione predefinita, specificare uno del `DECLARE_CLASSFACTORY` *XXX* macro nella definizione della classe. Ad esempio, il [DECLARE_CLASSFACTORY_EX](http://msdn.microsoft.com/library/4181ef00-0f30-4e19-b0ee-e7648062e926) macro utilizza la classe specificata per la class factory:  
  
 [!code-cpp[NVC_ATL_COM N.&8;](../../atl/codesnippet/cpp/ccomclassfactory-class_1.h)]  
  
 La definizione della classe precedente specifica che **CMyClassFactory** verrà utilizzato come class factory predefinita dell'oggetto. **CMyClassFactory** deve derivare da `CComClassFactory` ed eseguire l'override `CreateInstance`.  
  
 ATL fornisce tre altre macro che dichiarano una class factory:  
  
- [Macro DECLARE_CLASSFACTORY2](http://msdn.microsoft.com/library/38a6c969-7297-4bb1-9ba6-1fe2d355b285) utilizza [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), che controlla la creazione tramite una licenza.  
  
- [: DECLARE_CLASSFACTORY_AUTO_THREAD](http://msdn.microsoft.com/library/19d7105e-03e8-4412-9f5e-5384c8a5e18f) utilizza [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), che consente di creare oggetti in più apartment.  
  
- [DECLARE_CLASSFACTORY_SINGLETON](http://msdn.microsoft.com/library/0e4a3964-c03d-463e-884c-fe3b416db478) utilizza [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), che costruisce una singola [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-namecreateinstancea--ccomclassfactorycreateinstance"></a><a name="createinstance"></a>CComClassFactory::CreateInstance  
 Crea un oggetto del CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.  
  
```
STDMETHOD(CreateInstance)(LPUNKNOWN pUnkOuter, REFIID riid, void** ppvObj);
```  
  
### <a name="parameters"></a>Parametri  
 `pUnkOuter`  
 [in] Se l'oggetto è stata creata come parte di un'aggregazione, quindi `pUnkOuter` deve essere unknown esterno. In caso contrario, `pUnkOuter` deve essere **NULL**.  
  
 `riid`  
 [in] L'IID dell'interfaccia richiesta. Se `pUnkOuter` è non **NULL**, `riid` deve essere **IID_IUnknown**.  
  
 `ppvObj`  
 [out] Un puntatore al puntatore a interfaccia identificato da `riid`. Se l'oggetto non supporta questa interfaccia, `ppvObj` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="a-namelockservera--ccomclassfactorylockserver"></a><a name="lockserver"></a>CComClassFactory::LockServer  
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
  
 La chiamata `LockServer` consente a un client trattenere una class factory, in modo che sia possono creare rapidamente più oggetti.  
  
## <a name="see-also"></a>Vedere anche  
 [CComObjectRootEx (classe)](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

