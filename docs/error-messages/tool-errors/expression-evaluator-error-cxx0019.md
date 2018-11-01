---
title: Errore dell‘analizzatore di espressioni CXX0019
ms.date: 11/04/2016
f1_keywords:
- CXX0019
helpviewer_keywords:
- CXX0019
- CAN0019
ms.assetid: 4c6431fd-3310-4a61-934d-58b070b330fe
ms.openlocfilehash: 266e97f28cf0f27cb87e9743399c66aba87c0e8d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50658094"
---
# <a name="expression-evaluator-error-cxx0019"></a>Errore dell‘analizzatore di espressioni CXX0019

cast di tipo non valido

L'analizzatore di espressioni C non è possibile eseguire il cast come scritto del tipo.

Questo errore è identico all'errore CAN0019.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il tipo specificato è sconosciuto.

1. Si sono verificati troppi livelli di tipi di puntatore. Ad esempio, il cast del tipo

    ```
    (char **)h_message
    ```

   non possono essere valutate dall'analizzatore di espressioni C.