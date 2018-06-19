---
title: Errore del compilatore C2084 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2084
dev_langs:
- C++
helpviewer_keywords:
- C2084
ms.assetid: 990b107f-3721-4851-ae8b-4b69a8c149ed
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ce1510dd6e78b8774d3cc433f583c16cdbb8d06
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33173877"
---
# <a name="compiler-error-c2084"></a>Errore del compilatore C2084
funzione '*funzione*' ha già un corpo  
  
 La funzione è già stata definita.  
  
 Nelle versioni di Visual C++ prima di Visual Studio 2002,  
  
-   Il compilatore accetta più specializzazioni del modello risolti nello stesso tipo effettivo, anche se le definizioni aggiuntive non sarebbe mai disponibile. Il compilatore ora rileva questi più definizioni.  
  
-   `__int32` e `int` venivano considerate come tipi separati. Il compilatore considera ora `__int32` come sinonimo di `int`. Ciò significa che il compilatore rileva più definizioni se è una funzione in overload sia `__int32` e `int` e restituisce un errore.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2084:  
  
```cpp  
// C2084.cpp  
void Func(int);  
void Func(int) {}   // define function  
void Func(int) {}   // C2084 second definition  
```  
  
Per correggere l'errore, rimuovere la definizione duplicata:  
  
```  
// C2084b.cpp  
// compile with: /c  
void Func(int);  
void Func(int) {}  
```