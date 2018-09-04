---
title: .DOSSEG | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .DOSSEG
dev_langs:
- C++
helpviewer_keywords:
- .DOSSEG directive
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 33ee0b0b049ece65786c4d4857c2e082a067fee4
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43693232"
---
# <a name="dosseg"></a>.DOSSEG

Ordina i segmenti in base alla convenzione di segmento di MS-DOS: codice prima di tutto, quindi Segmenta non in DGROUP e Segmenta quindi in DGROUP.

## <a name="syntax"></a>Sintassi

> .DOSSEG

## <a name="remarks"></a>Note

I segmenti in DGROUP rispettare questo ordine: segmenti non in BSS o dello STACK, quindi BSS segmenti e infine segmenti STACK. Utilizzato principalmente per garantire il supporto di CodeView in programmi autonomi di MASM. Uguale allo [DOSSEG](../../assembler/masm/dosseg.md).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>