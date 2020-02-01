---
title: .netmodule file come input del linker
description: Viene descritto come usare mixed.obj e.netmodule file come input del linker durante la creazione di assembly .NET.
ms.date: 01/30/2020
helpviewer_keywords:
- MSIL linking
- linking [C++], modules
- .netmodule files
- modules, Visual C++
ms.assetid: a4bcbe8a-4255-451d-853b-f88cfd82f4e1
no-loc:
- obj
- netmodule
- clr
- pure
- safe
ms.openlocfilehash: 83eab25624bdb81ba9191e4efe6a774551502ee0
ms.sourcegitcommit: c4528a7424d35039454f17778baf1b5f98fbbee7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/01/2020
ms.locfileid: "76912823"
---
# <a name="opno-locnetmodule-files-as-linker-input"></a>.netmodule file come input del linker

link. exe accetta il *`.obj`* MSIL e i file *`.netmodule`* come input. Il file di output prodotto dal linker è un assembly o un file di *`.netmodule`* senza dipendenze in fase di esecuzione su uno dei file *`.obj`* o *`.netmodule`* che sono stati inseriti nel linker.

## <a name="remarks"></a>Note

i file *`.netmodule`* vengono creati dal compilatore MSVC con [/LN (create MSIL Module)](ln-create-msil-module.md) o dal linker con [/NOASSEMBLY (creare un modulo MSIL)](noassembly-create-a-msil-module.md). i file *`.obj`* vengono sempre creati in C++ una compilazione. Per altri compilatori di Visual Studio, usare l'opzione del compilatore **/target:module**.

Al linker deve essere passato il file *`.obj`* dalla C++ compilazione che ha creato il *`.netmodule`* . Il passaggio di un *`.netmodule`* non è più supportato perché le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017 e versioni successive.

Per informazioni su come richiamare il linker dalla riga di comando, vedere [sintassi della riga di comando del linker](linking.md), [usare il set di strumenti MSVC dalla riga di comando](../building-on-the-command-line.md)e [impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](../setting-the-path-and-environment-variables-for-command-line-builds.md).

Il passaggio di un file di *`.netmodule`* o *`.dll`* al linker compilato dal compilatore MSVC con **/clr** può causare un errore del linker. Per ulteriori informazioni, vedere [scelta del formato di file di inputnetmodule](choosing-the-format-of-netmodule-input-files.md).

Il linker accetta sia i file *`.obj`* nativi che i file di *`.obj`* MSIL compilati con **/clr** . È possibile passare file di *`.obj`* misti nella stessa compilazione. La verificabilità predefinita del file di output risultante corrisponde alla verificabilità del modulo di input più basso.

È possibile modificare un'applicazione costituita da due o più assembly da contenere in un assembly. Ricompilare le origini degli assembly, quindi collegare i file di *`.obj`* o i file *`.netmodule`* per produrre un singolo assembly.

Specificare un punto di ingresso usando [/entry (simbolo del punto di ingresso)](entry-entry-point-symbol.md) quando si crea un'immagine eseguibile.

Quando si esegue il collegamento con un file MSIL *`.obj`* o *`.netmodule`* , usare [/LTCG (generazione di codice in fase di collegamento)](ltcg-link-time-code-generation.md); in caso contrario, quando il linker rileva il *`.obj`* MSIL o *`.netmodule`* , il collegamento verrà riavviato con **/LTCG**. Verrà visualizzato un messaggio informativo che indica che il collegamento è stato riavviato. È possibile ignorare questo messaggio, ma per migliorare le prestazioni del linker, specificare in modo esplicito **/LTCG**.

È inoltre possibile passare a cl. exe i file di *`.netmodule`* o *`.obj`* MSIL.

I file di input *`.netmodule`* o *`.obj`* MSIL di input non possono avere risorse incorporate. Incorporare le risorse in un modulo di output o in un file di assembly usando l'opzione del linker [/ASSEMBLYRESOURCE (incorpora una risorsa gestita)](assemblyresource-embed-a-managed-resource.md) . In alternativa, usare l'opzione del compilatore **/Resource** in altri compilatori di Visual Studio.

## <a name="examples"></a>Esempi

Nel C++ codice viene richiamato il blocco **`catch`** di un **`try`** corrispondente per un'eccezione non`System`. Tuttavia, per impostazione predefinita, CLR esegue il wrapping delle eccezioni non`System` con <xref:System.Runtime.CompilerServices.RuntimeWrappedException>. Quando un assembly viene creato da C++ e nonC++ moduli e si desidera che un blocco **`catch`** nel C++ codice venga richiamato dalla clausola **`try`** corrispondente quando il blocco **`try`** genera un'eccezione non`System`, è necessario aggiungere l'attributo `[assembly:System::Runtime::CompilerServices::RuntimeCompatibility(WrapNonExceptionThrows=false)]` al codice sorgente per iC++ moduli non.

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

Modificando il valore `Boolean` dell'attributo `WrapNonExceptionThrows`, è possibile modificare la capacità del C++ codice di intercettare un'eccezione non`System`.

```csharp
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
