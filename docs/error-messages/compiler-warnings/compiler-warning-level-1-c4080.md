---
title: "Avviso del compilatore (livello 1) C4080 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4080"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4080"
ms.assetid: 964fb3f4-b9fd-450b-aa23-35cece126172
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4080
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

previsto identificatore per il nome del segmento. Trovato 'simbolo'  
  
 Il nome del segmento in [\#pragma alloc\_text](../../preprocessor/alloc-text.md) deve essere una stringa o un identificatore. Il compilatore ignora la direttiva pragma se non viene trovato un identificatore valido.  
  
 L'esempio seguente genera l'errore C4080:  
  
```  
// C4080.cpp // compile with: /W1 extern "C" void func(void); #pragma alloc_text()   // C4080 // try this line to resolve the warning // #pragma alloc_text("mysection", func) int main() { } void func(void) { }  
```