---
description: 'Altre informazioni su: uso degli operatori di estrazione'
title: Utilizzo degli operatori di estrazione
ms.date: 11/04/2016
helpviewer_keywords:
- extraction operators [C++]
- '&gt;&gt; operator [C++], extraction operators'
- operators [C++], extraction
ms.assetid: a961e1a9-4897-41de-b210-89d5b2d051ae
ms.openlocfilehash: 11115ed9d7f83b5e4d8cefe088c638afe8d95f38
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97153577"
---
# <a name="using-extraction-operators"></a>Utilizzo degli operatori di estrazione

L'uso dell'operatore di estrazione (`>>`), che è preprogrammato per tutti i tipi di dati C++ standard, è il modo più semplice per ottenere byte da un oggetto del flusso di input.

Gli operatori di estrazione di input di testo formattato usano uno spazio vuoto per separare i valori di dati in ingresso. Questo non è pratico se un campo di testo contiene più parole o se i numeri sono separati da virgole. In questi casi usare come alternativa la funzione membro di input non formattato [istream::getline](../standard-library/basic-istream-class.md#getline) per leggere un blocco di testo con spazio vuoto incluso, quindi analizzare il blocco con funzioni speciali. Un'altra soluzione consiste nel derivare una classe di flusso di input con una funzione membro come `GetNextToken`, che è in grado di chiamare membri istream per estrarre e formattare dati di tipo carattere.

## <a name="see-also"></a>Vedi anche

[Flussi di input](../standard-library/input-streams.md)
