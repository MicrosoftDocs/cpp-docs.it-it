---
description: 'Altre informazioni su: esecuzione di un programma nella pre-elaborazione'
title: Esecuzione di un programma durante la pre-elaborazione
ms.date: 11/04/2016
helpviewer_keywords:
- program execution [C++]
ms.assetid: 5ecf123a-20e5-40cd-b8d8-dd5a9fdd4b24
ms.openlocfilehash: 72743fe1b75e170ce1aa7ea04dd5a0c70440de59
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192369"
---
# <a name="executing-a-program-in-preprocessing"></a>Esecuzione di un programma durante la pre-elaborazione

Per usare il codice di uscita di un comando durante la pre-elaborazione, specificare il comando con qualsiasi argomento racchiuso tra parentesi quadre ([]). Tutte le macro vengono espanse prima dell'esecuzione del comando. NMAKE sostituisce la specifica del comando con il codice di uscita del comando, che può essere usato in un'espressione per controllare la pre-elaborazione.

## <a name="see-also"></a>Vedi anche

[Espressioni nella pre-elaborazione di makefile](expressions-in-makefile-preprocessing.md)
