---
title: Operatore charizing (#@) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- '#@'
dev_langs:
- C++
helpviewer_keywords:
- preprocessor, operators
- charizing operator
- '#@ preprocessor operator'
ms.assetid: dee03314-d27c-4063-965c-64756efbef22
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d86c49c8d7d0cda91ba2415167cc79c810a96b3d
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43895305"
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