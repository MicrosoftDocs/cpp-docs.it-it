---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1277'
title: Errore degli strumenti del linker LNK1277
ms.date: 11/04/2016
f1_keywords:
- LNK1277
helpviewer_keywords:
- LNK1277
ms.assetid: afca3de0-50cc-4140-af7a-13493a170835
ms.openlocfilehash: 82a71878d30088bd018c4e54216d53228efe949d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193734"
---
# <a name="linker-tools-error-lnk1277"></a>Errore degli strumenti del linker LNK1277

Impossibile trovare il record dell'oggetto in PGD (filename)

Quando si usa [/LTCG: PGOPTIMZE](../../build/reference/ltcg-link-time-code-generation.md), il percorso di uno dei file di input. lib, def o. obj è diverso dal percorso in cui sono stati trovati durante/LTCG: PGINSTRUMENT. Questo può essere spiegato da una modifica nella variabile di ambiente LIB dopo/LTCG: PGINSTRUMENT. Il percorso completo dei file di input è archiviato nel file PGD.

/LTCG: PGOPTIMIZE richiede che gli input siano identici alla fase/LTCG: PGINSTRUMENT.

Per risolvere il problema, eseguire una delle operazioni seguenti:

- Eseguire/LTCG: PGINSTRUMENT, ripetere tutte le esecuzioni di test ed eseguire/LTCG: PGOPTIMIZE.

- Modificare la variabile di ambiente LIB in cui si trovava durante l'esecuzione di/LTCG: PGINSTRUMENT.

Non è consigliabile aggirare LNK1277 usando/LTCG: PGUPDATE.
