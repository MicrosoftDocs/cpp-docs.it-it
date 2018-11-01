---
title: Errore ML irreversibile A1011
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A1011
helpviewer_keywords:
- A1011
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
ms.openlocfilehash: 591755a1d7066d8251f61d2a22b9601a9ccb9dcb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50520198"
---
# <a name="ml-fatal-error-a1011"></a>Errore ML irreversibile A1011

**direttiva deve essere nel blocco di controllo**

L'assembler trovato una direttiva di alto livello in cui uno non stato previsto. È stato trovato uno delle direttive seguenti:

- [. ELSE](../../assembler/masm/dot-else.md) senza [. IF](../../assembler/masm/dot-if.md)

- [. ENDIF](../../assembler/masm/dot-endif.md) senza [. IF](../../assembler/masm/dot-if.md)

- [. ENDW](../../assembler/masm/dot-endw.md) senza [. PERIODO DI TEMPO](../../assembler/masm/dot-while.md)

- [. UNTILCXZ](../../assembler/masm/dot-untilcxz.md) senza [. RIPETERE L'OPERAZIONE](../../assembler/masm/dot-repeat.md)

- [. CONTINUARE](../../assembler/masm/dot-continue.md) senza [. Sebbene](../../assembler/masm/dot-while.md) o [. RIPETERE L'OPERAZIONE](../../assembler/masm/dot-repeat.md)

- [. INTERROMPERE](../../assembler/masm/dot-break.md) senza [. Sebbene](../../assembler/masm/dot-while.md) o [. RIPETERE L'OPERAZIONE](../../assembler/masm/dot-repeat.md)

- [. ELSE](../../assembler/masm/dot-else.md) seguenti `.ELSE`

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>