---
title: 'Errore irreversibile U1100 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1100
helpviewer_keywords:
- U1100
ms.assetid: c71910a7-c581-4d9c-a38c-d2d557d56289
ms.openlocfilehash: a1474acab4ca4929fb4db4b7b78d7a96637a0745
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50666596"
---
# <a name="nmake-fatal-error-u1100"></a>Errore irreversibile U1100 di NMAKE 

la macro 'nomemacro' è valida nel contesto della regola batch 'rule'

Questo errore viene generato quando il blocco di comandi di una regola in modalità batch fa riferimento, direttamente o indirettamente, a una macro di file speciale diversa da $<.

$< è l'unica macro valida per le regole in modalità batch.