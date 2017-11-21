---
title: Utilizzo degli operatori di estrazione | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- extraction operators [C++]
- '&gt;&gt; operator [C++], extraction operators'
- operators [C++], extraction
ms.assetid: a961e1a9-4897-41de-b210-89d5b2d051ae
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: ae55b0dfed94383ab4d70700a4f2b39ff8e8ea62
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="using-extraction-operators"></a>Utilizzo degli operatori di estrazione
L'uso dell'operatore di estrazione (`>>`), che è preprogrammato per tutti i tipi di dati C++ standard, è il modo più semplice per ottenere byte da un oggetto del flusso di input.  
  
 Gli operatori di estrazione di input di testo formattato usano uno spazio vuoto per separare i valori di dati in ingresso. Questo non è pratico se un campo di testo contiene più parole o se i numeri sono separati da virgole. In questi casi usare come alternativa la funzione membro di input non formattato [istream::getline](../standard-library/basic-istream-class.md#getline) per leggere un blocco di testo con spazio vuoto incluso, quindi analizzare il blocco con funzioni speciali. Un'altra soluzione consiste nel derivare una classe di flusso di input con una funzione membro come `GetNextToken`, che è in grado di chiamare membri istream per estrarre e formattare dati di tipo carattere.  
  
## <a name="see-also"></a>Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)

