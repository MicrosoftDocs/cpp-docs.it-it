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
ms.openlocfilehash: c9acc9b9872e096cd441b950632c341e975fecb8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62403529"
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