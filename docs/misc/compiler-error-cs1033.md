---
title: "Errore del compilatore CS1033 | Microsoft Docs"
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
  - "CS1033"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1033"
ms.assetid: eb0f4001-84a6-4918-a648-cf710d038de7
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1033
Limite di 16.707.565 righe rappresentabili nel PDB superato nel file di origine: le informazioni di debug non saranno corrette  
  
 Un file di codice sorgente ha superato il numero massimo consentito di righe che il compilatore può elaborare. Per risolvere l'errore, creare due o più file di codice sorgente dal file originale. Il numero massimo di righe è 268.435.454. Se si usa **\/debug**, l'uso di un numero di righe maggiore di 16.707.566 determina informazioni di debug danneggiate.