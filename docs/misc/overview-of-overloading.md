---
title: "Cenni preliminari sull&#39;overload | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "overload di funzioni, sull'overload di funzioni"
  - "overload degli operatori, sull'overload di operatori"
ms.assetid: cd012dd4-607c-4f8e-bd2e-2bd506ac81ea
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Cenni preliminari sull&#39;overload
Con il linguaggio C\+\+, è possibile eseguire l'overload delle funzioni e degli operatori. Per overload si intende la pratica di fornire più definizioni per un determinato nome di funzione nello stesso ambito. Al compilatore viene lasciata la selezione della versione corretta della funzione o dell'operatore in base agli argomenti con cui viene chiamato. Ad esempio, la funzione max è considerata una funzione di overload. Può essere utilizzata nel codice come illustrato qui di seguito:  
  
```  
// overview_overload.cpp  
double max( double d1, double d2 )  
{  
   return ( d1 > d2 ) ? d1 : d2;  
}  
  
int max( int i1, int i2 )  
{  
   return ( i1 > i2 ) ? i1 : i2;  
}  
int main()  
{  
   int    i = max( 12, 8 );  
   double d = max( 32.9, 17.4 );  
}  
```  
  
 Nella prima chiamata di funzione, dove è stato richiesto il valore massimo di due variabili di tipo `int`, viene chiamata la funzione `max( int, int )`. Tuttavia, nella seconda chiamata di funzione gli argomenti sono di tipo `double`, pertanto viene chiamata la funzione `max( double, double )`.  
  
## Vedere anche  
 [Overload \(C\+\+\)](../misc/overloading-cpp.md)