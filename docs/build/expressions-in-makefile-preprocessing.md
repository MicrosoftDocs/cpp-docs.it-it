---
title: Le espressioni nella pre-elaborazione di Makefile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- preprocessing makefiles
- expressions [C++], makefile preprocessing
- makefiles, preprocessing
ms.assetid: 37f0f413-97e0-452c-a83f-3c9002c44c92
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1070eb01802bd4b39f62ae24519ad6dabca7eb90
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45719005"
---
# <a name="expressions-in-makefile-preprocessing"></a>Espressioni nella pre-elaborazione di makefile

Il **! IF** o **! Se INVECE** `constantexpression` consiste di costanti integer (in notazione decimale o del linguaggio C), le costanti di stringa o i comandi. Utilizzare le parentesi per raggruppare le espressioni. Le espressioni usare tipo C unsigned long integer aritmetico; i numeri sono in forma di 32 bit in complemento a due nell'intervallo - 2147483648 e 2147483647.

Le espressioni possono usare operatori che agiscono sui valori delle costanti, i codici di uscita dai comandi, le stringhe, macro e percorsi del file system.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Operatori di pre-elaborazione di makefile](../build/makefile-preprocessing-operators.md)

[Esecuzione di un programma di pre-elaborazione](../build/executing-a-program-in-preprocessing.md)

## <a name="see-also"></a>Vedere anche

[Pre-elaborazione di makefile](../build/makefile-preprocessing.md)