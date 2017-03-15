---
title: "Metodo RuntimeClass::AddRef | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::RuntimeClass::AddRef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddRef (metodo)"
ms.assetid: 9c705749-680b-4308-bbec-5b601e8e7dbd
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo RuntimeClass::AddRef
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Incrementa il conteggio dei riferimenti per l'oggetto corrente di RuntimeClass.  
  
## Sintassi  
  
```  
STDMETHOD_(  
   ULONG,  
   AddRef  
)();  
```  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)