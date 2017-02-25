---
title: "Procedura: effettuare il marshalling di puntatori incorporati utilizzando PInvoke | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "marshalling dei dati [C++], puntatori incorporati"
  - "puntatori incorporati [C++]"
  - "interoperabilità [C++], puntatori incorporati"
  - "marshalling [C++], puntatori incorporati"
  - "platform invoke [C++], puntatori incorporati"
ms.assetid: f12c1b9a-4f82-45f8-83c8-3fc9321dbb98
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Procedura: effettuare il marshalling di puntatori incorporati utilizzando PInvoke
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni implementate nelle DLL non gestite possono essere chiamate utilizzando la funzionalità P\/Invoke.  Se il codice sorgente della DLL non è disponibile, P\/Invoke è l'unica opzione per l'interoperabilità.  Tuttavia, a differenza di altri linguaggi .NET, in Visual C\+\+ viene fornita un'alternativa a P\/Invoke.  Per ulteriori informazioni, vedere [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md) e [Procedura: effettuare il marshalling di puntatori incorporati utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md).  
  
## Esempio  
 Il passaggio delle strutture al codice nativo richiede la creazione di una struttura gestita che sia equivalente in termini di layout dei dati alla struttura nativa.  Tuttavia, le strutture che contengono puntatori richiedono una gestione speciale.  Per ciascun puntatore incorporato nella struttura nativa, la versione gestita della struttura deve contenere un'istanza del tipo <xref:System.IntPtr>.  Inoltre, la memoria per queste istanze deve essere esplicitamente allocata, inizializzata e rilasciata utilizzando i metodi <xref:System.Runtime.InteropServices.Marshal.AllocCoTaskMem%2A>, <xref:System.Runtime.InteropServices.Marshal.StructureToPtr%2A> e <xref:System.Runtime.InteropServices.Marshal.FreeCoTaskMem%2A>.  
  
 Il codice riportato di seguito è costituito da un modulo gestito e un modulo non gestito.  Il modulo non gestito è una DLL in cui sono definite una funzione che accetta una struttura denominata ListString contenente un puntatore, nonché una funzione denominata TakesListStruct.  Il modulo gestito è un'applicazione della riga di comando che importa la funzione TakesListStruct e definisce una struttura denominata MListStruct, equivalente alla funzione ListStruct nativa con l'unica differenza che double\* è rappresentato con un'istanza di <xref:System.IntPtr>.  Prima di chiamare TakesListStruct, la funzione main alloca e inizializza la memoria a cui fa riferimento questo campo.  
  
 Il modulo gestito è compilato con \/clr, ma funziona anche \/clr:pure.  
  
```  
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
  
```  
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
  
 Nessuna parte della DLL viene esposta al codice gestito utilizzando la normale direttiva \#include.  In realtà, l'accesso alla DLL viene eseguito solo in fase di esecuzione. Di conseguenza, gli eventuali problemi con le funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non verranno rilevati in fase di compilazione.  
  
## Vedere anche  
 [Utilizzo esplicito di PInvoke in C\+\+ \(attributo DllImport\)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)