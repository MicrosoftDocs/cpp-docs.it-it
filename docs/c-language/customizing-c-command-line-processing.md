---
title: Personalizzazione dell'elaborazione dalla riga di comando C
description: Come disattivare `main` l'argomento della funzione e la gestione dei parametri di ambiente nel codice di avvio del runtime.
ms.date: 11/19/2020
helpviewer_keywords:
- _spawn functions
- command line, processing
- command-line processing
- startup code, customizing command-line processing
- environment, environment-processing routine
- _setargv function
- command line, processing arguments
- suppressing environment processing
- _exec function
ms.openlocfilehash: fc306172491cd401caeecb3c87c0711f8b4ef911
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483295"
---
# <a name="customizing-c-command-line-processing"></a>Personalizzazione dell'elaborazione dalla riga di comando C

Se il programma non accetta argomenti della riga di comando, è possibile disattivare la routine di elaborazione da riga di comando per salvare una piccola quantità di spazio. Per evitarne l'uso, includere il *`noarg.obj`* file (per `main` e `wmain` ) nelle **`/link`** Opzioni del compilatore o nella **`LINK`** riga di comando.

Analogamente, se non si accede mai alla tabella dell'ambiente tramite l' *`envp`* argomento, è possibile disattivare la routine interna di elaborazione dell'ambiente. Per evitarne l'uso, includere il *`noenv.obj`* file (per `main` e `wmain` ) nelle **`/link`** Opzioni del compilatore o nella **`LINK`** riga di comando.

Per altre informazioni sulle opzioni del linker di avvio runtime, vedere [Opzioni di collegamento](../c-runtime-library/link-options.md).

Il programma potrebbe effettuare chiamate alla `spawn` `exec` famiglia di routine o nella libreria di runtime C. In tal caso, non è necessario disattivare la routine di elaborazione dell'ambiente, perché viene usata per passare un ambiente dal processo padre al processo figlio.

## <a name="see-also"></a>Vedere anche

[`main` esecuzione di funzioni e programmi](../c-language/main-function-and-program-execution.md)\
[Opzioni di collegamento](../c-runtime-library/link-options.md).
