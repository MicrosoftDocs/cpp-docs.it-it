---
title: Errore irreversibile C1126 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1126
dev_langs:
- C++
helpviewer_keywords:
- C1126
ms.assetid: f22b26a6-8ad7-47cf-a237-196c8ea60aca
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: abe40b1813facb9531312e08371fbe769c32c119
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1126"></a>Errore irreversibile C1126
'identifier': l'allocazione automatica supera le dimensioni  
  
 Spazio allocato per le variabili locali di una funzione (più di una quantità limitata di spazio utilizzato dal compilatore, ad esempio 20 byte per le funzioni sostituibili supplementari) supera il limite.  
  
 Per correggere l'errore, utilizzare `malloc` o `new` per allocare grandi quantità di dati.