---
title: Errore del compilatore C2085 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2085
dev_langs:
- C++
helpviewer_keywords:
- C2085
ms.assetid: 0a86785c-8e6f-481b-8c7b-412220c1950d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c0fe489dbdd0934926a056bbc7e5539f40ca1ba8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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