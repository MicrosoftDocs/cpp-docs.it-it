---
title: "Errore del compilatore CS0699 | Microsoft Docs"
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
  - "CS0699"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0699"
ms.assetid: 1dff310b-6b8d-46b4-a649-bbf23282ff1f
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0699
'generic' non definisce il parametro di tipo 'identifier'  
  
 Un parametro di tipo è stato usato in una definizione generica che non è stata trovata nell'elenco delle dichiarazioni dei parametri di tipo per tale definizione. Questa situazione può verificarsi se il nome usato per il parametro di tipo non era coerente.  
  
 L'esempio seguente genera l'errore CS0699:  
  
```  
// CS0699.cs class C<T> where U : I   // CS0699 – U is not a valid type parameter { }  
```