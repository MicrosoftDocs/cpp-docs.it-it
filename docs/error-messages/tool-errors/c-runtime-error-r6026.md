---
title: C R6026 di errore di Runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6026
dev_langs:
- C++
helpviewer_keywords:
- R6026
ms.assetid: 7ea751f8-fc20-46ab-99ef-84c95ca0b6b4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e5b10075912ce4fde65699cf7b2d413c0bdd10f0
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860797"
---
# <a name="c-runtime-error-r6026"></a>R6026 di errore di Runtime C

spazio insufficiente per l'inizializzazione stdio

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema di memoria interna. Esistono diversi motivi possibili per questo errore, ma in genere è causato da una condizione di memoria estremamente bassa. Può essere causato anche da un bug nell'app, dal danneggiamento delle librerie Visual C++ che utilizza o da un driver.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione oppure riavviare il computer per liberare memoria.
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Se l'app funzionava in modo corretto prima di un'installazione recente di un'altra app o il driver, usare il **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per rimuovere il nuova app o il driver e provare di nuovo l'app.
> - Usare il **App e funzionalità** oppure **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare tutte le copie di Microsoft Visual C++ Redistributable.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica quando non è disponibile memoria sufficiente inizializzare il supporto dei / o standard nel runtime di C. Questo errore si verifica in genere all'avvio dell'app. Verificare che l'app e i driver e le DLL che vengono caricati non danneggino l'heap all'avvio.