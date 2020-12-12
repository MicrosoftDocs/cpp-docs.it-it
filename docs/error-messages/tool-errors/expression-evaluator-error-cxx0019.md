---
description: "Altre informazioni su: errore dell'analizzatore di espressioni CXX0019"
title: Errore dell‘analizzatore di espressioni CXX0019
ms.date: 11/04/2016
f1_keywords:
- CXX0019
helpviewer_keywords:
- CXX0019
- CAN0019
ms.assetid: 4c6431fd-3310-4a61-934d-58b070b330fe
ms.openlocfilehash: 1caf4714c1fc719883ee889c14225e4f69e961a9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228235"
---
# <a name="expression-evaluator-error-cxx0019"></a>Errore dell‘analizzatore di espressioni CXX0019

cast di tipo non valido

L'analizzatore di espressioni C non è in grado di eseguire il cast del tipo come scritto.

Questo errore è identico a CAN0019.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il tipo specificato è sconosciuto.

1. Troppi livelli di tipi di puntatore. Ad esempio, il cast del tipo

    ```
    (char **)h_message
    ```

   non può essere valutato dall'analizzatore di espressioni C.
