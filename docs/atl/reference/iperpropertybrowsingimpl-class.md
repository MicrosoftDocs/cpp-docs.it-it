---
title: Classe IPerPropertyBrowsingImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IPerPropertyBrowsingImpl
- ATLCTL/ATL::IPerPropertyBrowsingImpl
- ATLCTL/ATL::IPerPropertyBrowsingImpl::GetDisplayString
- ATLCTL/ATL::IPerPropertyBrowsingImpl::GetPredefinedStrings
- ATLCTL/ATL::IPerPropertyBrowsingImpl::GetPredefinedValue
- ATLCTL/ATL::IPerPropertyBrowsingImpl::MapPropertyToPage
dev_langs:
- C++
helpviewer_keywords:
- IPerPropertyBrowsingImpl class
- property pages, accessing information
- IPerPropertyBrowsing, ATL implementation
ms.assetid: 0b1a9be3-d242-4767-be69-663a21e4b728
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 8f2c2016a83cad906be22183fcffa20ae3da3042
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="iperpropertybrowsingimpl-class"></a>Classe IPerPropertyBrowsingImpl
Questa classe implementa **IUnknown** e consente a un client accedere alle informazioni nelle pagine delle proprietà di un oggetto.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```

template <class T>
class ATL_NO_VTABLE IPerPropertyBrowsingImpl :
    public IPerPropertyBrowsing
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IPerPropertyBrowsingImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPerPropertyBrowsingImpl::GetDisplayString](#getdisplaystring)|Recupera una stringa che descrive una determinata proprietà.|  
|[IPerPropertyBrowsingImpl::GetPredefinedStrings](#getpredefinedstrings)|Recupera una matrice di stringhe che corrispondono ai valori che può accettare una determinata proprietà.|  
|[IPerPropertyBrowsingImpl::GetPredefinedValue](#getpredefinedvalue)|Recupera un **VARIANT** contenente il valore di una proprietà identificata da un determinato DISPID. Il DISPID è associato il nome di stringa recuperato da `GetPredefinedStrings`. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IPerPropertyBrowsingImpl::MapPropertyToPage](#mappropertytopage)|Recupera il CLSID della pagina delle proprietà associata a una determinata proprietà.|  
  
## <a name="remarks"></a>Note  
 Il [IPerPropertyBrowsing](http://msdn.microsoft.com/library/windows/desktop/ms678432) interfaccia consente a un client accedere alle informazioni nelle pagine delle proprietà di un oggetto. Classe `IPerPropertyBrowsingImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
> [!NOTE]
>  Se si utilizza Microsoft Access come applicazione contenitore, è necessario derivare la classe da `IPerPropertyBrowsingImpl`. In caso contrario, l'accesso non verrà caricato il controllo.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPerPropertyBrowsing`  
  
 `IPerPropertyBrowsingImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="getdisplaystring"></a>IPerPropertyBrowsingImpl::GetDisplayString  
 Recupera una stringa che descrive una determinata proprietà.  
  
```
STDMETHOD(GetDisplayString)(
    DISPID dispID,
    BSTR* pBstr);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPerPropertyBrowsing::GetDisplayString](http://msdn.microsoft.com/library/windows/desktop/ms688734) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getpredefinedstrings"></a>IPerPropertyBrowsingImpl::GetPredefinedStrings  
 Riempie ogni matrice con zero elementi.  
  
```
STDMETHOD(GetPredefinedStrings)(
    DISPID dispID,
    CALPOLESTR* pCaStringsOut,
    CADWORD* pCaCookiesOut);
```  
  
### <a name="return-value"></a>Valore restituito  
 Implementazione di ATL di [GetPredefinedValue](#getpredefinedvalue) restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [GetPredefinedStrings](http://msdn.microsoft.com/library/windows/desktop/ms679724) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getpredefinedvalue"></a>IPerPropertyBrowsingImpl::GetPredefinedValue  
 Recupera un **VARIANT** contenente il valore di una proprietà identificata da un determinato DISPID. Il DISPID è associato il nome di stringa recuperato da `GetPredefinedStrings`.  
  
```
STDMETHOD(GetPredefinedValue)(
    DISPID dispID,
    DWORD dwCookie,
    VARIANT* pVarOut);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Implementazione di ATL di [GetPredefinedStrings](#getpredefinedstrings) non recupera le stringhe corrispondente.  
  
 Vedere [IPerPropertyBrowsing::GetPredefinedValue](http://msdn.microsoft.com/library/windows/desktop/ms690401) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="mappropertytopage"></a>IPerPropertyBrowsingImpl::MapPropertyToPage  
 Recupera il CLSID della pagina delle proprietà associato alla proprietà specificata.  
  
```
STDMETHOD(MapPropertyToPage)(
    DISPID dispID,
    CLSID* pClsid);
```  
  
### <a name="remarks"></a>Note  
 ATL utilizza il mapping di proprietà dell'oggetto per ottenere queste informazioni.  
  
 Vedere [IPerPropertyBrowsing::MapPropertyToPage](http://msdn.microsoft.com/library/windows/desktop/ms694476) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [IPropertyPageImpl (classe)](../../atl/reference/ipropertypageimpl-class.md)   
 [Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

