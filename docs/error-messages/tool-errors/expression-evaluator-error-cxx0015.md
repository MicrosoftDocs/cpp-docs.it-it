---
title: Errore dell‘analizzatore di espressioni CXX0015
ms.date: 11/04/2016
f1_keywords:
- CXX0015
helpviewer_keywords:
- CXX0015
- CAN0015
ms.assetid: 35efaf77-d578-48d8-bfc5-fdeb2a46a8b5
ms.openlocfilehash: f73aef18563426d28a81b92b3c37d1b7e345d0d3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50662046"
---
# <a name="expression-evaluator-error-cxx0015"></a>Errore dell‘analizzatore di espressioni CXX0015

espressione troppo complessa (overflow dello stack)

L'espressione immessa è troppo complesso o annidata troppo profondamente la quantità di spazio di archiviazione disponibile per l'analizzatore di espressioni C.

Overflow si verifica in genere a causa di troppe operazioni in sospeso.

Modificare l'espressione in modo che ogni componente dell'espressione può essere valutata quando viene rilevata, anziché dover attendere altre parti dell'espressione deve essere calcolato.

Suddividere l'espressione in più comandi.

Questo errore è identico all'errore CAN0015.