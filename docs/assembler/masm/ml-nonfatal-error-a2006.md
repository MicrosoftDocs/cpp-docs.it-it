---
title: Errore ML non irreversibile A2006
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A2006
helpviewer_keywords:
- A2006
ms.assetid: b8a8f096-95df-42b5-85ed-d2530560a84c
ms.openlocfilehash: 80283bde4dff36e32d276c998f6797b6eeed8160
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62202323"
---
# <a name="ml-nonfatal-error-a2006"></a>Errore ML non irreversibile A2006

**simbolo non definito: identificatore**

È stato effettuato il tentativo di utilizzare un simbolo che non è stato definito.

Potrebbe essersi verificato uno dei seguenti:

- Non è stato definito un simbolo.

- Un campo non è un membro della struttura specificata.

- È stato definito un simbolo in un file di inclusione che non è stato fornito.

- Un simbolo esterno è stato utilizzato senza un' [EXTERN](../../assembler/masm/extern-masm.md) oppure [EXTERNDEF](../../assembler/masm/externdef.md) direttiva.

- Un nome di simbolo è stato digitato correttamente.

- Un'etichetta del codice locale viene fatto riferimento all'esterno del relativo ambito.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>