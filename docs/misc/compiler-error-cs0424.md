---
title: "Errore del compilatore CS0424 | Microsoft Docs"
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
  - "CS0424"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0424"
ms.assetid: 09ae482c-255a-4f99-8dc8-ba31c3ea8c71
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0424
'class': una classe con l'attributo ComImport non può specificare una classe base  
  
 La definizione dell'attributo <xref:System.Runtime.InteropServices.ComImportAttribute> implica che l'implementazione per la classe deve essere importata da un modulo COM. Non è consentito aggiungere altri metodi o campi ereditati dalla classe base all'implementazione definita nel modulo COM.  
  
 L'esempio seguente genera l'errore CS0424:  
  
```  
// CS0424.cs // compile with: /target:library using System.Runtime.InteropServices; public class A {} [ ComImport, Guid("7ab770c7-0e23-4d7a-8aa2-19bfad479829") ] class B : A {}   // CS0424 error  
```