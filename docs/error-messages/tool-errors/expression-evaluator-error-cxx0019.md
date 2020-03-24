---
title: Errore dell‘analizzatore di espressioni CXX0019
ms.date: 11/04/2016
f1_keywords:
- CXX0019
helpviewer_keywords:
- CXX0019
- CAN0019
ms.assetid: 4c6431fd-3310-4a61-934d-58b070b330fe
ms.openlocfilehash: 61646462eeba4918a4993b23f7f4b394083296ce
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195890"
---
# <a name="expression-evaluator-error-cxx0019"></a>Errore dell‘analizzatore di espressioni CXX0019

cast di tipo non valido

L'analizzatore di espressioni C non è in grado di eseguire il cast del tipo come scritto.

Questo errore è identico a CAN0019.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Il tipo specificato è sconosciuto.

1. Troppi livelli di tipi di puntatore. Ad esempio, il cast del tipo

    ```
    (char **)h_message
    ```

   non può essere valutato dall'analizzatore di espressioni C.
