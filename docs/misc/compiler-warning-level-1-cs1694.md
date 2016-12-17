---
title: "Avviso del compilatore (livello 1) CS1694 | Microsoft Docs"
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
  - "CS1694"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1694"
ms.assetid: 9cb6b5d4-36a0-4b07-9690-14b5105da44b
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1694
Il nome file specificato per la direttiva per il preprocessore non è valido. È troppo lungo o non è un nome file valido.  
  
 Questo avviso viene generato quando si usa la direttiva per il preprocessore `#pragma checksum`. Il nome file specificato supera i 256 caratteri. Per risolvere il problema, usare un nome file più breve.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1694.  
  
```  
// cs1694.cs #pragma checksum "MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890.txt" {00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F}   // CS1694 class MyClass {}  
```