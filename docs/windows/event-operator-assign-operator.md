---
title: "Operatore Event::operator= | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Event::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= (operatore)"
ms.assetid: d8fe9820-8856-4899-9553-56226bdc4945
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore Event::operator=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Assegna un Event specifico all'istanza Eventd corrente.  
  
## Sintassi  
  
```  
WRL_NOTHROW Event& operator=(  
   _Inout_ Event&& h  
);  
```  
  
#### Parametri  
 `h`  
 Un riferimento rvalue\- a un'istanza di evento.  
  
## Valore restituito  
 Un puntatore a un'istanza di eventi corrente.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe di eventi \(Libreria modelli C\+\+ per Windows Runtime\)](../windows/event-class-windows-runtime-cpp-template-library.md)