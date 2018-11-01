---
title: .FPO
ms.date: 08/30/2018
f1_keywords:
- .FPO
helpviewer_keywords:
- .FPO directive
ms.assetid: 35f4cd61-32f9-4262-b657-73f04f775d09
ms.openlocfilehash: 83d6e81ea7dd35038f27f2721f3cc41fe49ef1bc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50570505"
---
# <a name="fpo"></a>.FPO

Il file con estensione Direttiva FPO controlla la creazione di record di debug per il segmento di F $. debug o la sezione.

## <a name="syntax"></a>Sintassi

> FPO (*cdwLocals*, *cdwParams*, *cbProlog*, *cbRegs*, *fUseBP*,  *cbFrame*)

### <a name="parameters"></a>Parametri

*cdwLocals*<br/>
Numero di variabili locali, un valore senza segno a 32 bit.

*cdwParams*<br/>
Dimensioni dei parametri in valori DWORD, un valore senza segno a 16 bit.

*cbProlog*<br/>
Numero di byte nel codice di prologo della funzione, un valore senza segno a 8 bit.

*cbRegs*<br/>
Numero di registri salvati.

*fUseBP*<br/>
Indica se il registro EBP è stato allocato. 0 o 1.

*cbFrame*<br/>
Indica il tipo di frame.  Visualizzare [FPO_DATA](/windows/desktop/api/winnt/ns-winnt-_fpo_data) per altre informazioni.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>