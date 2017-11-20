---
title: Errore matematico M6111 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: M6111
dev_langs: C++
helpviewer_keywords: M6111
ms.assetid: c0fc13f8-33c8-4e3f-a440-126cc623441b
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 80bca2ae3462bf67bc017de0f77ce56b4a45994b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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