---
title: Errore dell‘analizzatore di espressioni CXX0024
ms.date: 11/04/2016
f1_keywords:
- CXX0024
helpviewer_keywords:
- CXX0024
- CAN0024
ms.assetid: eca6adbd-8ff2-4f51-a1cc-a2e9d5d0a47d
ms.openlocfilehash: 525210090b0a4c2966f2e1432f85fd4bb6a8156d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195760"
---
# <a name="expression-evaluator-error-cxx0024"></a>Errore dell‘analizzatore di espressioni CXX0024

per l'operazione è necessario l-value

Un'espressione che non restituisce un l-value è stata specificata per un'operazione che richiede un l-value.

Un l-value (chiamato in quanto viene visualizzato sul lato sinistro di un'istruzione di assegnazione) è un'espressione che fa riferimento a una posizione di memoria.

Ad esempio, `buffer[count]` è un l-value valido perché fa riferimento a una posizione di memoria specifica. Il `zed != 0` di confronto logico non è un l-value valido perché restituisce TRUE o FALSE, non a un indirizzo di memoria.

Questo errore è identico a CAN0024.
