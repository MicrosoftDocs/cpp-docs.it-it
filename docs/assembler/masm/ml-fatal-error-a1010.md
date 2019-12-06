---
title: Errore ML irreversibile A1010
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A1010
helpviewer_keywords:
- A1010
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
ms.openlocfilehash: 6ec82f7f6d559d977a9aa039ed91689a0ef4d49a
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74856878"
---
# <a name="ml-fatal-error-a1010"></a>Errore ML irreversibile A1010

**annidamento blocchi senza corrispondenza:**

Un blocco che inizia non ha un elemento End corrispondente o un elemento End di blocco non ha un inizio corrispondente. È possibile che sia necessario uno dei seguenti elementi:

- Una direttiva di alto livello, ad esempio [. SE](../../assembler/masm/dot-if.md), [. Ripetere](../../assembler/masm/dot-repeat.md)o [. MENTRE](../../assembler/masm/dot-while.md).

- Una direttiva di assembly condizionale, ad esempio [if](../../assembler/masm/if-masm.md), [Repeat](../../assembler/masm/repeat.md)o **while**.

- Una struttura o una definizione di Unione.

- Definizione di una routine.

- Definizione di segmento.

- Direttiva [PopContext](../../assembler/masm/popcontext.md) .

- Una direttiva di assembly condizionale, ad esempio [else](../../assembler/masm/else-masm.md), [ElseIf](../../assembler/masm/elseif-masm.md)o **endif** senza un oggetto [if](../../assembler/masm/if-masm.md)corrispondente.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>