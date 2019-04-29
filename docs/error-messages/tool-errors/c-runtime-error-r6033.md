---
title: Errore di runtime di C R6033
ms.date: 11/04/2016
f1_keywords:
- R6033
helpviewer_keywords:
- R6033
ms.assetid: f9cffdc9-81bd-4a64-a698-02762cbd82c9
ms.openlocfilehash: 39d8a20dacb0cdeb2a767529e9716bd476f406dc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400006"
---
# <a name="c-runtime-error-r6033"></a>Errore di runtime di C R6033

Provare a usare il codice MSIL da questo assembly durante l'inizializzazione del codice nativo. Questo indica un bug nell'applicazione. È molto probabile che il risultato della chiamata al metodo compilato dal codice MSIL (/ Common Language Runtime) (funzione) da un costruttore nativo o da DllMain.

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema interno. Questo errore può essere causato da un bug nell'app o da un bug in un componente aggiuntivo o di estensione che usa.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Usare il **App e funzionalità** oppure **programmi e funzionalità** nella pagina il **Pannello di controllo** per rimuovere, ripristinare o reinstallare tutte le estensioni o componenti aggiuntivi.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questa diagnostica indica che l'esecuzione di istruzioni MSIL sono stati durante il blocco del caricatore attivo. Ciò può verificarsi se sono stati compilati C++ nativo usando il flag /clr. Usare solo il flag /clr sui moduli contenenti codice gestito. Per altre informazioni, vedere [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md).