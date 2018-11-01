---
title: 'Procedura: Effettuare il marshalling di stringhe utilizzando PInvoke'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- interop [C++], strings
- marshaling [C++], strings
- data marshaling [C++], strings
- platform invoke [C++], strings
ms.assetid: bcc75733-7337-4d9b-b1e9-b95a98256088
ms.openlocfilehash: 86ce065da5c214c0da803ad53d19eaec3de5efb4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50598120"
---
# <a name="how-to-marshal-strings-using-pinvoke"></a>Procedura: Effettuare il marshalling di stringhe utilizzando PInvoke

In questo argomento viene illustrato funzioni native che accettano stringhe in formato C possono essere chiamate usando la stringa di CLR digitare System:: String usando il supporto di .NET Framework Platform Invoke. I programmatori di Visual C++ sono invitati a usare invece la funzionalità di interoperabilità C++ (se possibile) perché P/Invoke fornisce poco in fase di compilazione segnalazione errori, non è indipendente dai tipi e può essere difficile da implementare. Se l'API non gestita viene assemblato come una DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione disponibile, ma in caso contrario, vedere [con funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

Stringhe gestite e sono disposti in modo diverso nella memoria, pertanto il passaggio di stringhe da gestito a funzioni non gestite richiede il <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo per indicare al compilatore di inserire i meccanismi di conversione obbligatorio per il marshalling dei dati di tipo stringa in modo corretto e sicuro.

Come con le funzioni che usano solo tipi di dati intrinseci <xref:System.Runtime.InteropServices.DllImportAttribute> viene usata per dichiarare i punti di ingresso gestito nelle funzioni native, ma, per il passaggio di stringhe, invece di definire questi punti di ingresso che accetti le stringhe di tipo C, un handle per il <xref:System.String> tipo può essere usato invece. Questo richiede al compilatore di inserire il codice che esegue la conversione appropriata. Per ogni argomento della funzione in una funzione non gestita che accetta una stringa, il <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo deve essere utilizzato per indicare che è necessario effettuare il marshalling dell'oggetto stringa alla funzione nativa come una stringa in formato C.

## <a name="example"></a>Esempio

Il codice seguente è costituito da un non gestito e un modulo gestito. Il modulo non gestito è una DLL che definisce una funzione denominata TakesAString che accetta una stringa di tipo C ANSI sotto forma di char *. Il modulo gestito è un'applicazione della riga di comando che importa la funzione TakesAString, ma definisce come prendendo gestito System. String invece di char\*. Il <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo viene utilizzato per indicare come deve essere effettuato il marshalling la stringa gestita quando viene chiamato TakesAString.

```
// TraditionalDll2.cpp
// compile with: /LD /EHsc
#include <windows.h>
#include <stdio.h>
#include <iostream>

using namespace std;

#define TRADITIONALDLL_EXPORTS
#ifdef TRADITIONALDLL_EXPORTS
#define TRADITIONALDLL_API __declspec(dllexport)
#else
#define TRADITIONALDLL_API __declspec(dllimport)
#endif

extern "C" {
   TRADITIONALDLL_API void TakesAString(char*);
}

void TakesAString(char* p) {
   printf_s("[unmanaged] %s\n", p);
}
```

```
// MarshalString.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

value struct TraditionalDLL
{
   [DllImport("TraditionalDLL2.dll")]
      static public void
      TakesAString([MarshalAs(UnmanagedType::LPStr)]String^);
};

int main() {
   String^ s = gcnew String("sample string");
    Console::WriteLine("[managed] passing managed string to unmanaged function...");
   TraditionalDLL::TakesAString(s);
   Console::WriteLine("[managed] {0}", s);
}
```

Questa tecnica comporta una copia della stringa da costruire nell'heap non gestito, in modo che le modifiche apportate alla stringa da funzione nativa non si rifletteranno nella copia della stringa gestita.

Si noti che nessuna parte della DLL viene esposta al codice gestito tramite la tradizionale #include (direttiva). In effetti, la DLL è accessibile in fase di esecuzione, quindi problemi con le funzioni importate con `DllImport` non viene rilevato in fase di compilazione.

## <a name="see-also"></a>Vedere anche

[Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)