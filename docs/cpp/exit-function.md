---
title: Funzione exit
ms.date: 11/04/2016
f1_keywords:
- Exit
helpviewer_keywords:
- exit function
ms.assetid: 26ce439f-81e2-431c-9ff8-a09a96f32127
ms.openlocfilehash: 82c9d00a49c8a080d893a51052739a0265ad0860
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50532561"
---
# <a name="exit-function"></a>Funzione exit

Il **uscire** funzione dichiarata nel file di inclusione standard \<STDLIB. h >, termina un programma C++.

Il valore fornito come argomento al **uscire** viene restituito al sistema operativo come codice di uscita o codice restituito del programma. Per convenzione, un codice restituito uguale a zero indica che il programma è stato completato correttamente.

> [!NOTE]
>  È possibile utilizzare le costanti EXIT_FAILURE ed EXIT_SUCCESS, definite in \<STDLIB. h >, per indicare esito positivo o negativo del programma.

Emissione di un **restituire** istruzione dal `main` funzione è equivalente alla chiamata il **uscire** funzione con il valore restituito come argomento.

Per altre informazioni, vedere [uscire](../c-runtime-library/reference/exit-exit-exit.md) nel *Run-Time Library Reference*.

## <a name="see-also"></a>Vedere anche

[Chiusura del programma](../cpp/program-termination.md)