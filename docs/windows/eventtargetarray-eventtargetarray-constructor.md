---
title: 'Costruttore eventtargetarray:: Eventtargetarray | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::EventTargetArray::EventTargetArray
dev_langs:
- C++
helpviewer_keywords:
- EventTargetArray, constructor
ms.assetid: 6c6d3737-3cd3-4515-a8f6-d27901bb8ed2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fbfd12ea513044f1062e60f5c73f5089683f043d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="eventtargetarrayeventtargetarray-constructor"></a>Costruttore EventTargetArray::EventTargetArray
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
EventTargetArray(  
   _Out_ HRESULT* hr,  
   size_t items  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `hr`  
 Dopo le operazioni di questo costruttore, parametro `hr` indica se l'allocazione della matrice ha avuto esito positivo o negativo. Nella tabella seguente sono elencati i valori possibili per `hr`.  
  
 S_OK  
 Operazione completata.  
  
 E_OUTOFMEMORY  
 Impossibile allocare memoria per la matrice.  
  
 S_FALSE  
 Parametro `items` è minore o uguale a zero.  
  
 `items`  
 Il numero di elementi della matrice da allocare.  
  
## <a name="remarks"></a>Note  
 Inizializza una nuova istanza della classe EventTargetArray.  
  
 EventTargetArray viene utilizzato per mantenere una matrice dei gestori eventi in un oggetto di EventSource.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [EventTargetArray (classe)](../windows/eventtargetarray-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)