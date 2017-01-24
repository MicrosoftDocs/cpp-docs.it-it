---
title: "Procedura: effettuare il marshalling di puntatori incorporati utilizzando l&#39;interoperabilit&#224; C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interoperabilità C++, puntatori incorporati"
  - "marshalling dei dati [C++], puntatori incorporati"
  - "interoperabilità [C++], puntatori incorporati"
  - "marshalling [C++], puntatori incorporati"
  - "puntatori [C++], marshalling"
  - "strutture [C++], marshaling di puntatori incorporati"
ms.assetid: 05fb8858-97f2-47aa-86b2-2c0ad713bdb2
caps.latest.revision: 12
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: effettuare il marshalling di puntatori incorporati utilizzando l&#39;interoperabilit&#224; C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Negli esempi di codice riportati di seguito vengono utilizzate le direttive \#pragma [managed, unmanaged](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file. Queste funzioni, tuttavia, vengono eseguite nello stesso modo anche se definite in file diversi.  I file che contengono soltanto funzioni non gestite non richiedono necessariamente la compilazione con [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Esempio  
 Nell'esempio di codice riportato di seguito viene illustrato come una funzione non gestita che accetta una struttura contenente puntatori può essere chiamata da una funzione gestita.  La funzione gestita crea un'istanza della struttura e inizializza il puntatore incorporato con la nuova parola chiave \(anziché la parola chiave [ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md)\).  Poiché questa operazione comporta l'allocazione della memoria nell'heap nativo, non è necessario bloccare la matrice per impedire la Garbage Collection.  Tuttavia, per evitare una perdita di memoria, occorre che la memoria venga eliminata esplicitamente.  
  
```  
// marshal_embedded_pointer.cpp  
// compile with: /clr  
#include <iostream>  
  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
// unmanaged struct  
struct ListStruct {  
   int count;  
   double* item;  
};  
  
#pragma unmanaged  
  
void UnmanagedTakesListStruct(ListStruct list) {  
   printf_s("[unmanaged] count = %d\n", list.count);  
   for (int i=0; i<list.count; i++)  
      printf_s("array[%d] = %f\n", i, list.item[i]);  
}  
  
#pragma managed  
  
int main() {  
   ListStruct list;  
   list.count = 10;  
   list.item = new double[list.count];  
  
   Console::WriteLine("[managed] count = {0}", list.count);  
   Random^ r = gcnew Random(0);  
   for (int i=0; i<list.count; i++) {  
      list.item[i] = r->NextDouble() * 100.0;  
      Console::WriteLine("array[{0}] = {1}", i, list.item[i]);  
   }  
  
   UnmanagedTakesListStruct( list );  
   delete list.item;  
}  
```  
  
  **\[managed\] count \= 10**  
**array\[0\] \= 72.624326996796**  
**array\[1\] \= 81.7325359590969**  
**array\[2\] \= 76.8022689394663**  
**array\[3\] \= 55.8161191436537**  
**array\[4\] \= 20.6033154021033**  
**array\[5\] \= 55.8884794618415**  
**array\[6\] \= 90.6027066011926**  
**array\[7\] \= 44.2177873310716**  
**array\[8\] \= 97.754975314138**  
**array\[9\] \= 27.370445768987**  
**\[unmanaged\] count \= 10**  
**array\[0\] \= 72.624327**  
**array\[1\] \= 81.732536**  
**array\[2\] \= 76.802269**  
**array\[3\] \= 55.816119**  
**array\[4\] \= 20.603315**  
**array\[5\] \= 55.888479**  
**array\[6\] \= 90.602707**  
**array\[7\] \= 44.217787**  
**array\[8\] \= 97.754975**  
**array\[9\] \= 27.370446**   
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)