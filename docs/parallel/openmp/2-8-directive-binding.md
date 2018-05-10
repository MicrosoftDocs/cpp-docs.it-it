---
title: 2.8 associazione di direttive | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 7bdac45e-ab55-42f0-bd47-a2e3d5bbab3e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 02492b228b4bb47a800955f078a59ce680312a87
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="28-directive-binding"></a>2.8 Associazione di direttive
Associazione dinamica di direttive deve essere conformi alle regole seguenti:  
  
-   Il **per**, **sezioni**, **singolo**, **master**, e **barriera** direttive associare l'in modo dinamico inclusione **parallela**, se presente, indipendentemente dal valore di qualsiasi **se** clausola che possono essere presente in tale direttiva. Se nessuna area attualmente in esecuzione, le direttive vengono eseguite da un team composto solo il thread principale.  
  
-   Il **ordinati** direttiva associa per l'inclusione in modo dinamico **per**.  
  
-   Il **atomica** direttiva impone l'accesso esclusivo alle **atomica** direttive in tutti i thread, non solo il team corrente.  
  
-   Il **critico** direttiva impone l'accesso esclusivo alle **critico** direttive in tutti i thread, non solo il team corrente.  
  
-   Una direttiva mai possibile associare in modo dinamico a qualsiasi direttiva di fuori il più vicino che li racchiude **parallela**.