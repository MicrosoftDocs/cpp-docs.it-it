---
title: Esecuzione di un programma durante la pre-elaborazione
ms.date: 11/04/2016
helpviewer_keywords:
- program execution [C++]
ms.assetid: 5ecf123a-20e5-40cd-b8d8-dd5a9fdd4b24
ms.openlocfilehash: 564e4aebb3a0502f18550fb9d323e8b30f1303f6
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827710"
---
# <a name="executing-a-program-in-preprocessing"></a>Esecuzione di un programma durante la pre-elaborazione

Per usare il codice di uscita del comando durante la pre-elaborazione, specificare il comando, con tutti gli argomenti, racchiusi tra parentesi quadre ([]). Tutte le macro vengono espanse prima dell'esecuzione del comando. NMAKE sostituisce la specifica del comando con codice di uscita del comando, che può essere usate in un'espressione per controllare la pre-elaborazione.

## <a name="see-also"></a>Vedere anche

[Espressioni nella pre-elaborazione di makefile](expressions-in-makefile-preprocessing.md)
