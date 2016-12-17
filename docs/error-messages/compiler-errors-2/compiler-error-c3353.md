---
title: "Compiler Error C3353 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3353"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3353"
ms.assetid: 5699c04b-d504-46ce-bf71-c200318fed71
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3353
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'delegate': un delegato può essere creato solo da una funzione globale o da una funzione membro di un tipo gestito o WinRT  
  
 I delegati, dichiarati con la parola chiave [\_\_delegate](../../misc/delegate.md) o [delegato](../../windows/delegate-cpp-component-extensions.md), possono essere dichiarati solo in ambito globale.  
  
 L'esempio seguente genera l'errore C3353:  
  
```  
// C3353.cpp  
// compile with: /clr  
delegate int f;   // C3353  
```