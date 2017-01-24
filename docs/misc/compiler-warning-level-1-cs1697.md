---
title: "Avviso del compilatore (livello 1) CS1697 | Microsoft Docs"
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
  - "CS1697"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1697"
ms.assetid: 0cd931b7-f358-4ff0-b441-27668645d7d5
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1697
Sono stati specificati valori di checksum diversi per 'file name'  
  
 Sono stati specificati più checksum per un determinato file. Il debugger usa il valore di checksum per determinare il file di cui eseguire il debug quando in un progetto sono presenti più file con lo stesso nome. Anche se si verifica raramente, questo errore può essere generato durante la scrittura di un'applicazione che genera codice. Per correggere l'errore, verificare che il checksum venga generato una sola volta per ciascun file di codice.