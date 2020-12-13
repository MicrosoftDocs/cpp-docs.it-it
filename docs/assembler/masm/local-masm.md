---
description: 'Altre informazioni su: LOCAL'
title: LOCAL (MASM)
ms.date: 12/16/2019
f1_keywords:
- Local
helpviewer_keywords:
- LOCAL directive
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
ms.openlocfilehash: 27296f69b62de0dcd314b2575f045e06576bbf64
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97129753"
---
# <a name="local"></a>LOCAL

Nella prima direttiva, all'interno di una macro, **local** definisce le etichette univoche per ogni istanza della macro.

## <a name="syntax"></a>Sintassi

>  *⟦* Locale, *localizzato* ... ⟧
>
> **Local** *LabelId* ⟦ __\[__ *count*__]__ ⟧ ⟦__:__*qualifiedType*⟧ ⟦__,__ *LabelId* ⟦ __\[__ *count*__]__ ⟧ ⟦*qualifiedType ⟧*... ⟧

## <a name="remarks"></a>Commenti

Nella seconda direttiva, all'interno di una definizione di procedura (**proc**), **local** crea variabili basate su stack che esistono per la durata della procedura. *LabelId* può essere una variabile semplice o una matrice contenente gli elementi *count* , dove *count* è un'espressione costante.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
