---
title: Errore di ottimizzazione PGO PG0165
ms.date: 11/04/2016
f1_keywords:
- PG0165
helpviewer_keywords:
- PG0165
ms.assetid: e98122e7-ddee-4a2c-96b2-d232e4c65f3e
ms.openlocfilehash: f39bbe6540ebec10cd25c41ac2fe9f2acfca9b13
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62359735"
---
# <a name="profile-guided-optimization-error-pg0165"></a>Errore di ottimizzazione PGO PG0165

La lettura di 'filename '. pgd: ' Versione PGD non supportata (versione non corrispondente)'.

File PGD sono specifici di un set di strumenti del compilatore particolare. Questo errore viene generato quando si usa un compilatore diverso da quello usato per *Filename*pgd. Questo errore indica che questo set di strumenti del compilatore non è possibile utilizzare i dati dal *Filename*PGD per ottimizzare il programma corrente.

Per risolvere questo problema, rigenerare *Filename*pgd utilizzando il set di strumenti del compilatore corrente.