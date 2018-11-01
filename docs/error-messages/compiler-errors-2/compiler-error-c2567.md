---
title: Errore del compilatore C2567
ms.date: 11/04/2016
f1_keywords:
- C2567
helpviewer_keywords:
- C2567
ms.assetid: 9c140ac9-7059-47e6-9ba1-e7939c8c0dc3
ms.openlocfilehash: eec529f43e23810843651888ef5722c5d0a0b2c9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50651945"
---
# <a name="compiler-error-c2567"></a>Errore del compilatore C2567

Impossibile aprire metadati in 'file', file possa avere stato eliminato o spostato

Un file di metadati a cui è stato fatto riferimento nell'origine (con `#using`) non trovato nella stessa directory da parte del processo di back-end del compilatore com'era il processo di front-end del compilatore. Visualizzare [# direttiva using](../../preprocessor/hash-using-directive-cpp.md) per altre informazioni.

Se esegue la compilazione con può dipendere C2567 **/c** su un computer e quindi eseguire una generazione di codice in fase di collegamento in un altro computer. Per altre informazioni, vedere [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md)).

Può inoltre indicare che il computer non era alcun maggiore quantità di memoria.

Per correggere questo errore, assicurarsi che il file di metadati è nello stesso percorso di directory per tutte le fasi del processo di compilazione.