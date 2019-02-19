---
title: Personalizzazione dell'elaborazione dalla riga di comando C
ms.date: 11/04/2016
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
ms.assetid: c20fa11d-b35b-4f3e-93b6-2cd5a1c3c993
ms.openlocfilehash: 1abdb0c104755efc86543ac4773359078e855999
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56147035"
---
# <a name="customizing-c-command-line-processing"></a>Personalizzazione dell'elaborazione dalla riga di comando C

Se il programma non accetta argomenti della riga di comando, è possibile salvare una piccola quantità di spazio eliminando l'utilizzo della routine di libreria che esegue l'elaborazione della riga di comando. Questa routine viene chiamata **_setargv** (o **_wsetargv** nell'ambiente a caratteri wide), come descritto in [Espansione di argomenti con caratteri jolly](../c-language/expanding-wildcard-arguments.md). Per eliminarne l'uso, definire una routine che non esegue alcuna operazione nel file che contiene la funzione **main** e denominarla **_setargv** (o **_wsetargv** nell'ambiente a caratteri wide). La chiamata a **_setargv** o a **_wsetargv** viene soddisfatta dalla definizione di **_setargv** o **_wsetargv** creata e la versione di libreria non viene caricata.

Analogamente, se non si accede mai alla tabella dell'ambiente tramite l'argomento `envp`, è possibile fornire una propria routine vuota da usare invece di **_setenvp** (o **_wsetenvp**), la routine di ambiente-elaborazione.

Se il programma effettua chiamate alla famiglia di routine **_exec** o **_spawn** nella libreria run-time del linguaggio C, non si deve eliminare la routine di ambiente-elaborazione, poiché questa procedura viene usata per passare un ambiente dal processo di generazione al nuovo processo.

## <a name="see-also"></a>Vedere anche

[Funzione main ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)
