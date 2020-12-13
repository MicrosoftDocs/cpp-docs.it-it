---
description: 'Altre informazioni su: ML errore non irreversibile irreversibile A2085'
title: Errore ML non irreversibile A2085
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A2085
helpviewer_keywords:
- A2085
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
ms.openlocfilehash: 3a2cd89b373f761beb3fc0de01a1bea3ec7bf82e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97128545"
---
# <a name="ml-nonfatal-error-a2085"></a>Errore ML non irreversibile A2085

**istruzione o registro non accettato in modalità CPU corrente**

È stato effettuato un tentativo di utilizzare un'istruzione, un registro o una parola chiave non valida per la modalità di elaborazione corrente.

Ad esempio, i registri a 32 bit richiedono [. 386](dot-386.md) o versione successiva. I registri di controllo, ad esempio registro CR0, richiedono la modalità Privileged [. 386P](dot-386p.md) o versione successiva. Questo errore viene generato anche per le parole chiave **NEAR32**, **far32** e **Flat** , che richiedono. **386** o versione successiva.

## <a name="see-also"></a>Vedi anche

[Messaggi di errore ML](ml-error-messages.md)
