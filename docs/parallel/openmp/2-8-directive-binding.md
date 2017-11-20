---
title: 2.8 associazione di direttive | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 7bdac45e-ab55-42f0-bd47-a2e3d5bbab3e
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a70dbc0306005473d427015e81d8b93e895da9fa
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="28-directive-binding"></a>2.8 Associazione di direttive
Associazione dinamica di direttive deve essere conformi alle regole seguenti:  
  
-   Il **per**, **sezioni**, **singolo**, **master**, e **barriera** direttive associare l'in modo dinamico inclusione **parallela**, se presente, indipendentemente dal valore di qualsiasi **se** clausola che possono essere presente in tale direttiva. Se nessuna area attualmente in esecuzione, le direttive vengono eseguite da un team composto solo il thread principale.  
  
-   Il **ordinati** direttiva associa per l'inclusione in modo dinamico **per**.  
  
-   Il **atomica** direttiva impone l'accesso esclusivo alle **atomica** direttive in tutti i thread, non solo il team corrente.  
  
-   Il **critico** direttiva impone l'accesso esclusivo alle **critico** direttive in tutti i thread, non solo il team corrente.  
  
-   Una direttiva mai possibile associare in modo dinamico a qualsiasi direttiva di fuori il più vicino che li racchiude **parallela**.