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
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 4f5346a3adb5535242207ebc3a3c9b2fcffa7a40
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="fatal-error-c1126"></a>Errore irreversibile C1126
'identifier': l'allocazione automatica supera le dimensioni  
  
 Spazio allocato per le variabili locali di una funzione (più di una quantità limitata di spazio utilizzato dal compilatore, ad esempio 20 byte per le funzioni sostituibili supplementari) supera il limite.  
  
 Per correggere l'errore, utilizzare `malloc` o `new` per allocare grandi quantità di dati.
