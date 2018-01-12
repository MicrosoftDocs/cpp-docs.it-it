---
title: Debug (classe) (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Trace class, Visual C++
- .NET Framework [C++], Debug class
- Debug class
ms.assetid: 076bd528-1b6f-4e8a-a372-eb5849cf969a
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 236a40873d3cbd660f9999880d46df4f91632b2e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="debug-class-ccli"></a>Classe Debug (C++/CLI)
Quando si utilizza <xref:System.Diagnostics.Debug> in un'applicazione Visual C++, il comportamento rimane invariato tra debug e di una build di rilascio.  
  
## <a name="remarks"></a>Note  
 Il comportamento per <xref:System.Diagnostics.Trace> è identico a quello per la classe Debug, ma dipende dalla definizione del simbolo TRACE viene definito. Ciò significa che è necessario `#ifdef` correlate alle tracce di codice di evitare il comportamento di debug in una build di rilascio.  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 L'esempio seguente viene sempre eseguito le istruzioni di output, indipendentemente dal fatto se esegue la compilazione con **senza /DDEBUG** o **/DTRACE**.  
  
### <a name="code"></a>Codice  
  
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
  
### <a name="output"></a>Output  
  
```  
    Entering Main  
Hello World.  
    Exiting Main  
test  
```  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Per ottenere il comportamento previsto (vale a dire, nessun output "test" stampato per una build di rilascio), è necessario utilizzare il `#ifdef` e `#endif` direttive. Esempio di codice precedente viene modificato di seguito per illustrare la correzione:  
  
### <a name="code"></a>Codice  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)