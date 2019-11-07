---
title: INVOKE
ms.date: 11/05/2019
f1_keywords:
- Invoke
helpviewer_keywords:
- INVOKE directive
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
ms.openlocfilehash: 853bc9cd22d866357a4cd2d695beccc3efc20acf
ms.sourcegitcommit: 45f1d889df633f0f7e4a8e813b46fa73c9858b81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2019
ms.locfileid: "73703968"
---
# <a name="invoke-32-bit-masm"></a>INVOKE (MASM a 32 bit)

Chiama la routine in corrispondenza dell'indirizzo fornito dall' *espressione*, passando gli argomenti nello stack o nei registri in base alle convenzioni di chiamata standard del tipo di linguaggio. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> INVOKE ( *espressione* ) [[, *arguments*]]

## <a name="remarks"></a>Note

Ogni argomento passato alla stored procedure può essere un'espressione, una coppia di registri o un'espressione di indirizzo (un'espressione preceduta da `ADDR`).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>