---
title: Errore del compilatore C3505
ms.date: 11/04/2016
f1_keywords:
- C3505
helpviewer_keywords:
- C3505
ms.assetid: ed73c99e-93a1-4f3a-bac7-ba7ed5d836e4
ms.openlocfilehash: 0c67eb46208c35c1b11a74898107ad3c0e6e570d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200850"
---
# <a name="compiler-error-c3505"></a>Errore del compilatore C3505

> Impossibile caricare la libreria dei tipi '*GUID*'

Errore C3505 può essere causato da un compilatore incrociato a 32 bit ospitato da x86 per destinazioni x64 a 64 bit in un computer a 64 bit, perché il compilatore è in esecuzione in WOW64 e può solo leggere dall'hive del registro di sistema a 32 bit.

È possibile risolvere questo errore compilando le versioni a 32 bit e a 64 bit della libreria dei tipi che si sta tentando di importare e quindi registrarle entrambe.  In alternativa, è possibile usare il compilatore nativo a 64 bit, per cui è necessario modificare la proprietà **directory di VC + +** nell'IDE in modo che punti al compilatore a 64 bit.

Per ulteriori informazioni, vedere,

- [Procedura: Abilitare un set di strumenti Visual C++ a 64 bit dalla riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)

- [Procedura: Configurare i progetti Visual C++ per piattaforme x64 a 64 bit](../../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md)
