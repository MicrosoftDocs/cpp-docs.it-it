---
title: "Errore del compilatore CS0082 | Microsoft Docs"
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
  - "CS0082"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0082"
ms.assetid: 7612976f-de2c-4f6b-87c9-43175821650c
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0082
Il tipo 'type' riserva già un membro denominato 'name' con gli stessi tipi di parametro  
  
 Le proprietà in fase di compilazione vengono convertite in metodi con `get_` e\/o `set_` davanti all'identificatore. Se si definisce un metodo personalizzato che è in conflitto con il nome del metodo, viene generato un errore.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0082:  
  
```  
//cs0082.cs class MyClass { //property public int MyProp { get //CS0082 { return 1; } } //conflicting Get public int get_MyProp() { return 2; } public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Proprietà](../Topic/Properties%20\(C%23%20Programming%20Guide\).md)