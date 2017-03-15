---
title: "Avviso U4010 di NMAKE  | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U4010"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U4010"
ms.assetid: 99d8eb9a-ae31-40d1-b8c5-8c66732127d3
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso U4010 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"destinazione": compilazione non riuscita; è stata specificata l'opzione \/K. Operazione in corso...  
  
 Un comando nel blocco di comandi della destinazione specificata ha restituito un codice di uscita diverso da zero.  Nell'opzione \/K è previsto che prosegua l'elaborazione delle parti di compilazione non correlate e venga emesso un codice di uscita uguale a 1 al termine della sessione NMAKE.  
  
 Se la destinazione specificata è, a sua volta, dipendente di un'altra destinazione, dopo il presente messaggio verrà generato il messaggio [U4011](../../error-messages/tool-errors/nmake-warning-u4011.md).