---
title: Errore del compilatore C3505 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3505
dev_langs:
- C++
helpviewer_keywords:
- C3505
ms.assetid: ed73c99e-93a1-4f3a-bac7-ba7ed5d836e4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f7b13350ea7a2ffaf232e990bd3ade42d0c44a6c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3505"></a>Errore del compilatore C3505

> Impossibile caricare la libreria di tipo '*guid*'  
  
C3505 può verificarsi quando si eseguono i 32 bit, ospitati da x86 compilatore incrociato per 64 bit, x64 destinazioni a 64 bit del computer, perché il compilatore è in esecuzione in WOW64 e possono solo leggere dall'hive del Registro di sistema a 32 bit.  
  
È possibile risolvere l'errore, la creazione di versioni sia a 32 bit e a 64 bit della libreria dei tipi a cui che si sta tentando di importare e quindi registrare entrambi.  Oppure è possibile utilizzare il compilatore nativo a 64 bit, che è necessario modificare il **directory di VC + +** proprietà nell'IDE in modo che punti al compilatore a 64 bit.  
  
Per ulteriori informazioni, vedere,  
  
-   [Procedura: Abilitare un set di strumenti Visual C++ a 64 bit dalla riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)  
  
-   [Procedura: Configurare i progetti Visual C++ per piattaforme x64 a 64 bit](../../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md)