---
title: .DOSSEG
ms.date: 08/30/2018
f1_keywords:
- .DOSSEG
helpviewer_keywords:
- .DOSSEG directive
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
ms.openlocfilehash: 28b3e351030ee83693c0fec5568aacf9b4b77c27
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50639439"
---
# <a name="dosseg"></a>.DOSSEG

Ordina i segmenti in base alla convenzione di segmento di MS-DOS: codice prima di tutto, quindi Segmenta non in DGROUP e Segmenta quindi in DGROUP.

## <a name="syntax"></a>Sintassi

> .DOSSEG

## <a name="remarks"></a>Note

I segmenti in DGROUP rispettare questo ordine: segmenti non in BSS o dello STACK, quindi BSS segmenti e infine segmenti STACK. Utilizzato principalmente per garantire il supporto di CodeView in programmi autonomi di MASM. Uguale allo [DOSSEG](../../assembler/masm/dosseg.md).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>