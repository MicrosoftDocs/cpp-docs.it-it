---
title: .STACK
ms.date: 11/05/2019
f1_keywords:
- .STACK
helpviewer_keywords:
- .STACK directive
ms.assetid: 70019463-5d4f-41b6-8464-023a8ac2466f
ms.openlocfilehash: 78c089c771e8e5a8c82905578ec2377246a44a0e
ms.sourcegitcommit: 45f1d889df633f0f7e4a8e813b46fa73c9858b81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2019
ms.locfileid: "73703529"
---
# <a name="stack-32-bit-masm"></a>. STACK (MASM a 32 bit)

Se usato con [. MODEL](../../assembler/masm/dot-model.md), definisce un segmento dello stack (con lo stack del nome del segmento). Il `size` facoltativo specifica il numero di byte per lo stack (valore predefinito 1.024). La direttiva `.STACK` chiude automaticamente l'istruzione dello stack. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> . STACK [[dimensioni]]

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>