---
title: "Errore del compilatore CS0171 | Microsoft Docs"
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
  - "CS0171"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0171"
ms.assetid: 8c1d76c9-1048-4579-9031-23e3566e6288
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0171
Il campo sottostante per la proprietà implementata automaticamente 'name' deve essere assegnato completamente prima che il controllo venga restituito al chiamante. Si consiglia di chiamare il costruttore predefinito da un inizializzatore del costruttore.  
  
 Un costruttore in uno [struct](../Topic/struct%20\(C%23%20Reference\).md) deve inizializzare tutti i campi della struttura. Per altre informazioni, vedere [Costruttori](../Topic/Constructors%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0171:  
  
```  
// CS0171.cs struct MyStruct { MyStruct(int initField)   // CS0171 { // i = initField;      // uncomment this line to resolve this error } public int i; } class MyClass { public static void Main() { MyStruct aStruct = new MyStruct(); } }  
```