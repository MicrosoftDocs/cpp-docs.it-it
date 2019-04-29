---
title: Errore dell‘analizzatore di espressioni CXX0024
ms.date: 11/04/2016
f1_keywords:
- CXX0024
helpviewer_keywords:
- CXX0024
- CAN0024
ms.assetid: eca6adbd-8ff2-4f51-a1cc-a2e9d5d0a47d
ms.openlocfilehash: 93f8389ed3959d5747e46c1234fd8d2eae0f1ae5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62359839"
---
# <a name="expression-evaluator-error-cxx0024"></a>Errore dell‘analizzatore di espressioni CXX0024

operazione richiede un l-value

Per un'operazione che richiede un l-value è stata specificata un'espressione che restituisce un l-value.

Un valore l-value (le cosiddette perché viene visualizzato sul lato sinistro di un'istruzione di assegnazione) è un'espressione che fa riferimento a una posizione di memoria.

Ad esempio, `buffer[count]` è un l-value valido perché fa riferimento a una determinata posizione di memoria. Nel confronto logico `zed != 0` non è un l-value valido, perché restituisce TRUE o FALSE, non a un indirizzo di memoria.

Questo errore è identico all'errore CAN0024.