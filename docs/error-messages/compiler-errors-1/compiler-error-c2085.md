---
title: Errore del compilatore C2085 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2085
dev_langs:
- C++
helpviewer_keywords:
- C2085
ms.assetid: 0a86785c-8e6f-481b-8c7b-412220c1950d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5834cbca32c2e3bb0c20ab39ee5d3b9d3e8e9c55
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2085"></a>Errore del compilatore C2085
'identifier': non in elenco di parametri formali  
  
 L'identificatore è stato dichiarato in una definizione di funzione, ma non nell'elenco di parametri formali. (Solo in ANSI C)  
  
 L'esempio seguente genera l'errore C2085:  
  
```  
// C2085.c  
void func1( void )  
int main( void ) {}   // C2085  
```  
  
 Possibile soluzione:  
  
```  
// C2085b.c  
void func1( void );  
int main( void ) {}  
```  
  
 Con il punto e virgola, `func1()` è simile a una definizione di funzione, non è un prototipo, pertanto `main` è definito all'interno di `func1()`, errore C2085 per identificatore `main`.