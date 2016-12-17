---
title: "Errore del compilatore CS0517 | Microsoft Docs"
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
  - "CS0517"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0517"
ms.assetid: 33732ade-6ab9-4582-bea4-125d63388779
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0517
'class' non ha una classe base e non può chiamare un costruttore base  
  
 L'errore CS0517 può verificarsi solo quando .NET Framework Common Language Runtime compila il codice sorgente per la classe object, che è l'unica classe che non contiene classi base.