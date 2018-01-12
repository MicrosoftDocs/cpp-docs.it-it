---
title: 'Procedura: il marshalling di stringhe utilizzando PInvoke | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords:
- interop [C++], strings
- marshaling [C++], strings
- data marshaling [C++], strings
- platform invoke [C++], strings
ms.assetid: bcc75733-7337-4d9b-b1e9-b95a98256088
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 86f51c31cb329b05f58452818b7a9292d7699273
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-marshal-strings-using-pinvoke"></a>Procedura: Effettuare il marshalling di stringhe utilizzando PInvoke
In questo argomento viene illustrato come funzioni native che accettano stringhe di tipo C possono essere chiamate utilizzando la stringa CLR digitare sfruttando il supporto per .NET Framework Platform Invoke. I programmatori di Visual C++ si consiglia invece di utilizzare le funzionalità di interoperabilità C++ (sempre) poiché P/Invoke fornisce minimo in fase di compilazione segnalazione errori, non è indipendente dai tipi e può essere difficile da implementare. Se l'API non gestita viene fornito come una DLL e il codice sorgente non è disponibile, P/Invoke è l'unica opzione, ma in caso contrario vedere [utilizzando l'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
 Stringhe gestite e sono disposti in modo diverso in memoria, pertanto, il passaggio di stringhe da gestito a funzioni non gestite richiede il <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo per indicare al compilatore di inserire i meccanismi di conversione necessaria per il marshalling dei dati di tipo stringa in modo corretto e sicuro.  
  
 Come con le funzioni che utilizzano solo tipi di dati intrinseci, <xref:System.Runtime.InteropServices.DllImportAttribute> viene utilizzata per dichiarare i punti di ingresso gestito nelle funzioni native, per il passaggio di stringhe, anziché definire questi punti di ingresso che accetti le stringhe di tipo C, un handle per il <xref:System.String> tipo può essere utilizzato invece. Chiede al compilatore di inserire il codice che esegue la conversione necessaria. Per ogni argomento della funzione in una funzione non gestita che accetta una stringa, il <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo deve essere utilizzato per indicare che è necessario effettuare il marshalling dell'oggetto stringa alla funzione nativa come una stringa in formato C.  
  
## <a name="example"></a>Esempio  
 Il codice seguente è costituito da un e un modulo non gestito. Il modulo non gestito è una DLL che definisce una funzione denominata TakesAString che accetta una stringa ANSI C sotto forma di char *. Il modulo gestito è un'applicazione della riga di comando che importa la funzione TakesAString, ma definisce che accetti un System. String gestito anziché char\*. Il <xref:System.Runtime.InteropServices.MarshalAsAttribute> attributo viene utilizzato per indicare come deve essere effettuato il marshalling stringa gestita quando viene chiamato TakesAString.  
  
 Il modulo gestito viene compilato con /clr, ma con /clr: pure funziona anche.  
  
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
  
 Questa tecnica comporta una copia della stringa devono essere creati nell'heap gestito, in modo non rifletteranno le modifiche apportate alla stringa da funzione nativa nella copia della stringa gestita.  
  
 Si noti che nessuna parte della DLL viene esposto al codice gestito tramite tradizionale #include (direttiva). In effetti, la DLL di accesso viene eseguita in fase di esecuzione, problemi con le funzioni importate con `DllImport` non verranno rilevati in fase di compilazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)