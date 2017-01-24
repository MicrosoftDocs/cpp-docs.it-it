---
title: "Definizione delle macro | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "definizione di macro"
  - "macro, NMAKE"
  - "NMAKE (programma), definizione di macro"
ms.assetid: 0fc59ec5-5f58-4644-b7da-7b021f7001af
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Definizione delle macro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le macro possono essere definite in una riga di comando, in un file di comando, in un makefile o nel file Tools.ini.  
  
 In un file makefile o nel file Tools.ini ciascuna definizione di macro deve essere visualizzata su una riga separata e non può iniziare con uno spazio o una tabulazione.  Gli spazi o le tabulazioni prima e dopo il segno di uguale vengono ignorati.  Tutti i [caratteri di stringa](../build/defining-an-nmake-macro.md) sono valori letterali, comprese le virgolette e gli spazi incorporati.  
  
 In una riga di comando o in un file di comando spazi e tabulazioni delimitano gli argomenti e non possono precedere o seguire il segno di uguale.  Se in `string` sono contenuti spazi o tabulazioni, racchiudere la stringa o l'intera macro tra virgolette doppie \(" "\).  
  
## Vedere anche  
 [Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)