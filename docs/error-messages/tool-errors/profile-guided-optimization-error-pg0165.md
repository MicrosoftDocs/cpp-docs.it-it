---
title: Errore di ottimizzazione PGO PG0165
description: Vengono descritti gli errori di PG0165 durante la lettura dei dati di ottimizzazione PGO (PGO).
ms.date: 10/30/2019
f1_keywords:
- PG0165
helpviewer_keywords:
- PG0165
ms.assetid: e98122e7-ddee-4a2c-96b2-d232e4c65f3e
ms.openlocfilehash: c5e5c5d37f8c70a6c2a3d9f7a43c13bb46d0e25a
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73626795"
---
# <a name="profile-guided-optimization-error-pg0165"></a>Errore di ottimizzazione PGO PG0165

Si è verificato un errore durante la lettura dei dati di ottimizzazione PGO. Questo errore può essere visualizzato in diverse forme:

> Lettura di '*filename. PGD*':' la versione PGD non è supportata (versione non corrispondente)'.

I file PGD sono specifici di un set di strumenti del compilatore specifico. Questo errore viene generato quando si usa un compilatore diverso da quello usato per creare *filename. PGD*. L'errore indica che questo set di strumenti del compilatore non può utilizzare i dati di *filename. PGD* per ottimizzare il programma corrente. Per risolvere il problema, rigenerare *filename*. PGD usando il set di strumenti del compilatore corrente.

> Lettura di '*filename. PGD*':' PGD file is read-only '.

Questo errore viene visualizzato quando il file PGD è contrassegnato come di sola lettura nel file System. Per risolvere il problema, modificare gli attributi del file in lettura/scrittura.
