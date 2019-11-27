---
title: INVOKE
ms.date: 11/05/2019
f1_keywords:
- Invoke
helpviewer_keywords:
- INVOKE directive
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
ms.openlocfilehash: a5175252364918ca218e81536b29f084f7fd19cc
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74397303"
---
# <a name="invoke-32-bit-masm"></a>INVOKE (MASM a 32 bit)

Chiama la routine in corrispondenza dell'indirizzo fornito dall' *espressione*, passando gli argomenti nello stack o nei registri in base alle convenzioni di chiamata standard del tipo di linguaggio. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **Richiama** *espressione* ⟦ __,__ *argomento* ... ⟧

## <a name="remarks"></a>Note

Ogni argomento passato alla stored procedure può essere un'espressione, una coppia di registri o un'espressione di indirizzo (un'espressione preceduta da **addr**).

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](../../assembler/masm/directives-reference.md)
