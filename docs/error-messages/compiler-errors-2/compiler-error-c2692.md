---
title: "Errore del compilatore C2692 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2692"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2692"
ms.assetid: 02ade3b4-b757-448b-b065-d7d71bc3f441
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2692
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome\_funzione': il compilatore C richiede l'opzione '\/clr' per le funzioni con prototipo completo  
  
 Quando si compila il codice gestito .NET, il compilatore C richiede dichiarazioni di funzione ANSI.  Inoltre, se una funzione non accetta parametri, deve dichiarare esplicitamente `void` come tipo di parametro.