---
title: MACRO
ms.date: 12/16/2019
f1_keywords:
- MACRO
helpviewer_keywords:
- MACRO directive
ms.assetid: 89434f7c-bc2c-4e91-8940-fe2db8785233
ms.openlocfilehash: 8eb0afdf73270c3e741f43b2e1fba02fe965846c
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80076144"
---
# <a name="macro"></a>MACRO

Contrassegna un blocco di macro denominato *Name* e stabilisce i segnaposto dei *parametri* per gli argomenti passati quando viene chiamata la macro.

## <a name="syntax"></a>Sintassi

> *nome***macro** ⟦*parametro* ⟦ **: req** | : = | *argomenti* *predefiniti* **: vararg**⟧... ⟧\
> \ di *istruzioni*
⟦**Goto** :*macrolabelId*⟧ \
> ⟦ ⟧ Di**uscita**\
> **ENDM** ⟦*valore*⟧

## <a name="remarks"></a>Osservazioni

Una funzione macro restituisce un *valore* all'istruzione chiamante.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Goto (MASM)](goto-masm.md)\
\ [ENDM](endm.md)
[Grammatica BNF di MASM](masm-bnf-grammar.md)
