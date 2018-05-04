---
title: Classe CComClassFactorySingleton | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComClassFactorySingleton
- ATLCOM/ATL::CComClassFactorySingleton
- ATLCOM/ATL::CComClassFactorySingleton::CreateInstance
- ATLCOM/ATL::CComClassFactorySingleton::m_spObj
dev_langs:
- C++
helpviewer_keywords:
- CComClassFactorySingleton class
ms.assetid: debb983c-382b-487b-8d42-7ea26dc158b8
author: mikeblome
ms.author: mblome
ms.openlocfilehash: 754a3abd02a4a09df3e36aa9aea75c400ef00761
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
  
 `CComClassFactorySingleton` deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e Usa [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto. Ogni chiamata al `CreateInstance` metodo semplicemente la query a questo oggetto per un puntatore a interfaccia.  
  
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
 Gli oggetti ATL mediante derivazione da acquisire una class factory [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara `CComClassFactory` come la class factory predefinita. Per utilizzare `CComClassFactorySingleton`, specificare il [DECLARE_CLASSFACTORY_SINGLETON](aggregation-and-class-factory-macros.md#declare_classfactory_singleton) macro nella definizione di classe dell'oggetto. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/ccomclassfactorysingleton-class_1.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IClassFactory`  
  
 [CComClassFactory](../../atl/reference/ccomclassfactory-class.md)  
  
 `CComClassFactorySingleton`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="createinstance"></a>  CComClassFactorySingleton::CreateInstance  
 Chiamate `QueryInterface` tramite [m_spObj](#m_spobj) per recuperare un puntatore a interfaccia.  
  
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
  
##  <a name="m_spobj"></a>  CComClassFactorySingleton::m_spObj  
 Il [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) oggetto costruito da `CComClassFactorySingleton`.  
  
```
CComPtr<IUnknown> m_spObj;
```  
  
### <a name="remarks"></a>Note  
 Ogni chiamata al [CreateInstance](#createinstance) metodo semplicemente la query a questo oggetto per un puntatore a interfaccia.  
  
 Si noti che il form corrente di `m_spObj` presenta una modifica sostanziale rispetto a quello che `CComClassFactorySingleton` utilizzato nelle versioni precedenti di ATL. Nelle versioni precedenti di `CComClassFactorySingleton` oggetto è stato creato contemporaneamente la class factory, durante l'inizializzazione del server. In Visual C++ .NET 2003, l'oggetto viene creato in modo differito, alla prima richiesta. Questa modifica potrebbe causare errori nei programmi che si basano su prima inizializzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364)   
 [Classe CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)   
 [Classe CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md)   
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
