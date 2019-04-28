---
title: INVOKE
ms.date: 08/30/2018
f1_keywords:
- Invoke
helpviewer_keywords:
- INVOKE directive
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
ms.openlocfilehash: efa8f710701e15845c3a6a22ba024c9cf1882457
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62202619"
---
# <a name="invoke"></a>INVOKE

La routine viene chiamata in corrispondenza dell'indirizzo specificato da *espressione*, passando gli argomenti nello stack o nei registri in base alle convenzioni di chiamata standard del tipo di linguaggio.

## <a name="syntax"></a>Sintassi

> INVOKE *espressione* [[, *argomenti*]]

## <a name="remarks"></a>Note

Ogni argomento passato alla routine può essere un'espressione, una coppia di registro o un'espressione di indirizzo (l'espressione preceduta da `ADDR`).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>