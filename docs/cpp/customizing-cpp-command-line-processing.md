---
title: Personalizzazione dell'elaborazione dalla riga di comando C++
ms.date: 11/04/2016
f1_keywords:
- _setenvp
- _setargv
helpviewer_keywords:
- command line [C++], processing
- command-line processing
- startup code, customizing command-line processing
- environment, environment-processing routine
- _setargv function
- command line [C++], processing arguments
- suppressing environment processing
- _setenvp function
ms.assetid: aae01cbb-892b-48b8-8e1f-34f22421f263
ms.openlocfilehash: 1541840521695658b5c4d809ba7e11767b1330a2
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857554"
---
# <a name="customizing-c-command-line-processing"></a>Personalizzazione dell'elaborazione dalla riga di comando C++

**Sezione specifica Microsoft**

Se il programma non accetta argomenti della riga di comando, è possibile salvare una piccola quantità di spazio eliminando l'utilizzo della routine di libreria che esegue l'elaborazione della riga di comando. Questa routine viene chiamata `_setargv` ed è descritta in [espansione con caratteri jolly](../cpp/wildcard-expansion.md). Per evitarne l'utilizzo, definire una routine che non esegue alcuna operazione nel file contenente la funzione `main` e denominarla `_setargv`. La chiamata a `_setargv` viene quindi soddisfatta dalla definizione di `_setargv`e la versione della libreria non è caricata.

Analogamente, se non si accede mai alla tabella dell'ambiente tramite l'argomento `envp`, è possibile fornire la propria routine vuota da usare al posto di `_setenvp`, la routine di elaborazione dell'ambiente. Analogamente alla funzione `_setargv`, `_setenvp` deve essere dichiarata come **extern "C"** .

Il programma potrebbe effettuare chiamate al `spawn` o `exec` famiglia di routine nella libreria di runtime del linguaggio C. In questo caso, non si deve eliminare la routine di elaborazione dell'ambiente, dato che questa routine viene utilizzata per passare un ambiente dal processo padre al processo figlio.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[main: avvio del programma](../cpp/main-program-startup.md)