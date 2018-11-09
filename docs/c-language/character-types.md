---
title: Tipi di carattere
ms.date: 11/04/2016
helpviewer_keywords:
- character data types [C]
- types [C], character
ms.assetid: d3ca8cda-c0d7-43af-9472-697e8ef015ce
ms.openlocfilehash: 7ca87ec1cb11f8a00beb6f5eb670b3e292bb1f70
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50619336"
---
# <a name="character-types"></a>Tipi di carattere

Una costante carattere Integer non preceduta dalla lettera **L** presenta il tipo `int`. Il valore di una costante carattere Integer che contiene un carattere singolo è il valore numerico del carattere interpretato come Integer. Ad esempio, il valore numerico del carattere `a` in formato decimale è 97 e in formato esadecimale 61.

Da un punto di vista sintattico una costante carattere "wide" è una costante carattere preceduta dalla lettera **L**. Una costante carattere "wide" presenta il tipo `wchar_t`, un tipo Integer definito nel file di intestazione STDDEF.H. Ad esempio:

```
char    schar =  'x';   /* A character constant          */
wchar_t wchar = L'x';   /* A wide-character constant for
                            the same character           */
```

Le costanti carattere "wide" hanno un'ampiezza di 16 bit e specificano i membri del set di caratteri di esecuzione esteso. Consentono di esprimere in alfabeti caratteri che sono troppo grandi per essere rappresentati dal tipo `char`. Per altre informazioni sui caratteri wide, vedere [Caratteri multibyte e wide](../c-language/multibyte-and-wide-characters.md).

## <a name="see-also"></a>Vedere anche

[Costanti carattere C](../c-language/c-character-constants.md)