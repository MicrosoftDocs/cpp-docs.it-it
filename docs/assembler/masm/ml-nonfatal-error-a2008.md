---
title: Errore ML non irreversibile A2008
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A2008
helpviewer_keywords:
- A2008
ms.assetid: ca24157f-c88a-4678-ae06-3bc3cd956001
ms.openlocfilehash: 7f85a3aabb7b1955cede912168dfc04618b8f2b2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62201979"
---
# <a name="ml-nonfatal-error-a2008"></a>Errore ML non irreversibile A2008

**Errore di sintassi:**

Un token nella posizione corrente ha causato un errore di sintassi.

Potrebbe essersi verificato uno dei seguenti:

- Un prefisso di punto è stato aggiunto o omesso da una direttiva.

- Una parola riservata (ad esempio **C** oppure **dimensioni**) è stato usato come identificatore.

- È stata usata un'istruzione che non erano disponibili con la selezione corrente di processori o del coprocessore.

- Un operatore di confronto in fase di esecuzione (ad esempio `==`) è stato usato in un'istruzione condizionale assembly anziché un operatore relazionale (ad esempio [EQ](../../assembler/masm/operator-eq.md)).

- Un'istruzione o della direttiva è stata specificata un numero troppo ridotto di operandi.

- È stata usata una direttiva obsoleta.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>