---
title: Errore del compilatore C3505 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3505
dev_langs: C++
helpviewer_keywords: C3505
ms.assetid: ed73c99e-93a1-4f3a-bac7-ba7ed5d836e4
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 47ca6c4e8e8c01e97ed0098c84c8ea8c64f387a6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3505"></a>Errore del compilatore C3505

> Impossibile caricare la libreria di tipo '*guid*'  
  
C3505 può verificarsi quando si eseguono i 32 bit, ospitati da x86 compilatore incrociato per 64 bit, x64 destinazioni a 64 bit del computer, perché il compilatore è in esecuzione in WOW64 e possono solo leggere dall'hive del Registro di sistema a 32 bit.  
  
È possibile risolvere l'errore, la creazione di versioni sia a 32 bit e a 64 bit della libreria dei tipi a cui che si sta tentando di importare e quindi registrare entrambi.  Oppure è possibile utilizzare il compilatore nativo a 64 bit, che è necessario modificare il **directory di VC + +** proprietà nell'IDE in modo che punti al compilatore a 64 bit.  
  
Per ulteriori informazioni, vedere,  
  
-   [Procedura: Abilitare un set di strumenti Visual C++ a 64 bit dalla riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)  
  
-   [Procedura: configurare progetti di Visual C++ a 64 Bit, x64 piattaforme](../../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md)