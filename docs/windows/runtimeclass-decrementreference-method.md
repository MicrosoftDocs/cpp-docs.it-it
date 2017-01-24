---
title: "Metodo RuntimeClass::DecrementReference | Microsoft Docs"
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
  - "implements/Microsoft::WRL::RuntimeClass::DecrementReference"
dev_langs: 
  - "C++"
ms.assetid: f5ecfeaa-2865-455b-9208-94a0685fd2c6
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo RuntimeClass::DecrementReference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Decrementa il conteggio dei riferimenti per l'oggetto corrente di RuntimeClass.  
  
## Sintassi  
  
```  
ULONG DecrementReference();  
```  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)