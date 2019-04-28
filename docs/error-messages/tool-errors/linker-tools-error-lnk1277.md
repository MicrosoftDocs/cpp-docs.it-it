---
title: Errore degli strumenti del linker LNK1277
ms.date: 11/04/2016
f1_keywords:
- LNK1277
helpviewer_keywords:
- LNK1277
ms.assetid: afca3de0-50cc-4140-af7a-13493a170835
ms.openlocfilehash: 137aa15dd9dad4b08d52af55da60a9cdf8b58055
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160549"
---
# <a name="linker-tools-error-lnk1277"></a>Errore degli strumenti del linker LNK1277

record dell'oggetto non trovato in pgd (filename)

Quando si usa [PGOPTIMZE](../../build/reference/ltcg-link-time-code-generation.md), il percorso di uno dei file di input def,. lib o obj è diverso dal percorso in cui sono stati trovati durante /LTCG: PGINSTRUMENT. Questo può essere spiegato da una modifica nella variabile di ambiente LIB dopo /LTCG: PGINSTRUMENT. Il percorso completo al file di input viene archiviato nel file con estensione pgd.

/LTCG: PGOPTIMIZE richiede che gli input sia identica alla fase di /LTCG: PGINSTRUMENT.

Per risolvere questo problema, effettuare una delle operazioni seguenti:

- Esecuzione di /LTCG: PGINSTRUMENT, ripristinare tutte le esecuzioni di test ed eseguire /LTCG: PGOPTIMIZE.

- Modificare la variabile di ambiente LIB in vigore al momento dell'esecuzione di /LTCG: PGINSTRUMENT.

Non è consigliabile risolvere LNK1277 con /LTCG: PGUPDATE.