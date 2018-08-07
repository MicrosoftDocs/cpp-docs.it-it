---
title: 'Metodo eventtargetarray:: AddTail | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::EventTargetArray::AddTail
dev_langs:
- C++
helpviewer_keywords:
- AddTail method
ms.assetid: d0fafab9-049c-40e0-a40c-d126c9ee63e6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b469adedebda2beb64c531c82d10f90cc4114742
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39570174"
---
# <a name="eventtargetarrayaddtail-method"></a>Metodo EventTargetArray::AddTail
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void AddTail(  
   _In_ IUnknown* element  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *Elemento*  
 Puntatore al gestore dell'evento da accodare.  
  
## <a name="remarks"></a>Note  
 Aggiunge il gestore eventi specificato alla fine della matrice interna di gestori eventi.  
  
 **AddTail()** dovrà essere utilizzato internamente da solo il `EventSource` classe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Classe EventTargetArray](../windows/eventtargetarray-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)