---
title: Espressioni nella pre-elaborazione di makefile
ms.date: 11/04/2016
helpviewer_keywords:
- preprocessing makefiles
- expressions [C++], makefile preprocessing
- makefiles, preprocessing
ms.assetid: 37f0f413-97e0-452c-a83f-3c9002c44c92
ms.openlocfilehash: e55be14b6623232966b1539615c4f7f40139e38f
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57421849"
---
# <a name="expressions-in-makefile-preprocessing"></a>Espressioni nella pre-elaborazione di makefile

Il **! IF** o **! Se INVECE** `constantexpression` consiste di costanti integer (in notazione decimale o del linguaggio C), le costanti di stringa o i comandi. Utilizzare le parentesi per raggruppare le espressioni. Le espressioni usare tipo C unsigned long integer aritmetico; i numeri sono in forma di 32 bit in complemento a due nell'intervallo - 2147483648 e 2147483647.

Le espressioni possono usare operatori che agiscono sui valori delle costanti, i codici di uscita dai comandi, le stringhe, macro e percorsi del file system.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Operatori di pre-elaborazione di makefile](../build/makefile-preprocessing-operators.md)

[Esecuzione di un programma di pre-elaborazione](../build/executing-a-program-in-preprocessing.md)

## <a name="see-also"></a>Vedere anche

[Pre-elaborazione di makefile](../build/makefile-preprocessing.md)
