---
title: "Errore del compilatore C2088 | Microsoft Docs"
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
  - "C2088"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2088"
ms.assetid: b93f7094-185b-423d-8bb9-507cd757dbf5
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2088
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore': non valido per 'chiave\-classe'  
  
 L'operatore non è stato definito per la struttura o l'unione.  L'errore è valido solo per il codice C.  
  
 Nell'esempio seguente viene generato tre volte l'errore C2088:  
  
```  
// C2088.c  
struct S {  
   int m_i;   
} s;  
  
int main() {  
   int i = s * 1;   // C2088  
   struct S s2 = +s;   // C2088  
   s++;   // C2088  
}  
```