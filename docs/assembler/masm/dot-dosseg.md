---
title: .DOSSEG
ms.date: 11/05/2019
f1_keywords:
- .DOSSEG
helpviewer_keywords:
- .DOSSEG directive
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
ms.openlocfilehash: 8f0388c3df9804c0cdb105162a962a44fe207345
ms.sourcegitcommit: 45f1d889df633f0f7e4a8e813b46fa73c9858b81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2019
ms.locfileid: "73703314"
---
# <a name="dosseg-32-bit-masm"></a>. DOSSEG ((MASM a 32 bit)

Ordina i segmenti in base alla convenzione del segmento MS-DOS: CODE First, then Segments not in DGROUP e then Segments in DGROUP. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> .DOSSEG

## <a name="remarks"></a>Note

I segmenti in DGROUP seguono questo ordine: segmenti non in BSS o STACK, quindi segmenti BSS e infine segmenti dello STACK. Utilizzato principalmente per garantire il supporto CodeView nei programmi autonomi MASM. Uguale a [DOSSEG (](../../assembler/masm/dosseg.md).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>