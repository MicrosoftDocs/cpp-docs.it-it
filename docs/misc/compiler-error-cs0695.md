---
title: "Errore del compilatore CS0695 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0695"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0695"
ms.assetid: 05f6c8cf-6147-4ac7-84ea-e1f34f8ef9f7
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0695
'generic type' non può implementare sia 'generic interface' che 'generic interface' perché potrebbero unificarsi per alcune sostituzioni di parametro di tipo  
  
 Questo errore si verifica quando una classe generica implementa più di una parametrizzazione della stessa interfaccia generica ed esiste una sostituzione di parametro di tipo che renderebbe le due interfacce identiche. Per evitare questo errore, implementare solo una delle interfacce oppure modificare i parametri di tipo per evitare il conflitto.  
  
 L'esempio seguente genera l'errore CS0695:  
  
```  
// CS0695.cs // compile with: /target:library interface I<T> { } class G<T1, T2> : I<T1>, I<T2>  // CS0695 { }  
```