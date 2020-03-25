---
title: Errore irreversibile C1307
ms.date: 11/04/2016
f1_keywords:
- C1307
helpviewer_keywords:
- C1307
ms.assetid: 6f77d3d4-ba8a-476c-b540-aff19eb4efc4
ms.openlocfilehash: c7eb90c8e17408f6898ef7ff1a9d9e5efcafb4fa
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80203346"
---
# <a name="fatal-error-c1307"></a>Errore irreversibile C1307

programma modificato dopo la raccolta dei dati di profilo

Quando si usa [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), il linker ha rilevato un modulo di input che è stato ricompilato dopo/LTCG: PGINSTRUMENT e che il modulo è stato modificato nel punto in cui i dati del profilo esistenti non sono più rilevanti. Se, ad esempio, il grafico delle chiamate è stato modificato nel modulo ricompilato, il compilatore genererà C1307.

Per correggere l'errore, eseguire/LTCG: PGINSTRUMENT, ripetere tutte le esecuzioni di test ed eseguire/LTCG: PGOPTIMIZE. Se non è possibile eseguire/LTCG: PGINSTRUMENT e ripetere tutte le esecuzioni dei test, utilizzare/LTCG: PGUPDATE anziché/LTCG: PGOPTIMIZE per creare l'immagine ottimizzata.
