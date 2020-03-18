---
title: GOTO (MASM)
ms.date: 12/16/2019
helpviewer_keywords:
- GOTO directive
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
ms.openlocfilehash: 18f286d8634202b57dea788aa6984755a5afb197
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440802"
---
# <a name="goto"></a>GOTO

Trasferisce l'assembly alla riga contrassegnata come **:** _macrolabel_.

## <a name="syntax"></a>Sintassi

> **Vai** a *macrolabel*

## <a name="remarks"></a>Osservazioni

L'istruzione **goto** è consentita solo all'interno [di](for-masm.md) [macro](macro.md), per, [Force](forc.md), [Repeat](repeat.md)e [while](while-masm.md) . La destinazione *macrolabel* deve essere l'unica direttiva sulla riga e deve essere preceduta dai due punti iniziali.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
