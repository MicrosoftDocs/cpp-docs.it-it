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
ms.openlocfilehash: 592eae0ff59baddb79b810d46669b78ecc801155
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988185"
---
# <a name="how-to-marshal-callbacks-and-delegates-by-using-c-interop"></a>Procedura: Effettuare il marshalling di callback e delegati utilizzando l'interoperabilità C++

In questo argomento viene illustrato il marshalling di callback e delegati (la versione gestita di un callback) tra codice gestito e non gestito C++mediante Visual.

Negli esempi di codice seguenti vengono utilizzate le direttive #pragma [gestite e non gestite](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file, ma anche le funzioni possono essere definite in file distinti. I file che contengono solo funzioni non gestite non devono essere compilati con [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come configurare un'API non gestita per attivare un delegato gestito. Viene creato un delegato gestito e uno dei metodi di interoperabilità, <xref:System.Runtime.InteropServices.Marshal.GetFunctionPointerForDelegate%2A>, viene usato per recuperare il punto di ingresso sottostante per il delegato. Questo indirizzo viene quindi passato alla funzione non gestita, che lo chiama senza conoscere il fatto che viene implementato come funzione gestita.

Si noti che è possibile, ma non necessario, aggiungere il delegato utilizzando [pin_ptr (C++/CLI)](../extensions/pin-ptr-cpp-cli.md) per impedire che venga rilocato o eliminato dall'Garbage Collector. La protezione da Garbage Collection prematura è necessaria, ma l'aggiunta garantisce una maggiore protezione del necessario, poiché impedisce la raccolta, ma impedisce anche la rilocazione.

Se un delegato viene rilocato da un Garbage Collection, non influirà sul callback gestito della sottodisposizione, quindi <xref:System.Runtime.InteropServices.GCHandle.Alloc%2A> viene usato per aggiungere un riferimento al delegato, consentendo la rilocazione del delegato, evitando però l'eliminazione. L'uso di GCHandle invece di pin_ptr riduce il potenziale di frammentazione dell'heap gestito.

```cpp
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

L'esempio seguente è simile all'esempio precedente, ma in questo caso il puntatore a funzione fornito viene archiviato dall'API non gestita, in modo che possa essere richiamato in qualsiasi momento, richiedendo che Garbage Collection venga eliminato per un periodo di tempo arbitrario. Di conseguenza, nell'esempio seguente viene utilizzata un'istanza globale di <xref:System.Runtime.InteropServices.GCHandle> per impedire che il delegato venga rilocato, indipendentemente dall'ambito della funzione. Come illustrato nel primo esempio, l'uso di pin_ptr non è necessario per questi esempi, ma in questo caso non funzionerebbe comunque, perché l'ambito di una pin_ptr è limitato a una singola funzione.

```cpp
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
