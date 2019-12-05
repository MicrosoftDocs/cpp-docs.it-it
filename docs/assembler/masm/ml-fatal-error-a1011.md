---
title: Errore ML irreversibile A1011
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A1011
helpviewer_keywords:
- A1011
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
ms.openlocfilehash: 0d8d3896f7788aa3f51605651ee1b728b0e1d60a
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74856852"
---
# <a name="ml-fatal-error-a1011"></a>Errore ML irreversibile A1011

**la direttiva deve essere nel blocco di controllo**

L'assembler ha rilevato una direttiva di alto livello in cui non era prevista una direttiva. È stata trovata una delle direttive seguenti:

- [. ALTRIMENTI](../../assembler/masm/dot-else.md) senza [. SE](../../assembler/masm/dot-if.md)

- [. ENDIF](../../assembler/masm/dot-endif.md) senza [. SE](../../assembler/masm/dot-if.md)

- [. ENDW](../../assembler/masm/dot-endw.md) senza [. MENTRE](../../assembler/masm/dot-while.md)

- [. UNTILCXZ](../../assembler/masm/dot-untilcxz.md) senza [. Ripeti](../../assembler/masm/dot-repeat.md)

- [. CONTINUA](../../assembler/masm/dot-continue.md) senza [. WHILE](../../assembler/masm/dot-while.md) o [. Ripeti](../../assembler/masm/dot-repeat.md)

- [. INTERROMPi](../../assembler/masm/dot-break.md) senza [. WHILE](../../assembler/masm/dot-while.md) o [. Ripeti](../../assembler/masm/dot-repeat.md)

- [. ALTRIMENTI](../../assembler/masm/dot-else.md) , dopo `.ELSE`

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>