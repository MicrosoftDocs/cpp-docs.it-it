---
description: 'Altre informazioni su: GOTO'
title: GOTO (MASM)
ms.date: 12/16/2019
helpviewer_keywords:
- GOTO directive
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
ms.openlocfilehash: ab373d77cbfb660d4cc256e39de38b7f066eac27
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97130260"
---
# <a name="goto"></a>GOTO

Trasferisce l'assembly alla riga contrassegnata come **:**_macrolabel_.

## <a name="syntax"></a>Sintassi

> **Vai** a *macrolabel*

## <a name="remarks"></a>Commenti

L'istruzione **goto** è consentita solo all'interno [di](for-masm.md) [macro](macro.md), per, [Force](forc.md), [Repeat](repeat.md)e [while](while-masm.md) . La destinazione *macrolabel* deve essere l'unica direttiva sulla riga e deve essere preceduta dai due punti iniziali.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
