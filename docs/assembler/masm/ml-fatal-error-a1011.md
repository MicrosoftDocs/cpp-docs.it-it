---
title: Errore ML irreversibile A1011
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A1011
helpviewer_keywords:
- A1011
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
ms.openlocfilehash: 5607d6d56e0b3889332dcf2624d519529819b1c9
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75318078"
---
# <a name="ml-fatal-error-a1011"></a>Errore ML irreversibile A1011

**la direttiva deve essere nel blocco di controllo**

L'assembler ha rilevato una direttiva di alto livello in cui non era prevista una direttiva. È stata trovata una delle direttive seguenti:

- [. ALTRIMENTI](dot-else.md) senza [. SE](dot-if.md)

- [. ENDIF](dot-endif.md) senza [. SE](dot-if.md)

- [. ENDW](dot-endw.md) senza [. MENTRE](dot-while.md)

- [. UNTILCXZ](dot-untilcxz.md) senza [. Ripeti](dot-repeat.md)

- [. CONTINUA](dot-continue.md) senza [. WHILE](dot-while.md) o [. Ripeti](dot-repeat.md)

- [. INTERROMPi](dot-break.md) senza [. WHILE](dot-while.md) o [. Ripeti](dot-repeat.md)

- [. ALTRIMENTI](dot-else.md) , dopo `.ELSE`

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)
