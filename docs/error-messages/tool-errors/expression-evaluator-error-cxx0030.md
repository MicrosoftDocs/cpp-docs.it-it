---
description: "Altre informazioni su: errore dell'analizzatore di espressioni CXX0030"
title: Errore dell‘analizzatore di espressioni CXX0030
ms.date: 11/04/2016
f1_keywords:
- CXX0030
helpviewer_keywords:
- CAN0030
- CXX0030
ms.assetid: ada8b48c-09c8-49bf-ae23-313ed663c4fe
ms.openlocfilehash: d9679d260ce81c2cb9bb8be4c082ffe8c1cfc6a9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237427"
---
# <a name="expression-evaluator-error-cxx0030"></a>Errore dell‘analizzatore di espressioni CXX0030

espressione non valutabile

L'analizzatore di espressioni del debugger non è riuscito a ottenere un valore per l'espressione come scritto. Una causa probabile è che l'espressione fa riferimento a una memoria esterna allo spazio degli indirizzi del programma (la dereferenziazione di un puntatore null è un esempio). Windows non consente l'accesso alla memoria esterna allo spazio degli indirizzi del programma.

Potrebbe essere necessario riscrivere l'espressione utilizzando le parentesi per controllare l'ordine di valutazione.

Questo errore è identico a CAN0030.
