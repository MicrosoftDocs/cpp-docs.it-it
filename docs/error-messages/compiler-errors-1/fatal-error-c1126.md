---
title: Errore irreversibile C1126 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1126
dev_langs:
- C++
helpviewer_keywords:
- C1126
ms.assetid: f22b26a6-8ad7-47cf-a237-196c8ea60aca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2a3ff02d69679074186e593d5e1c16bdf56d1052
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33225914"
---
# <a name="fatal-error-c1126"></a>Errore irreversibile C1126
'identifier': l'allocazione automatica supera le dimensioni  
  
 Spazio allocato per le variabili locali di una funzione (più di una quantità limitata di spazio utilizzato dal compilatore, ad esempio 20 byte per le funzioni sostituibili supplementari) supera il limite.  
  
 Per correggere l'errore, utilizzare `malloc` o `new` per allocare grandi quantità di dati.