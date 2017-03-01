---
title: Classe IPropertyPage2Impl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IPropertyPage2Impl
dev_langs:
- C++
helpviewer_keywords:
- property pages
- IPropertyPage2 ATL implementation
- IPropertyPage2Impl class
ms.assetid: e89fbe90-203a-47f0-a5de-23616697e1ce
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 43680d12febbd94137009f66242198129d4b3630
ms.lasthandoff: 02/24/2017

---
# <a name="ipropertypage2impl-class"></a>Classe IPropertyPage2Impl
Questa classe implementa **IUnknown** ed eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md).  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class IPropertyPage2Impl : public IPropertyPageImpl<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IPropertyPage2Impl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPage2Impl::EditProperty](#editproperty)|Specifica quale controllo proprietà riceverà lo stato attivo quando viene attivata la pagina delle proprietà. L'implementazione ATL restituisce **E_NOTIMPL**.|  
  
## <a name="remarks"></a>Note  
 Il [IPropertyPage2](http://msdn.microsoft.com/library/windows/desktop/ms683996) interfaccia estende [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) aggiungendo il `EditProperty` metodo. Questo metodo consente al client di selezionare una proprietà specifica in un oggetto pagina delle proprietà.  
  
 Classe `IPropertyPage2Impl` restituisce semplicemente **E_NOTIMPL** per **IPropertyPage2::EditProperty**. Tuttavia, eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md) e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 Quando si crea una pagina delle proprietà, la classe in genere è derivata da `IPropertyPageImpl`. Per fornire il supporto aggiuntivo di **IPropertyPage2**, modificare la definizione di classe ed eseguire l'override di `EditProperty` metodo.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPropertyPage`  
  
 [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)  
  
 `IPropertyPage2Impl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="a-nameeditpropertya--ipropertypage2impleditproperty"></a><a name="editproperty"></a>IPropertyPage2Impl::EditProperty  
 Specifica quale controllo proprietà riceverà lo stato attivo quando viene attivata la pagina delle proprietà.  
  
```
HRESULT EditProperty(DISPID dispID);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IPropertyPage2::EditProperty](http://msdn.microsoft.com/library/windows/desktop/ms690353) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)   
 [Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

