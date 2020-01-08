---
title: OPTION (MASM)
ms.date: 12/17/2019
f1_keywords:
- option
helpviewer_keywords:
- OPTION directive
ms.assetid: 8e10dabd-e36f-4586-ab01-ada96736b0bd
ms.openlocfilehash: bd50ac2e051db7f02ac077054e5856524745df54
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75318748"
---
# <a name="option"></a>OPTION

Abilita e Disabilita le funzionalità dell'assembler.

## <a name="syntax"></a>Sintassi

> **Option (** *opzione)*

## <a name="remarks"></a>Note

Le opzioni disponibili includono:

|||||
|-|-|-|-|
|**CASEMAP**|**DOTNAME**|**NODOTNAME**|**EMULATORE**|
|**Noemulator**|**EPILOGO**|**EXPR16**|**EXPR32**|
|**LANGUAGE**|**LJMP**|**NOLJMP**|**M510**|
|**NOM510**|**NOKEYWORD**|**NOSIGNEXTEND**|**OFFSET**|
|**OLDMACROS**|**NOOLDMACROS**|**OLDSTRUCTS**|**NOOLDSTRUCTS**|
|**PROC**|**Prologo**|**READONLY**|**Noreadonly**|
|**AMBITO**|**Senza ambito**|**SEGMENT**|**SETIF2**.|

La sintassi per LANGUAGE è **Option Language:** <em>x</em>, dove *x* è uno dei seguenti: C, syscall, stdcall, Pascal, FORTRAN o Basic.  SYSCALL, PASCAL, FORTRAN e BASIC non sono supportati con [. MODELLO](dot-model.md) flat.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
