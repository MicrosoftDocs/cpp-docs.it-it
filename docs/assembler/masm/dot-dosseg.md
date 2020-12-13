---
description: Ulteriori informazioni su:. DOSSEG ((MASM a 32 bit)
title: .DOSSEG
ms.date: 11/05/2019
f1_keywords:
- .DOSSEG
helpviewer_keywords:
- .DOSSEG directive
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
ms.openlocfilehash: 636f3f811b20e7cf9955648c71025cfb1766fb47
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97132106"
---
# <a name="dosseg-32-bit-masm"></a>. DOSSEG ((MASM a 32 bit)

Ordina i segmenti in base alla convenzione del segmento MS-DOS: CODE First, then Segments not in DGROUP e then Segments in DGROUP. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **. DOSSEG (**

## <a name="remarks"></a>Commenti

I segmenti in DGROUP seguono questo ordine: segmenti non in BSS o STACK, quindi segmenti BSS e infine segmenti dello STACK. Utilizzato principalmente per garantire il supporto CodeView nei programmi autonomi MASM. Uguale a [DOSSEG (](dosseg.md).

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
