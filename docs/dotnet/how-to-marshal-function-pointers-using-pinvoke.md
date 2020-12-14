---
description: 'Altre informazioni su: procedura: effettuare il marshalling di puntatori a funzione utilizzando PInvoke'
title: 'Procedura: Effettuare il marshalling di puntatori a funzione utilizzando PInvoke'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- data marshaling [C++], callbacks and delegates
- interop [C++], callbacks and delegates
- platform invoke [C++], callbacks and delegates
- marshaling [C++], callbacks and delegates
ms.assetid: dcf396fd-a91d-49c0-ab0b-1ea160668a89
ms.openlocfilehash: bfe3f669cf023ed914bdccb3ae15ccafefbb49c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302582"
---
# <a name="how-to-marshal-function-pointers-using-pinvoke"></a>Procedura: Effettuare il marshalling di puntatori a funzione utilizzando PInvoke

In questo argomento viene illustrato come usare i delegati gestiti al posto dei puntatori a funzione quando si interagisce con funzioni non gestite usando le funzionalità di .NET Framework P/Invoke. Tuttavia, i programmatori Visual C++ sono invitati a utilizzare le funzionalità di interoperabilità C++, quando possibile, poiché P/Invoke fornisce una piccola segnalazione degli errori in fase di compilazione, non è indipendente dai tipi e può essere noioso da implementare. Se l'API non gestita viene assemblata come DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione. In caso contrario, vedere gli argomenti seguenti:

- [Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

- [Procedura: effettuare il marshalling di callback e delegati utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-callbacks-and-delegates-by-using-cpp-interop.md)

Le API non gestite che accettano i puntatori alle funzioni come argomenti possono essere chiamate dal codice gestito con un delegato gestito al posto del puntatore a funzione nativo. Il compilatore esegue automaticamente il marshalling del delegato alle funzioni non gestite come puntatore a funzione e inserisce il codice di transizione gestito/non gestito necessario.

## <a name="example"></a>Esempio

Il codice seguente è costituito da un modulo non gestito e da un modulo gestito. Il modulo non gestito è una DLL che definisce una funzione denominata TakesCallback che accetta un puntatore a funzione. Questo indirizzo viene usato per eseguire la funzione.

Il modulo gestito definisce un delegato di cui viene eseguito il marshalling nel codice nativo come puntatore a funzione e usa l' <xref:System.Runtime.InteropServices.DllImportAttribute> attributo per esporre la funzione TakesCallback nativa al codice gestito. Nella funzione Main viene creata un'istanza del delegato che viene passata alla funzione TakesCallback. L'output del programma dimostra che questa funzione viene eseguita dalla funzione TakesCallback nativa.

La funzione gestita evita che Garbage Collection per il delegato gestito impedisca a .NET Framework Garbage Collection di rilocare il delegato mentre viene eseguita la funzione nativa.

```cpp
// TraditionalDll5.cpp
// compile with: /LD /EHsc
#include <iostream>
#define TRADITIONALDLL_EXPORTS
#ifdef TRADITIONALDLL_EXPORTS
#define TRADITIONALDLL_API __declspec(dllexport)
#else
#define TRADITIONALDLL_API __declspec(dllimport)
#endif

extern "C" {
   /* Declare an unmanaged function type that takes two int arguments
      Note the use of __stdcall for compatibility with managed code */
   typedef int (__stdcall *CALLBACK)(int);
   TRADITIONALDLL_API int TakesCallback(CALLBACK fp, int);
}

int TakesCallback(CALLBACK fp, int n) {
   printf_s("[unmanaged] got callback address, calling it...\n");
   return fp(n);
}
```

```cpp
// MarshalDelegate.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

public delegate int GetTheAnswerDelegate(int);
public value struct TraditionalDLL {
   [DllImport("TraditionalDLL5.dll")]
   static public int TakesCallback(GetTheAnswerDelegate^ pfn, int n);
};

int GetNumber(int n) {
   Console::WriteLine("[managed] callback!");
   static int x = 0;
   ++x;
   return x + n;
}

int main() {
   GetTheAnswerDelegate^ fp = gcnew GetTheAnswerDelegate(GetNumber);
   pin_ptr<GetTheAnswerDelegate^> pp = &fp;
   Console::WriteLine("[managed] sending delegate as callback...");

   int answer = TraditionalDLL::TakesCallback(fp, 42);
}
```

Si noti che nessuna parte della DLL viene esposta al codice gestito utilizzando la tradizionale direttiva #include. In realtà, l'accesso alla DLL viene eseguito solo in fase di esecuzione, quindi i problemi con le funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non verranno rilevati in fase di compilazione.

## <a name="see-also"></a>Vedi anche

[Utilizzo di PInvoke esplicito in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
