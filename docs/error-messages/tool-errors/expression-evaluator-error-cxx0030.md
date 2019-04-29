---
title: Errore dell‘analizzatore di espressioni CXX0030
ms.date: 11/04/2016
f1_keywords:
- CXX0030
helpviewer_keywords:
- CAN0030
- CXX0030
ms.assetid: ada8b48c-09c8-49bf-ae23-313ed663c4fe
ms.openlocfilehash: 1e52b238905fba5c310a89377b81548a1c6b5784
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62359800"
---
# <a name="expression-evaluator-error-cxx0030"></a>Errore dell‘analizzatore di espressioni CXX0030

espressione non analizzabile.

L'analizzatore di espressioni del debugger non è stato possibile ottenere un valore per l'espressione così come scritta. Una causa probabile è che l'espressione fa riferimento alla memoria esterna allo spazio degli indirizzi del programma (dereferenzia un puntatore null è un esempio). Windows non consente l'accesso alla memoria esterna allo spazio degli indirizzi del programma.

È possibile riscrivere l'espressione utilizzando le parentesi per controllare l'ordine di valutazione.

Questo errore è identico all'errore CAN0030.