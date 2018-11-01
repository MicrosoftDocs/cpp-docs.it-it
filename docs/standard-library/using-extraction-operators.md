---
title: Utilizzo degli operatori di estrazione
ms.date: 11/04/2016
helpviewer_keywords:
- extraction operators [C++]
- '&gt;&gt; operator [C++], extraction operators'
- operators [C++], extraction
ms.assetid: a961e1a9-4897-41de-b210-89d5b2d051ae
ms.openlocfilehash: 1fc6ffd2f033dfe3df60260f734d93b79d6824f0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50626226"
---
# <a name="using-extraction-operators"></a>Utilizzo degli operatori di estrazione

L'uso dell'operatore di estrazione (`>>`), che è preprogrammato per tutti i tipi di dati C++ standard, è il modo più semplice per ottenere byte da un oggetto del flusso di input.

Gli operatori di estrazione di input di testo formattato usano uno spazio vuoto per separare i valori di dati in ingresso. Questo non è pratico se un campo di testo contiene più parole o se i numeri sono separati da virgole. In questi casi usare come alternativa la funzione membro di input non formattato [istream::getline](../standard-library/basic-istream-class.md#getline) per leggere un blocco di testo con spazio vuoto incluso, quindi analizzare il blocco con funzioni speciali. Un'altra soluzione consiste nel derivare una classe di flusso di input con una funzione membro come `GetNextToken`, che è in grado di chiamare membri istream per estrarre e formattare dati di tipo carattere.

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)<br/>
