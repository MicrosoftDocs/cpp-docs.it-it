---
title: Classe CComClassFactorySingleton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CComClassFactorySingleton
- ATL.CComClassFactorySingleton<T>
- ATL::CComClassFactorySingleton
- ATL::CComClassFactorySingleton<T>
- CComClassFactorySingleton
dev_langs:
- C++
helpviewer_keywords:
- CComClassFactorySingleton class
ms.assetid: debb983c-382b-487b-8d42-7ea26dc158b8
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 7ff6f3a9d00c0f579077d9502aefad5cbea35f17
ms.lasthandoff: 02/24/2017

---
# <a name="ccomclassfactorysingleton-class"></a>Classe CComClassFactorySingleton
Questa classe deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e utilizza [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class CComClassFactorySingleton : public CComClassFactory
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe.  
  
 `CComClassFactorySingleton`deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e utilizza [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto. Ogni chiamata al `CreateInstance` metodo query semplicemente questo oggetto per ottenere un puntatore a interfaccia.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComClassFactorySingleton::CreateInstance](#createinstance)|Query `m_spObj` per un puntatore a interfaccia.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComClassFactorySingleton::m_spObj](#m_spobj)|Il [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) oggetto costruito da `CComClassFactorySingleton`.|  
  
## <a name="remarks"></a>Note  
 Gli oggetti ATL mediante la derivazione da acquisiscono una class factory [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](http://msdn.microsoft.com/library/51a6b925-07c0-4d3a-9174-0b8c808975e4), che dichiara `CComClassFactory` come la class factory predefinita. Utilizzare `CComClassFactorySingleton`, specificare il [DECLARE_CLASSFACTORY_SINGLETON](http://msdn.microsoft.com/library/0e4a3964-c03d-463e-884c-fe3b416db478) macro nella definizione di classe dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM&#10;](../../atl/codesnippet/cpp/ccomclassfactorysingleton-class_1.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IClassFactory`  
  
 [CComClassFactory](../../atl/reference/ccomclassfactory-class.md)  
  
 `CComClassFactorySingleton`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-namecreateinstancea--ccomclassfactorysingletoncreateinstance"></a><a name="createinstance"></a>CComClassFactorySingleton::CreateInstance  
 Chiamate `QueryInterface` tramite [m_spObj](#m_spobj) per recuperare un puntatore a interfaccia.  
  
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
  
##  <a name="a-namemspobja--ccomclassfactorysingletonmspobj"></a><a name="m_spobj"></a>CComClassFactorySingleton::m_spObj  
 Il [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) oggetto costruito da `CComClassFactorySingleton`.  
  
```
CComPtr<IUnknown> m_spObj;
```  
  
### <a name="remarks"></a>Note  
 Ogni chiamata al [CreateInstance](#createinstance) metodo query semplicemente questo oggetto per ottenere un puntatore a interfaccia.  
  
 Si noti che il form corrente del `m_spObj` presenta una modifica di rilievo rispetto al modo in cui `CComClassFactorySingleton` funzionava nelle versioni precedenti di ATL. Nelle versioni precedenti di `CComClassFactorySingleton` oggetto è stato creato nello stesso momento come la class factory, durante l'inizializzazione del server. In Visual C++ .NET 2003, l'oggetto viene creato in modo differito, alla prima richiesta. Questa modifica può causare errori nei programmi che si basano su prima inizializzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364)   
 [Classe CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)   
 [Classe CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md)   
 [CComObjectRootEx (classe)](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

