---
title: "Avviso del compilatore (livello 4) C4937 | Microsoft Docs"
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
  - "C4937"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4937"
ms.assetid: 2bb9f0e7-bbd6-4697-84de-95955e32ae29
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4937
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'text1' e 'text2' sono indistinguibili come argomenti per 'directive'  
  
 Il modo in cui vengono elaborati gli argomenti per le direttive impedisce di distinguere i nomi significativi per il compilatore, ad esempio le parole chiave con più rappresentazioni di testo \(form con carattere di sottolineatura singolo e doppio\).  
  
 Sono esempi di stringhe di questo tipo \_\_cdecl e \_\_forceinline.  Si noti che in \/Za sono abilitati solo i form con carattere di sottolineatura doppio.  
  
 L'esempio seguente genera l'errore C4937:  
  
```  
// C4937.cpp // compile with: /openmp /W4 #include "omp.h" int main() { #pragma omp critical ( __leave )   // C4937 ; // OK #pragma omp critical ( leave ) ; }  
```