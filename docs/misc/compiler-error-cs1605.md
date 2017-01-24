---
title: "Errore del compilatore CS1605 | Microsoft Docs"
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
  - "CS1605"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1605"
ms.assetid: a202d3a9-9777-4902-a7b9-1628640f9433
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1605
Non è possibile passare 'var' come argomento ref o out perché è di sola lettura  
  
 Una variabile passata come parametro [ref](../Topic/ref%20\(C%23%20Reference\).md) o [out](../Topic/out%20\(C%23%20Reference\).md) deve essere modificata nel metodo chiamato. Non è quindi possibile passare un parametro di sola lettura come `ref` o `out`.