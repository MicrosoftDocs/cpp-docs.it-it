---
title: "Avviso del compilatore (livello 4) C4201 | Microsoft Docs"
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
  - "C4201"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4201"
ms.assetid: 6156f508-9393-4d77-9e73-1ec3e1c32d0d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4201
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: struct\/union senza nome  
  
 Nelle estensioni Microsoft \(\/Ze\) è possibile specificare una struttura senza un dichiaratore come membro di un'altra struttura o unione.  Queste strutture generano un errore in compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\).  
  
## Esempio  
  
```  
// C4201.cpp  
// compile with: /W4  
struct S  
{  
   float y;  
   struct  
   {  
      int a, b, c;  // C4201  
   };  
} *p_s;  
  
int main()  
{  
}  
```