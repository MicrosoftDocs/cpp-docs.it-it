---
title: Errore ML non irreversibile A2085
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A2085
helpviewer_keywords:
- A2085
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
ms.openlocfilehash: f8fdedfc1bc8bff63124d18fe1410d9f144cb926
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75316837"
---
# <a name="ml-nonfatal-error-a2085"></a>Errore ML non irreversibile A2085

**istruzione o registro non accettato in modalità CPU corrente**

È stato effettuato un tentativo di utilizzare un'istruzione, un registro o una parola chiave non valida per la modalità di elaborazione corrente.

Ad esempio, i registri a 32 bit richiedono [. 386](dot-386.md) o versione successiva. I registri di controllo, ad esempio registro CR0, richiedono la modalità Privileged [. 386P](dot-386p.md) o versione successiva. Questo errore viene generato anche per le parole chiave **NEAR32**, **far32**e **Flat** , che richiedono. **386** o versione successiva.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)
