---
title: Operatore charizing (#@)
ms.date: 08/29/2019
f1_keywords:
- '#@'
helpviewer_keywords:
- preprocessor, operators
- charizing operator
- '#@ preprocessor operator'
ms.assetid: dee03314-d27c-4063-965c-64756efbef22
ms.openlocfilehash: cb2a4e07287edf5ed2d0850ec7d870c8ef307879
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218540"
---
# <a name="charizing-operator-"></a>Operatore charizing (#@)

**Sezione specifica Microsoft**

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

Non è possibile usare le virgolette singole (`'`) con l'operatore charizing.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)
