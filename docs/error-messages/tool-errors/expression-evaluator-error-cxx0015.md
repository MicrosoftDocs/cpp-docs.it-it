---
title: Errore dell'analizzatore di espressioni CXX0015 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0015
dev_langs:
- C++
helpviewer_keywords:
- CXX0015
- CAN0015
ms.assetid: 35efaf77-d578-48d8-bfc5-fdeb2a46a8b5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1aa37a2cc7208063ce4cfa786de196842ab42b45
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46050816"
---
# <a name="expression-evaluator-error-cxx0015"></a>Errore dell‘analizzatore di espressioni CXX0015

espressione troppo complessa (overflow dello stack)

L'espressione immessa è troppo complesso o annidata troppo profondamente la quantità di spazio di archiviazione disponibile per l'analizzatore di espressioni C.

Overflow si verifica in genere a causa di troppe operazioni in sospeso.

Modificare l'espressione in modo che ogni componente dell'espressione può essere valutata quando viene rilevata, anziché dover attendere altre parti dell'espressione deve essere calcolato.

Suddividere l'espressione in più comandi.

Questo errore è identico all'errore CAN0015.