---
description: 'Altre informazioni su: istruzioni composte (blocchi)'
title: Istruzioni composte (blocchi)
ms.date: 11/04/2016
f1_keywords:
- '}'
- '{'
helpviewer_keywords:
- blocks, about blocks
- compound statements
ms.assetid: 23855939-7430-498e-8936-0c70055ea701
ms.openlocfilehash: 7defb11a30466949d5a9ca5e86ca1e865fbfe4fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318013"
---
# <a name="compound-statements-blocks"></a>Istruzioni composte (blocchi)

Un'istruzione composta è costituita da zero o più istruzioni racchiuse tra parentesi graffe (**{}**). Un'istruzione composta può essere utilizzata ovunque sia prevista un'istruzione. Le istruzioni composte vengono in genere definite blocchi.

## <a name="syntax"></a>Sintassi

```
{ [ statement-list ] }
```

## <a name="remarks"></a>Osservazioni

Nell'esempio seguente viene utilizzata un'istruzione composta come *parte dell'istruzione* dell' **`if`** istruzione. per informazioni dettagliate sulla sintassi, vedere [l'istruzione If](../cpp/if-else-statement-cpp.md) :

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
> Poiché una dichiarazione è un'istruzione, una dichiarazione può essere una delle istruzioni nell' *elenco* delle istruzioni. Di conseguenza, i nomi dichiarati in un'istruzione composta, ma non esplicitamente dichiarati come statici, hanno ambito e, per gli oggetti, durata locale. Per informazioni dettagliate sul trattamento dei nomi con ambito locale, vedere [ambito](../cpp/scope-visual-cpp.md) .

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle istruzioni C++](../cpp/overview-of-cpp-statements.md)
