---
title: "Procedura: Effettuare il marshalling di callback e delegati utilizzando l'interoperabilità C++"
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- data marshaling [C++], callbacks and delegates
- C++ Interop, callbacks and delegates
- interop [C++], callbacks and delegates
- delegates [C++], marshaling
- marshaling [C++], callbacks and delegates
- callbacks [C++], marshaling
ms.assetid: 2313e9eb-5df9-4367-be0f-14b4712d8d2d
ms.openlocfilehash: f8088bf90162fd2177599c252b0eee6332d61289
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58766937"
---
# <a name="how-to-marshal-callbacks-and-delegates-by-using-c-interop"></a>Procedura: Effettuare il marshalling di callback e delegati utilizzando l'interoperabilità C++

In questo argomento viene illustrato il marshalling di callback e delegati (la versione gestita di un callback) tra codice gestito e usare Visual C++.

Il codice seguente usa gli esempi di [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma direttive per implementare funzioni gestite e nello stesso file, ma le funzioni può anche essere definite in file separati. I file contenenti solo funzioni non gestite non sono necessario essere compilato con il [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come configurare un'API non gestita per attivare un delegato gestito. Viene creato un delegato gestito e uno dei metodi di interoperabilità <xref:System.Runtime.InteropServices.Marshal.GetFunctionPointerForDelegate%2A>, viene usato per recuperare il punto di ingresso sottostante per il delegato. Questo indirizzo viene quindi passato alla funzione non gestita, che chiama il delegato con alcuna conoscenza del fatto che viene implementato come una funzione gestita.

Si noti che viene possibile, ma non indispensabile, è possibile bloccare il delegato tramite [pin_ptr (C + + CLI)](../extensions/pin-ptr-cpp-cli.md) per impedire che venga rilocato o eliminati dal garbage collector. È necessaria una protezione da prematura garbage collection, il blocco fornisce altre funzionalità di protezione superiore a quella necessaria, poiché impedisce la raccolta, ma impedisce anche la rilocazione.

Se un delegato viene rilocato da un'operazione di garbage collection, non influirà sulla callback gestita, pertanto <xref:System.Runtime.InteropServices.GCHandle.Alloc%2A> viene usato per aggiungere un riferimento al delegato, consentendo la rilocazione del delegato, ma impedendone l'eliminazione. L'uso di GCHandle anziché pin_ptr riduce la potenziale frammentazione dell'heap gestito.

```
// MarshalDelegate1.cpp
// compile with: /clr
#include <iostream>

using namespace System;
using namespace System::Runtime::InteropServices;

#pragma unmanaged

// Declare an unmanaged function type that takes two int arguments
// Note the use of __stdcall for compatibility with managed code
typedef int (__stdcall *ANSWERCB)(int, int);

int TakesCallback(ANSWERCB fp, int n, int m) {
   printf_s("[unmanaged] got callback address, calling it...\n");
   return fp(n, m);
}

#pragma managed

public delegate int GetTheAnswerDelegate(int, int);

int GetNumber(int n, int m) {
   Console::WriteLine("[managed] callback!");
   return n + m;
}

int main() {
   GetTheAnswerDelegate^ fp = gcnew GetTheAnswerDelegate(GetNumber);
   GCHandle gch = GCHandle::Alloc(fp);
   IntPtr ip = Marshal::GetFunctionPointerForDelegate(fp);
   ANSWERCB cb = static_cast<ANSWERCB>(ip.ToPointer());
   Console::WriteLine("[managed] sending delegate as callback...");

// force garbage collection cycle to prove
// that the delegate doesn't get disposed
   GC::Collect();

   int answer = TakesCallback(cb, 243, 257);

// release reference to delegate
   gch.Free();
}
```

## <a name="example"></a>Esempio

Nell'esempio seguente è simile all'esempio precedente, ma in questo caso è archiviato il puntatore a funzione fornita dall'API non gestita, in modo che può essere richiamato in qualsiasi momento, che richiedono che è possibile eliminare la garbage collection per un periodo di tempo arbitrario. Di conseguenza, l'esempio seguente usa un'istanza globale di <xref:System.Runtime.InteropServices.GCHandle> per impedire che il delegato venga rilocato, indipendentemente dall'ambito della funzione. Come illustrato nel primo esempio, usando pin_ptr non è necessaria per questi esempi, ma in questo caso funzionerebbe in ogni caso, poiché l'ambito di pin_ptr è limitato a una singola funzione.

```
// MarshalDelegate2.cpp
// compile with: /clr
#include <iostream>

using namespace System;
using namespace System::Runtime::InteropServices;

#pragma unmanaged

// Declare an unmanaged function type that takes two int arguments
// Note the use of __stdcall for compatibility with managed code
typedef int (__stdcall *ANSWERCB)(int, int);
static ANSWERCB cb;

int TakesCallback(ANSWERCB fp, int n, int m) {
   cb = fp;
   if (cb) {
      printf_s("[unmanaged] got callback address (%d), calling it...\n", cb);
      return cb(n, m);
   }
   printf_s("[unmanaged] unregistering callback");
   return 0;
}

#pragma managed

public delegate int GetTheAnswerDelegate(int, int);

int GetNumber(int n, int m) {
   Console::WriteLine("[managed] callback!");
   static int x = 0;
   ++x;

   return n + m + x;
}

static GCHandle gch;

int main() {
   GetTheAnswerDelegate^ fp = gcnew GetTheAnswerDelegate(GetNumber);

   gch = GCHandle::Alloc(fp);

   IntPtr ip = Marshal::GetFunctionPointerForDelegate(fp);
   ANSWERCB cb = static_cast<ANSWERCB>(ip.ToPointer());
   Console::WriteLine("[managed] sending delegate as callback...");

   int answer = TakesCallback(cb, 243, 257);

   // possibly much later (in another function)...

   Console::WriteLine("[managed] releasing callback mechanisms...");
   TakesCallback(0, 243, 257);
   gch.Free();
}
```

## <a name="see-also"></a>Vedere anche

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
