---
description: 'Altre informazioni su: procedura: effettuare il marshalling di matrici mediante PInvoke'
title: 'Procedura: effettuare il marshalling di matrici utilizzando PInvoke'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- marshaling [C++], arrays
- platform invoke [C++], arrays
- interop [C++], arrays
- data marshaling [C++], arrays
ms.assetid: a1237797-a2da-4df4-984a-6333ed3af406
ms.openlocfilehash: 90fd7b2cbefe2fb3621f512d49fbc088240922a1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258224"
---
# <a name="how-to-marshal-arrays-using-pinvoke"></a>Procedura: effettuare il marshalling di matrici utilizzando PInvoke

In questo argomento viene illustrato come è possibile chiamare le funzioni native che accettano stringhe di tipo C utilizzando il tipo di stringa CLR <xref:System.String> utilizzando il supporto .NET Framework Platform Invoke. I programmatori Visual C++ sono invitati a utilizzare le funzionalità di interoperabilità C++, quando possibile, poiché P/Invoke fornisce una piccola segnalazione degli errori in fase di compilazione, non è indipendente dai tipi e può essere noioso da implementare. Se l'API non gestita è stata assemblata come una DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione. in caso contrario, vedere [utilizzo dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

## <a name="example"></a>Esempio

Poiché le matrici native e gestite sono disposte in modo diverso in memoria, il passaggio al limite gestito/non gestito richiede la conversione o il marshalling. In questo argomento viene illustrato come passare una matrice di elementi semplici (blitable) alle funzioni native dal codice gestito.

Come è vero per il marshalling dei dati gestiti/non gestiti in generale, l' <xref:System.Runtime.InteropServices.DllImportAttribute> attributo viene utilizzato per creare un punto di ingresso gestito per ogni funzione nativa che verrà utilizzata. Nel caso di funzioni che accettano matrici come argomenti, <xref:System.Runtime.InteropServices.MarshalAsAttribute> è necessario usare anche l'attributo per specificare al compilatore come verrà effettuato il marshalling dei dati. Nell'esempio seguente l' <xref:System.Runtime.InteropServices.UnmanagedType> enumerazione viene utilizzata per indicare che verrà eseguito il marshalling della matrice gestita come matrice di tipo C.

Il codice seguente è costituito da un modulo non gestito e da un modulo gestito. Il modulo non gestito è una DLL che definisce una funzione che accetta una matrice di numeri interi. Il secondo modulo è un'applicazione della riga di comando gestita che importa questa funzione, ma la definisce in termini di una matrice gestita e usa l' <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo per specificare che la matrice deve essere convertita in una matrice nativa quando viene chiamata.

Il modulo gestito viene compilato con/CLR.

```cpp
// TraditionalDll4.cpp
// compile with: /LD /EHsc
#include <iostream>

#define TRADITIONALDLL_EXPORTS
#ifdef TRADITIONALDLL_EXPORTS
#define TRADITIONALDLL_API __declspec(dllexport)
#else
#define TRADITIONALDLL_API __declspec(dllimport)
#endif

extern "C" {
   TRADITIONALDLL_API void TakesAnArray(int len, int[]);
}

void TakesAnArray(int len, int a[]) {
   printf_s("[unmanaged]\n");
   for (int i=0; i<len; i++)
      printf("%d = %d\n", i, a[i]);
}
```

```cpp
// MarshalBlitArray.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

value struct TraditionalDLL {
   [DllImport("TraditionalDLL4.dll")]
   static public void TakesAnArray(
   int len,[MarshalAs(UnmanagedType::LPArray)]array<int>^);
};

int main() {
   array<int>^ b = gcnew array<int>(3);
   b[0] = 11;
   b[1] = 33;
   b[2] = 55;
   TraditionalDLL::TakesAnArray(3, b);

   Console::WriteLine("[managed]");
   for (int i=0; i<3; i++)
      Console::WriteLine("{0} = {1}", i, b[i]);
}
```

Si noti che nessuna parte della DLL viene esposta al codice gestito tramite la tradizionale direttiva #include. Infatti, poiché alla DLL si accede solo in fase di esecuzione, i problemi relativi alle funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non verranno rilevati in fase di compilazione.

## <a name="see-also"></a>Vedi anche

[Utilizzo di PInvoke esplicito in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)
