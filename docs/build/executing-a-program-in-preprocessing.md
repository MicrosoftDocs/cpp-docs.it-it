---
title: "Esecuzione di un programma durante la pre-elaborazione | Microsoft Docs"
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
  - "esecuzione di programmi [C++]"
ms.assetid: 5ecf123a-20e5-40cd-b8d8-dd5a9fdd4b24
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Esecuzione di un programma durante la pre-elaborazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per utilizzare il codice di uscita di un comando durante la pre\-elaborazione, specificare tra parentesi quadre \(\[ \]\) il comando completo di eventuali argomenti.  Tutte le macro verranno espanse prima dell'esecuzione del comando.  NMAKE sostituirà la specifica del comando con il codice di uscita del comando stesso, che potrà essere utilizzata in un'espressione per controllare la pre\-elaborazione.  
  
## Vedere anche  
 [Espressioni nella pre\-elaborazione di makefile](../build/expressions-in-makefile-preprocessing.md)