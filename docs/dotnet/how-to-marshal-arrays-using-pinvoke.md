---
title: 'Procedura: effettuare il marshalling matrici tramite PInvoke | Microsoft Docs'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- marshaling [C++], arrays
- platform invoke [C++], arrays
- interop [C++], arrays
- data marshaling [C++], arrays
ms.assetid: a1237797-a2da-4df4-984a-6333ed3af406
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9c07aba54f621011d2dd4831d7dfb6b536073fa9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46395687"
---
# <a name="how-to-marshal-arrays-using-pinvoke"></a>Procedura: Effettuare il marshalling di matrici utilizzando PInvoke

In questo argomento viene illustrato funzioni native che accettano stringhe in formato C possono essere chiamate con il tipo di stringa CLR <xref:System.String> usando il supporto di .NET Framework Platform Invoke. I programmatori di Visual C++ sono invitati a usare invece la funzionalità di interoperabilità C++ (se possibile) perché P/Invoke fornisce poco in fase di compilazione segnalazione errori, non è indipendente dai tipi e può essere difficile da implementare. Se l'API non gestita viene assemblato come una DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione (in caso contrario, vedere [con funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)).

## <a name="example"></a>Esempio

Poiché le matrici native e gestite vengono disposti in modo diverso nella memoria, passarli correttamente oltre i limiti gestiti/non gestiti richiede, conversione o marshalling. In questo argomento viene illustrato come una matrice di elementi semplici (copiabili) può essere passata alle funzioni native da codice gestito.

Come per il marshalling dei dati gestiti/non gestiti in generale, il <xref:System.Runtime.InteropServices.DllImportAttribute> attributo viene usato per creare un punto di ingresso gestito per ogni funzione nativa che verrà utilizzato. Nel caso delle funzioni che accettano di matrici come argomenti, il <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo deve essere usato anche per specificare al compilatore la modalità di marshalling di dati. Nell'esempio seguente, il <xref:System.Runtime.InteropServices.UnmanagedType> enumerazione viene utilizzata per indicare che la matrice gestita verrà sottoporre a marshalling come una matrice di tipo C.

Il codice seguente è costituito da una funzione non gestita e un modulo gestito. Il modulo non gestito è una DLL che definisce una funzione che accetta una matrice di interi. Il secondo modulo è un'applicazione della riga di comando gestita importa questa funzione, ma lo definisce in termini di una matrice gestita e viene utilizzato il <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo per specificare che la matrice deve essere convertita in una matrice nativa quando viene chiamato.

Il modulo gestito viene compilato con /clr.

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

Si noti che nessuna parte della DLL viene esposta al codice gestito tramite la tradizionale #include (direttiva). Infatti, poiché la DLL si accede in fase di esecuzione solo, problemi con le funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non viene rilevato in fase di compilazione.

## <a name="see-also"></a>Vedere anche

[Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)