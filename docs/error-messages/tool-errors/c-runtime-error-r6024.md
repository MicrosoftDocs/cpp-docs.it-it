---
description: 'Altre informazioni su: errore di runtime di C R6024'
title: Errore di runtime di C R6024
ms.date: 11/04/2016
f1_keywords:
- R6024
helpviewer_keywords:
- R6024
ms.assetid: 0fb11c0f-9b81-4cab-81bd-4785742946a5
ms.openlocfilehash: 165592e87eb38ab68c2435cc0a8ca53eb3bc16ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237595"
---
# <a name="c-runtime-error-r6024"></a>Errore di runtime di C R6024

spazio insufficiente per _onexit tabella/atexit

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema di memoria interna. Questo errore è in genere causato da una condizione di memoria molto bassa, o raramente, da un bug nel programma o dal danneggiamento delle librerie Visual C++ utilizzate.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare tutte le copie del Microsoft Visual C++ ridistribuibile.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica perché non è disponibile memoria per la `_onexit` `atexit` funzione o. Questo errore è causato da una condizione di memoria insufficiente. È possibile prendere in considerazione la pre-allocazione di buffer all'avvio dell'app per semplificare il salvataggio dei dati utente e la chiusura di un'app pulita in condizioni di memoria insufficiente.
