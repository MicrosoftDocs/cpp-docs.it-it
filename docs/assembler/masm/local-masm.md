---
title: LOCAL (MASM)
ms.date: 12/16/2019
f1_keywords:
- Local
helpviewer_keywords:
- LOCAL directive
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
ms.openlocfilehash: 2bef6b26f1b922be6512bd6ebe8e0b2627e86f45
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75317149"
---
# <a name="local"></a>LOCAL

Nella prima direttiva, all'interno di una macro, **local** definisce le etichette univoche per ogni istanza della macro.

## <a name="syntax"></a>Sintassi

> *⟦* Locale, *localizzato* ... ⟧
>
> **Local** *LabelId* ⟦ __\[__ *count* __]__ ⟧ ⟦ __:__ *qualifiedType*⟧ ⟦ __,__ *LabelId* ⟦ __\[__ *count* __]__ *⟧ ⟦ qualifiedType*⟧... ⟧

## <a name="remarks"></a>Note

Nella seconda direttiva, all'interno di una definizione di procedura (**proc**), **local** crea variabili basate su stack che esistono per la durata della procedura. *LabelId* può essere una variabile semplice o una matrice contenente gli elementi *count* , dove *count* è un'espressione costante.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
