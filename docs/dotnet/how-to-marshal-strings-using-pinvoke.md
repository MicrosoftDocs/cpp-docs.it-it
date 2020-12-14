---
description: 'Altre informazioni su: procedura: effettuare il marshalling di stringhe tramite PInvoke'
title: 'Procedura: Effettuare il marshalling di stringhe utilizzando PInvoke'
ms.custom: get-started-article
ms.date: 09/09/2016
helpviewer_keywords:
- interop [C++], strings
- marshaling [C++], strings
- data marshaling [C++], strings
- platform invoke [C++], strings
ms.assetid: bcc75733-7337-4d9b-b1e9-b95a98256088
ms.openlocfilehash: 29bec9a05d0425d1ce2cde42b89dacc7818ebac1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302569"
---
# <a name="how-to-marshal-strings-using-pinvoke"></a>Procedura: Effettuare il marshalling di stringhe utilizzando PInvoke

In questo argomento viene illustrato come è possibile chiamare le funzioni native che accettano stringhe di tipo C utilizzando il tipo di stringa CLR System:: String utilizzando il supporto .NET Framework Platform Invoke. I programmatori Visual C++ sono invitati a utilizzare le funzionalità di interoperabilità C++, quando possibile, poiché P/Invoke fornisce una piccola segnalazione degli errori in fase di compilazione, non è indipendente dai tipi e può essere noioso da implementare. Se l'API non gestita è stata assemblata come DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione, ma in caso contrario vedere [uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

Le stringhe gestite e non gestite sono disposte in modo diverso in memoria, quindi passando le stringhe dalle funzioni gestite a quelle non gestite è necessario <xref:System.Runtime.InteropServices.MarshalAsAttribute> che l'attributo indichi al compilatore di inserire i meccanismi di conversione necessari per il marshalling dei dati stringa in modo corretto e sicuro.

Come per le funzioni che usano solo tipi di dati intrinseci, <xref:System.Runtime.InteropServices.DllImportAttribute> viene usato per dichiarare i punti di ingresso gestiti nelle funzioni native, ma, per passare le stringhe, anziché definire questi punti di ingresso come accettando stringhe di tipo C, è possibile usare un handle per il <xref:System.String> tipo. Viene chiesto al compilatore di inserire il codice che esegue la conversione richiesta. Per ogni argomento di funzione in una funzione non gestita che accetta una stringa, l' <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo deve essere utilizzato per indicare che è necessario effettuare il marshalling dell'oggetto stringa alla funzione nativa come stringa di tipo C.

Il gestore di marshalling esegue il wrapping della chiamata alla funzione non gestita in una routine wrapper nascosta che blocca e copia la stringa gestita in una stringa allocata localmente nel contesto non gestito, che viene quindi passata alla funzione non gestita. Quando la funzione non gestita restituisce, il wrapper Elimina la risorsa o, se si trovava nello stack, viene recuperata quando il wrapper esce dall'ambito. La funzione non gestita non è responsabile della memoria. Il codice non gestito crea ed Elimina solo la memoria nell'heap configurato dalla propria libreria CRT, quindi non esiste mai un problema con il marshaller con una versione CRT diversa.

Se la funzione non gestita restituisce una stringa, ovvero un valore restituito o un parametro out, il gestore di marshalling lo copia in una nuova stringa gestita e quindi rilascia la memoria. Per altre informazioni, vedere [comportamento di marshalling predefinito](/dotnet/framework/interop/default-marshaling-behavior) e [marshalling dei dati con Platform Invoke](/dotnet/framework/interop/marshaling-data-with-platform-invoke).

## <a name="example"></a>Esempio

Il codice seguente è costituito da un modulo non gestito e da un modulo gestito. Il modulo non gestito è una DLL che definisce una funzione denominata TakesAString che accetta una stringa ANSI di tipo C sotto forma di Char *. Il modulo gestito è un'applicazione della riga di comando che importa la funzione TakesAString, ma la definisce come un oggetto System. String gestito anziché un carattere \* . L' <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo viene usato per indicare come deve essere eseguito il marshalling della stringa gestita quando viene chiamato TakesAString.

```cpp
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

```cpp
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

Questa tecnica causa la costruzione di una copia della stringa nell'heap non gestito, pertanto le modifiche apportate alla stringa dalla funzione nativa non verranno riflesse nella copia gestita della stringa.

Si noti che nessuna parte della DLL viene esposta al codice gestito tramite la tradizionale direttiva #include. In realtà, l'accesso alla DLL viene eseguito solo in fase di esecuzione, quindi i problemi con le funzioni importate con `DllImport` non verranno rilevati in fase di compilazione.

## <a name="see-also"></a>Vedi anche

[Utilizzo di PInvoke esplicito in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
