---
title: "Avviso del compilatore (livello 1) CS3013 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS3013"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3013"
ms.assetid: 00b3bbe1-f2a0-465c-be0e-1af700c5753d
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3013
I moduli aggiunti devono essere contrassegnati con l'attributo CLSCompliant per corrispondere all'assembly  
  
 Un modulo compilato con l'opzione del compilatore [\/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md) è stato aggiunto a una compilazione con [\/addmodule](../Topic/-addmodule%20\(C%23%20Compiler%20Options\).md). Tuttavia, la conformità del modulo alle specifiche CLS \(Common Language Specification\) non concorda con lo stato CLS della compilazione corrente.  
  
 La conformità a CLS è indicata con l'attributo module. Ad esempio, `[module:CLSCompliant(true)]` indica che il modulo è conforme a CLS e `[module:CLSCompliant(false)]` indica che il modulo non è conforme a CLS. Il valore predefinito è `[module:CLSCompliant(false)]`. Per altre informazioni sulle specifiche CLS, vedere [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).