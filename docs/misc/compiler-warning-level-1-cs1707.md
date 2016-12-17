---
title: "Avviso del compilatore (livello 1) CS1707 | Microsoft Docs"
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
  - "CS1707"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1707"
ms.assetid: 47b6096e-4e4b-4057-b9d7-4a096139267a
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1707
Delegato 'DelegateName' associato a 'MethodName1' anziché a 'MethodName2' a causa di nuove regole del linguaggio  
  
 C\# 2.0 implementa nuove regole per l'associazione di un delegato a un metodo. Vengono considerate informazioni aggiuntive precedentemente ignorate. Questo avviso viene visualizzato per segnalare che il delegato è ora associato a un overload del metodo diverso dal precedente. È possibile verificare se il delegato deve essere effettivamente associato a 'MethodName1' anziché a 'MethodName2'.  
  
 Per una descrizione delle procedure seguite dal compilatore per determinare il metodo a cui associare il delegato, vedere [Utilizzo della varianza nei delegati](../Topic/Using%20Variance%20in%20Delegates%20\(C%23%20and%20Visual%20Basic\).md).