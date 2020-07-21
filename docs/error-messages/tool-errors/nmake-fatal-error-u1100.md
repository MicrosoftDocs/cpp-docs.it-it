---
title: 'Errore irreversibile U1100 di NMAKE '
description: Descrizione delle cause dell'errore irreversibile di Microsoft NMAKE U1100.
ms.date: 07/17/2020
f1_keywords:
- U1100
helpviewer_keywords:
- U1100
ms.assetid: c71910a7-c581-4d9c-a38c-d2d557d56289
ms.openlocfilehash: f908514469a6c9fdb53df3b2bded1b30bddc5a41
ms.sourcegitcommit: 00af3df3331854b23693ee844e5e7c10c8b05a90
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/20/2020
ms.locfileid: "86491388"
---
# <a name="nmake-fatal-error-u1100"></a>Errore irreversibile U1100 di NMAKE 

> la macro '*macro-Name*' non è valida nel contesto della regola batch '*rule-name*'

Questo errore viene generato da NMAKE quando il blocco di comandi di una regola in modalità batch fa riferimento direttamente o indirettamente a una macro di file speciale non `$<` .

`$<`è l'unica macro consentita per le regole in modalità batch.

Per altre informazioni sulle macro NMAKE nelle regole batch, vedere [macro NMAKE speciali](../../build/reference/special-nmake-macros.md).
