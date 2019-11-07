---
title: .FPO
ms.date: 11/05/2019
f1_keywords:
- .FPO
helpviewer_keywords:
- .FPO directive
ms.assetid: 35f4cd61-32f9-4262-b657-73f04f775d09
ms.openlocfilehash: 3938d9194c35d567ea670e0b92a731193ccd2254
ms.sourcegitcommit: 45f1d889df633f0f7e4a8e813b46fa73c9858b81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2019
ms.locfileid: "73703794"
---
# <a name="fpo-32-bit-masm"></a>. Polinesia (MASM) a 32 bit

Il. La direttiva Polinesia controlla l'emissione di record di debug nel segmento o nella sezione. debug $ F. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> Polinesia (*cdwLocals*, *cdwParams*, *cbProlog*, *cbRegs*, *fUseBP*, *cbFrame*)

### <a name="parameters"></a>Parametri

*cdwLocals*<br/>
Numero di variabili locali, un valore a 32 bit senza segno.

*cdwParams*<br/>
Dimensioni dei parametri in DWORD, un valore senza segno a 16 bit.

*cbProlog*<br/>
Numero di byte nel codice di prologo della funzione, un valore senza segno a 8 bit.

*cbRegs*<br/>
Numero di registri salvati.

*fUseBP*<br/>
Indica se il registro EBP è stato allocato. 0 o 1.

*cbFrame*<br/>
Indica il tipo di frame.  Per ulteriori informazioni, vedere [FPO_DATA](/windows/win32/api/winnt/ns-winnt-fpo_data) .

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>
