---
title: EXTERNDEF | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- EXTERNDEF
dev_langs:
- C++
helpviewer_keywords:
- EXTERNDEF directive
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d5c3d42cabb88c38ce1d98da24cd2cb4ddec8d5b
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43683661"
---
# <a name="externdef"></a>EXTERNDEF

Definisce uno o più variabili esterne, le etichette o simboli denominati *name* il cui tipo è `type`.

## <a name="syntax"></a>Sintassi

> : Tipo di nome EXTERNDEF [[langtype]] [[, [[langtype]]. nome: type]]...

## <a name="remarks"></a>Note

Se *name* viene definito nel modulo, viene considerato [pubblico](../../assembler/masm/public-masm.md). Se *name* viene fatto riferimento nel modulo, viene considerato [EXTERN](../../assembler/masm/extern-masm.md). Se *nome* non è viene fatto riferimento, viene ignorato. Il `type` può essere [ABS](../../assembler/masm/operator-abs.md), che importa *nome* come costante. In genere usato nel file di inclusione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>