---
title: Classe IPropertyNotifySinkCP | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 66fd7b267a70b962bb5c28bb5835bd96d44a92f0
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37879189"
---
# <a name="ipropertynotifysinkcp-class"></a>Classe IPropertyNotifySinkCP
Questa classe espone [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfaccia come interfaccia in uscita su un oggetto collegabile.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T, class CDV = CComDynamicUnkArray>  
class IPropertyNotifySinkCP 
   : public IConnectionPointImpl<T, &IID_IPropertyNotifySink, CDV>
```    
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `IPropertyNotifySinkCP`.  
  
 *CDV*  
 Una classe che gestisce le connessioni tra un punto di connessione e il sink. Il valore predefinito è [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che consente un numero illimitato di connessioni. È anche possibile usare [CComUnkArray](../../atl/reference/ccomunkarray-class.md), che consente di specificare un numero fisso di connessioni.  
  
## <a name="remarks"></a>Note  
 `IPropertyNotifySinkCP` tutti i metodi tramite la relativa classe base, eredita [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).  
  
 Il [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfaccia consente a un oggetto sink ricevere notifiche sulle modifiche delle proprietà. Classe `IPropertyNotifySinkCP` espone questa interfaccia come un'interfaccia in uscita su un oggetto collegabile. Il client deve implementare il `IPropertyNotifySink` metodi nel sink.  
  
 Derivare la classe da `IPropertyNotifySinkCP` quando si desidera creare un punto di connessione che rappresenta il `IPropertyNotifySink` interfaccia.  
  
 Per altre informazioni sull'uso di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md)   
 [Classe IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
