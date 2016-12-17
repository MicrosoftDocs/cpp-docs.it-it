---
title: "Pseudo-destinazioni | Microsoft Docs"
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
  - "makefile, pseudodestinazioni"
  - "NMAKE (programma), pseudodestinazioni"
  - "NMAKE (programma), destinazioni"
  - "pseudodestinazioni e NMAKE"
  - "timestamp, pseudodestinazioni makefile"
ms.assetid: c8c479dc-0129-4186-8366-bc6251f2b494
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Pseudo-destinazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una pseudo\-destinazione è un'etichetta utilizzata in luogo di un nome file in una riga di dipendenze.  Viene interpretata come file non esistente e pertanto non è aggiornata.  In NMAKE il timestamp di una pseudo\-destinazione è il più recente rispetto a quello dei relativi dipendenti.  Se non sono presenti dipendenti, verrà utilizzata l'ora corrente.  Se una pseudo\-destinazione viene utilizzata come destinazione, i relativi comandi vengono sempre eseguiti.  Una pseudo\-destinazione utilizzata come dipendente deve essere visualizzata anche come destinazione in un'altra dipendenza.  Tuttavia, tale dipendenza non deve necessariamente presentare un blocco di comandi.  
  
 I nomi delle pseudo\-destinazioni seguono le stesse regole sintattiche valide per i nomi file delle destinazioni.  Se, tuttavia, il nome non presenta un'estensione, ovvero non contiene un punto, può superare il limite di 8 caratteri per i nomi file e può avere una lunghezza massima di 256 caratteri.  
  
## Vedere anche  
 [Destinazioni](../build/targets.md)