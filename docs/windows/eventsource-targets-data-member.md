---
title: "Membro dati EventSource::targets_ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::EventSource::targets_"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "targets_ (membro dati)"
ms.assetid: 5d5cee05-3315-4514-bce2-19173c923c7d
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Membro dati EventSource::targets_
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Matrice di uno o più gestori di eventi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
ComPtr<Details::EventTargetArray> targets_;  
```  
  
## <a name="remarks"></a>Note  
 Quando si verifica l'evento rappresentato dall'oggetto EventSource corrente, vengono chiamati i gestori di eventi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [EventSource (classe)](../windows/eventsource-class.md)