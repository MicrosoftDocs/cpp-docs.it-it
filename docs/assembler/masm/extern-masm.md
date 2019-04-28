---
title: EXTERN (MASM)
ms.date: 08/30/2018
f1_keywords:
- extern
helpviewer_keywords:
- EXTERN directive
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
ms.openlocfilehash: 30d1b3ae7c6676aeb97b91c7627da859525b9ce1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62203615"
---
# <a name="extern-masm"></a>EXTERN (MASM)

Definisce uno o più variabili esterne, le etichette o simboli denominati *name* il cui tipo è *tipo*.

## <a name="syntax"></a>Sintassi

> EXTERN [[*langtype*]] *name* [[ (*altid*) ]] : *type* [[, [[*langtype*]] *name* [[ (*altid*) ]] : *type*]] ...

## <a name="remarks"></a>Note

Il *tipo* può essere [ABS](../../assembler/masm/operator-abs.md), che importa *nome* come costante. Uguale allo [EXTRN](../../assembler/masm/extrn.md).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>