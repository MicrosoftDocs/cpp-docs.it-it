---
title: Raccolta di ATL e le classi di enumeratore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- enumerators, ATL classes
- collection classes, ATL
ms.assetid: 6818db73-7094-48d8-a0ca-18147beec362
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a47525bb21b896b0fef8393cab66142ed40311ea
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="atl-collection-and-enumerator-classes"></a>Raccolta di ATL e le classi di enumeratore
ATL fornisce le classi seguenti che consentono di implementare raccolte ed enumeratori.  
  
|Classe|Descrizione|  
|-----------|-----------------|  
|[ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)|Implementazione dell'interfaccia di raccolta|  
|[IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)|Implementazione dell'interfaccia di enumeratore (si presuppone che i dati archiviati in un contenitore compatibile della libreria C++ Standard)|  
|[CComEnumImpl](../atl/reference/ccomenumimpl-class.md)|Implementazione dell'interfaccia di enumeratore (si presuppone che i dati archiviati in una matrice)|  
|[CComEnumOnSTL](../atl/reference/ccomenumonstl-class.md)|Implementazione dell'oggetto enumeratore (utilizza `IEnumOnSTLImpl`)|  
|[CComEnum](../atl/reference/ccomenum-class.md)|Implementazione dell'oggetto enumeratore (utilizza `CComEnumImpl`)|  
|[Copy](../atl/atl-copy-policy-classes.md)|Classe di criteri di copia|  
|[CopyInterface](../atl/atl-copy-policy-classes.md)|Classe di criteri di copia|  
|[CAdapt](../atl/reference/cadapt-class.md)|Classe dell'adattatore (nasconde **operatore &** consentendo `CComPtr`, `CComQIPtr`, e `CComBSTR` da archiviare nei contenitori della libreria Standard C++)|  
  
## <a name="see-also"></a>Vedere anche  
 [Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)

