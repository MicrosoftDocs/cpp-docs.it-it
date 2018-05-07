---
title: Errore del compilatore C3505 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3505
dev_langs:
- C++
helpviewer_keywords:
- C3505
ms.assetid: ed73c99e-93a1-4f3a-bac7-ba7ed5d836e4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9e0ea8edd3237db2085365450f43b4b955d36f33
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3505"></a>Errore del compilatore C3505

> Impossibile caricare la libreria di tipo '*guid*'  
  
C3505 può verificarsi quando si eseguono i 32 bit, ospitati da x86 compilatore incrociato per 64 bit, x64 destinazioni a 64 bit del computer, perché il compilatore è in esecuzione in WOW64 e possono solo leggere dall'hive del Registro di sistema a 32 bit.  
  
È possibile risolvere l'errore, la creazione di versioni sia a 32 bit e a 64 bit della libreria dei tipi a cui che si sta tentando di importare e quindi registrare entrambi.  Oppure è possibile utilizzare il compilatore nativo a 64 bit, che è necessario modificare il **directory di VC + +** proprietà nell'IDE in modo che punti al compilatore a 64 bit.  
  
Per ulteriori informazioni, vedere,  
  
-   [Procedura: Abilitare un set di strumenti Visual C++ a 64 bit dalla riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)  
  
-   [Procedura: Configurare i progetti Visual C++ per piattaforme x64 a 64 bit](../../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md)