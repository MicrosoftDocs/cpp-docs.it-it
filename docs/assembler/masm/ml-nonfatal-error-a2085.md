---
title: Errore ML non irreversibile A2085
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A2085
helpviewer_keywords:
- A2085
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
ms.openlocfilehash: 3bd89fb2b7f8b755cdb095e63ed89386332ecf9d
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74855758"
---
# <a name="ml-nonfatal-error-a2085"></a>Errore ML non irreversibile A2085

**istruzione o registro non accettato in modalità CPU corrente**

È stato effettuato un tentativo di utilizzare un'istruzione, un registro o una parola chiave non valida per la modalità di elaborazione corrente.

Ad esempio, i registri a 32 bit richiedono [. 386](../../assembler/masm/dot-386.md) o versione successiva. I registri di controllo, ad esempio registro CR0, richiedono la modalità Privileged [. 386P](../../assembler/masm/dot-386p.md) o versione successiva. Questo errore viene generato anche per le parole chiave **NEAR32**, **far32**e **Flat** , che richiedono. **386** o versione successiva.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>