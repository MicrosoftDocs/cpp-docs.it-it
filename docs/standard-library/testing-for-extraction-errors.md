---
title: "Verifica degli errori di estrazione | Microsoft Docs"
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
  - "errori di estrazione"
ms.assetid: 6a681028-adba-4557-8f7b-f137932905f8
caps.latest.revision: 9
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Verifica degli errori di estrazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni di elaborazione di output di errore, descritte in [Funzioni di elaborazione di errore](../standard-library/output-file-stream-member-functions.md), si applicano i flussi di input.  Il test per gli errori di estrazione è importante.  Considerare questa istruzione:  
  
```  
cin >> n;  
```  
  
 Se `n` è un integer con segno, un valore maggiore di 32.767 \(il valore massimo consentito, o MAX\_INT\) impostare il bit di `fail` del flusso e l'oggetto di `cin` diventano inutilizzabili.  Tutte le estrazioni successive comportano un ritorno immediato senza valore memorizzato.  
  
## Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)