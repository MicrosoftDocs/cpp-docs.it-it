---
title: Esecuzione di un programma durante la pre-elaborazione
ms.date: 11/04/2016
helpviewer_keywords:
- program execution [C++]
ms.assetid: 5ecf123a-20e5-40cd-b8d8-dd5a9fdd4b24
ms.openlocfilehash: a78c9ddc498383d460e617bc26f4e70eb7275eec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50577424"
---
# <a name="executing-a-program-in-preprocessing"></a>Esecuzione di un programma durante la pre-elaborazione

Per usare il codice di uscita del comando durante la pre-elaborazione, specificare il comando, con tutti gli argomenti, racchiusi tra parentesi quadre ([]). Tutte le macro vengono espanse prima dell'esecuzione del comando. NMAKE sostituisce la specifica del comando con codice di uscita del comando, che può essere usate in un'espressione per controllare la pre-elaborazione.

## <a name="see-also"></a>Vedere anche

[Espressioni nella pre-elaborazione di makefile](../build/expressions-in-makefile-preprocessing.md)