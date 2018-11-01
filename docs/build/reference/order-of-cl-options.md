---
title: Ordine delle opzioni CL
ms.date: 11/04/2016
f1_keywords:
- cl
helpviewer_keywords:
- cl.exe compiler, setting options
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
ms.openlocfilehash: e5dd07f52f853b17bf663e2fbad7dbe66a3a1db7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50633534"
---
# <a name="order-of-cl-options"></a>Ordine delle opzioni CL

Le opzioni possono apparire in un punto qualsiasi nella riga di comando CL, ad eccezione dell'opzione /link, che deve verificarsi ultima. Il compilatore inizia con le opzioni specificate nel [variabile di ambiente CL](../../build/reference/cl-environment-variables.md) , quindi la riga di comando viene letto da sinistra a destra, ovvero l'elaborazione dei file di comando nell'ordine in cui li incontra. Ogni opzione si applica a tutti i file nella riga di comando. Se vengono rilevate CL opzioni in conflitto, viene usata l'opzione all'estrema destra.

## <a name="see-also"></a>Vedere anche

[Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)