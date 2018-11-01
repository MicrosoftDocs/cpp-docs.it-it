---
title: Errore dell‘analizzatore di espressioni CXX0022
ms.date: 11/04/2016
f1_keywords:
- CXX0022
helpviewer_keywords:
- CXX0022
- CAN0022
ms.assetid: f6b299ac-a4ee-492c-bd9f-6fff005bc537
ms.openlocfilehash: ac726c60d30a13d6458636d31dda6a8fb2cbd02d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50623288"
---
# <a name="expression-evaluator-error-cxx0022"></a>Errore dell‘analizzatore di espressioni CXX0022

chiamata di funzione prima Main

L'analizzatore di espressioni C non è possibile valutare una funzione di prima che il debugger ha immesso la funzione **Main**. Il programma non viene inizializzato correttamente finché **Main** è stato chiamato.

Questo errore è identico all'errore CAN0022.