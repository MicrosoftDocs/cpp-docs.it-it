---
title: "Errore del compilatore CS1688 | Microsoft Docs"
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
  - "CS1688"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1688"
ms.assetid: e15672a1-2570-4e65-99fc-7acc190ae643
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1688
Non è possibile convertire il blocco di metodi anonimi senza elenco parametri nel tipo delegato 'delegate' perché contiene uno o più parametri out  
  
 Nella maggior parte dei casi il compilatore consente l'omissione dei parametri da un blocco di metodi anonimi. Questo errore si verifica quando nel blocco di metodi anonimi non è presente un elenco di parametri, ma il delegato ha un parametro `out`. Il compilatore non consente questa situazione perché dovrebbe ignorare la presenza del parametro `out`, cosa che difficilmente rappresenta il comportamento corretto.  
  
## Esempio  
 Il codice seguente genera l'errore CS1688.  
  
```  
// CS1688.cs using System; delegate void OutParam(out int i); class ErrorCS1676 { static void Main() { OutParam o; o = delegate  // CS1688 // Try this instead: // o = delegate(out int i) { Console.WriteLine(""); }; } }  
```