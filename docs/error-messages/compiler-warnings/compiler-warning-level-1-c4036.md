---
title: "Avviso del compilatore (livello 1) C4036 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4036"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4036"
ms.assetid: f0b15359-4d62-48ec-8cb1-a7b36587a47f
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Avviso del compilatore (livello 1) C4036
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type' senza nome come parametro effettivo  
  
 Non è stato specificato alcun nome di tipo per una struttura, unione, enumerazione o classe usata come parametro effettivo. Se si usa [\/Zg](../../build/reference/zg-generate-function-prototypes.md) per generare prototipi di funzione, il compilatore genera questo avviso e imposta come commento il parametro formale nel prototipo generato.  
  
 Per risolvere il problema, specificare un nome di tipo.  
  
## Esempio  
 L'esempio seguente genera l'errore C4036.  
  
```  
// C4036.c // compile with: /Zg /W1 // D9035 expected typedef struct { int i; } T; void f(T* t) {}   // C4036 // OK typedef struct MyStruct { int i; } T2; void f2(T2 * t) {}  
```