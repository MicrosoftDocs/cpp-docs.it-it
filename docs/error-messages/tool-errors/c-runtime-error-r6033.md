---
title: "Errore R6033 del linguaggio C in fase di esecuzione  | Microsoft Docs"
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
  - "R6033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6033"
ms.assetid: f9cffdc9-81bd-4a64-a698-02762cbd82c9
caps.latest.revision: 4
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore R6033 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Tentativo di utilizzo del codice MSIL da questo assembly durante l'inizializzazione del codice nativo.Indica un bug nell'applicazione.Tale bug è molto probabilmente il risultato della chiamata di una funzione compilata con MSIL \(\/clr\) da un costruttore nativo o da DllMain.  
  
 Questo messaggio diagnostico indica che sono state eseguite istruzioni MSIL durante il blocco del caricatore.  Per ulteriori informazioni, vedere [Inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).