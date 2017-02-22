---
title: "Metodo ComPtr::Attach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::ComPtr::Attach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Attach (metodo)"
ms.assetid: 5b911f2d-9830-4dc7-b9e3-527abd55d2c8
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo ComPtr::Attach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Associa questo ComPtr con il tipo di interfaccia specificato dal parametro di tipo corrente del modello.  
  
## Sintassi  
  
```  
void Attach(  
   _In_opt_ InterfaceType* other  
);  
```  
  
#### Parametri  
 `other`  
 Tipo di interfaccia.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)