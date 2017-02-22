---
title: "Errore del compilatore C2472 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2472"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2472"
ms.assetid: 3b36bcdc-2ba5-4357-ab88-7545ba0551cd
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2472
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile generare 'function' in codice gestito: '%s'; compilare con \/clr per generare un'immagine mista  
  
 Questo errore si verifica quando vengono usati tipi non supportati dal codice gestito all'interno di un ambiente Common Language Runtime \(CLR\). Compilare con **\/clr** per risolvere l'errore.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2472.  
  
```  
// C2472.cpp // compile with: /clr:pure // C2472 expected #include <cstdlib> int main() { int * __ptr32 p32; int * __ptr64 p64; p32 = (int * __ptr32)malloc(4); p64 = p32; }  
```  
  
## Vedere anche  
 [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)