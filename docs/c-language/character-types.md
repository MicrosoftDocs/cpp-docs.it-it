---
title: Tipi di caratteri
ms.date: 11/04/2016
helpviewer_keywords:
- character data types [C]
- types [C], character
ms.assetid: d3ca8cda-c0d7-43af-9472-697e8ef015ce
ms.openlocfilehash: 5b1306c70cdab423c8758bf3e6c9ac4e9d6507da
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226490"
---
# <a name="character-types"></a>Tipi di caratteri

Una costante carattere integer non preceduta dalla lettera **L** presenta il tipo **`int`** . Il valore di una costante carattere Integer che contiene un carattere singolo è il valore numerico del carattere interpretato come Integer. Ad esempio, il valore numerico del carattere `a` in formato decimale è 97 e in formato esadecimale 61.

Sintatticamente, una "costante carattere" wide "è una costante carattere preceduta dalla lettera **L**. Una costante a caratteri wide è **`wchar_t`** di tipo, un tipo Integer definito in STDDEF. File di intestazione H. Ad esempio:

```
char    schar =  'x';   /* A character constant          */
wchar_t wchar = L'x';   /* A wide-character constant for
                            the same character           */
```

Le costanti carattere "wide" hanno un'ampiezza di 16 bit e specificano i membri del set di caratteri di esecuzione esteso. Consentono di esprimere caratteri in alfabeti troppo grandi per essere rappresentati dal tipo **`char`** . Per altre informazioni sui caratteri wide, vedere [Caratteri multibyte e wide](../c-language/multibyte-and-wide-characters.md).

## <a name="see-also"></a>Vedere anche

[Costanti carattere C](../c-language/c-character-constants.md)
