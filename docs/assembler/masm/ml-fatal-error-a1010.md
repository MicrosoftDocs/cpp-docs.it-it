---
title: Errore ML irreversibile A1010
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A1010
helpviewer_keywords:
- A1010
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
ms.openlocfilehash: b3141f8819a33281c70e34bd7772d4475886e557
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75312586"
---
# <a name="ml-fatal-error-a1010"></a>Errore ML irreversibile A1010

**annidamento blocchi senza corrispondenza:**

Un blocco che inizia non ha un elemento End corrispondente o un elemento End di blocco non ha un inizio corrispondente. È possibile che sia necessario uno dei seguenti elementi:

- Una direttiva di alto livello, ad esempio [. SE](dot-if.md), [. Ripetere](dot-repeat.md)o [. MENTRE](dot-while.md).

- Una direttiva di assembly condizionale, ad esempio [if](if-masm.md), [Repeat](repeat.md)o **while**.

- Una struttura o una definizione di Unione.

- Definizione di una routine.

- Definizione di segmento.

- Direttiva [PopContext](popcontext.md) .

- Una direttiva di assembly condizionale, ad esempio [else](else-masm.md), [ElseIf](elseif-masm.md)o **endif** senza un oggetto [if](if-masm.md)corrispondente.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)
