---
title: .FPO
ms.date: 08/30/2018
f1_keywords:
- .FPO
helpviewer_keywords:
- .FPO directive
ms.assetid: 35f4cd61-32f9-4262-b657-73f04f775d09
ms.openlocfilehash: b793b3efa72a676b800c10b98ea06001ddcf10d5
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491428"
---
# <a name="fpo"></a>.FPO

Il. La direttiva Polinesia controlla l'emissione di record di debug nel segmento o nella sezione. debug $ F.

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
