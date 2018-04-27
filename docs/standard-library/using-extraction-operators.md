---
title: Utilizzo degli operatori di estrazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- extraction operators [C++]
- '&gt;&gt; operator [C++], extraction operators'
- operators [C++], extraction
ms.assetid: a961e1a9-4897-41de-b210-89d5b2d051ae
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 26dec4b3bdad481e53e88ca2c91c82161de9bf81
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="using-extraction-operators"></a>Utilizzo degli operatori di estrazione

L'uso dell'operatore di estrazione (`>>`), che è preprogrammato per tutti i tipi di dati C++ standard, è il modo più semplice per ottenere byte da un oggetto del flusso di input.

Gli operatori di estrazione di input di testo formattato usano uno spazio vuoto per separare i valori di dati in ingresso. Questo non è pratico se un campo di testo contiene più parole o se i numeri sono separati da virgole. In questi casi usare come alternativa la funzione membro di input non formattato [istream::getline](../standard-library/basic-istream-class.md#getline) per leggere un blocco di testo con spazio vuoto incluso, quindi analizzare il blocco con funzioni speciali. Un'altra soluzione consiste nel derivare una classe di flusso di input con una funzione membro come `GetNextToken`, che è in grado di chiamare membri istream per estrarre e formattare dati di tipo carattere.

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)<br/>
