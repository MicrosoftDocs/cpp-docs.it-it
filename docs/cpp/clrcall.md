---
title: __clrcall
ms.date: 11/04/2016
f1_keywords:
- __clrcall_cpp
helpviewer_keywords:
- __clrcall keyword [C++]
ms.assetid: 92096695-683a-40ed-bf65-0c8443572152
ms.openlocfilehash: 6eb1a05eaf6669daa4cb7142ff16a57f7caf39cd
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857606"
---
# <a name="__clrcall"></a>__clrcall

Specifica che una funzione può essere chiamata solo dal codice gestito.  Utilizzare **__clrcall** per tutte le funzioni virtuali che verranno chiamate solo dal codice gestito. Questa convenzione di chiamata, però, non può essere utilizzata per le funzioni che vengono chiamate dal codice nativo. Il modificatore **__clrcall** è specifico di Microsoft.

Usare **__clrcall** per migliorare le prestazioni quando si chiama da una funzione gestita a una funzione gestita virtuale o da una funzione gestita a una funzione gestita tramite un puntatore.

I punti di ingresso sono funzioni separate e generate dal compilatore. Se una funzione dispone di un punto d'ingresso nativo e uno gestito, uno di essi corrisponde all'effettiva funzione con l'implementazione della funzione. L'altra è una funzione separata (un thunk) che effettua una chiamata nella funzione effettiva e consente a Common Language Runtime di eseguire PInvoke. Quando si contrassegna una funzione come **__clrcall**, si indica che l'implementazione della funzione deve essere MSIL e che la funzione del punto di ingresso nativo non verrà generata.

Quando si accetta l'indirizzo di una funzione nativa se non si specifica **__clrcall** , il compilatore utilizza il punto di ingresso nativo. **__clrcall** indica che la funzione è gestita e non è necessario passare attraverso la transizione da gestito a nativo. In questo caso, il compilatore utilizza il punto di ingresso gestito.

Quando si usa `/clr` (non `/clr:pure` o `/clr:safe`) e **__clrcall** non viene usato, l'accettazione dell'indirizzo di una funzione restituisce sempre l'indirizzo della funzione del punto di ingresso nativo. Quando si utilizza **__clrcall** , la funzione del punto di ingresso nativo non viene creata, quindi si ottiene l'indirizzo della funzione gestita, non una funzione thunk del punto di ingresso. Per ulteriori informazioni, vedere [doppio thunk](../dotnet/double-thunking-cpp.md). Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

[/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) implica che tutte le funzioni e i puntatori a funzione sono **__clrcall** e il compilatore non consentirà a una funzione all'interno di modulo di essere contrassegnata con un valore diverso da **__clrcall**. Quando si usa **/CLR: pure** , è possibile specificare **__clrcall** solo sui puntatori a funzione e sulle dichiarazioni esterne.

È possibile chiamare direttamente **__clrcall** funzioni da codice C++ esistente compilato utilizzando **/CLR** , purché tale funzione disponga di un'implementazione MSIL. non è possibile chiamare le funzioni di **__clrcall** direttamente da funzioni che dispongono di intrinisics inline e chiamano specifiche della CPU, ad esempio, anche se tali funzioni vengono compilate con `/clr`.

i puntatori a funzione **__clrcall** devono essere utilizzati solo nel dominio dell'applicazione in cui sono stati creati.  Invece di passare **__clrcall** puntatori a funzione tra domini applicazione, usare <xref:System.CrossAppDomainDelegate>. Per altre informazioni, vedere [domini applicazione e oggetti C++visivi ](../dotnet/application-domains-and-visual-cpp.md).

## <a name="example"></a>Esempio

Si noti che quando una funzione viene dichiarata con **__clrcall**, il codice verrà generato quando necessario; ad esempio, quando viene chiamata la funzione.

```cpp
// clrcall2.cpp
// compile with: /clr
using namespace System;
int __clrcall Func1() {
   Console::WriteLine("in Func1");
   return 0;
}

// Func1 hasn't been used at this point (code has not been generated),
// so runtime returns the adddress of a stub to the function
int (__clrcall *pf)() = &Func1;

// code calls the function, code generated at difference address
int i = pf();   // comment this line and comparison will pass

int main() {
   if (&Func1 == pf)
      Console::WriteLine("&Func1 == pf, comparison succeeds");
   else
      Console::WriteLine("&Func1 != pf, comparison fails");

   // even though comparison fails, stub and function call are correct
   pf();
   Func1();
}
```

```Output
in Func1
&Func1 != pf, comparison fails
in Func1
in Func1
```

## <a name="example"></a>Esempio

L'esempio seguente dimostra che è possibile definire un puntatore a funzione in modo da dichiarare, ad esempio, che il puntatore a funzione verrà richiamato solo dal codice gestito. Ciò consente al compilatore di chiamare direttamente la funzione gestita ed evitare il punto di ingresso nativo (problema del doppio thunk).

```cpp
// clrcall3.cpp
// compile with: /clr
void Test() {
   System::Console::WriteLine("in Test");
}

int main() {
   void (*pTest)() = &Test;
   (*pTest)();

   void (__clrcall *pTest2)() = &Test;
   (*pTest2)();
}
```

## <a name="see-also"></a>Vedere anche

[Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
