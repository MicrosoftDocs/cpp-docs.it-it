---
title: "Errore del compilatore CS0268 | Microsoft Docs"
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
  - "CS0268"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0268"
ms.assetid: a4faca71-8b4a-4f22-a89e-59d92ced48cb
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0268
Il tipo importato 'type' non è valido. perché contiene una dipendenza circolare della classe base.  
  
 Questo errore si verifica se un tipo importato da un altro linguaggio presenta una dipendenza circolare della classe base. In questo caso, il tipo non può essere usato in un programma C\#. Per risolvere questo errore, controllare i tipi importati da altri linguaggi, in qualsiasi assembly o modulo di riferimento.