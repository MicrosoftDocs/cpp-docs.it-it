---
title: Errore del compilatore C3505
ms.date: 11/04/2016
f1_keywords:
- C3505
helpviewer_keywords:
- C3505
ms.assetid: ed73c99e-93a1-4f3a-bac7-ba7ed5d836e4
ms.openlocfilehash: 5730102371d00ebaf3ae05fdefb70184b58d7c18
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481773"
---
# <a name="compiler-error-c3505"></a>Errore del compilatore C3505

> Impossibile caricare la libreria di tipo '*guid*'

C3505 può verificarsi se si eseguono i 32 bit, ospitati da x86 compilatore incrociato per 64 bit, x64 destinazioni a 64 bit del computer, perché il compilatore è in esecuzione in WOW64 e possono solo leggere dall'hive del Registro di sistema a 32 bit.

È possibile correggere l'errore compilando le versioni a 32 bit sia 64 bit della libreria dei tipi a cui che si sta cercando di importare e quindi registrare entrambi.  Oppure è possibile usare il compilatore nativo a 64 bit, che è necessario modificare il **directory di VC + +** proprietà nell'IDE in modo che punti al compilatore a 64 bit.

Per ulteriori informazioni, vedere,

- [Procedura: Abilitare un set di strumenti Visual C++ a 64 bit dalla riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)

- [Procedura: Configurare i progetti Visual C++ per piattaforme x64 a 64 bit](../../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md)