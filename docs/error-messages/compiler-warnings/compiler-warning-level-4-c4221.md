---
title: "Avviso del compilatore (livello 4) C4221 | Microsoft Docs"
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
  - "C4221"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4221"
ms.assetid: 8532bd68-54dc-4526-8597-f61dcb0a0129
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4221
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: impossibile inizializzare 'identificatore' utilizzando l'indirizzo della variabile automatica  
  
 Con le estensioni Microsoft predefinite \(\/Ze\) è possibile inizializzare un tipo di aggregazione, quale **array**, `struct` o **union**, con l'indirizzo di una variabile locale automatica.  
  
## Esempio  
  
```  
// C4221.c  
// compile with: /W4  
struct S  
{  
   int *i;  
};  
  
void func()  
{  
   int j;  
   struct S s1 = { &j };   // C4221  
}  
  
int main()  
{  
}  
```  
  
 Tali inizializzazione non sono valide in compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\).