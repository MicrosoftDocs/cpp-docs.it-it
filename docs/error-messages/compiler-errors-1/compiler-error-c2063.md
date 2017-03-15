---
title: "Errore del compilatore C2063 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2063"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2063"
ms.assetid: 0a90c18f-4029-416a-9128-e8713b53e6f1
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2063
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': non è una funzione  
  
 L'identificatore viene usato, ma non è dichiarato, come funzione.  
  
 L'esempio seguente genera l'errore C2063:  
  
```  
// C2063.c int main() { int i, j; j = i();    // C2063, i is not a function }  
```  
  
 Possibile soluzione:  
  
```  
// C2063b.c int i() { return 0;} int main() { int j; j = i(); }  
```