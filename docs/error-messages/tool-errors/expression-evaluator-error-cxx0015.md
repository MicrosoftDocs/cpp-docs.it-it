---
description: "Altre informazioni su: errore dell'analizzatore di espressioni CXX0015"
title: Errore dell‘analizzatore di espressioni CXX0015
ms.date: 11/04/2016
f1_keywords:
- CXX0015
helpviewer_keywords:
- CXX0015
- CAN0015
ms.assetid: 35efaf77-d578-48d8-bfc5-fdeb2a46a8b5
ms.openlocfilehash: c5d6e0ba5407646b1e3c835053f1f115dabf4fe7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228326"
---
# <a name="expression-evaluator-error-cxx0015"></a>Errore dell‘analizzatore di espressioni CXX0015

espressione troppo complessa (stack overflow)

L'espressione immessa è troppo complessa o annidata troppo profondamente per la quantità di spazio di archiviazione disponibile per l'analizzatore di espressioni C.

L'overflow si verifica in genere a causa di un numero eccessivo di calcoli in sospeso.

Ridisporre l'espressione in modo che ogni componente dell'espressione possa essere valutato mentre viene rilevato, anziché dover attendere che vengano calcolate altre parti dell'espressione.

Suddividere l'espressione in più comandi.

Questo errore è identico a CAN0015.
