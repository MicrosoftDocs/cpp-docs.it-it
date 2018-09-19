---
title: Istruzioni composte (blocchi) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- '}'
- '{'
dev_langs:
- C++
helpviewer_keywords:
- blocks, about blocks
- compound statements
ms.assetid: 23855939-7430-498e-8936-0c70055ea701
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 89e243dd1905e61a6c9a1b16c1936d7d6617ba17
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116815"
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