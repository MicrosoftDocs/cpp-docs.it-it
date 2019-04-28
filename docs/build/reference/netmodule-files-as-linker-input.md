---
title: .File con estensione netmodule come input del linker
ms.date: 11/04/2016
helpviewer_keywords:
- MSIL linking
- linking [C++], modules
- .netmodules
- modules, Visual C++
ms.assetid: a4bcbe8a-4255-451d-853b-f88cfd82f4e1
ms.openlocfilehash: fcba363cff567c69ac0fbd0a541953dfe2c8e910
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62320669"
---
# <a name="netmodule-files-as-linker-input"></a>.File con estensione netmodule come input del linker

link.exe ora accetta file MSIL con estensione obj e netmodule come input. Il file di output generato dal linker è un assembly o un file con estensione netmodule senza dipendenza da fase di esecuzione in uno qualsiasi dei file obj o netmodule che sono stati introdotti nel linker.

netmodule vengono creati dal compilatore MSVC con [/LN (Crea modulo MSIL)](ln-create-msil-module.md) o dal linker con [/NOASSEMBLY (Crea un modulo MSIL)](noassembly-create-a-msil-module.md). file obj vengono sempre creati in una compilazione di Visual C++. Per altri compilatori di Visual Studio, usare il **/target: module** opzione del compilatore.

È necessario passare al linker il file con estensione obj dalla compilazione di Visual C++ che ha creato il file con estensione netmodule. Il passaggio di un file con estensione netmodule non è più supportato perché il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

Per informazioni su come richiamare il linker dalla riga di comando, vedere [sintassi della riga di comando del Linker](linking.md), [un set di strumenti MSVC dalla riga di comando](../building-on-the-command-line.md), e [impostare il percorso e le variabili di ambiente per le compilazioni da riga di comando](../setting-the-path-and-environment-variables-for-command-line-builds.md).

Il passaggio di un file con estensione netmodule o DLL al linker compilato dal compilatore MSVC con **/clr** può comportare un errore del linker. Per altre informazioni, vedere [scelta del formato dei file con estensione netmodule un file di Input](choosing-the-format-of-netmodule-input-files.md).

Il linker accetta file con estensione obj native, nonché i file MSIL con estensione obj compilati con **/clr**. Quando si passano i file obj misti nella stessa compilazione, la verificabilità del file di output risultante, per impostazione predefinita, sarà uguale al livello più basso di verificabilità dei moduli di input.

Se si dispone di un'applicazione composta da due o più assembly e si desidera che l'applicazione sia contenuta in uno solo, è necessario ricompilare gli assembly e collegare i file con estensione obj o netmodule per produrre un singolo assembly.

È necessario specificare un punto di ingresso usando [/ENTRY (simbolo del punto di ingresso)](entry-entry-point-symbol.md) durante la creazione di un'immagine eseguibile.

Durante il collegamento con un file con estensione obj o netmodule MSIL, utilizzare [/LTCG (generazione di codice in fase di collegamento)](ltcg-link-time-code-generation.md), in caso contrario, quando il linker rileva il codice MSIL con estensione obj o netmodule, riavvierà il collegamento con /LTCG.

I file MSIL con estensione obj o netmodule possono essere passati anche a cl.exe.

I file di input MSIL con estensione obj o netmodule non possono disporre di risorse incorporate. Una risorsa è incorporata in un file di output (modulo o assembly) con [/ASSEMBLYRESOURCE (incorpora una risorsa gestita)](assemblyresource-embed-a-managed-resource.md) l'opzione del linker o con il **/resource** opzione del compilatore in altri compilatori di Visual Studio.

Quando si esegue il collegamento MSIL e se non si specifica anche [/LTCG (generazione di codice in fase di collegamento)](ltcg-link-time-code-generation.md), si verrà visualizzato un messaggio informativo che segnala che il collegamento viene riavviato. Questo messaggio può essere ignorato, ma to migliorare le prestazioni del linker con MSIL (collegamento), specificare in modo esplicito **/LTCG**.

## <a name="example"></a>Esempio

Nel codice C++ di **intercettare** blocco di un oggetto corrispondente **provare** verrà richiamato per un'eccezione non di sistema. Tuttavia, per impostazione predefinita, CLR esegue il wrapping di eccezioni non di sistema con <xref:System.Runtime.CompilerServices.RuntimeWrappedException>. Quando viene creato un assembly da moduli di Visual C++ e Visual C++ non e si desidera un **intercettare** block nel codice C++ da richiamare dal corrispondente **provare** clausola quando il **provare**blocco genera un'eccezione non di sistema, è necessario aggiungere il `[assembly:System::Runtime::CompilerServices::RuntimeCompatibility(WrapNonExceptionThrows=false)]` attributo per il codice sorgente per i moduli C++ non.

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

Modificando il valore booleano del `WrapNonExceptionThrows` attributo, verrà modificata la capacità del codice Visual C++ per rilevare un'eccezione non di sistema.

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
