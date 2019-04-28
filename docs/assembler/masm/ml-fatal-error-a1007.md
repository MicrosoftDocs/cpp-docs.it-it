---
title: Errore ML irreversibile A1007
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A1007
helpviewer_keywords:
- A1007
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
ms.openlocfilehash: 98933c3a24da22f447174a3b51c4855690aba83e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62177903"
---
# <a name="ml-fatal-error-a1007"></a>Errore ML irreversibile A1007

**livello di nidificazione troppo profonda**

L'assembler raggiunto il limite di nidificazione. Il limite è 20 livelli altrimenti indicato.

Uno dei seguenti era eccessivamente annidato:

- Una direttiva di alto livello, ad esempio [. IF](../../assembler/masm/dot-if.md), [. Ripetere](../../assembler/masm/dot-repeat.md), o [. MENTRE](../../assembler/masm/dot-while.md).

- Una definizione della struttura.

- Una direttiva condizionale-assembly.

- Una definizione della procedura.

- Oggetto [PUSHCONTEXT](../../assembler/masm/pushcontext.md) (direttiva) (il limite è 10).

- Una definizione del segmento.

- Un file di inclusione.

- Una macro.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>