---
title: Errore del compilatore C2567 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2567
dev_langs:
- C++
helpviewer_keywords:
- C2567
ms.assetid: 9c140ac9-7059-47e6-9ba1-e7939c8c0dc3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cb09aacc1b81e9f0e0c9c96a496eccc89a061f37
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46104240"
---
# <a name="compiler-error-c2567"></a>Errore del compilatore C2567

Impossibile aprire metadati in 'file', file possa avere stato eliminato o spostato

Un file di metadati a cui è stato fatto riferimento nell'origine (con `#using`) non trovato nella stessa directory da parte del processo di back-end del compilatore com'era il processo di front-end del compilatore. Visualizzare [# direttiva using](../../preprocessor/hash-using-directive-cpp.md) per altre informazioni.

Se esegue la compilazione con può dipendere C2567 **/c** su un computer e quindi eseguire una generazione di codice in fase di collegamento in un altro computer. Per altre informazioni, vedere [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md)).

Può inoltre indicare che il computer non era alcun maggiore quantità di memoria.

Per correggere questo errore, assicurarsi che il file di metadati è nello stesso percorso di directory per tutte le fasi del processo di compilazione.