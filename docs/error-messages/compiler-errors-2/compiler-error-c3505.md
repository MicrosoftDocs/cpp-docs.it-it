---
title: "Errore del compilatore C3505 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3505"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3505"
ms.assetid: ed73c99e-93a1-4f3a-bac7-ba7ed5d836e4
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Errore del compilatore C3505
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile caricare la libreria dei tipi 'guid'  
  
 L'errore C3505 può essere determinato dall'esecuzione del compilatore incrociato a 32 o a 64 bit su un computer a 64 bit, poiché il compilatore viene eseguito con WOW64 e può leggere solo dall'hive del Registro di sistema.  
  
 Per risolvere l'errore C3505, compilare versioni a 32 e a 64 bit della libreria dei tipi che si sta tentando di importare e registrarle entrambe.  In alternativa, è possibile utilizzare il compilatore a 64 bit nativo. Tuttavia, per eseguire tale operazione sarebbe necessario modificare l'impostazione di Directory di VC\+\+ nell'IDE in modo che punti al compilatore a 64 bit.  
  
 Per ulteriori informazioni, vedere,  
  
-   [Procedura: abilitare un set di strumenti Visual C\+\+ a 64 bit dalla riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)  
  
-   [Procedura: abilitare un set di strumenti Visual C\+\+ a 64 bit dalla riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)  
  
-   [Procedura: Configurare i progetti Visual C\+\+ per piattaforme a 64 bit](../../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md)