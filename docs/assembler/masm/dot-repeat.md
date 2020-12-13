---
description: Ulteriori informazioni su:. REPEAT (MASM a 32 bit)
title: .REPEAT
ms.date: 11/05/2019
f1_keywords:
- .REPEAT
helpviewer_keywords:
- .REPEAT directive
ms.assetid: cb8ad8c6-587b-42f9-a0ad-b5316a24918c
ms.openlocfilehash: e418093f4ff821b2e99b9e1332b50b64b64ac862
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97131222"
---
# <a name="repeat-32-bit-masm"></a>. REPEAT (MASM a 32 bit)

Genera codice che ripete l'esecuzione del blocco di *istruzioni* fino a quando la *condizione* non diventa true. [. UNTILCXZ](dot-untilcxz.md), che diventa true quando CX è zero, può essere sostituito da [. FINO a](dot-until.md). La *condizione* è facoltativa con **. UNTILCXZ**. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **. Ripetere**\
> *istruzioni*\
> **.** *Condizione* until

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
