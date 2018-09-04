---
title: Machine Learning errore non irreversibile A2008 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2008
dev_langs:
- C++
helpviewer_keywords:
- A2008
ms.assetid: ca24157f-c88a-4678-ae06-3bc3cd956001
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 774cf4c2a51bf084fb63e572cc99b0c8e3cba26f
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43679375"
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