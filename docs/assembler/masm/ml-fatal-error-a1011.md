---
description: 'Altre informazioni su: ML errore irreversibile A1011'
title: Errore ML irreversibile A1011
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A1011
helpviewer_keywords:
- A1011
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
ms.openlocfilehash: 294ca2cbf512948514317589628969a3e63e71af
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97129493"
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

- [. ALTRIMENTI](dot-else.md) segue `.ELSE`

## <a name="see-also"></a>Vedi anche

[Messaggi di errore ML](ml-error-messages.md)
