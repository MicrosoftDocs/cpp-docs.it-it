---
title: Errore irreversibile C1311 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1311
dev_langs:
- C++
helpviewer_keywords:
- C1311
ms.assetid: 6590a06c-ce9d-4f17-8f62-c809343143b8
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 9aeb63e041ddfe26a8fc47afc838f2f5c3ce35d6
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

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
