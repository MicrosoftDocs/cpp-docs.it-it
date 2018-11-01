---
title: Operatore charizing (#@)
ms.date: 11/04/2016
f1_keywords:
- '#@'
helpviewer_keywords:
- preprocessor, operators
- charizing operator
- '#@ preprocessor operator'
ms.assetid: dee03314-d27c-4063-965c-64756efbef22
ms.openlocfilehash: 7259487a3289173bc77517c8c616638c370041c4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50568340"
---
# <a name="charizing-operator-"></a>Operatore charizing (#@)
**Sezione specifica Microsoft**

L'operatore per la creazione di caratteri può essere utilizzato solo con argomenti di macro. Se `#@` precede un parametro formale nella definizione della macro, l'argomento effettivo è racchiuso tra virgolette singole e considerato come un carattere quando la macro viene espansa. Ad esempio:

```
#define makechar(x)  #@x
```

fa sì che l'istruzione

```
a = makechar(b);
```

venga espansa a

```
a = 'b';
```

Il carattere della virgoletta singola non può essere utilizzato con l'operatore per la creazione di caratteri.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)