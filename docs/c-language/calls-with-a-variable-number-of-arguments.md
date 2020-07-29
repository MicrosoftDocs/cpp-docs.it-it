---
title: Chiamate con un numero variabile di argomenti
ms.date: 11/04/2016
helpviewer_keywords:
- arguments [C++], function
- arguments [C++], variable number of
- VARARGS.H
- ellipsis (...), variable number of arguments
- STDARGS.H
- function calls, arguments
- '... ellipsis'
- function calls, variable number of arguments
ms.assetid: 8808fb26-4822-42f5-aba3-ac64b54e151b
ms.openlocfilehash: 9fee0c214b697126708ae36b4daee082ac0171e9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227933"
---
# <a name="calls-with-a-variable-number-of-arguments"></a>Chiamate con un numero variabile di argomenti

Un elenco di parametri parziale può essere terminato dalla notazione con i puntini di sospensione, una virgola seguita da tre punti (**, ...**), per indicare che potrebbero esserci altri argomenti passati alla funzione, ma su tali argomenti non viene specificata nessun'altra informazione. Su tali argomenti non viene eseguito il controllo dei tipi. Almeno un parametro deve precedere la notazione con i puntini di sospensione e tale notazione deve essere l'ultimo token nell'elenco di parametri. Senza la notazione con i puntini di sospensione, il comportamento di una funzione non è definito se riceve i parametri oltre a quelli dichiarati nell'elenco di parametri.

Per chiamare una funzione con un numero variabile di argomenti, specificare un numero qualsiasi di argomenti nella chiamata di funzione. Un esempio è rappresentato dalla funzione `printf` dalla libreria di runtime del linguaggio C. La chiamata di funzione deve includere un argomento per ogni nome del tipo dichiarato nell'elenco di parametri o nell'elenco dei tipi di argomento.

Tutti gli argomenti specificati nella chiamata di funzione vengono inseriti nello stack a meno che non **`__fastcall`** sia specificata la convenzione di chiamata. Il numero di parametri dichiarati per la funzione determina il numero di argomenti estratti dallo stack e assegnati ai parametri. L'utente deve recuperare tutti gli argomenti aggiuntivi dallo stack e determinare il numero di argomenti presenti. Il file STDARG.H contiene macro stile ANSI per accedere agli argomenti delle funzioni che accettano un numero variabile di argomenti. Inoltre, le macro stile XENIX in VARARGS.H sono ancora supportate.

Questa dichiarazione di esempio si riferisce a una funzione che chiama un numero variabile di argomenti:

```
int average( int first, ...);
```

## <a name="see-also"></a>Vedere anche

[Chiamate di funzione](../c-language/function-calls.md)
