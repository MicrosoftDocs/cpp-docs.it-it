---
title: 2.4 condivisione del lavoro costrutti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 25bb4ded-8466-4daa-a863-766b5a99b995
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 476e4e23b22527accaa095d80b827c95aed58c15
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="24-work-sharing-constructs"></a>2.4 Costrutti per la condivisione del lavoro
Un costrutto di condivisione del lavoro distribuisce l'esecuzione dell'istruzione associati tra i membri del team che ha rilevato. Le direttive di condivisione del lavoro non verranno avviati i nuovi thread ed non è implicita barriera all'ingresso in un costrutto di condivisione del lavoro.  
  
 Costruisce la sequenza di condivisione del lavoro e **barriera** direttive rilevate devono essere uguale per ogni thread in un team.  
  
 OpenMP definisce i seguenti costrutti di condivisione del lavoro e descritti nelle sezioni che seguono:  
  
-   **per** (direttiva)  
  
-   **Nelle sezioni** (direttiva)  
  
-   **singolo** (direttiva)