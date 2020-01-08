---
title: MACRO
ms.date: 12/16/2019
f1_keywords:
- MACRO
helpviewer_keywords:
- MACRO directive
ms.assetid: 89434f7c-bc2c-4e91-8940-fe2db8785233
ms.openlocfilehash: 23c6b0aefae856da449da574669e8475122c7556
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75312950"
---
# <a name="macro"></a>MACRO

Contrassegna un blocco di macro denominato *Name* e stabilisce i segnaposto dei *parametri* per gli argomenti passati quando viene chiamata la macro.

## <a name="syntax"></a>Sintassi

> *nome***macro** ⟦*parametro* ⟦ **: req** | : = | *argomenti* *predefiniti* **: vararg**⟧... ⟧\
> \ di *istruzioni*
⟦**Goto** :*macrolabelId*⟧ \
> ⟦ ⟧ Di**uscita**\
> **ENDM** ⟦*valore*⟧

## <a name="remarks"></a>Note

Una funzione macro restituisce un *valore* all'istruzione chiamante.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Goto (MASM)](goto-masm.md)\
\ [ENDM](endm.md)
[Grammatica BNF di MASM](masm-bnf-grammar.md)

