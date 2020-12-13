---
description: 'Altre informazioni su: errore irreversibile C1307'
title: Errore irreversibile C1307
ms.date: 11/04/2016
f1_keywords:
- C1307
helpviewer_keywords:
- C1307
ms.assetid: 6f77d3d4-ba8a-476c-b540-aff19eb4efc4
ms.openlocfilehash: 235d51f272669ba3b205eea5c3703b40dc1e9077
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177887"
---
# <a name="fatal-error-c1307"></a>Errore irreversibile C1307

programma modificato dopo la raccolta dei dati di profilo

Quando si usa [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), il linker ha rilevato un modulo di input che è stato ricompilato dopo/LTCG: PGINSTRUMENT e che il modulo è stato modificato nel punto in cui i dati del profilo esistenti non sono più rilevanti. Se, ad esempio, il grafico delle chiamate è stato modificato nel modulo ricompilato, il compilatore genererà C1307.

Per correggere l'errore, eseguire/LTCG: PGINSTRUMENT, ripetere tutte le esecuzioni di test ed eseguire/LTCG: PGOPTIMIZE. Se non è possibile eseguire/LTCG: PGINSTRUMENT e ripetere tutte le esecuzioni dei test, utilizzare/LTCG: PGUPDATE anziché/LTCG: PGOPTIMIZE per creare l'immagine ottimizzata.
