---
title: "Procedura: effettuare il marshalling di puntatori a funzione utilizzando PInvoke | Microsoft Docs"
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
  - "marshalling dei dati [C++], callback e delegati"
  - "interoperabilità [C++], callback e delegati"
  - "marshalling [C++], callback e delegati"
  - "platform invoke [C++], callback e delegati"
ms.assetid: dcf396fd-a91d-49c0-ab0b-1ea160668a89
caps.latest.revision: 21
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: effettuare il marshalling di puntatori a funzione utilizzando PInvoke
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come è possibile utilizzare delegati gestiti anziché puntatori a funzione in caso di interoperabilità con funzioni non gestite mediante le funzionalità P\/Invoke di .NET Framework.  Se possibile, tuttavia, si consiglia ai programmatori Visual C\+\+ di utilizzare in alternativa le funzionalità di interoperabilità di C\+\+, poiché P\/Invoke fornisce un supporto limitato per la segnalazione degli errori in fase di compilazione, non è indipendente dai tipi e può risultare difficile da implementare.  Se l'API non gestita viene fornita come DLL e il codice sorgente non è disponibile, P\/Invoke è l'unica opzione.  In caso contrario, vedere i seguenti argomenti:  
  
-   [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)  
  
-   [Procedura: effettuare il marshalling di callback e delegati utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-callbacks-and-delegates-by-using-cpp-interop.md)  
  
 Le API non gestite che accettano puntatori a funzione come argomenti possono essere chiamate da codice gestito mediante un delegato gestito anziché un puntatore alla funzione nativa.  Il compilatore effettua automaticamente il marshalling del delegato alle funzioni non gestite convertendolo in un puntatore a funzione e inserisce il codice necessario per le transizioni tra codice gestito e codice non gestito.  
  
## Esempio  
 Il codice riportato di seguito è costituito da un modulo gestito e un modulo non gestito.  Il modulo non gestito è una DLL che definisce una funzione denominata TakesCallback che accetta un puntatore a funzione.  L'indirizzo viene utilizzato per eseguire la funzione.  
  
 Il modulo gestito definisce un delegato che viene convertito per il codice nativo in un puntatore a funzione e utilizza l'attributo <xref:System.Runtime.InteropServices.DllImportAttribute> per esporre la funzione TakesCallback nativa al codice gestito.  Nella funzione Main viene creata un'istanza del delegato che viene quindi passata alla funzione TakesCallback.  L'output del programma dimostra che questa funzione viene eseguita dalla funzione TakesCallback nativa.  
  
 La funzione gestita elimina la Garbage Collection per il delegato gestito per impedire che la Garbage Collection di .NET Framework esegua una rilocazione del delegato mentre è in esecuzione la funzione nativa.  
  
 Il modulo gestito è compilato con \/clr, ma funziona anche \/clr:pure.  
  
```  
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
  
```  
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
  
 Nessuna parte della DLL viene esposta al codice gestito utilizzando la normale direttiva \#include.  In realtà, l'accesso alla DLL viene eseguito solo in fase di esecuzione. Di conseguenza, gli eventuali problemi con le funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non verranno rilevati in fase di compilazione.  
  
## Vedere anche  
 [Utilizzo esplicito di PInvoke in C\+\+ \(attributo DllImport\)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)