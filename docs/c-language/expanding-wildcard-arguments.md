---
title: Espansione di argomenti con caratteri jolly
description: Come usare un'opzione del linker per elaborare gli argomenti della riga di comando con caratteri jolly nei programmi.
ms.date: 11/20/2020
helpviewer_keywords:
- asterisk wildcard
- question mark, wildcard
- expanding wildcard arguments
- wildcards, expanding
ms.openlocfilehash: b847a5dd8af577a4e30edcd9bc7fc34add296c17
ms.sourcegitcommit: b02c61667ff7f38e7add266d0aabd8463f2dbfa1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/23/2020
ms.locfileid: "95483308"
---
# <a name="expanding-wildcard-arguments"></a>Espansione di argomenti con caratteri jolly

L'espansione di argomenti con caratteri jolly è specifica di Microsoft.

Quando si esegue un programma C, è possibile usare uno dei due caratteri jolly, il punto interrogativo ( **`?`** ) e l'asterisco ( **`*`** ) per specificare gli argomenti del percorso e del nome del file nella riga di comando.

Per impostazione predefinita, i caratteri jolly non vengono espansi negli argomenti della riga di comando. È possibile sostituire la normale routine di caricamento del vettore dell'argomento `argv` con una versione che espande i caratteri jolly mediante il collegamento al *`setargv.obj`* *`wsetargv.obj`* file o. Se il programma usa una `main` funzione, collegarsi con *`setargv.obj`* . Se il programma usa una `wmain` funzione, collegarsi con *`wsetargv.obj`* . Il comportamento dei due file è equivalente. 

Per eseguire il collegamento con *`setargv.obj`* o *`wsetargv.obj`* , utilizzare l' **`/link`** opzione. Ad esempio:

**`cl example.c /link setargv.obj`**

I caratteri jolly vengono espansi nello stesso modo dei comandi del sistema operativo.

## <a name="see-also"></a>Vedere anche

[Opzioni di collegamento](../c-runtime-library/link-options.md)\
[`main` esecuzione di funzioni e programmi](../c-language/main-function-and-program-execution.md)
