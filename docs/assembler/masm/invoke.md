---
title: INVOKE
ms.date: 11/05/2019
f1_keywords:
- Invoke
helpviewer_keywords:
- INVOKE directive
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
ms.openlocfilehash: 7a005e5e70a2696ca89fb0ad1a3ff02aab8ffe5a
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75317188"
---
# <a name="invoke"></a>INVOKE

(solo MASM a 32 bit). Chiama la routine in corrispondenza dell'indirizzo fornito dall' *espressione*, passando gli argomenti nello stack o nei registri in base alle convenzioni di chiamata standard del tipo di linguaggio.     

## <a name="syntax"></a>Sintassi

> **Richiama** *espressione* ⟦ __,__ *argomento* ... ⟧

## <a name="remarks"></a>Note

Ogni argomento passato alla stored procedure può essere un'espressione, una coppia di registri o un'espressione di indirizzo (un'espressione preceduta da **addr**).

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
