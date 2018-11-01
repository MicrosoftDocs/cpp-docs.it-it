---
title: OPTION (MASM)
ms.date: 08/30/2018
f1_keywords:
- option
helpviewer_keywords:
- OPTION directive
ms.assetid: 8e10dabd-e36f-4586-ab01-ada96736b0bd
ms.openlocfilehash: a8215bf1f816baa490a768fb2cab0b3c2e53e20b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50596482"
---
# <a name="option-masm"></a>OPTION (MASM)

Abilita e disabilita le funzionalità dell'assembler.

## <a name="syntax"></a>Sintassi

> OPZIONE *ElencoOpzioni*

## <a name="remarks"></a>Note

Le opzioni disponibili includono:

|||||
|-|-|-|-|
|**CASEMAP**|**DOTNAME**|**NODOTNAME**|**EMULATORE**|
|**NOEMULATOR**|**EPILOGO**|**EXPR16**|**EXPR32**|
|**LINGUA**|**LJMP**|**NOLJMP**|**M510**|
|**NOM510**|**NOKEYWORD**|**NOSIGNEXTEND**|**OFFSET**|
|**OLDMACROS**|**NOOLDMACROS**|**OLDSTRUCTS**|**NOOLDSTRUCTS**|
|**PROC**|**PROLOGO**|**SOLA LETTURA**|**NOREADONLY**|
|**CON AMBITO**|**NOSCOPED**|**SEGMENT**|**SETIF2**.|

La sintassi di linguaggio è **opzione lingua:**<em>x</em>, dove *x* è uno dei C, SYSCALL, STDCALL, PASCAL, FORTRAN o BASIC.  SYSCALL, PASCAL, FORTRAN e BASIC non sono supportati con abbinata [. MODELLO](../../assembler/masm/dot-model.md) FLAT.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>