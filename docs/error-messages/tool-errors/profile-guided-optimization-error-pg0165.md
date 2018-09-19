---
title: Errore di ottimizzazione PG0165 PGO | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PG0165
dev_langs:
- C++
helpviewer_keywords:
- PG0165
ms.assetid: e98122e7-ddee-4a2c-96b2-d232e4c65f3e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 332751a123bf7d6414c40b79870b5edf27a3d8a7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46084211"
---
# <a name="profile-guided-optimization-error-pg0165"></a>Errore di ottimizzazione PGO PG0165

La lettura di 'filename '. pgd: ' versione PGD non supportata (versione non corrispondente)'.

File PGD sono specifici di un set di strumenti del compilatore particolare. Questo errore viene generato quando si usa un compilatore diverso da quello usato per *Filename*pgd. Questo errore indica che questo set di strumenti del compilatore non è possibile utilizzare i dati dal *Filename*PGD per ottimizzare il programma corrente.

Per risolvere questo problema, rigenerare *Filename*pgd utilizzando il set di strumenti del compilatore corrente.