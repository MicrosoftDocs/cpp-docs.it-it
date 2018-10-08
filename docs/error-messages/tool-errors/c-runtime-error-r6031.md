---
title: C R6031 di errore di Runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6031
dev_langs:
- C++
helpviewer_keywords:
- R6031
ms.assetid: 805d4cd1-cb2f-43fe-87e6-e7bd5b7329c5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4a0ccd608baa2765ae355a16b9a71afbf3695d8f
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48859783"
---
# <a name="c-runtime-error-r6031"></a>R6031 di errore di Runtime C

Tentativo di inizializzare la libreria CRT a più di una volta. Questo indica un bug nell'applicazione.

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché ha un problema interno. Ciò potrebbe dipendere bug nell'app o da un bug in un componente aggiuntivo o un'estensione che usa l'app.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Usare la **App e funzionalità** o **programmi e funzionalità** nella pagina il **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Usare il **App e funzionalità** oppure **programmi e funzionalità** nella pagina il **Pannello di controllo** per rimuovere, ripristinare o reinstallare eventuali programmi di componente aggiuntivo o l'estensione usati dall'app.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Cercare una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questa diagnostica indica che l'esecuzione di istruzioni MSIL sono stati durante il blocco del caricatore attivo. Per altre informazioni, vedere [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md).