---
title: Classe Debug (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- Trace class, Visual C++
- .NET Framework [C++], Debug class
- Debug class
ms.assetid: 076bd528-1b6f-4e8a-a372-eb5849cf969a
ms.openlocfilehash: 3a262a0d2ef429cb94f4648eb7c7180e7b130279
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393779"
---
# <a name="debug-class-ccli"></a>Classe Debug (C++/CLI)

Quando si usa <xref:System.Diagnostics.Debug> in un'applicazione Visual C++, il comportamento rimane invariato tra una build di rilascio e di debug.

## <a name="remarks"></a>Note

Il comportamento per <xref:System.Diagnostics.Trace> è identico a quello per la classe Debug, ma dipende dalla definizione del simbolo TRACE viene definito. Ciò significa che è necessario `#ifdef` qualsiasi codice correlate alle tracce per evitare il comportamento di debug nella build di rilascio.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

L'esempio seguente viene sempre eseguito le istruzioni di output, indipendentemente dal fatto che si esegue la compilazione con **senza /DDEBUG** oppure **/DTRACE**.

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

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Per ottenere il comportamento previsto (vale a dire, nessuna "test" output stampato per una build di rilascio), è necessario usare il `#ifdef` e `#endif` direttive. Esempio di codice precedente viene modificato di sotto per illustrare questa correzione:

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
