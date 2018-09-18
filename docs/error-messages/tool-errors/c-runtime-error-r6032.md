---
title: C R6032 di errore di Runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6032
dev_langs:
- C++
helpviewer_keywords:
- R6032
ms.assetid: 52092a63-cc51-444a-bfc3-fad965a3558e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 43155f24411fb5206a03d607f0551c2d34294aeb
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024203"
---
# <a name="c-runtime-error-r6032"></a>R6032 di errore di Runtime C

Spazio insufficiente per informazioni sulle impostazioni locali

> [!NOTE]
>  Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema di memoria interna. Esistono diversi motivi possibili per questo errore, ma spesso è causato da una condizione di memoria estremamente bassa o da un bug nel programma.
>
>  Per risolvere questo errore, è possibile provare questi passaggi:
>
>  -   Chiudere le altre applicazioni in esecuzione oppure riavviare il computer per liberare memoria.
> -   Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> -   Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Il runtime mantiene le informazioni sulle impostazioni locali in ogni thread in modo che possa elaborare le chiamate alle funzioni locali. Se l'allocazione della memoria per ottenere queste informazioni non riesce, il runtime non può continuare perché troppo numerose funzionalità di base dipendono da esso.