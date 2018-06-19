---
title: 'Procedura: effettuare il marshalling puntatori a funzione utilizzando PInvoke | Documenti Microsoft'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- data marshaling [C++], callbacks and delegates
- interop [C++], callbacks and delegates
- platform invoke [C++], callbacks and delegates
- marshaling [C++], callbacks and delegates
ms.assetid: dcf396fd-a91d-49c0-ab0b-1ea160668a89
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 1aa8da5e5b6931fb46ff283a5be15da5b2c7325d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33132177"
---
# <a name="how-to-marshal-function-pointers-using-pinvoke"></a>Procedura: Effettuare il marshalling di puntatori a funzione utilizzando PInvoke
In questo argomento viene gestiti come delegati può essere utilizzato al posto di puntatori a funzione quando interagisce con funzioni non gestite tramite le funzionalità di .NET Framework P/Invoke. Tuttavia, i programmatori Visual C++ si consiglia invece di utilizzare le funzionalità di interoperabilità C++ (sempre) poiché P/Invoke fornisce minimo in fase di compilazione segnalazione errori, non è indipendente dai tipi e può essere difficile da implementare. Se l'API non gestita viene fornito come una DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione. In caso contrario, vedere gli argomenti seguenti:  
  
-   [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)  
  
-   [Procedura: Effettuare il marshalling di callback e delegati tramite l'interoperabilità C++](../dotnet/how-to-marshal-callbacks-and-delegates-by-using-cpp-interop.md)  
  
 API non gestite che accettano puntatori alle funzioni come argomenti possono essere chiamati da codice gestito con un delegato gestito al posto del puntatore a funzione nativo. Il compilatore automaticamente il marshalling del delegato a funzioni non gestite come un puntatore a funzione e inserisce il codice di transizione gestiti/non gestiti non necessario.  
  
## <a name="example"></a>Esempio  
 Il codice seguente è costituito da una funzione non gestita e un modulo gestito. Il modulo non gestito è una DLL che definisce una funzione denominata TakesCallback che accetta un puntatore a funzione. Questo indirizzo viene utilizzato per eseguire la funzione.  
  
 Il modulo gestito definisce un delegato viene sottoposto a marshalling per il codice nativo in un puntatore a funzione e che utilizza il <xref:System.Runtime.InteropServices.DllImportAttribute> attributo per esporre la funzione TakesCallback nativa al codice gestito. Nella funzione main, un'istanza del delegato è creata e passata alla funzione TakesCallback. L'output del programma viene illustrato che questa funzione viene eseguita dalla funzione TakesCallback nativa.  
  
 La funzione gestita Elimina la garbage collection per il delegato gestito impedire l'operazione di garbage collection di .NET Framework esegua la rilocazione di delegato mentre viene eseguita la funzione nativa.  
  
```cpp  
// TraditionalDll5.cpp  
// compile with: /LD /EHsc  
#include <iostream>  
#define TRADITIONALDLL_EXPORTS  
#ifdef TRADITIONALDLL_EXPORTS  
#define TRADITIONALDLL_API __declspec(dllexport)  
#else  
#define TRADITIONALDLL_API __declspec(dllimport)  
#endif  
  
extern "C" {  
   /* Declare an unmanaged function type that takes two int arguments  
      Note the use of __stdcall for compatibility with managed code */  
   typedef int (__stdcall *CALLBACK)(int);  
   TRADITIONALDLL_API int TakesCallback(CALLBACK fp, int);  
}  
  
int TakesCallback(CALLBACK fp, int n) {  
   printf_s("[unmanaged] got callback address, calling it...\n");  
   return fp(n);  
}  
```  
  
```cpp  
// MarshalDelegate.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
public delegate int GetTheAnswerDelegate(int);  
public value struct TraditionalDLL {  
   [DllImport("TraditionalDLL5.dll")]  
   static public int TakesCallback(GetTheAnswerDelegate^ pfn, int n);  
};  
  
int GetNumber(int n) {  
   Console::WriteLine("[managed] callback!");  
   static int x = 0;  
   ++x;  
   return x + n;  
}  
  
int main() {  
   GetTheAnswerDelegate^ fp = gcnew GetTheAnswerDelegate(GetNumber);  
   pin_ptr<GetTheAnswerDelegate^> pp = &fp;  
   Console::WriteLine("[managed] sending delegate as callback...");  
  
   int answer = TraditionalDLL::TakesCallback(fp, 42);  
}  
```  
  
 Si noti che nessuna parte della DLL viene esposto al codice gestito utilizzando la normale #include (direttiva). In effetti, la DLL di accesso viene eseguita in fase di esecuzione, problemi con le funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non verranno rilevati in fase di compilazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)