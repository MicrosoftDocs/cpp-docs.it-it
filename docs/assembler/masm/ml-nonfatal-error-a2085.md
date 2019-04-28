---
title: Errore ML non irreversibile A2085
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A2085
helpviewer_keywords:
- A2085
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
ms.openlocfilehash: 729f6f38761171c6ddc4cccfc2443c6a2b597bf3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62177188"
---
# <a name="ml-nonfatal-error-a2085"></a>Errore ML non irreversibile A2085

**istruzione o registrazione non accettato in modalità della CPU corrente**

È stato effettuato il tentativo di utilizzare un'istruzione, registrare o parola chiave che non è valido per la modalità del processore corrente.

Ad esempio, a 32 registri richiedono [.386](../../assembler/masm/dot-386.md) o versione successiva. Registri di controllo, ad esempio CR0 richiedono la modalità con privilegi [386p](../../assembler/masm/dot-386p.md) o versione successiva. Verrà generato questo errore anche per il **NEAR32**, **FAR32**, e **FLAT** parole chiave, che richiedono. **386** o versione successiva.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>