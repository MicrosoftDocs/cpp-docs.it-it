---
title: Classe CComClassFactoryAutoThread | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
caps.latest.revision: 21
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
ms.openlocfilehash: fcc5671fc136b061bf3e8109999ac91d302d3d3b
ms.lasthandoff: 02/24/2017

---
# <a name="ccomclassfactoryautothread-class"></a>Classe CComClassFactoryAutoThread
Questa classe implementa il [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364) interfaccia e consente agli oggetti da creare in più apartment.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
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
|[CComClassFactoryAutoThread::CreateInstance](#createinstance)|Crea un oggetto del CLSID specificato.|  
|[CComClassFactoryAutoThread::LockServer](#lockserver)|Blocca la class factory in memoria.|  
  
## <a name="remarks"></a>Note  
 `CComClassFactoryAutoThread`è simile a [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), ma consente agli oggetti da creare in più apartment. Per sfruttare i vantaggi di questo supporto, derivare il modulo EXE da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  
  
 Gli oggetti ATL mediante la derivazione da acquisiscono una class factory [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](http://msdn.microsoft.com/library/51a6b925-07c0-4d3a-9174-0b8c808975e4), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la class factory predefinita. Utilizzare `CComClassFactoryAutoThread`, specificare il [: DECLARE_CLASSFACTORY_AUTO_THREAD](http://msdn.microsoft.com/library/19d7105e-03e8-4412-9f5e-5384c8a5e18f) macro nella definizione di classe dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM&9;](../../atl/codesnippet/cpp/ccomclassfactoryautothread-class_1.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IClassFactory`  
  
 `CComClassFactoryAutoThread`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="createinstance"></a>CComClassFactoryAutoThread::CreateInstance  
 Crea un oggetto del CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.  
  
```
STDMETHODIMP CreateInstance(
    LPUNKNOWN pUnkOuter,
    REFIID riid,
    void** ppvObj);
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
  
### <a name="remarks"></a>Note  
 Se il modulo deriva da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), `CreateInstance` seleziona innanzitutto un thread per creare l'oggetto in un apartment associato.  
  
##  <a name="lockserver"></a>CComClassFactoryAutoThread::LockServer  
 Incrementa e decrementa il modulo conteggio dei blocchi chiamando **_Module::Lock** e **_Module::Unlock**, rispettivamente.  
  
```
STDMETHODIMP LockServer(BOOL fLock);
```  
  
### <a name="parameters"></a>Parametri  
 `fLock`  
 [in] Se **TRUE**, il conteggio dei blocchi viene incrementato; in caso contrario, il conteggio dei blocchi viene decrementato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Quando si utilizza `CComClassFactoryAutoThread`, **Module** in genere fa riferimento all'istanza globale di [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  
  
 La chiamata `LockServer` consente a un client trattenere una class factory, in modo che sia possono creare rapidamente più oggetti.  
  
## <a name="see-also"></a>Vedere anche  
 [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364)   
 [Classe CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)   
 [Classe CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md)   
 [CComObjectRootEx (classe)](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

