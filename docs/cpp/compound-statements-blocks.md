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
ms.openlocfilehash: 60d7e88c5ccccac5a1d967a91c8a82dd954d9afc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81337336"
---
# <a name="compound-statements-blocks"></a>Istruzioni composte (blocchi)

Un'istruzione composta è costituita da zero o più istruzioni racchiuse tra parentesi graffe (** **). Un'istruzione composta può essere utilizzata ovunque sia prevista un'istruzione. Le istruzioni composte vengono in genere definite blocchi.

## <a name="syntax"></a>Sintassi

```
{ [ statement-list ] }
```

## <a name="remarks"></a>Osservazioni

L'esempio seguente usa un'istruzione composta come parte *dell'istruzione* **if** (vedere [L'istruzione if](../cpp/if-else-statement-cpp.md) per informazioni dettagliate sulla sintassi):

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
> Poiché una dichiarazione è un'istruzione, una dichiarazione può essere una delle istruzioni *nell'elenco di istruzioni*. Di conseguenza, i nomi dichiarati in un'istruzione composta, ma non esplicitamente dichiarati come statici, hanno ambito e, per gli oggetti, durata locale. Vedere [Ambito](../cpp/scope-visual-cpp.md) per informazioni dettagliate sul trattamento dei nomi con ambito locale.

## <a name="see-also"></a>Vedere anche

[Panoramica delle dichiarazioni di C](../cpp/overview-of-cpp-statements.md)
