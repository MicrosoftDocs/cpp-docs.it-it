---
title: Errore dell‘analizzatore di espressioni CXX0022
ms.date: 11/04/2016
f1_keywords:
- CXX0022
helpviewer_keywords:
- CXX0022
- CAN0022
ms.assetid: f6b299ac-a4ee-492c-bd9f-6fff005bc537
ms.openlocfilehash: 5858ce936acfb8b949351c9263f3a9379c73648e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195825"
---
# <a name="expression-evaluator-error-cxx0022"></a>Errore dell‘analizzatore di espressioni CXX0022

chiamata di funzione prima di _main

L'analizzatore di espressioni C non è in grado di valutare una funzione prima che il debugger abbia immesso la funzione **_main**. Il programma non viene inizializzato correttamente fino a quando non viene chiamato **_main** .

Questo errore è identico a CAN0022.
