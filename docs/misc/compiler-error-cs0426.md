---
title: "Errore del compilatore CS0426 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0426"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0426"
ms.assetid: 62df0deb-3624-436e-9691-ebe3ee1fc31f
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0426
Il nome di tipo 'identifier' non esiste nel tipo 'type'  
  
 Questo errore si verifica quando si fa riferimento a un tipo annidato all'interno di un altro tipo, ma quel tipo annidato non esiste. Può accadere se il nome del tipo annidato viene digitato in modo errato. Controllare l'ortografia dei nomi usati e verificare che il tipo di inclusione includa il membro previsto.  
  
 L'esempio seguente genera l'errore CS0426 perché la classe C non presenta un tipo A annidato:  
  
```  
// CS0426.cs class C { // No nested types are declared. } class D { public static void Main() { C c = new C(); // Attempt to reference a nested type A: C.A a; // CS0426 because no such type C.A } }  
```  
  
## Vedere anche  
 [Classi e struct](../Topic/Classes%20and%20Structs%20\(C%23%20Programming%20Guide\).md)