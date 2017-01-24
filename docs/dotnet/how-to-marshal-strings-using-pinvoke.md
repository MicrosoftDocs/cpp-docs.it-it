---
title: "Procedura: effettuare il marshalling di stringhe utilizzando PInvoke | Microsoft Docs"
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
  - "marshalling dei dati [C++], stringhe"
  - "interoperabilità [C++], stringhe"
  - "marshalling [C++], stringhe"
  - "platform invoke [C++], stringhe"
ms.assetid: bcc75733-7337-4d9b-b1e9-b95a98256088
caps.latest.revision: 21
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: effettuare il marshalling di stringhe utilizzando PInvoke
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come è possibile chiamare, utilizzando il tipo CLR System::String, funzioni native che accettano stringhe di tipo C, sfruttando il supporto per platform invoke di .NET Framework.  Se possibile, si consiglia ai programmatori Visual C\+\+ di utilizzare in alternativa le funzionalità di interoperabilità di C\+\+, poiché P\/Invoke fornisce un supporto limitato per la segnalazione degli errori in fase di compilazione, non è indipendente dai tipi e può risultare difficile da implementare.  Se l'API non gestita viene fornita come DLL e il codice sorgente non è disponibile, P\/Invoke è l'unica opzione. In caso contrario, vedere [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
 Le stringhe gestite e non gestite vengono disposte in memoria in modo differente. Di conseguenza, il passaggio di tali stringhe dalle funzioni gestite a quelle non gestite richiede l'attributo <xref:System.Runtime.InteropServices.MarshalAsAttribute> per indicare al compilatore di inserire i meccanismi di conversione necessari per il marshalling corretto e sicuro dei dati delle stringhe.  
  
 Come avviene con le funzioni che utilizzano soltanto tipi di dati intrinseci, viene utilizzato l'attributo <xref:System.Runtime.InteropServices.DllImportAttribute> per dichiarare i punti di ingresso nelle funzioni native. Per il passaggio delle stringhe, tuttavia, anziché definire questi punti di ingresso in modo che accettino stringhe di tipo C, è possibile utilizzare in alternativa un handle per il tipo <xref:System.String>,  in modo che il compilatore inserisca automaticamente il codice che esegue la conversione necessaria.  Per ciascun argomento di funzione presente in una funzione non gestita che accetta una stringa, è necessario utilizzare l'attributo <xref:System.Runtime.InteropServices.MarshalAsAttribute> per indicare che deve essere effettuato il marshalling dell'oggetto stringa alla funzione nativa come stringa di tipo C.  
  
## Esempio  
 Il codice riportato di seguito è costituito da un modulo gestito e un modulo non gestito.  Il modulo non gestito è una DLL che definisce una funzione denominata TakesAString che accetta una stringa ANSI di tipo C nel formato char\*.  Il modulo gestito è un'applicazione da riga di comando che importa la funzione TakesAString, definendola tuttavia in modo che accetti un argomento gestito di tipo System.String anziché un argomento char\*.  Viene utilizzato l'attributo <xref:System.Runtime.InteropServices.MarshalAsAttribute> per indicare come deve essere effettuato il marshalling della stringa gestita quando viene chiamata la funzione TakesAString.  
  
 Il modulo gestito è compilato con \/clr, ma funziona anche \/clr:pure.  
  
```  
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
  
```  
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
  
 Questa tecnica determina la creazione di una copia della stringa sull'heap non gestito. Di conseguenza, le modifiche apportate alla stringa dalla funzione nativa non verranno applicate alla copia gestita della stringa.  
  
 Nessuna parte della DLL viene esposta al codice gestito utilizzando la normale direttiva \#include.  In realtà, l'accesso alla DLL viene eseguito solo in fase di esecuzione. Di conseguenza, gli eventuali problemi con le funzioni importate con `DllImport` non verranno rilevati in fase di compilazione.  
  
## Vedere anche  
 [Utilizzo esplicito di PInvoke in C\+\+ \(attributo DllImport\)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)