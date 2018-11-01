---
title: 'Procedura: Effettuare il marshalling di puntatori a funzione utilizzando PInvoke'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- data marshaling [C++], callbacks and delegates
- interop [C++], callbacks and delegates
- platform invoke [C++], callbacks and delegates
- marshaling [C++], callbacks and delegates
ms.assetid: dcf396fd-a91d-49c0-ab0b-1ea160668a89
ms.openlocfilehash: 2f12c86b7e32955622a4a2c598d01057e303a329
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50435607"
---
# <a name="how-to-marshal-function-pointers-using-pinvoke"></a>Procedura: Effettuare il marshalling di puntatori a funzione utilizzando PInvoke

In questo argomento si illustra i delegati come gestiti può essere usato al posto di puntatori a funzione quando interagisce con funzioni non gestite tramite le funzionalità di .NET Framework P/Invoke. Tuttavia, i programmatori Visual C++ sono invitati a usare invece la funzionalità di interoperabilità C++ (se possibile) perché P/Invoke fornisce poco in fase di compilazione segnalazione errori, non è indipendente dai tipi e può essere difficile da implementare. Se l'API non gestita viene assemblato come una DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione. In caso contrario, vedere gli argomenti seguenti:

- [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

- [Procedura: Effettuare il marshalling di callback e delegati tramite l'interoperabilità C++](../dotnet/how-to-marshal-callbacks-and-delegates-by-using-cpp-interop.md)

API non gestite che accettano puntatori a funzioni come argomenti possono essere chiamati da codice gestito con un delegato gestito al posto del puntatore a funzione nativo. Il compilatore automaticamente il marshalling del delegato a funzioni non gestite come un puntatore a funzione e inserisce il codice di transizione gestito e non necessario.

## <a name="example"></a>Esempio

Il codice seguente è costituito da una funzione non gestita e un modulo gestito. Il modulo non gestito è una DLL che definisce una funzione denominata TakesCallback che accetta un puntatore a funzione. Questo indirizzo viene usato per l'esecuzione della funzione.

Il modulo gestito di definisce un delegato che viene effettuato il marshalling al codice nativo che come puntatore a funzione e viene utilizzato il <xref:System.Runtime.InteropServices.DllImportAttribute> attributo per esporre la funzione TakesCallback nativa al codice gestito. Nella funzione main, un'istanza del delegato viene creata e passata alla funzione TakesCallback. L'output del programma viene illustrato che questa funzione viene eseguita dalla funzione TakesCallback nativa.

La funzione gestita Sopprime la garbage collection per il delegato gestito per impedire l'operazione di garbage collection di .NET Framework esegua la rilocazione il delegato mentre è in esecuzione la funzione nativa.

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

Si noti che nessuna parte della DLL viene esposta al codice gestito usando le tradizionali #include (direttiva). In effetti, la DLL è accessibile in fase di esecuzione, quindi problemi con le funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non viene rilevato in fase di compilazione.

## <a name="see-also"></a>Vedere anche

[Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)