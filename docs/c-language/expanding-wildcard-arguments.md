---
title: Espansione di argomenti con caratteri jolly
ms.date: 11/04/2016
helpviewer_keywords:
- asterisk wildcard
- question mark, wildcard
- expanding wildcard arguments
- wildcards, expanding
ms.assetid: 80a11c4b-0199-420e-a342-cf1d803be5bc
ms.openlocfilehash: f1fb964fe98223fb7187b83c7101027ed1f9cbea
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56149050"
---
# <a name="expanding-wildcard-arguments"></a>Espansione di argomenti con caratteri jolly

**Sezione specifica Microsoft**

Quando si esegue un programma C, è possibile usare uno dei due caratteri jolly, il punto interrogativo (?) e l'asterisco (*), per specificare gli argomenti del percorso e del nome del file nella riga di comando.

Per impostazione predefinita, i caratteri jolly non vengono espansi negli argomenti della riga di comando. È possibile sostituire la normale routine di caricamento `argv` del vettore dell'argomento con una versione in grado di espandere i caratteri jolly mediante il collegamento al file setargv.obj o wsetargv.obj. Se il programma usa una funzione `main` , effettuare il collegamento a setargv.obj. Se il programma usa una funzione `wmain` , effettuare il collegamento a wsetargv.obj. Il comportamento dei due file è equivalente.

Per effettuare il collegamento a setargv.obj o wsetargv.obj, usare l'opzione **/link** . Ad esempio:

**cl example.c /link setargv.obj**

I caratteri jolly vengono espansi nello stesso modo dei comandi del sistema operativo. Se non si ha familiarità con i caratteri jolly, vedere il manuale del sistema operativo.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Opzioni di collegamento](../c-runtime-library/link-options.md)<br/>
[Funzione main ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)
