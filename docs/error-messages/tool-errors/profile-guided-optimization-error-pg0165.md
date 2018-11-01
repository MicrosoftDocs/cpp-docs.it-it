---
title: Errore di ottimizzazione PGO PG0165
ms.date: 11/04/2016
f1_keywords:
- PG0165
helpviewer_keywords:
- PG0165
ms.assetid: e98122e7-ddee-4a2c-96b2-d232e4c65f3e
ms.openlocfilehash: f39bbe6540ebec10cd25c41ac2fe9f2acfca9b13
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50434519"
---
# <a name="profile-guided-optimization-error-pg0165"></a>Errore di ottimizzazione PGO PG0165

La lettura di 'filename '. pgd: ' versione PGD non supportata (versione non corrispondente)'.

File PGD sono specifici di un set di strumenti del compilatore particolare. Questo errore viene generato quando si usa un compilatore diverso da quello usato per *Filename*pgd. Questo errore indica che questo set di strumenti del compilatore non è possibile utilizzare i dati dal *Filename*PGD per ottimizzare il programma corrente.

Per risolvere questo problema, rigenerare *Filename*pgd utilizzando il set di strumenti del compilatore corrente.