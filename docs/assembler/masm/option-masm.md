---
title: OPZIONE (MASM) | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- option
dev_langs:
- C++
helpviewer_keywords:
- OPTION directive
ms.assetid: 8e10dabd-e36f-4586-ab01-ada96736b0bd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 09db749baf09525957faaf8af99434cc9775d0e7
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43678045"
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