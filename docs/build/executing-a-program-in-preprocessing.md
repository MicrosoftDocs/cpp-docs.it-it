---
title: Esecuzione di un programma durante la pre-elaborazione
ms.date: 11/04/2016
helpviewer_keywords:
- program execution [C++]
ms.assetid: 5ecf123a-20e5-40cd-b8d8-dd5a9fdd4b24
ms.openlocfilehash: d95079349981b073533bb00abcd053454542a044
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57413303"
---
# <a name="executing-a-program-in-preprocessing"></a>Esecuzione di un programma durante la pre-elaborazione

Per usare il codice di uscita del comando durante la pre-elaborazione, specificare il comando, con tutti gli argomenti, racchiusi tra parentesi quadre ([]). Tutte le macro vengono espanse prima dell'esecuzione del comando. NMAKE sostituisce la specifica del comando con codice di uscita del comando, che può essere usate in un'espressione per controllare la pre-elaborazione.

## <a name="see-also"></a>Vedere anche

[Espressioni nella pre-elaborazione di makefile](../build/expressions-in-makefile-preprocessing.md)
