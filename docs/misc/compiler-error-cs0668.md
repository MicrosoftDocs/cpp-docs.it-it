---
title: "Errore del compilatore CS0668 | Microsoft Docs"
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
  - "CS0668"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0668"
ms.assetid: 7bdaa795-ce13-4284-b753-a617c1735cfa
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0668
Due indicizzatori hanno nomi diversi. L'attributo IndexerName deve essere usato con lo stesso nome in ogni indicizzatore all'interno di un tipo.  
  
 I valori passati all'attributo **IndexerName** devono essere identici per tutti gli indicizzatori di un tipo. Per altre informazioni sull'attributo **IndexerName**, vedere [Classe IndexerNameAttribute](frlrfSystemRuntimeCompilerServicesIndexerNameAttributeClassTopic).  
  
 L'esempio seguente genera l'errore CS0668:  
  
```  
// CS0668.cs using System; using System.Runtime.CompilerServices; class IndexerClass { [IndexerName("IName1")] public int this [int index]   // indexer declaration { get { return index; } set { } } [IndexerName("IName2")] public int this [string s]    // CS0668, change IName2 to IName1 { get { return int.Parse(s); } set { } } void Main() { } }  
```