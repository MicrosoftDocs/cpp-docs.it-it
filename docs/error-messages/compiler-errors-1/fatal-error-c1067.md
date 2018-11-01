---
title: Errore irreversibile C1067
ms.date: 11/04/2016
f1_keywords:
- C1067
helpviewer_keywords:
- C1067
ms.assetid: e2c94be6-4573-4571-aac9-73d657fe9f96
ms.openlocfilehash: f8fe301e25d9ecb5cc67397f9537e0bbd86c0627
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50595624"
---
# <a name="fatal-error-c1067"></a>Errore irreversibile C1067

limite del compilatore: superato limite di 64 KB per dimensioni di un record di tipo

Questo errore può verificarsi se un simbolo è un nome decorato superiore a 247 caratteri.  Per risolvere, abbreviare il nome del simbolo.

Quando il compilatore genera le informazioni di debug, il simulatore genera record di tipo per definire i tipi individuati nel codice sorgente.  Ad esempio, i record di tipo includono strutture semplici ed elenchi di argomenti delle funzioni.  Alcuni di questi record di tipo possono essere elenchi di grandi dimensioni.

È previsto un limite di 64 KB per le dimensioni di qualsiasi tipo di record.  Se si supera questo limite di 64 KB, quindi si verificherà questo errore.

C1067 può verificarsi anche se sono presenti più simboli con nomi lunghi o se una classe, struttura o unione con troppi membri.