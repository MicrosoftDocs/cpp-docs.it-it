---
title: "Avviso del compilatore (livello 4) C4718 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4718"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4718"
ms.assetid: 29507f8a-b024-42c1-a3b8-f35d1f2641f3
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4718
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function call': la chiamata ricorsiva non ha effetti collaterali e verrà eliminata  
  
 Una funzione contiene una chiamata ricorsiva, ma non ha altri effetti collaterali. Una chiamata a questa funzione viene eliminata. Questo non incide sulla correttezza del programma, ma sul comportamento. L'esistenza della chiamata potrebbe determinare un'eccezione di overflow dello stack in fase di esecuzione, eventualità che viene eliminata con la rimozione della chiamata.