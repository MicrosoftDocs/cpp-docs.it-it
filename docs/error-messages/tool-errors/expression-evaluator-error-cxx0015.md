---
title: Errore dell‘analizzatore di espressioni CXX0015
ms.date: 11/04/2016
f1_keywords:
- CXX0015
helpviewer_keywords:
- CXX0015
- CAN0015
ms.assetid: 35efaf77-d578-48d8-bfc5-fdeb2a46a8b5
ms.openlocfilehash: 19cf47d6b7b718eb19b987bcc16854af3266069b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80196066"
---
# <a name="expression-evaluator-error-cxx0015"></a>Errore dell‘analizzatore di espressioni CXX0015

espressione troppo complessa (stack overflow)

L'espressione immessa è troppo complessa o annidata troppo profondamente per la quantità di spazio di archiviazione disponibile per l'analizzatore di espressioni C.

L'overflow si verifica in genere a causa di un numero eccessivo di calcoli in sospeso.

Ridisporre l'espressione in modo che ogni componente dell'espressione possa essere valutato mentre viene rilevato, anziché dover attendere che vengano calcolate altre parti dell'espressione.

Suddividere l'espressione in più comandi.

Questo errore è identico a CAN0015.
