---
title: Classe IPropertyNotifySinkCP | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IPropertyNotifySinkCP
- atlctl/ATL::IPropertyNotifySinkCP
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], managing
- sinks, notifying of changes
- IPropertyNotifySinkCP class
ms.assetid: 1b41445e-bc88-4fa6-bb62-d68aacec2bd5
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
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: feff2467d6d72e9d0a9186dc269f48eb26cbfee2
ms.lasthandoff: 03/17/2017

---
# <a name="ipropertynotifysinkcp-class"></a>Classe IPropertyNotifySinkCP
Questa classe espone [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfaccia come interfaccia in uscita su un oggetto collegabile.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T, class CDV = CComDynamicUnkArray>  
class IPropertyNotifySinkCP 
   : public IConnectionPointImpl<T, &IID_IPropertyNotifySink, CDV>
```    
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IPropertyNotifySinkCP`.  
  
 `CDV`  
 Una classe che gestisce le connessioni tra un punto di connessione e il sink. Il valore predefinito è [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che consente un numero illimitato di connessioni. È inoltre possibile utilizzare [CComUnkArray](../../atl/reference/ccomunkarray-class.md), che specifica un numero fisso di connessioni.  
  
## <a name="remarks"></a>Note  
 `IPropertyNotifySinkCP`eredita tutti i metodi tramite la relativa classe base, [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).  
  
 Il [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfaccia consente a un oggetto sink ricevere notifiche sulle modifiche delle proprietà. Classe `IPropertyNotifySinkCP` espone questa interfaccia come un'interfaccia in uscita su un oggetto collegabile. Il client deve implementare il `IPropertyNotifySink` metodi nel sink.  
  
 Derivare la classe da `IPropertyNotifySinkCP` quando si desidera creare un punto di connessione che rappresenta il `IPropertyNotifySink` interfaccia.  
  
 Per ulteriori informazioni sull'utilizzo di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md)   
 [Classe IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

