---
title: "Errore del compilatore C2057 | Microsoft Docs"
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
  - "C2057"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2057"
ms.assetid: 038a99d6-1f5a-42fa-8449-03b4ff11ee0b
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2057
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

prevista espressione costante  
  
 Il contesto richiede un'espressione costante, un'espressione il cui valore è noto in fase di compilazione.  
  
 Il compilatore deve conoscere le dimensioni di un tipo in fase di compilazione per allocare lo spazio per un'istanza di tale tipo.  
  
## Esempio  
 L'esempio seguente genera l'errore C2057 e mostra come risolverlo:  
  
```  
// C2057.cpp  
int i;  
int b[i];   // C2057 - value of i is unknown at compile time  
int main() {  
   const int i = 8;  
   int b[i]; // OK - value of i is fixed and known to compiler  
}  
```  
  
## Esempio  
 C ha regole più restrittive per le espressioni costanti.  L'esempio seguente genera l'errore C2057 e mostra come risolverlo:  
  
```  
// C2057b.c  
#define ArraySize1 10  
int main() {   
   const int ArraySize2 = 10;   
   int h[ArraySize2];   // C2057 - C does not allow variables here  
   int h[ArraySize1];   // OK - uses preprocessor constant  
}  
```