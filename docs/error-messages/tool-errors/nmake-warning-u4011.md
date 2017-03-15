---
title: "Avviso U4011 di NMAKE  | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U4011"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U4011"
ms.assetid: e8244514-eba6-4285-8853-7baeefdcd8a4
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso U4011 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"destinazione": non tutti i dipendenti sono disponibili. Destinazione non compilata  
  
 Un dipendente della destinazione specificata non esiste o non è aggiornato e il comando di aggiornamento di tale dipendente ha restituito un codice di uscita diverso da zero.  Nell'opzione \/K è previsto che prosegua l'elaborazione delle parti di compilazione non correlate e venga emesso un codice di uscita uguale a 1 al termine della sessione NMAKE.  
  
 Questo avviso è preceduto dall'avviso [U4010](../../error-messages/tool-errors/nmake-warning-u4010.md) per ogni dipendente che non può essere creato o aggiornato.