---
description: 'Altre informazioni su: operatore charizing (# @)'
title: Operatore per la creazione di caratteri (#@)
ms.date: 08/29/2019
f1_keywords:
- '#@'
helpviewer_keywords:
- preprocessor, operators
- charizing operator
- '#@ preprocessor operator'
ms.assetid: dee03314-d27c-4063-965c-64756efbef22
ms.openlocfilehash: 6d04aa24c75153957bd6fd09824f4e94e36fd38f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300866"
---
# <a name="charizing-operator-"></a>Operatore per la creazione di caratteri (#@)

**Specifico di Microsoft**

L'operatore per la creazione di caratteri può essere utilizzato solo con argomenti di macro. Se `#@` precede un parametro formale nella definizione della macro, l'argomento effettivo viene racchiuso tra virgolette singole e considerato come un carattere quando la macro viene espansa. Ad esempio:

```cpp
#define makechar(x)  #@x
```

fa sì che l'istruzione

```cpp
a = makechar(b);
```

venga espansa a

```cpp
a = 'b';
```

Non è possibile usare le virgolette singole ( `'` ) con l'operatore charizing.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)
