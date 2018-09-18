---
title: Errore del compilatore C3505 | Microsoft Docs
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
ms.openlocfilehash: 0d6af1b96f23332b5eed82fab2c24c93e2d53dee
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054974"
---
# <a name="compiler-error-c3505"></a>Errore del compilatore C3505

> Impossibile caricare la libreria di tipo '*guid*'

C3505 può verificarsi se si eseguono i 32 bit, ospitati da x86 compilatore incrociato per 64 bit, x64 destinazioni a 64 bit del computer, perché il compilatore è in esecuzione in WOW64 e possono solo leggere dall'hive del Registro di sistema a 32 bit.

È possibile correggere l'errore compilando le versioni a 32 bit sia 64 bit della libreria dei tipi a cui che si sta cercando di importare e quindi registrare entrambi.  Oppure è possibile usare il compilatore nativo a 64 bit, che è necessario modificare il **directory di VC + +** proprietà nell'IDE in modo che punti al compilatore a 64 bit.

Per ulteriori informazioni, vedere,

- [Procedura: Abilitare un set di strumenti Visual C++ a 64 bit dalla riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)

- [Procedura: Configurare i progetti Visual C++ per piattaforme x64 a 64 bit](../../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md)