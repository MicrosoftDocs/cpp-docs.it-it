---
title: "Definizione di flusso | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dati [C++], lettura"
  - "lettura di dati [C++], programmazione di iostream"
  - "flussi [C++]"
  - "flussi [C++], classi iostream"
ms.assetid: a7e661e9-6cd1-4543-a9a4-c58ee9fd32f3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Definizione di flusso
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come C, C\+\+ non è incorporata una funzionalità di output.  Tutti i compilatori C\+\+, tuttavia, prossimi aggregato con un pacchetto sistematico e orientato a oggetti dei\/O, noto come le classi iostream.  Il flusso è il concetto fondamentale delle classi iostream.  È possibile considerare un oggetto flusso come file intelligente che funge da origine e destinazione per byte.  Caratteristiche di un flusso sono determinate dalla relativa classe e dagli operatori personalizzati di estrazione e di inserimento.  
  
 Tramite i driver di periferica, il sistema operativo su disco si occupa della tastiera, dello schermo, printer e le porte di comunicazione come file estesi.  Le classi iostream interagiscono con questi file estesi.  Le classi incorporate supportano la lettura e la scrittura nella memoria con sintassi identica a quella per il disco I\/O, che semplifica la derivazione delle classi stream.  
  
## Argomenti della sezione  
 [Alternative di input\/output](../standard-library/input-output-alternatives.md)  
  
## Vedere anche  
 [Programmazione di iostream](../standard-library/iostream-programming.md)