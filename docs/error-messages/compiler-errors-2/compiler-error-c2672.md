---
title: C2672 errore del compilatore | Documenti Microsoft
ms.date: 10/24/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2672
dev_langs:
- C++
helpviewer_keywords:
- C2672
ms.assetid: 7e86338a-2d4b-40fe-9dd2-ac6886f3f31a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 98c569c8b9b1466f184b44d345e76341d1476935
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33236118"
---
# <a name="compiler-error-c2672"></a>C2672 errore del compilatore

> '*funzione*': non corrisponde ad alcuna funzione in overload trovata

Il compilatore non ha trovato una funzione in overload corrispondente la funzione specificata. È stato trovato alcun tipo di funzione che accetta parametri o nessuna funzione corrispondente corrispondenti è l'accessibilità necessaria nel contesto.

Se utilizzato da alcuni contenitori della libreria standard o algoritmi, è necessario fornire i tipi di membri accessibili o le funzioni friend che soddisfano i requisiti del contenitore o dell'algoritmo. Ad esempio, i tipi di iteratore devono derivare da `std::iterator<>`. Le operazioni di confronto o l'utilizzo di altri operatori nei tipi di elemento contenitore potrebbe richiedere il tipo di essere considerato come un sinistra sia un operando destro. Utilizzare il tipo come un operando destro può richiedere l'implementazione dell'operatore come una funzione non membro del tipo.

## <a name="example"></a>Esempio

Versioni del compilatore prima di Visual Studio 2017 non ha eseguito il controllo su nomi completi in alcuni contesti di modello di accesso. Ciò può interferire con il comportamento previsto per SFINAE in cui la sostituzione deve avere esito negativo a causa della non accessibilità di un nome. Questo potrebbe avere causato un arresto anomalo o un comportamento imprevisto in fase di esecuzione perché il compilatore ha chiamato per errore l'overload dell'operatore non corretto. In Visual Studio 2017 viene generato un errore del compilatore.

In questo esempio viene compilato in Visual Studio 2015, ma genera un errore in Visual Studio 2017. Per risolvere questo problema, rendere accessibile il membro del parametro modello in cui viene valutata.

```cpp
#include <type_traits>

template <class T> class S {
// public:    // Uncomment this line to fix
    typedef typename T type;
};

template <class T, std::enable_if<std::is_integral<typename S<T>::type>::value, T> * = 0>
bool f(T x)
{
    return (x == 0);
}

int main()
{
    f(10); // C2672: No matching overloaded function found.
}
```