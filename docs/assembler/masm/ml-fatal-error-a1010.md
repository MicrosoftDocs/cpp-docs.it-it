---
title: Errore ML irreversibile A1010
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A1010
helpviewer_keywords:
- A1010
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
ms.openlocfilehash: eb4d77b856e93a8d64ee6c51bec63ceae59b22e5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62202065"
---
# <a name="ml-fatal-error-a1010"></a>Errore ML irreversibile A1010

**annidamento di blocco senza corrispondenza:**

Un inizio blocco non è corrispondente end oppure una fine del blocco non è un inizio corrisponda. Uno dei seguenti potrebbe essere interessato:

- Una direttiva di alto livello, ad esempio [. IF](../../assembler/masm/dot-if.md), [. Ripetere](../../assembler/masm/dot-repeat.md), o [. MENTRE](../../assembler/masm/dot-while.md).

- Una direttiva condizionale, assembly, ad esempio [IF](../../assembler/masm/if-masm.md), [ripetere](../../assembler/masm/repeat.md), o **mentre**.

- Una definizione di struttura o unione.

- Una definizione della procedura.

- Una definizione del segmento.

- Oggetto [POPCONTEXT](../../assembler/masm/popcontext.md) direttiva.

- Un assembly di condizionale direttiva, ad esempio un [ELSE](../../assembler/masm/else-masm.md), [ELSEIF](../../assembler/masm/elseif-masm.md), o **ENDIF** senza il corrispondente [IF](../../assembler/masm/if-masm.md).

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>