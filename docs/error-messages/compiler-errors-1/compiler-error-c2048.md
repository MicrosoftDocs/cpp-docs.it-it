---
title: "Errore del compilatore C2048 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2048"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2048"
ms.assetid: 44704726-85fc-42f0-afb9-194df8c4ca7c
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2048
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

più di un valore predefinito  
  
 Un'istruzione `switch` contiene più etichette `default`. Eliminare una delle etichette `default` per risolvere l'errore.  
  
 L'esempio seguente genera l'errore C2048:  
  
```  
// C2048.cpp int main() { int a = 1; switch (a) { case 1: a = 0; default: a = 2; default:   // C2048 a = 3; } }  
```  
  
 Possibile soluzione:  
  
```  
// C2048b.cpp int main() { int a = 1; switch (a) { case 1: a = 0; default: a = 2; } }  
```