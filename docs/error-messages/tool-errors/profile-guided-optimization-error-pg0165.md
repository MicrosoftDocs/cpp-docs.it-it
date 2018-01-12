---
title: Profile-Guided Optimization errore PG0165 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: PG0165
dev_langs: C++
helpviewer_keywords: PG0165
ms.assetid: e98122e7-ddee-4a2c-96b2-d232e4c65f3e
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 32b9f5f3ee335aac0a8382377aa850c3b91a27a0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="profile-guided-optimization-error-pg0165"></a>Errore di ottimizzazione PGO PG0165
Lettura di 'Filename. pgd': ' versione PGD non supportata (versione non corrispondente)'.  
  
 Il file PGD sono specifico di un set di strumenti del compilatore particolare. Questo errore viene generato quando si utilizza un compilatore diverso da quello utilizzato per *Filename*pgd. Questo errore indica che il set di strumenti del compilatore non è possibile utilizzare i dati da *Filename*PGD per ottimizzare il programma corrente.  
  
 Per risolvere questo problema, rigenerare *Filename*pgd utilizzando il set di strumenti del compilatore corrente.