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
ms.openlocfilehash: 7dc68723e07d7ef8c3b9d9f6ad913466b7ff27e4
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48859718"
---
# <a name="c-runtime-error-r6032"></a>R6032 di errore di Runtime C

Spazio insufficiente per informazioni sulle impostazioni locali

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema di memoria interna. Esistono diversi motivi possibili per questo errore, ma spesso è causato da una condizione di memoria estremamente bassa o da un bug nel programma.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione oppure riavviare il computer per liberare memoria.
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Il runtime mantiene le informazioni sulle impostazioni locali in ogni thread in modo che possa elaborare le chiamate alle funzioni locali. Se l'allocazione della memoria per ottenere queste informazioni non riesce, il runtime non può continuare perché troppo numerose funzionalità di base dipendono da esso.