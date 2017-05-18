---
title: Errore del compilatore C2084 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2084
dev_langs:
- C++
helpviewer_keywords:
- C2084
ms.assetid: 990b107f-3721-4851-ae8b-4b69a8c149ed
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 653dc7a4a5d330efc89942fbe4ddd07bff81f770
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2084"></a>Errore del compilatore C2084
funzione '*funzione*' ha già un corpo  
  
 La funzione è già stata definita.  
  
 Nelle versioni di Visual C++ prima di Visual Studio 2002,  
  
-   Il compilatore accetta più specializzazioni del modello risolti nello stesso tipo effettivo, anche se le definizioni aggiuntive non sarebbe mai disponibile. Il compilatore ora rileva questi più definizioni.  
  
-   `__int32`e `int` sono stati considerati come tipi separati. Il compilatore considera ora `__int32` come sinonimo di `int`. Ciò significa che il compilatore rileva più definizioni se è una funzione in overload sia `__int32` e `int` e restituisce un errore.  
  
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
