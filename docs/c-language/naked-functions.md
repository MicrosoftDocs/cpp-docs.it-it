---
title: Funzioni naked
ms.date: 11/04/2016
helpviewer_keywords:
- naked functions
- functions [C++], naked
- prolog code
- epilog code
ms.assetid: 2543c8af-00d4-4a2a-8a87-e746da1f9929
ms.openlocfilehash: b752dd6fa378bc1275e8a7da90420aa2b8247e4e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62232815"
---
# <a name="naked-functions"></a>Funzioni naked

**Specifico di Microsoft**

L'attributo della classe di archiviazione `naked` è un'estensione specifica di Microsoft per il linguaggio C. Per le funzioni dichiarate con l'attributo della classe di archiviazione `naked`, il compilatore genera codice senza codice di epilogo e di prologo. È possibile utilizzare questa funzionalità per scrivere le proprie sequenze di codice di epilogo o di prologo utilizzando codice assembler inline. Le funzioni con attributo naked sono particolarmente utili nella scrittura di driver di dispositivi virtuali.

Poiché l'attributo `naked` è pertinente solo per la definizione di una funzione e non è un modificatore di tipo, le funzioni naked usano la sintassi degli attributi estesa, descritta in [Attributi di classi di archiviazione estesi](../c-language/c-extended-storage-class-attributes.md).

Nell'esempio seguente viene definita una funzione con l'attributo `naked`:

```
__declspec( naked ) int func( formal_parameters )
{
   /* Function body */
}
```

Oppure, in alternativa:

```
#define Naked   __declspec( naked )

Naked int func( formal_parameters )
{
   /* Function body */
}
```

L'attributo `naked` influisce solo sulla natura della generazione di codice del compilatore per le sequenze di prologo ed epilogo della funzione. Tale attributo non influisce sul codice generato per chiamare tali funzioni. Di conseguenza, l'attributo `naked` non è considerato come parte del tipo di funzione e i puntatori alla funzione non possono avere l'attributo `naked`. Inoltre, l'attributo `naked` non può essere applicato a una definizione dei dati. Il codice seguente genera ad esempio errori:

```
__declspec( naked ) int i;  /* Error--naked attribute not */
                            /* permitted on data declarations. */
```

L'attributo `naked` è rilevante solo per la definizione della funzione e non può essere specificato nel prototipo della funzione. La dichiarazione seguente genera un errore del compilatore:

```
__declspec( naked ) int func();   /* Error--naked attribute not */
                     /* permitted on function declarations.    */   \
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Definizioni di funzioni C](../c-language/c-function-definitions.md)
