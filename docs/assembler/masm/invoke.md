---
title: INVOKE
ms.date: 08/30/2018
f1_keywords:
- Invoke
helpviewer_keywords:
- INVOKE directive
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
ms.openlocfilehash: efa8f710701e15845c3a6a22ba024c9cf1882457
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50579023"
---
# <a name="invoke"></a>INVOKE

La routine viene chiamata in corrispondenza dell'indirizzo specificato da *espressione*, passando gli argomenti nello stack o nei registri in base alle convenzioni di chiamata standard del tipo di linguaggio.

## <a name="syntax"></a>Sintassi

> INVOKE *espressione* [[, *argomenti*]]

## <a name="remarks"></a>Note

Ogni argomento passato alla routine può essere un'espressione, una coppia di registro o un'espressione di indirizzo (l'espressione preceduta da `ADDR`).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>