---
title: Errore ML non irreversibile A2133
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A2133
helpviewer_keywords:
- A2133
ms.assetid: 5ba50911-22c8-43b7-90e2-946fc612e05f
ms.openlocfilehash: c2d13aefe02543129340bcc307771a1026776d61
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74854615"
---
# <a name="ml-nonfatal-error-a2133"></a>Errore ML non irreversibile A2133

**valore di registro sovrascritto da INVOKE**

Un registro è stato passato come argomento a una routine, ma il codice generato da [Invoke](../../assembler/masm/invoke.md) per passare altri argomenti ha eliminato il contenuto del registro.

I registri AX, AL, AH, EAX, DX, DL, DH e EDX possono essere usati dall'assembler per eseguire la conversione dei dati.

Utilizzare un registro diverso.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>