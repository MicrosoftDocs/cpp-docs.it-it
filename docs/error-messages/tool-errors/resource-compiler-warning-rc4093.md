---
title: "Avviso del compilatore di risorse RC4093 | Microsoft Docs"
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
  - "RC4093"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC4093"
ms.assetid: 3c61b4a4-b418-465b-a4fd-cb1ff0adb8dd
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore di risorse RC4093
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Caratteri di nuova riga senza codice di escape in una costante carattere in codice inattivo.  
  
 L'espressione costante di una direttiva per il preprocessore `#if`, `#elif`, **\#ifdef** o **\#ifndef** dà come risultato zero, rendendo inattivo il codice che segue.  All'interno del codice inattivo è presente un carattere di nuova riga compreso tra una coppia di virgolette singole o doppie.  
  
 Tutto il testo che precede il segno di virgolette doppie successivo viene considerato come interno a una costante carattere.