---
title: .FPO
ms.date: 11/05/2019
f1_keywords:
- .FPO
helpviewer_keywords:
- .FPO directive
ms.assetid: 35f4cd61-32f9-4262-b657-73f04f775d09
ms.openlocfilehash: 650c69be17c9271c343360edbb90f093841a1047
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74398253"
---
# <a name="fpo-32-bit-masm"></a>. Polinesia (MASM) a 32 bit

Oggetto **.** La direttiva Polinesia controlla l'emissione di record di debug nel segmento o nella sezione. debug $ F. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **. Polinesia** (*cdwLocals*, *cdwParams*, *cbProlog*, *cbRegs*, *fUseBP*, *cbFrame*)

### <a name="parameters"></a>Parametri

\ *cdwLocals*
Numero di variabili locali, un valore a 32 bit senza segno.

\ *cdwParams*
Dimensioni dei parametri in DWORD, un valore senza segno a 16 bit.

\ *cbProlog*
Numero di byte nel codice di prologo della funzione, un valore senza segno a 8 bit.

\ *cbRegs*
Numero di registri salvati.

\ *fUseBP*
Indica se il registro EBP è stato allocato. 0 o 1.

\ *cbFrame*
Indica il tipo di frame.  Per ulteriori informazioni, vedere [FPO_DATA](/windows/win32/api/winnt/ns-winnt-fpo_data) .

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
