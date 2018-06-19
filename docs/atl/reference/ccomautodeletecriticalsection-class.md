---
title: Classe CComAutoDeleteCriticalSection | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComAutoDeleteCriticalSection
- atlcore/ATL::CComAutoDeleteCriticalSection
dev_langs:
- C++
helpviewer_keywords:
- CComAutoDeleteCriticalSection class
ms.assetid: 2396dbea-1c60-4841-b50e-c4e18af311a3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c5153520b5a5648f8352465031264c223ffd97c4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32360064"
---
# <a name="ccomautodeletecriticalsection-class"></a>Classe CComAutoDeleteCriticalSection
Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComAutoDeleteCriticalSection : public CComSafeDeleteCriticalSection
```  
  
## <a name="remarks"></a>Note  
 `CComAutoDeleteCriticalSection` deriva dalla classe [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md). Tuttavia, `CComAutoDeleteCriticalSection` esegue l'override di [termine](ccomsafedeletecriticalsection-class.md#term) metodo `private` accesso, che impone la pulitura di memoria interna che si verificano solo quando le istanze di questa classe escono dall'ambito o in modo esplicito vengono eliminate dalla memoria.  

  
 Questa classe viene introdotto alcun metodi aggiuntivi tramite la relativa classe base. Vedere [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) e [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) per ulteriori informazioni sulle classi helper sezione critica.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)  
  
 [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md)  
  
 `CComAutoDeleteCriticalSection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md)   
 [Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
