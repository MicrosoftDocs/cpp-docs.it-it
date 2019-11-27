---
title: OPTION (MASM)
ms.date: 08/30/2018
f1_keywords:
- option
helpviewer_keywords:
- OPTION directive
ms.assetid: 8e10dabd-e36f-4586-ab01-ada96736b0bd
ms.openlocfilehash: 0f90ab0115c3dde894d468bbbe60ffa0193b8336
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74395177"
---
# <a name="option-masm"></a>OPTION (MASM)

Abilita e Disabilita le funzionalità dell'assembler.

## <a name="syntax"></a>Sintassi

> **Option (** *opzione)*

## <a name="remarks"></a>Note

Le opzioni disponibili includono:

|||||
|-|-|-|-|
|**CASEMAP**|**DOTNAME**|**NODOTNAME**|**EMULATORE**|
|**Noemulator**|**EPILOGO**|**EXPR16**|**EXPR32**|
|**LINGUAGGIO**|**LJMP**|**NOLJMP**|**M510**|
|**NOM510**|**NOKEYWORD**|**NOSIGNEXTEND**|**OFFSET**|
|**OLDMACROS**|**NOOLDMACROS**|**OLDSTRUCTS**|**NOOLDSTRUCTS**|
|**PROC**|**Prologo**|**READONLY**|**Noreadonly**|
|**AMBITO**|**Senza ambito**|**SEGMENT**|**SETIF2**.|

La sintassi per LANGUAGE è **Option Language:** <em>x</em>, dove *x* è uno dei seguenti: C, syscall, stdcall, Pascal, FORTRAN o Basic.  SYSCALL, PASCAL, FORTRAN e BASIC non sono supportati con usato con [. MODELLO](../../assembler/masm/dot-model.md) flat.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
