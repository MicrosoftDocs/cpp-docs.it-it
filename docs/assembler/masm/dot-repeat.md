---
title: . RIPETERE | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .REPEAT
dev_langs:
- C++
helpviewer_keywords:
- .REPEAT directive
ms.assetid: cb8ad8c6-587b-42f9-a0ad-b5316a24918c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8856ed0e1d86277a413baac2c56e5c5ca2ea9ff0
ms.sourcegitcommit: fb9448eb96c6351a77df04af16ec5c0fb9457d9e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/13/2018
ms.locfileid: "43687952"
---
# <a name="repeat"></a>.REPEAT

Genera il codice che si ripete l'esecuzione del blocco di *istruzioni* fino a quando non `condition` diventa true. [. UNTILCXZ](../../assembler/masm/dot-untilcxz.md), che diventa true quando CX è zero, può essere sostituito da [. Fino a quando non](../../assembler/masm/dot-until.md). Il `condition` è facoltativo con **. UNTILCXZ**.

## <a name="syntax"></a>Sintassi

> .REPEAT<br/>
> istruzioni<br/>
> . Condizione UNTIL

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>