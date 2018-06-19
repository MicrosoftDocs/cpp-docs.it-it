---
title: 2.4 condivisione del lavoro costrutti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 25bb4ded-8466-4daa-a863-766b5a99b995
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c00eb94055f26954a283a6172f69228804832ac4
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33689636"
---
# <a name="24-work-sharing-constructs"></a>2.4 Costrutti per la condivisione del lavoro
Un costrutto di condivisione del lavoro distribuisce l'esecuzione dell'istruzione associati tra i membri del team che ha rilevato. Le direttive di condivisione del lavoro non verranno avviati i nuovi thread ed non è implicita barriera all'ingresso in un costrutto di condivisione del lavoro.  
  
 Costruisce la sequenza di condivisione del lavoro e **barriera** direttive rilevate devono essere uguale per ogni thread in un team.  
  
 OpenMP definisce i seguenti costrutti di condivisione del lavoro e descritti nelle sezioni che seguono:  
  
-   **per** (direttiva)  
  
-   **Nelle sezioni** (direttiva)  
  
-   **singolo** (direttiva)