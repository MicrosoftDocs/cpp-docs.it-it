---
title: "Classe Debug (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "..NET Framework [C++], Debug (classe)"
  - "Debug (classe)"
  - "Trace (classe), Visual C++"
ms.assetid: 076bd528-1b6f-4e8a-a372-eb5849cf969a
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe Debug (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si utilizza <xref:System.Diagnostics.Debug> in un'applicazione Visual C\+\+, non esistono differenze di comportamento tra la build di debug e quella di rilascio.  
  
## Osservazioni  
 Il comportamento per <xref:System.Diagnostics.Trace> è identico a quello per la classe Debug, ma dipende dalla definizione del simbolo TRACE in corso di definizione.  È pertanto necessario aggiungere `#ifdef` a qualsiasi codice correlato a Trace per evitare il comportamento di debug in una build di rilascio.  
  
## Esempio  
  
### Descrizione  
 Nell'esempio riportato di seguito vengono sempre eseguite le istruzioni di output, indipendentemente dal fatto che la compilazione venga effettuata con **\/DDEBUG** o **\/DTRACE**.  
  
### Codice  
  
```  
// mcpp_debug_class.cpp  
// compile with: /clr  
#using <system.dll>  
using namespace System::Diagnostics;  
using namespace System;  
  
int main() {  
   Trace::Listeners->Add( gcnew TextWriterTraceListener( Console::Out ) );  
   Trace::AutoFlush = true;  
   Trace::Indent();  
   Trace::WriteLine( "Entering Main" );  
   Console::WriteLine( "Hello World." );  
   Trace::WriteLine( "Exiting Main" );  
   Trace::Unindent();  
  
   Debug::WriteLine("test");  
}  
```  
  
### Output  
  
```  
    Entering Main  
Hello World.  
    Exiting Main  
test  
```  
  
## Esempio  
  
### Descrizione  
 Per ottenere il comportamento previsto, ovvero nessun output "test" stampato per una build di rilascio, utilizzare le direttive `#ifdef` e `#endif`.  L'esempio di codice precedente viene modificato di seguito per illustrare la correzione:  
  
### Codice  
  
```  
// mcpp_debug_class2.cpp  
// compile with: /clr  
#using <system.dll>  
using namespace System::Diagnostics;  
using namespace System;  
  
int main() {  
   Trace::Listeners->Add( gcnew TextWriterTraceListener( Console::Out ) );  
   Trace::AutoFlush = true;  
   Trace::Indent();  
  
#ifdef TRACE   // checks for a debug build  
   Trace::WriteLine( "Entering Main" );  
   Console::WriteLine( "Hello World." );  
   Trace::WriteLine( "Exiting Main" );  
#endif  
   Trace::Unindent();  
  
#ifdef DEBUG   // checks for a debug build  
   Debug::WriteLine("test");  
#endif   //ends the conditional block  
}  
```  
  
## Vedere anche  
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)