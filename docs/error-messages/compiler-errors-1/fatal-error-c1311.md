---
title: Errore irreversibile C1311 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1311
dev_langs:
- C++
helpviewer_keywords:
- C1311
ms.assetid: 6590a06c-ce9d-4f17-8f62-c809343143b8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 53b3759a5fec4b072f9a9b300670d61cb0d101c5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33226678"
---
# <a name="fatal-error-c1311"></a>Errore irreversibile C1311
Formato COFF non è possibile inizializzare in modo statico 'var' con numero di byte di un indirizzo  
  
 Impossibile assegnare un indirizzo, il cui valore non è noto in fase di compilazione in modo statico a una variabile il cui tipo è archiviazione meno di quattro byte.  
  
 Questo errore può verificarsi nel codice che altrimenti C++ valido.  
  
 Nell'esempio riportato di seguito viene illustrata una condizione da cui potrebbe essere generato l'errore C1311.  
  
```  
char c = (char)"Hello, world";   // C1311  
char *d = (char*)"Hello, world";   // OK  
```