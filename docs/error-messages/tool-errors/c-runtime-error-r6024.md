---
title: C R6024 di errore di Runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6024
dev_langs:
- C++
helpviewer_keywords:
- R6024
ms.assetid: 0fb11c0f-9b81-4cab-81bd-4785742946a5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: df874ae68f786585e85a8bc1b01ea8d0ac831d87
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48861291"
---
# <a name="c-runtime-error-r6024"></a>R6024 di errore di Runtime C

spazio insufficiente per la tabella di OnExit

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema di memoria interna. Questo errore è causato generalmente da una condizione di memoria estremamente basse, o raramente, da un bug nel programma o al danneggiamento delle librerie Visual C++ che usa.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione oppure riavviare il computer per liberare memoria.
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Usare il **App e funzionalità** oppure **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare tutte le copie di Microsoft Visual C++ Redistributable.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica perché non vi è memoria disponibile per il `_onexit` o `atexit` (funzione). Questo errore è causato da una condizione di memoria insufficiente. È possibile pre-allocazione buffer all'avvio dell'app per facilitare il salvataggio dei dati utente e l'esecuzione di un'app pulita uscire in condizioni di memoria insufficiente.