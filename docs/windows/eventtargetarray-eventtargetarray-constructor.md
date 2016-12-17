---
title: "Costruttore EventTargetArray::EventTargetArray | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::Details::EventTargetArray::EventTargetArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EventTargetArray, costruttore"
ms.assetid: 6c6d3737-3cd3-4515-a8f6-d27901bb8ed2
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore EventTargetArray::EventTargetArray
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
EventTargetArray(  
   _Out_ HRESULT* hr,  
   size_t items  
);  
```  
  
#### Parametri  
 `hr`  
 Dopo le operazioni di questo costruttore, il parametro `hr` indica se l'allocazione dell'array ha avuto esito positivo o negativo.  Nella tabella riportata di seguito sono elencati i valori possibili per `hr`.  
  
 S\_OK  
 L'operazione ha avuto esito positivo.  
  
 E\_OUTOFMEMORY  
 La memoria non potrebbe essere allocata per l'array.  
  
 S\_FALSE  
 Il parametro `items` è minore di o uguale a zero.  
  
 `items`  
 Numero degli elementi dell'array da allocare.  
  
## Note  
 Inizializza una nuova istanza della classe EventTargetArray.  
  
 EventTargetArray viene utilizzato per mantenere una matrice dei gestori degli eventi in un oggetto di EventSource.  
  
## Requisiti  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe EventTargetArray](../windows/eventtargetarray-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)