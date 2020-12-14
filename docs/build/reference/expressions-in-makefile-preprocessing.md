---
description: 'Altre informazioni su: espressioni nella pre-elaborazione di makefile'
title: Espressioni nella pre-elaborazione di makefile
ms.date: 11/04/2016
helpviewer_keywords:
- preprocessing makefiles
- expressions [C++], makefile preprocessing
- makefiles, preprocessing
ms.assetid: 37f0f413-97e0-452c-a83f-3c9002c44c92
ms.openlocfilehash: 9b30900db493a2a87e0527e6f3c062185bb4ab43
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200793"
---
# <a name="expressions-in-makefile-preprocessing"></a>Espressioni nella pre-elaborazione di makefile

Il **. SE** o **! In caso contrario** `constantexpression` , se è costituito da costanti Integer (in notazione decimale o C-Language), costanti stringa o comandi. Usare le parentesi per raggruppare le espressioni. Le espressioni usano l'aritmetica di tipo long integer con segno C; i numeri sono nel formato a complemento a due bit a 32 bit nell'intervallo compreso tra-2147483648 e 2147483647.

Le espressioni possono usare operatori che agiscono sui valori costanti, i codici di uscita dai comandi, le stringhe, le macro e i percorsi del file System.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Operatori di pre-elaborazione di makefile](makefile-preprocessing-operators.md)

[Esecuzione di un programma durante la pre-elaborazione](executing-a-program-in-preprocessing.md)

## <a name="see-also"></a>Vedi anche

[Pre-elaborazione di makefile](makefile-preprocessing.md)
