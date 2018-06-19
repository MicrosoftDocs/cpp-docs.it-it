---
title: 'Procedura: marshalling di matrici utilizzando PInvoke | Documenti Microsoft'
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
ms.openlocfilehash: 03e3cf184828c33c63c5252344eb0041640729cb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33132531"
---
# <a name="how-to-marshal-arrays-using-pinvoke"></a>Procedura: Effettuare il marshalling di matrici utilizzando PInvoke
In questo argomento viene illustrato come funzioni native che accettano stringhe di tipo C possono essere chiamate utilizzando il tipo di stringa CLR <xref:System.String> utilizzando il supporto di .NET Framework Platform Invoke. I programmatori di Visual C++ si consiglia invece di utilizzare le funzionalità di interoperabilità C++ (sempre) poiché P/Invoke fornisce minimo in fase di compilazione segnalazione errori, non è indipendente dai tipi e può essere difficile da implementare. Se l'API non gestita viene fornito come una DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione (in caso contrario, vedere [utilizzando l'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)).  
  
## <a name="example"></a>Esempio  
 Poiché le matrici native e gestite vengono disposte in modo diverso in memoria, passando correttamente oltre i limiti gestiti/non gestiti non richiede conversione o effettuare il marshalling. In questo argomento viene illustrato come una matrice di elementi semplice (copiabili) può essere passata alle funzioni native da codice gestito.  
  
 Come accade per il marshalling dei dati gestiti/non gestiti in generale, il <xref:System.Runtime.InteropServices.DllImportAttribute> attributo viene utilizzato per creare un punto di ingresso gestito per ogni funzione nativa che verrà utilizzato. Nel caso di funzioni che accettano di matrici come argomenti, il <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo deve essere usato anche per specificare al compilatore la modalità di marshalling di dati. Nell'esempio seguente, il <xref:System.Runtime.InteropServices.UnmanagedType> enumerazione viene utilizzata per indicare che è verrà effettuato il marshalling della matrice gestita come una matrice di tipo C.  
  
 Il codice seguente è costituito da una funzione non gestita e un modulo gestito. Il modulo non gestito è una DLL che definisce una funzione che accetta una matrice di interi. Il secondo modulo è un'applicazione della riga di comando gestita che importa tale funzione, ma definisce in termini di una matrice gestita e utilizza il <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo per specificare che la matrice deve essere convertita in una matrice nativa quando viene chiamato.  
  
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
  
 Si noti che nessuna parte della DLL viene esposto al codice gestito tramite tradizionale #include (direttiva). In effetti, la DLL viene eseguito in fase di esecuzione solo, problemi con le funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non verranno rilevati in fase di compilazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)