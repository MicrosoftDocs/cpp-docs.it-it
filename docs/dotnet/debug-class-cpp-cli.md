---
title: Classe Debug (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- Trace class, Visual C++
- .NET Framework [C++], Debug class
- Debug class
ms.assetid: 076bd528-1b6f-4e8a-a372-eb5849cf969a
ms.openlocfilehash: 47e1b949cb6e998508a3bd362b1c74961cf4cc23
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91414152"
---
# <a name="debug-class-ccli"></a>Classe Debug (C++/CLI)

Quando si usa <xref:System.Diagnostics.Debug> in un'applicazione Visual C++, il comportamento non viene modificato tra una compilazione di debug e una build di rilascio.

## <a name="remarks"></a>Osservazioni

Il comportamento di <xref:System.Diagnostics.Trace> è identico al comportamento della classe debug, ma dipende dalla traccia del simbolo da definire. Ciò significa che è necessario `#ifdef` qualsiasi codice correlato alla traccia per impedire il comportamento di debug in una build di rilascio.

## <a name="example-always-executes-output-statements"></a>Esempio: esegue sempre le istruzioni di output

### <a name="description"></a>Descrizione

Nell'esempio seguente vengono sempre eseguite le istruzioni di output, indipendentemente dal fatto che si esegua la compilazione con **/DDEBUG** o **/DTrace**.

### <a name="code"></a>Codice

```cpp
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

```Output
    Entering Main
Hello World.
    Exiting Main
test
```

## <a name="example-use-ifdef-and-endif-directives"></a>Esempio: usare direttive #ifdef e #endif

### <a name="description"></a>Descrizione

Per ottenere il comportamento previsto, ovvero nessun output di test stampato per una build di rilascio, è necessario utilizzare le `#ifdef` `#endif` direttive e. L'esempio di codice precedente è stato modificato di seguito per illustrare questa correzione:

### <a name="code"></a>Codice

```cpp
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
