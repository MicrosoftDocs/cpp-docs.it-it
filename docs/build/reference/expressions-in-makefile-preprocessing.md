---
title: Espressioni nella pre-elaborazione di makefile
ms.date: 11/04/2016
helpviewer_keywords:
- preprocessing makefiles
- expressions [C++], makefile preprocessing
- makefiles, preprocessing
ms.assetid: 37f0f413-97e0-452c-a83f-3c9002c44c92
ms.openlocfilehash: 3d668492441eb2fc09be378dbebfe2b18c1b5753
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62271307"
---
# <a name="expressions-in-makefile-preprocessing"></a>Espressioni nella pre-elaborazione di makefile

Il **! IF** o **! Se INVECE** `constantexpression` consiste di costanti integer (in notazione decimale o del linguaggio C), le costanti di stringa o i comandi. Utilizzare le parentesi per raggruppare le espressioni. Le espressioni usare tipo C unsigned long integer aritmetico; i numeri sono in forma di 32 bit in complemento a due nell'intervallo - 2147483648 e 2147483647.

Le espressioni possono usare operatori che agiscono sui valori delle costanti, i codici di uscita dai comandi, le stringhe, macro e percorsi del file system.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Operatori di pre-elaborazione di makefile](makefile-preprocessing-operators.md)

[Esecuzione di un programma di pre-elaborazione](executing-a-program-in-preprocessing.md)

## <a name="see-also"></a>Vedere anche

[Pre-elaborazione di makefile](makefile-preprocessing.md)
