---
title: Ordine delle opzioni CL (C++) - Visual Studio
ms.date: 12/14/2018
f1_keywords:
- cl
helpviewer_keywords:
- cl.exe compiler, setting options
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
ms.openlocfilehash: 93907265bed8141b5c63edd5e75d632e060351fe
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62320942"
---
# <a name="order-of-cl-options"></a>Ordine delle opzioni CL

Le opzioni possono apparire in un punto qualsiasi nella riga di comando CL, ad eccezione dell'opzione /link, che deve verificarsi ultima. Il compilatore inizia con le opzioni specificate nel [variabile di ambiente CL](cl-environment-variables.md) , quindi la riga di comando viene letto da sinistra a destra, ovvero l'elaborazione dei file di comando nell'ordine in cui li incontra. Ogni opzione si applica a tutti i file nella riga di comando. Se vengono rilevate CL opzioni in conflitto, viene usata l'opzione all'estrema destra.

## <a name="see-also"></a>Vedere anche

[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
