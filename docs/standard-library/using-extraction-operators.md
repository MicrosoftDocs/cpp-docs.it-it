---
title: "Utilizzo degli operatori di estrazione | Microsoft Docs"
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
  - ">> (operatore), operatori di estrazione"
  - "operatori di estrazione"
  - "operatori [C++], estrazione"
ms.assetid: a961e1a9-4897-41de-b210-89d5b2d051ae
caps.latest.revision: 8
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Utilizzo degli operatori di estrazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'operatore di estrazione \(`>>`\), che è preprogrammato per tutti i tipi di dati C\+\+ standard, è il modo più semplice per ottenere i byte da un oggetto del flusso di input.  
  
 Gli operatori di input di estrazione del testo formattato dipendono da spazio vuoto per separare i valori dei dati in ingresso.  Si tratta scomoda quando un campo di testo contiene più parole o quando virgole separano i numeri.  In tal caso, in alternativa è possibile utilizzare la funzione membro di input non formattato [istream::getline](../Topic/basic_istream::getline.md) per leggere un blocco di testo con spazi vuoti importato, quindi analizza il blocco con funzioni speciali.  Un altro metodo consiste nel derivare una classe del flusso di input con una funzione membro come `GetNextToken`, che possono chiamare i membri del istream per estrarre e i dati di carattere di formato.  
  
## Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)