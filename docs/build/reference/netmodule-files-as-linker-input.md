---
title: .File con estensione netmodule come input del linker
ms.date: 05/16/2019
helpviewer_keywords:
- MSIL linking
- linking [C++], modules
- .netmodules
- modules, Visual C++
ms.assetid: a4bcbe8a-4255-451d-853b-f88cfd82f4e1
ms.openlocfilehash: 50a0f0a1ff5f65a7512e8372de2fe5296c866dca
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65837433"
---
# <a name="netmodule-files-as-linker-input"></a>.File con estensione netmodule come input del linker

link.exe ora accetta file MSIL con estensione obj e netmodule come input. Il file di output generato dal linker sarà un assembly o un file con estensione netmodule senza dipendenza di runtime da uno dei file con estensione obj o netmodule che sono stati immessi nel linker.

I file con estensione netmodules vengono creati dal compilatore MSVC con [/LN (crea un modulo MSIL)](ln-create-msil-module.md) o dal linker con [/NOASSEMBLY (crea un modulo MSIL)](noassembly-create-a-msil-module.md). I file con estensione objs vengono sempre creati in una compilazione di Visual C++. Per altri compilatori di Visual Studio, usare l'opzione del compilatore **/target:module**.

È necessario passare al linker il file con estensione obj dalla compilazione di Visual C++ che ha creato il file con estensione netmodule. Il passaggio di un file con estensione netmodule non è più supportato perché le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017 e versioni successive.

Per informazioni su come richiamare il linker dalla riga di comando, vedere [Sintassi della riga di comando del linker](linking.md), [Usare il set di strumenti MSVC dalla riga di comando](../building-on-the-command-line.md) e [Impostare il percorso e le variabili di ambiente per compilazioni da riga di comando](../setting-the-path-and-environment-variables-for-command-line-builds.md).

Il passaggio di un file con estensione netmodule o dll al linker compilato dal compilatore MSVC con **/clr** può generare un errore del linker. Per altre informazioni, vedere [Scelta del formato dei file di input con estensione netmodule](choosing-the-format-of-netmodule-input-files.md).

Il linker accetta file con estensione obj nativi oltre a file con estensione obj di MSIL compilati con **/clr**. Quando si passano file con estensione obj misti nella stessa compilazione, il livello di verificabilità del file di output risultante corrisponde, per impostazione predefinita, a quello più basso dei moduli di input.

Se si dispone di un'applicazione composta da due o più assembly e si desidera che l'applicazione sia contenuta in uno solo, è necessario ricompilare gli assembly e collegare i file con estensione obj o netmodule per produrre un singolo assembly.

È necessario specificare un punto di ingresso usando [/ENTRY (simbolo del punto di ingresso)](entry-entry-point-symbol.md) quando si crea un'immagine eseguibile.

Nel collegamento a un file MSIL con estensione obj o netmodule, usare [/LTCG (generazione codice in fase di collegamento)](ltcg-link-time-code-generation.md), altrimenti quando il linker rileva il file MSIL con estensione obj o netmodule, riavvierà il collegamento con l'opzione /LTCG.

I file MSIL con estensione obj o netmodule possono essere passati anche a cl.exe.

I file di input MSIL con estensione obj o netmodule non possono disporre di risorse incorporate. Una risorsa viene incorporata in un file di output (modulo o assembly) con l'opzione del linker [/ASSEMBLYRESOURCE (incorpora una risorsa gestita)](assemblyresource-embed-a-managed-resource.md) o con l'opzione del compilatore **/resource** in altri compilatori di Visual Studio.

Se si esegue il collegamento a MSIL e non si specifica anche [/LTCG (generazione codice in fase di collegamento)](ltcg-link-time-code-generation.md), verrà visualizzato un messaggio informativo che segnala che il collegamento verrà riavviato. Questo messaggio può essere ignorato, ma per migliorare le prestazioni del linker con il collegamento a MSIL, specificare esplicitamente **/LTCG**.

## <a name="example"></a>Esempio

Nel codice C++ il blocco **catch** di una clausola **try** corrispondente verrà richiamato per un'eccezione non di sistema. Tuttavia, per impostazione predefinita, il CLR esegue il wrapping delle eccezioni non di sistema con <xref:System.Runtime.CompilerServices.RuntimeWrappedException>. Se un assembly viene creato da moduli di Visual C++ e non di Visual C++ e si vuole che venga richiamato un blocco **catch** nel codice C++ dalla clausola **try** corrispondente quando il blocco **try** genera un'eccezione non di sistema, è necessario aggiungere l'attributo `[assembly:System::Runtime::CompilerServices::RuntimeCompatibility(WrapNonExceptionThrows=false)]` al codice sorgente per i moduli non C++.

```cpp
// MSIL_linking.cpp
// compile with: /c /clr
value struct V {};

ref struct MCPP {
   static void Test() {
      try {
         throw (gcnew V);
      }
      catch (V ^) {
         System::Console::WriteLine("caught non System exception in C++ source code file");
      }
   }
};

/*
int main() {
   MCPP::Test();
}
*/
```

## <a name="example"></a>Esempio

Cambiando il valore booleano dell'attributo `WrapNonExceptionThrows`, si modifica la capacità del codice Visual C++ di intercettare un'eccezione non di sistema.

```cpp
// MSIL_linking_2.cs
// compile with: /target:module /addmodule:MSIL_linking.obj
// post-build command: link /LTCG MSIL_linking.obj MSIL_linking_2.netmodule /entry:MLinkTest.Main /out:MSIL_linking_2.exe /subsystem:console
using System.Runtime.CompilerServices;

// enable non System exceptions
[assembly:RuntimeCompatibility(WrapNonExceptionThrows=false)]

class MLinkTest {
   public static void Main() {
      try {
         MCPP.Test();
      }
      catch (RuntimeWrappedException) {
         System.Console.WriteLine("caught a wrapped exception in C#");
      }
   }
}
```

```Output
caught non System exception in C++ source code file
```

## <a name="see-also"></a>Vedere anche

- [File di input LINK](link-input-files.md)
- [Opzioni del linker MSVC](linker-options.md)
