---
description: 'Altre informazioni su: procedura: effettuare il marshalling di puntatori incorporati mediante PInvoke'
title: 'Procedura: Effettuare il marshalling di puntatori incorporati utilizzando PInvoke'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- embedded pointers [C++]
- interop [C++], embedded pointers
- platform invoke [C++], embedded pointers
- marshaling [C++], embedded pointers
- data marshaling [C++], embedded pointers
ms.assetid: f12c1b9a-4f82-45f8-83c8-3fc9321dbb98
ms.openlocfilehash: d31660a9a8ba345b380d442bb4484e332fe9d7cd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302556"
---
# <a name="how-to-marshal-embedded-pointers-using-pinvoke"></a>Procedura: Effettuare il marshalling di puntatori incorporati utilizzando PInvoke

Le funzioni implementate nelle dll non gestite possono essere chiamate dal codice gestito utilizzando la funzionalità Platform Invoke (P/Invoke). Se il codice sorgente per la DLL non è disponibile, P/Invoke è l'unica opzione per l'interoperabilità. Tuttavia, a differenza di altri linguaggi .NET, Visual C++ fornisce un'alternativa a P/Invoke. Per ulteriori informazioni, vedere [utilizzo dell'interoperabilità c++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md) e [procedura: effettuare il marshalling di puntatori incorporati utilizzando l'interoperabilità c++](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md).

## <a name="example"></a>Esempio

Il passaggio di strutture al codice nativo richiede la creazione di una struttura gestita equivalente in termini di layout di dati alla struttura nativa. Tuttavia, le strutture che contengono puntatori richiedono una gestione speciale. Per ogni puntatore incorporato nella struttura nativa, la versione gestita della struttura deve contenere un'istanza del <xref:System.IntPtr> tipo. Inoltre, la memoria per queste istanze deve essere allocata, inizializzata e rilasciata in modo esplicito usando i <xref:System.Runtime.InteropServices.Marshal.AllocCoTaskMem%2A> <xref:System.Runtime.InteropServices.Marshal.StructureToPtr%2A> metodi, e <xref:System.Runtime.InteropServices.Marshal.FreeCoTaskMem%2A> .

Il codice seguente è costituito da un modulo non gestito e da un modulo gestito. Il modulo non gestito è una DLL che definisce una funzione che accetta una struttura denominata ListString che contiene un puntatore e una funzione denominata TakesListStruct. Il modulo gestito è un'applicazione della riga di comando che importa la funzione TakesListStruct e definisce una struttura denominata MListStruct equivalente al ListStruct nativo, ad eccezione del fatto che Double * è rappresentato da un' <xref:System.IntPtr> istanza di. Prima di chiamare TakesListStruct, la funzione Main alloca e inizializza la memoria a cui fa riferimento questo campo.

```cpp
// TraditionalDll6.cpp
// compile with: /EHsc /LD
#include <stdio.h>
#include <iostream>
#define TRADITIONALDLL_EXPORTS
#ifdef TRADITIONALDLL_EXPORTS
#define TRADITIONALDLL_API __declspec(dllexport)
#else
#define TRADITIONALDLL_API __declspec(dllimport)
#endif

#pragma pack(push, 8)
struct ListStruct {
   int count;
   double* item;
};
#pragma pack(pop)

extern "C" {
   TRADITIONALDLL_API void TakesListStruct(ListStruct);
}

void TakesListStruct(ListStruct list) {
   printf_s("[unmanaged] count = %d\n", list.count);
   for (int i=0; i<list.count; i++)
      printf_s("array[%d] = %f\n", i, list.item[i]);
}
```

```cpp
// EmbeddedPointerMarshalling.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

[StructLayout(LayoutKind::Sequential, Pack=8)]
value struct MListStruct {
   int count;
   IntPtr item;
};

value struct TraditionalDLL {
    [DllImport("TraditionalDLL6.dll")]
   static public void TakesListStruct(MListStruct);
};

int main() {
   array<double>^ parray = gcnew array<double>(10);
   Console::WriteLine("[managed] count = {0}", parray->Length);

   Random^ r = gcnew Random();
   for (int i=0; i<parray->Length; i++) {
      parray[i] = r->NextDouble() * 100.0;
      Console::WriteLine("array[{0}] = {1}", i, parray[i]);
   }

   int size = Marshal::SizeOf(double::typeid);
   MListStruct list;
   list.count = parray->Length;
   list.item = Marshal::AllocCoTaskMem(size * parray->Length);

   for (int i=0; i<parray->Length; i++) {
      IntPtr t = IntPtr(list.item.ToInt32() + i * size);
      Marshal::StructureToPtr(parray[i], t, false);
   }

   TraditionalDLL::TakesListStruct( list );
   Marshal::FreeCoTaskMem(list.item);
}
```

Si noti che nessuna parte della DLL viene esposta al codice gestito utilizzando la tradizionale direttiva #include. In realtà, l'accesso alla DLL viene eseguito solo in fase di esecuzione, quindi i problemi con le funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non verranno rilevati in fase di compilazione.

## <a name="see-also"></a>Vedi anche

[Utilizzo di PInvoke esplicito in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
