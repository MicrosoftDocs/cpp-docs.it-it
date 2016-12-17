---
title: "Errore del compilatore C2316 | Microsoft Docs"
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
  - "C2316"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2316"
ms.assetid: 9ad08eb5-060b-4eb0-8d66-0dc134f7bf67
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2316
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'exception': non può essere intercettato come distruttore e\/o i costruttori di copia sono inaccessibili  
  
 È stata rilevata un'eccezione per valore o riferimento, ma il costruttore di copia e\/o l'operatore di assegnazione erano inaccessibili.  
  
 Questo codice è stato accettato dal compilatore della versione precedente ma attualmente causa un errore.  
  
## Esempio  
 L'esempio seguente genera l'errore C2316:  
  
```  
// C2316.cpp // compile with: /EHsc #include <stdio.h> extern "C" int printf_s(const char*, ...); struct B { public: B() {} // Delete the following line to resolve. private: // copy constructor B(const B&) { } }; void f(const B&) { } int main() { try { B aB; f(aB); } catch (B b) {   // C2316 printf_s("Caught an exception!\n"); } }  
```