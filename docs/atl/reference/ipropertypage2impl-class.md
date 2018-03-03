---
title: Classe IPropertyPage2Impl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IPropertyPage2Impl
- ATLCTL/ATL::IPropertyPage2Impl
- ATLCTL/ATL::IPropertyPage2Impl::EditProperty
dev_langs:
- C++
helpviewer_keywords:
- property pages
- IPropertyPage2 ATL implementation
- IPropertyPage2Impl class
ms.assetid: e89fbe90-203a-47f0-a5de-23616697e1ce
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 17773bdd07d4ae25b33bc104d46d607b5069f78d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ipropertypage2impl-class"></a>Classe IPropertyPage2Impl
Questa classe implementa **IUnknown** ed eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class IPropertyPage2Impl : public IPropertyPageImpl<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IPropertyPage2Impl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPage2Impl::EditProperty](#editproperty)|Specifica il controllo proprietà riceve lo stato attivo quando viene attivata la pagina delle proprietà. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
  
## <a name="remarks"></a>Note  
 Il [IPropertyPage2](http://msdn.microsoft.com/library/windows/desktop/ms683996) interfaccia estende [interfaccia IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) aggiungendo il `EditProperty` metodo. Questo metodo consente al client selezionare una proprietà specifica in un oggetto pagina delle proprietà.  
  
 Classe `IPropertyPage2Impl` restituisce semplicemente **E_NOTIMPL** per **IPropertyPage2::EditProperty**. Tuttavia, che eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md) e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 Quando si crea una pagina delle proprietà, la classe viene generalmente derivata dal `IPropertyPageImpl`. Per fornire il supporto aggiuntivo di **IPropertyPage2**, modificare la definizione di classe ed eseguire l'override di `EditProperty` metodo.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPropertyPage`  
  
 [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)  
  
 `IPropertyPage2Impl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="editproperty"></a>IPropertyPage2Impl::EditProperty  
 Specifica il controllo proprietà riceve lo stato attivo quando viene attivata la pagina delle proprietà.  
  
```
HRESULT EditProperty(DISPID dispID);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IPropertyPage2::EditProperty](http://msdn.microsoft.com/library/windows/desktop/ms690353) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)   
 [Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
