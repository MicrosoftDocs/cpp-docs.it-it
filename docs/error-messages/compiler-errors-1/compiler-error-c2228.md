---
title: "Errore del compilatore C2228 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2228"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2228"
ms.assetid: 901cadb1-ce90-4ae0-a360-547a9ba2ca18
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2228
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'elemento a sinistra di '.identifier' deve avere una classe, struttura o unione  
  
 L'espressione a sinistra dell'operatore punto \(.\) non è una classe, una struttura o un'unione.  
  
 L'esempio seguente genera l'errore C2228:  
  
```  
// C2228.cpp int i; struct S { public: int member; } s, *ps = &s; int main() { i.member = 0;   // C2228 i is not a class type ps.member = 0;  // C2228 ps is a pointer to a structure s.member = 0;   // s is a structure type ps->member = 0; // ps points to a structure S }  
```  
  
 Questo errore si verifica anche se si usa una sintassi non corretta quando si usano le estensioni gestite. Mentre in altri linguaggi di Visual Studio è possibile usare l'operatore punto per accedere a un membro di una classe gestita, un puntatore a un oggetto in C\+\+ comporta la necessità di usare l'operatore \-\> per accedere al membro:  
  
 Errato: `String * myString = checkedListBox1->CheckedItems->Item[0].ToString();`  
  
 Corretto: `String * myString = checkedListBox1->CheckedItems->Item[0]->ToString();`