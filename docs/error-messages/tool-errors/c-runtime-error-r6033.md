---
title: C R6033 di errore di Runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6033
dev_langs:
- C++
helpviewer_keywords:
- R6033
ms.assetid: f9cffdc9-81bd-4a64-a698-02762cbd82c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 64ff3069064b981ca1f4dd7b5c2d9a792cac8f26
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48861882"
---
# <a name="c-runtime-error-r6033"></a>R6033 di errore di Runtime C

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