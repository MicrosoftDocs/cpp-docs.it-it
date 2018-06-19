---
title: Profile-Guided Optimization errore PG0165 | Documenti Microsoft
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
ms.openlocfilehash: acad97411480112d06dadd454d1368dcfdf2c87f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33318415"
---
# <a name="profile-guided-optimization-error-pg0165"></a>Errore di ottimizzazione PGO PG0165
Lettura di 'Filename. pgd': ' versione PGD non supportata (versione non corrispondente)'.  
  
 Il file PGD sono specifico di un set di strumenti del compilatore particolare. Questo errore viene generato quando si utilizza un compilatore diverso da quello utilizzato per *Filename*pgd. Questo errore indica che il set di strumenti del compilatore non è possibile utilizzare i dati da *Filename*PGD per ottimizzare il programma corrente.  
  
 Per risolvere questo problema, rigenerare *Filename*pgd utilizzando il set di strumenti del compilatore corrente.