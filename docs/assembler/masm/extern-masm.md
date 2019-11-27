---
title: EXTERN (MASM)
ms.date: 08/30/2018
f1_keywords:
- extern
helpviewer_keywords:
- EXTERN directive
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
ms.openlocfilehash: fc66338d90b54ecb12ef3ab1aa56214fb445cb13
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74397559"
---
# <a name="extern-masm"></a>EXTERN (MASM)

Definisce una o più variabili esterne, etichette o simboli chiamati *nome* il cui tipo è *Type*.

## <a name="syntax"></a>Sintassi

> **Extern** ⟦*Language-Type*⟧ *nome* ⟦ __(__ *altid* __)__ ⟧ __:__ *Type* ⟦ __,__ ⟦*Language-Type*⟧ *Name* ⟦ __(__ *altid* __)__ ⟧ __:__ *Type* ... ⟧

## <a name="remarks"></a>Note

Il *tipo* può essere [ABS](../../assembler/masm/operator-abs.md), che importa il *nome* come costante. Uguale a [EXTRN](../../assembler/masm/extrn.md).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)
