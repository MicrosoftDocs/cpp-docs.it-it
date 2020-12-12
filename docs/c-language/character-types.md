---
description: 'Altre informazioni su: tipi di carattere'
title: Tipi di caratteri
ms.date: 11/04/2016
helpviewer_keywords:
- character data types [C]
- types [C], character
ms.assetid: d3ca8cda-c0d7-43af-9472-697e8ef015ce
ms.openlocfilehash: 270c1831422d81fe88519a2aee3de8306727d0d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293534"
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

## <a name="see-also"></a>Vedi anche

[Costanti carattere C](../c-language/c-character-constants.md)
