---
title: Errore dell'analizzatore di espressioni CXX0024 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0024
dev_langs:
- C++
helpviewer_keywords:
- CXX0024
- CAN0024
ms.assetid: eca6adbd-8ff2-4f51-a1cc-a2e9d5d0a47d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2816be7bb1d33757d9722d605d461ac6fb34fadd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46118195"
---
# <a name="expression-evaluator-error-cxx0024"></a>Errore dell‘analizzatore di espressioni CXX0024

operazione richiede un l-value

Per un'operazione che richiede un l-value è stata specificata un'espressione che restituisce un l-value.

Un valore l-value (le cosiddette perché viene visualizzato sul lato sinistro di un'istruzione di assegnazione) è un'espressione che fa riferimento a una posizione di memoria.

Ad esempio, `buffer[count]` è un l-value valido perché fa riferimento a una determinata posizione di memoria. Nel confronto logico `zed != 0` non è un l-value valido, perché restituisce TRUE o FALSE, non a un indirizzo di memoria.

Questo errore è identico all'errore CAN0024.