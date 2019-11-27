---
title: .DOSSEG
ms.date: 11/05/2019
f1_keywords:
- .DOSSEG
helpviewer_keywords:
- .DOSSEG directive
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
ms.openlocfilehash: 17edea122afc03a8c3a2fdc86ee6c06c2ccf3c85
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74398481"
---
# <a name="dosseg-32-bit-masm"></a>. DOSSEG ((MASM a 32 bit)

Ordina i segmenti in base alla convenzione del segmento MS-DOS: CODE First, then Segments not in DGROUP e then Segments in DGROUP. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **.DOSSEG**

## <a name="remarks"></a>Note

I segmenti in DGROUP seguono questo ordine: segmenti non in BSS o STACK, quindi segmenti BSS e infine segmenti dello STACK. Utilizzato principalmente per garantire il supporto CodeView nei programmi autonomi MASM. Uguale a [DOSSEG (](../../assembler/masm/dosseg.md).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)
