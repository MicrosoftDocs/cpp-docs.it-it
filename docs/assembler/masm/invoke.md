---
title: INVOKE
ms.date: 11/05/2019
f1_keywords:
- Invoke
helpviewer_keywords:
- INVOKE directive
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
ms.openlocfilehash: ba1377359ba9bc960e5d7d2a55df15adfe0d5d33
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80076218"
---
# <a name="invoke"></a>INVOKE

(solo MASM a 32 bit). Chiama la routine in corrispondenza dell'indirizzo fornito dall' *espressione*, passando gli argomenti nello stack o nei registri in base alle convenzioni di chiamata standard del tipo di linguaggio.

## <a name="syntax"></a>Sintassi

> **Richiama** *espressione* ⟦ __,__ *argomento* ... ⟧

## <a name="remarks"></a>Osservazioni

Ogni argomento passato alla stored procedure può essere un'espressione, una coppia di registri o un'espressione di indirizzo (un'espressione preceduta da **addr**).

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
