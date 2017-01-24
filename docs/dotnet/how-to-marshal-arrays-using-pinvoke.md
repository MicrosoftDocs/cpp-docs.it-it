---
title: "Procedura: effettuare il marshalling di matrici utilizzando PInvoke | Microsoft Docs"
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
  - "marshalling dei dati [C++], matrici"
  - "interoperabilità [C++], matrici"
  - "marshalling [C++], matrici"
  - "platform invoke [C++], matrici"
ms.assetid: a1237797-a2da-4df4-984a-6333ed3af406
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: effettuare il marshalling di matrici utilizzando PInvoke
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come è possibile chiamare, utilizzando il tipo CLR <xref:System.String>, funzioni native che accettano stringhe di tipo C, sfruttando il supporto per platform invoke di .NET Framework.  Se possibile, si consiglia ai programmatori Visual C\+\+ di utilizzare in alternativa le funzionalità di interoperabilità di C\+\+, poiché P\/Invoke fornisce un supporto limitato per la segnalazione degli errori in fase di compilazione, non è indipendente dai tipi e può risultare difficile da implementare.  Se l'API non gestita viene fornita come DLL e il codice sorgente non è disponibile, P\/Invoke è l'unica opzione. In caso contrario, vedere [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
## Esempio  
 Le matrici native e gestite vengono disposte in memoria in modo differente. Di conseguenza, il passaggio di tali matrici tra codice gestito e codice non gestito richiede una conversione \(marshalling\).  In questo argomento viene illustrato come è possibile passare una matrice di semplici elementi \(copiabili\) alle funzioni native dal codice gestito.  
  
 Per il marshalling dei dati gestiti\/non gestiti viene in genere utilizzato l'attributo <xref:System.Runtime.InteropServices.DllImportAttribute> per creare un punto di ingresso gestito per ciascuna funzione nativa che verrà utilizzata.  Nel caso delle funzioni che accettano matrici come argomenti, è necessario utilizzare anche l'attributo <xref:System.Runtime.InteropServices.MarshalAsAttribute> per specificare al compilatore il modo in cui verrà effettuato il marshalling dei dati.  Nell'esempio riportato di seguito viene utilizzata l'enumerazione <xref:System.Runtime.InteropServices.UnmanagedType> per indicare che il marshalling della matrice gestita verrà effettuato come matrice di tipo C.  
  
 Il codice riportato di seguito è costituito da un modulo gestito e un modulo non gestito.  Il modulo non gestito è costituito da una DLL che definisce una funzione che accetta una matrice di Integer.  Il secondo modulo è un'applicazione gestita da riga di comando che importa tale funzione, definendola tuttavia rispetto a una matrice gestita, e che utilizza l'attributo <xref:System.Runtime.InteropServices.MarshalAsAttribute> per specificare che la matrice deve essere convertita in una matrice nativa al momento della chiamata.  
  
 Il modulo gestito è compilato con \/clr, ma funziona anche \/clr:pure.  
  
```  
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
  
```  
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
  
 Nessuna parte della DLL viene esposta al codice gestito utilizzando la normale direttiva \#include.  In realtà, l'accesso alla DLL viene eseguito solo in fase di esecuzione. Di conseguenza, gli eventuali problemi con le funzioni importate con <xref:System.Runtime.InteropServices.DllImportAttribute> non verranno rilevati in fase di compilazione.  
  
## Vedere anche  
 [Utilizzo esplicito di PInvoke in C\+\+ \(attributo DllImport\)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)