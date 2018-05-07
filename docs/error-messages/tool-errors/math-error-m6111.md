---
title: Errore matematico M6111 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- M6111
dev_langs:
- C++
helpviewer_keywords:
- M6111
ms.assetid: c0fc13f8-33c8-4e3f-a440-126cc623441b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3b03937ed442b169b960d573b44c0eb6ebca9660
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="math-error-m6111"></a>Errore matematico M6111
underflow dello stack  
  
 Un'operazione a virgola mobile ha restituito un underflow dello stack del coprocessore 8087/287/387 o l'emulatore.  
  
 Questo errore è spesso causato da una chiamata a un `long double` funzione che restituisce un valore. Ad esempio, di seguito genera questo errore quando compilato ed eseguito:  
  
```  
long double ld() {};  
main ()  
{  
  ld();  
}  
```  
  
 Il programma termina con il codice di uscita 139.