---
title: 'Costruttore eventtargetarray:: Eventtargetarray | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: event/Microsoft::WRL::Details::EventTargetArray::EventTargetArray
dev_langs: C++
helpviewer_keywords: EventTargetArray, constructor
ms.assetid: 6c6d3737-3cd3-4515-a8f6-d27901bb8ed2
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 6dbe316310e04172c659460c08137edd2a401df6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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