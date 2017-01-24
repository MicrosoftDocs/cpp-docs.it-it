---
title: "Metodo RuntimeClass::GetRuntimeClassName | Microsoft Docs"
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
  - "implements/Microsoft::WRL::RuntimeClass::GetRuntimeClassName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetRuntimeClassName (metodo)"
ms.assetid: f6388163-fe65-4948-a4bc-ae6826f480e7
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo RuntimeClass::GetRuntimeClassName
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il nome di classe di runtime dell'oggetto corrente di RuntimeClass.  
  
## Sintassi  
  
```  
STDMETHOD(  
   GetRuntimeClassName  
)(_Out_ HSTRING* runtimeName);  
```  
  
## Parametri  
 `runtimeName`  
 Quando l'operazione viene completata, il nome di classe di runtime.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Note  
 Viene generato un errore di asserzione se \_\_WRL\_FORCE\_INSPECTABLE\_CLASS\_MACRO o \_\_WRL\_STRICT\_\_ non è definito.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)