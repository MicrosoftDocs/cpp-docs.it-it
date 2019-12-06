---
title: Errore ML non irreversibile A2008
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A2008
helpviewer_keywords:
- A2008
ms.assetid: ca24157f-c88a-4678-ae06-3bc3cd956001
ms.openlocfilehash: 192d82186a58d4e6b534ab5ec65b696d4d7ce3ee
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74856753"
---
# <a name="ml-nonfatal-error-a2008"></a>Errore ML non irreversibile A2008

**errore di sintassi:**

Un token nella posizione corrente ha causato un errore di sintassi.

È possibile che si sia verificata una delle condizioni seguenti:

- Un prefisso punto è stato aggiunto o omesso da una direttiva.

- Una parola riservata, ad esempio **C** o **size**, è stata usata come identificatore.

- È stata usata un'istruzione che non è disponibile con la selezione del processore o del coprocessore corrente.

- Un operatore di runtime del confronto (ad esempio `==`) è stato utilizzato in un'istruzione di assembly condizionale anziché in un operatore relazionale (ad esempio [EQ](../../assembler/masm/operator-eq.md)).

- Un numero eccessivo di operandi è stato assegnato a un'istruzione o a una direttiva.

- È stata usata una direttiva obsoleta.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>