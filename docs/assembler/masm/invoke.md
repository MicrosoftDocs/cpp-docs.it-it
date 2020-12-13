---
description: 'Altre informazioni su: INVOKE'
title: INVOKE
ms.date: 11/05/2019
f1_keywords:
- Invoke
helpviewer_keywords:
- INVOKE directive
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
ms.openlocfilehash: eb372ad3d7ccde9f217f55ed9817acfe9bd8f1cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97129844"
---
# <a name="invoke"></a>INVOKE

(solo MASM a 32 bit). Chiama la routine in corrispondenza dell'indirizzo fornito dall' *espressione*, passando gli argomenti nello stack o nei registri in base alle convenzioni di chiamata standard del tipo di linguaggio.

## <a name="syntax"></a>Sintassi

> **Richiama** *espressione* ⟦__,__ *argomento* ... ⟧

## <a name="remarks"></a>Commenti

Ogni argomento passato alla stored procedure può essere un'espressione, una coppia di registri o un'espressione di indirizzo (un'espressione preceduta da **addr**).

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
