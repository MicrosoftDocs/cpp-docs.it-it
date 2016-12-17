---
title: "Errore degli strumenti del linker LNK1211 | Microsoft Docs"
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
  - "LNK1211"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1211"
ms.assetid: 607400eb-4180-4892-817f-eedfa628af61
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1211
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile trovare informazioni sul tipo precompilato; 'nomefile' non collegato o sovrascritto  
  
 Il file oggetto dato, compilato con [\/Yc](../../build/reference/yc-create-precompiled-header-file.md), non è stato specificato nel comando LINK o è stato sovrascritto.  
  
 Se si crea una libreria di debug che utilizza le intestazioni precompilate e si specifica \/Yc e [\/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), Visual C\+\+ genera un file oggetto precompilato contenente le informazioni di debug di CodeView.  L'errore si verifica solo quando si memorizza il file oggetto precompilato in una libreria, si utilizza la libreria per compilare un'immagine eseguibile e i file oggetto a cui si fa riferimento non hanno riferimenti transitivi ad alcuna delle funzioni definite dal file oggetto precompilato.  
  
 Esistono due metodi per risolvere questa situazione.  
  
-   Specificare l'opzione del compilatore [\/Yd](../../build/reference/yd-place-debug-information-in-object-file.md) per aggiungere le informazioni di CodeView dall'intestazione precompilata a ciascun modulo di oggetto.  Non è consigliabile servirsi di questo metodo poiché produce in genere moduli di oggetto di grandi dimensioni a causa dei quali il tempo necessario per collegare l'applicazione può aumentare.  
  
-   Specificare [\/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) e passare il nome di qualsiasi stringa arbitraria, quando si crea un file di intestazione precompilato che non contiene alcuna definizione di funzione.  In questo modo, vengono creati un simbolo nel file oggetto precompilato e un riferimento a tale simbolo in ciascun file oggetto che utilizzava il file di intestazione precompilato associato al file oggetto precompilato.  
  
 Quando si compila un modulo con **\/Yc** e **\/Yl**, viene creato un simbolo simile a `__@@_PchSym_@00@...@symbol_name`, in cui i puntini di sospensione \(...\) rappresentano una stringa di caratteri generata dal compilatore. Tale simbolo verrà quindi archiviato nel modulo di oggetto.  Qualsiasi file di origine compilato con questa intestazione precompilata fa riferimento al simbolo specificato, che fa in modo che il linker includa il modulo di oggetto e le relative informazioni di debug dalla libreria.  
  
 Per ulteriori informazioni su questo errore, vedere l'articolo della Knowledge Base Q102697 PRB: Build Errors Using Precompiled Header in Debugging Lib \(informazioni in lingua inglese\).