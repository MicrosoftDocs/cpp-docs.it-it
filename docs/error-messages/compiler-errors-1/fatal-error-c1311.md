---
title: Errore irreversibile C1311 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C1311
dev_langs: C++
helpviewer_keywords: C1311
ms.assetid: 6590a06c-ce9d-4f17-8f62-c809343143b8
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a0d798ea53ebbbfe850b77b4b8176b35e2040ed8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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