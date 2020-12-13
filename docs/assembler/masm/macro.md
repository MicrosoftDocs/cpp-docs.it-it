---
description: 'Altre informazioni su: MACRO'
title: MACRO
ms.date: 12/16/2019
f1_keywords:
- MACRO
helpviewer_keywords:
- MACRO directive
ms.assetid: 89434f7c-bc2c-4e91-8940-fe2db8785233
ms.openlocfilehash: 5410357e76d28cddd54f3c90a34d3e85b8629143
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97129740"
---
# <a name="macro"></a>MACRO

Contrassegna un blocco di macro denominato *Name* e stabilisce i segnaposto dei *parametri* per gli argomenti passati quando viene chiamata la macro.

## <a name="syntax"></a>Sintassi

> *nome***macro** ⟦*parametro* ⟦**: req** | : =  |  *argomenti* predefiniti **: vararg**⟧... ⟧\  
> *istruzioni*\
⟦**Goto** :*macrolabelId*⟧ \
> ⟦ ⟧ Di **uscita**\
> **ENDM** ⟦*valore*⟧

## <a name="remarks"></a>Commenti

Una funzione macro restituisce un *valore* all'istruzione chiamante.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[GOTO (MASM)](goto-masm.md)\
[ENDM](endm.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
