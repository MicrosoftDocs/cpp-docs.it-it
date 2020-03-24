---
title: Errore irreversibile U1100 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1100
helpviewer_keywords:
- U1100
ms.assetid: c71910a7-c581-4d9c-a38c-d2d557d56289
ms.openlocfilehash: d5c62c1465bbb6463afbac2bc9ad5f4290473471
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193264"
---
# <a name="nmake-fatal-error-u1100"></a>Errore irreversibile U1100 di NMAKE

la macro ' macroname ' non è valida nel contesto della regola batch ' rule '

Questo errore viene generato da NMAKE quando il blocco di comandi di una regola in modalità batch fa riferimento direttamente o indirettamente a una macro di file speciale che non è $ <.

$ < è l'unica macro consentita per le regole in modalità batch.
