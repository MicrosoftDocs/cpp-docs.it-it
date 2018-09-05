---
title: .IF | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .IF
dev_langs:
- C++
helpviewer_keywords:
- .IF directive
ms.assetid: dccc7615-8fc7-4829-9f39-0ee405f6c1e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f7bd5ba5821b4dcfb2d088e31816f50540445018
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43691544"
---
# <a name="if"></a>.IF

Genera il codice che consente di verificare `condition1` (ad esempio, AX > 7) e viene eseguita la *istruzioni* se tale condizione è true.

## <a name="syntax"></a>Sintassi

> . Se condition1<br/>
> istruzioni<br/>
> [[. ELSEIF condizione2<br/>
> istruzioni]]<br/>
> [[. ALTRO<br/>
> istruzioni]]<br/>
> .ENDIF

## <a name="remarks"></a>Note

Se un [. ELSE](../../assembler/masm/dot-else.md) indicato di seguito, le relative istruzioni viene eseguite se la condizione originale è false. Si noti che le condizioni vengono valutate in fase di esecuzione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>