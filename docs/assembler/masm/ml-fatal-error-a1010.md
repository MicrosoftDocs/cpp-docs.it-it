---
description: 'Altre informazioni su: ML errore irreversibile A1010'
title: Errore ML irreversibile A1010
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A1010
helpviewer_keywords:
- A1010
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
ms.openlocfilehash: 4a00d9594c71c8a22942e869d109bf51176394c9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97129506"
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

## <a name="see-also"></a>Vedi anche

[Messaggi di errore ML](ml-error-messages.md)
