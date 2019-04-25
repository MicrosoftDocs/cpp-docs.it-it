---
title: Istruzioni composte (blocchi)
ms.date: 11/04/2016
f1_keywords:
- '}'
- '{'
helpviewer_keywords:
- blocks, about blocks
- compound statements
ms.assetid: 23855939-7430-498e-8936-0c70055ea701
ms.openlocfilehash: 6aef2a0b5716ab501fabe80f0dda15080abe3ff5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62154864"
---
# <a name="compound-statements-blocks"></a>Istruzioni composte (blocchi)

Un'istruzione composta è costituita da zero o più istruzioni racchiuse tra parentesi graffe (**{}**). Un'istruzione composta può essere utilizzata ovunque sia prevista un'istruzione. Le istruzioni composte vengono in genere definite blocchi.

## <a name="syntax"></a>Sintassi

```
{ [ statement-list ] }
```

## <a name="remarks"></a>Note

L'esempio seguente usa un'istruzione composta come il *istruzione* in parte il **se** istruzione (vedere [if istruzione](../cpp/if-else-statement-cpp.md) per informazioni dettagliate sulla sintassi):

```cpp
if( Amount > 100 )
{
    cout << "Amount was too large to handle\n";
    Alert();
}
else
{
    Balance -= Amount;
}
```

> [!NOTE]
>  Poiché una dichiarazione è un'istruzione, può essere una delle istruzioni in una dichiarazione di *elenco di istruzioni*. Di conseguenza, i nomi dichiarati in un'istruzione composta, ma non esplicitamente dichiarati come statici, hanno ambito e, per gli oggetti, durata locale. Visualizzare [ambito](../cpp/scope-visual-cpp.md) per informazioni dettagliate sul trattamento dei nomi con ambito locale.

## <a name="see-also"></a>Vedere anche

[Panoramica delle istruzioni C++](../cpp/overview-of-cpp-statements.md)