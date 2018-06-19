---
title: 'Procedura: effettuare il marshalling di puntatori incorporati utilizzando PInvoke | Documenti Microsoft'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- embedded pointers [C++]
- interop [C++], embedded pointers
- platform invoke [C++], embedded pointers
- marshaling [C++], embedded pointers
- data marshaling [C++], embedded pointers
ms.assetid: f12c1b9a-4f82-45f8-83c8-3fc9321dbb98
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a07c9742c393abe2a6213378ee8963839ab66c90
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33134897"
---
# <a name="how-to-marshal-embedded-pointers-using-pinvoke"></a>Procedura: Effettuare il marshalling di puntatori incorporati utilizzando PInvoke
Funzioni che vengono implementate nella DLL non gestite possono essere chiamate da codice gestito tramite la funzionalità Platform Invoke (P/Invoke). Se il codice sorgente per la DLL non è disponibile, P/Invoke è l'unica opzione per l'interoperabilità. Tuttavia, a differenza di altri linguaggi .NET, Visual C++ fornisce un'alternativa a P/Invoke. Per ulteriori informazioni, vedere [utilizzando l'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md) e [procedura: effettuare il marshalling incorporate puntatori Using C++ Interop](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md).  
  
## <a name="example"></a>Esempio  
 Il passaggio di strutture al codice nativo, è necessario che venga creata una struttura gestita equivalente in termini di layout dei dati per la struttura nativa. Tuttavia, le strutture che contengono puntatori richiedono una gestione speciale. Per ciascun puntatore incorporato nella struttura nativa, la versione gestita della struttura deve contenere un'istanza di <xref:System.IntPtr> tipo. Inoltre, della memoria per queste istanze devono essere allocate in modo esplicito, inizializzato e liberata usando il <xref:System.Runtime.InteropServices.Marshal.AllocCoTaskMem%2A>, <xref:System.Runtime.InteropServices.Marshal.StructureToPtr%2A>, e <xref:System.Runtime.InteropServices.Marshal.FreeCoTaskMem%2A> metodi.  
  
 Il codice seguente è costituito da una funzione non gestita e un modulo gestito. Il modulo non gestito è una DLL che definisce una funzione che accetta una struttura denominata ListString contenente un puntatore e una funzione denominata TakesListStruct. Il modulo gestito è un'applicazione della riga di comando che importa la funzione TakesListStruct e definisce una struttura denominata MListStruct equivale alla funzione ListStruct nativa ad eccezione del fatto che il valore double * è rappresentato con un <xref:System.IntPtr> istanza. Prima di chiamare TakesListStruct, la funzione main alloca e inizializza la memoria che fa riferimento a questo campo.  
  
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
  
 Si noti che nessuna parte della DLL viene esposto al codice gestito utilizzando la normale #include (direttiva). In effetti, la DLL di accesso viene eseguita in fase di esecuzione, problemi con le funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non verranno rilevati in fase di compilazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)