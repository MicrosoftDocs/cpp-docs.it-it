---
title: 'Errore irreversibile U1100 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1100
helpviewer_keywords:
- U1100
ms.assetid: c71910a7-c581-4d9c-a38c-d2d557d56289
ms.openlocfilehash: a1474acab4ca4929fb4db4b7b78d7a96637a0745
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62298282"
---
# <a name="nmake-fatal-error-u1100"></a>Errore irreversibile U1100 di NMAKE 

la macro 'nomemacro' è valida nel contesto della regola batch 'rule'

Questo errore viene generato quando il blocco di comandi di una regola della modalità batch direttamente o indirettamente fa riferimento a una macro di file speciale che non è $<.

$< è l'unica macro valida per le regole in modalità batch.