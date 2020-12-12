---
description: 'Altre informazioni su: errore di runtime di C R6033'
title: Errore di runtime di C R6033
ms.date: 11/04/2016
f1_keywords:
- R6033
helpviewer_keywords:
- R6033
ms.assetid: f9cffdc9-81bd-4a64-a698-02762cbd82c9
ms.openlocfilehash: 377f872957af4ab4a844e7d93345a612a16c0490
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97206604"
---
# <a name="c-runtime-error-r6033"></a>Errore di runtime di C R6033

Tentativo di utilizzare codice MSIL da questo assembly durante l'inizializzazione del codice nativo. Indica un bug nell'applicazione. È molto probabile che il risultato della chiamata di una funzione compilata in MSIL (/CLR) da un costruttore nativo o da DllMain.

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema interno. Questo errore può essere causato da un bug nell'app o da un bug in un componente aggiuntivo o in un'estensione che usa.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per rimuovere, ripristinare o reinstallare eventuali estensioni o componenti aggiuntivi.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questa diagnostica indica che le istruzioni MSIL sono state eseguite durante il blocco del caricatore. Questo problema può verificarsi se è stato compilato C++ nativo usando il flag/CLR. Usare il flag/CLR solo nei moduli che contengono codice gestito. Per ulteriori informazioni, vedere [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).
