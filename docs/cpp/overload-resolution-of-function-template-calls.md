---
title: Risoluzione dell'overload delle chiamate di funzione modello | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- function templates overload resolution
ms.assetid: a2918748-2cbb-4fc6-a176-e256f120bee4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3d4a0e2867c5057eb5808c4d39687961eabba6dd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32420028"
---
# <a name="overload-resolution-of-function-template-calls"></a>Risoluzione dell'overload di chiamate a modelli di funzioni
Un modello di funzione può eseguire l'overload delle funzioni non template dello stesso nome. In questi casi, le chiamate di funzione vengono risolte innanzitutto utilizzando la deduzione dell'argomento di modello, per creare un'istanza del modello di funzione con una specializzazione univoca. Se la deduzione dell'argomento di modello non riesce, vengono presi in considerazione gli altri overload di funzione per risolvere la chiamata. Tali altri overload, noti anche come set candidati, includono funzioni non template e altri modelli di funzione per i quali si è creata un'istanza. Se la deduzione dell'argomento di modello viene eseguita correttamente, la funzione generata viene confrontata con le altre funzioni, al fine di determinare la migliore corrispondenza in base alle regole di risoluzione dell'overload. Per ulteriori informazioni, vedere [overload di funzioni](function-overloading.md).  
  
## <a name="example"></a>Esempio

 Se una funzione non template risulta essere una corrispondenza ugualmente valida, rispetto a una funzione di modello, viene scelta la funzione non template (a meno che gli argomenti di modello non siano stati specificati in modo esplicito), come nella chiamata `f(1, 1)` riportata nell'esempio seguente.  
  
```cpp
// template_name_resolution9.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
void f(int, int) { cout << "f(int, int)" << endl; }  
void f(char, char) { cout << "f(char, char)" << endl; }  
  
template <class T1, class T2>  
void f(T1, T2)  
{  
   cout << "void f(T1, T2)" << endl;  
};  
  
int main()  
{  
   f(1, 1);   // Equally good match; choose the nontemplate function.  
   f('a', 1); // Chooses the template function.  
   f<int, int>(2, 2);  // Template arguments explicitly specified.  
}  
```  
  
```Output  
f(int, int)  
void f(T1, T2)  
void f(T1, T2)  
```  
  
## <a name="example"></a>Esempio

 Nell'esempio seguente, viene dimostrato come, nel caso in cui la funzione non template richieda una conversione, si preferisca la funzione di modello esattamente corrispondente.  
  
```cpp
// template_name_resolution10.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
void f(int, int) { cout << "f(int, int)" << endl; }  
  
template <class T1, class T2>  
void f(T1, T2)  
{  
   cout << "void f(T1, T2)" << endl;  
};  
  
int main()  
{  
   long l = 0;  
   int i = 0;  
   // Call the template function f(long, int) because f(int, int)  
   // would require a conversion from long to int.  
   f(l, i);  
}  
```  
  
```Output  
void f(T1, T2)  
```  
  
## <a name="see-also"></a>Vedere anche

 [Risoluzione dei nomi](../cpp/templates-and-name-resolution.md)   
 [typename](../cpp/typename.md)   
 
