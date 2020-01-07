---
title: GOTO (MASM)
ms.date: 12/16/2019
f1_keywords:
- goto
helpviewer_keywords:
- GOTO directive
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
ms.openlocfilehash: f198658f9a4b85e0b5ec9b7a0c122241e57286f6
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75317279"
---
# <a name="goto"></a>GOTO

Trasferisce l'assembly alla riga contrassegnata come **:** _macrolabel_.

## <a name="syntax"></a>Sintassi

> **Vai** a *macrolabel*

## <a name="remarks"></a>Note

L'istruzione **goto** è consentita solo all'interno [di](for-masm.md) [macro](macro.md), per, [Force](forc.md), [Repeat](repeat.md)e [while](while-masm.md) . La destinazione *macrolabel* deve essere l'unica direttiva sulla riga e deve essere preceduta dai due punti iniziali.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
