---
title: Strumenti del linker LNK1277 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1277
dev_langs:
- C++
helpviewer_keywords:
- LNK1277
ms.assetid: afca3de0-50cc-4140-af7a-13493a170835
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 542c48bd23b3f84ab301404987c77d964f51823e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46082526"
---
# <a name="linker-tools-error-lnk1277"></a>Errore degli strumenti del linker LNK1277

record dell'oggetto non trovato in pgd (filename)

Quando si usa [PGOPTIMZE](../../build/reference/ltcg-link-time-code-generation.md), il percorso di uno dei file di input def,. lib o obj è diverso dal percorso in cui sono stati trovati durante /LTCG: PGINSTRUMENT. Questo può essere spiegato da una modifica nella variabile di ambiente LIB dopo /LTCG: PGINSTRUMENT. Il percorso completo al file di input viene archiviato nel file con estensione pgd.

/LTCG: PGOPTIMIZE richiede che gli input sia identica alla fase di /LTCG: PGINSTRUMENT.

Per risolvere questo problema, effettuare una delle operazioni seguenti:

- Esecuzione di /LTCG: PGINSTRUMENT, ripristinare tutte le esecuzioni di test ed eseguire /LTCG: PGOPTIMIZE.

- Modificare la variabile di ambiente LIB in vigore al momento dell'esecuzione di /LTCG: PGINSTRUMENT.

Non è consigliabile risolvere LNK1277 con /LTCG: PGUPDATE.