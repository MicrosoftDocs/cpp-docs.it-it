---
title: "Metodo RuntimeClass::GetTrustLevel | Microsoft Docs"
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
  - "implements/Microsoft::WRL::RuntimeClass::GetTrustLevel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetTrustLevel (metodo)"
ms.assetid: bd90407e-6dd7-41c3-9ea0-c402c276014a
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo RuntimeClass::GetTrustLevel
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il livello di attendibilità dell'oggetto corrente di RuntimeClass.  
  
## Sintassi  
  
```  
STDMETHOD(  
   GetTrustLevel  
)(_Out_ TrustLevel* trustLvl);  
```  
  
## Parametri  
 `trustLvl`  
 Quando l'operazione viene completata, il livello di attendibilità dell'oggetto corrente di RuntimeClass.  
  
## Valore restituito  
 Sempre S\_OK.  
  
## Note  
 Viene generato un errore di asserzione se \_\_WRL\_FORCE\_INSPECTABLE\_CLASS\_MACRO o \_\_WRL\_STRICT\_\_ non è definito.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)