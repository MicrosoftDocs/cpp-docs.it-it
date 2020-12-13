---
description: 'Altre informazioni su: ML errore non irreversibile irreversibile A2008'
title: Errore ML non irreversibile A2008
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A2008
helpviewer_keywords:
- A2008
ms.assetid: ca24157f-c88a-4678-ae06-3bc3cd956001
ms.openlocfilehash: 4482304de3238954a01a0242bd84712012d691f0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97129298"
---
# <a name="ml-nonfatal-error-a2008"></a>Errore ML non irreversibile A2008

**errore di sintassi:**

Un token nella posizione corrente ha causato un errore di sintassi.

È possibile che si sia verificata una delle condizioni seguenti:

- Un prefisso punto è stato aggiunto o omesso da una direttiva.

- Una parola riservata, ad esempio **C** o **size**, è stata usata come identificatore.

- È stata usata un'istruzione che non è disponibile con la selezione del processore o del coprocessore corrente.

- Un operatore di runtime del confronto (ad esempio `==` ) è stato utilizzato in un'istruzione di assembly condizionale anziché in un operatore relazionale (ad esempio [EQ](operator-eq.md)).

- Un numero eccessivo di operandi è stato assegnato a un'istruzione o a una direttiva.

- È stata usata una direttiva obsoleta.

## <a name="see-also"></a>Vedi anche

[Messaggi di errore ML](ml-error-messages.md)
