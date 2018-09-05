---
title: EXTERN (MASM) | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- extern
dev_langs:
- C++
helpviewer_keywords:
- EXTERN directive
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0a9008e8c1153c0a9b06530b14e661436f7e62a9
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43693670"
---
# <a name="extern-masm"></a>EXTERN (MASM)

Definisce uno o più variabili esterne, le etichette o simboli denominati *name* il cui tipo è *tipo*.

## <a name="syntax"></a>Sintassi

> EXTERN [[*langtype*]] *name* [[(*altid*)]]: *tipo* [[, [[*langtype*]]  *nome* [[(*altid*)]]: *tipo*]]...

## <a name="remarks"></a>Note

Il *tipo* può essere [ABS](../../assembler/masm/operator-abs.md), che importa *nome* come costante. Uguale allo [EXTRN](../../assembler/masm/extrn.md).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>