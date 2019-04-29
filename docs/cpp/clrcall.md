---
title: __clrcall
ms.date: 11/04/2016
f1_keywords:
- __clrcall_cpp
helpviewer_keywords:
- __clrcall keyword [C++]
ms.assetid: 92096695-683a-40ed-bf65-0c8443572152
ms.openlocfilehash: bc44feb97223de47f45734f75777ee040d0ebdd8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62364571"
---
# <a name="clrcall"></a>__clrcall

**Sezione specifica Microsoft**

Specifica che una funzione può essere chiamata solo dal codice gestito.  Uso **clrcall** per tutte le funzioni virtuali che verranno chiamate solo dal codice gestito. Questa convenzione di chiamata, però, non può essere utilizzata per le funzioni che vengono chiamate dal codice nativo.

Uso **clrcall** per migliorare le prestazioni durante la chiamata da una funzione gestita a una funzione gestita virtuale o dalla funzione gestita a una funzione gestita tramite puntatore.

I punti di ingresso sono funzioni separate e generate dal compilatore. Se una funzione dispone di un punto d'ingresso nativo e uno gestito, uno di essi corrisponde all'effettiva funzione con l'implementazione della funzione. L'altra è una funzione separata (un thunk) che effettua una chiamata nella funzione effettiva e consente a Common Language Runtime di eseguire PInvoke. Quando si contrassegna una funzione come **clrcall**, si indica l'implementazione della funzione deve essere MSIL e che la funzione di punto di ingresso nativo non verrà generata.

Quando si acquisisce l'indirizzo di una funzione nativa se **clrcall** non viene specificato, il compilatore Usa il punto di ingresso nativo. **clrcall** indica che la funzione è gestita e vi è alcuna necessità di eseguire la transizione da non gestita a nativa. In questo caso, il compilatore utilizza il punto di ingresso gestito.

Quando `/clr` (non `/clr:pure` oppure `/clr:safe`) viene usato e **clrcall** è inutilizzato, accetta sempre l'indirizzo di una funzione restituisce l'indirizzo della funzione di punto di ingresso nativo. Quando **clrcall** viene usato, la funzione di punto di ingresso nativo non viene creata, quindi si ottiene l'indirizzo della funzione non gestita, non una funzione thunk di punto di ingresso. Per altre informazioni, vedere [doppio thunk](../dotnet/double-thunking-cpp.md). Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

[/CLR (compilazione common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) implica che tutte le funzioni e i puntatori a funzione siano **clrcall** e il compilatore non consente una funzione all'interno del modulo diversamente da contrassegnare qualsiasi elemento diverso dal **clrcall**. Quando **/clr: pure** viene utilizzato **clrcall** può essere specificata solo in dichiarazioni esterne e i puntatori a funzione.

È possibile chiamare direttamente **clrcall** le funzioni da esistente C++ codice compilato usando **/clr** fino a quando tale funzione dispone di un'implementazione MSIL. **clrcall** le funzioni non possono essere chiamate direttamente da funzioni che hanno l'assembly inline e chiamano intrinseci specifici della CPU, ad esempio, anche se tali funzioni vengono compilate con `/clr`.

**clrcall** sono concepite per essere usato nel dominio dell'applicazione in cui sono state create solo i puntatori a funzione.  Anziché passare **clrcall** puntatori a funzione tra domini dell'applicazione, usare <xref:System.CrossAppDomainDelegate>. Per altre informazioni, vedere [domini applicazione e Visual C++](../dotnet/application-domains-and-visual-cpp.md).

## <a name="example"></a>Esempio

Si noti che quando una funzione è dichiarata con **clrcall**, verrà generato il codice quando necessario; ad esempio, quando viene chiamata (funzione).

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
