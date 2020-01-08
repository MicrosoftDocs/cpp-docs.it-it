---
title: .DOSSEG
ms.date: 11/05/2019
f1_keywords:
- .DOSSEG
helpviewer_keywords:
- .DOSSEG directive
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
ms.openlocfilehash: e27b0ae185542c11ee29119575d5c8225501f71e
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75313847"
---
# <a name="dosseg-32-bit-masm"></a>. DOSSEG ((MASM a 32 bit)

Ordina i segmenti in base alla convenzione del segmento MS-DOS: CODE First, then Segments not in DGROUP e then Segments in DGROUP. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **.DOSSEG**

## <a name="remarks"></a>Note

I segmenti in DGROUP seguono questo ordine: segmenti non in BSS o STACK, quindi segmenti BSS e infine segmenti dello STACK. Utilizzato principalmente per garantire il supporto CodeView nei programmi autonomi MASM. Uguale a [DOSSEG (](dosseg.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
