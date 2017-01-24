---
title: ".File con estensione netmodule come input del linker | Microsoft Docs"
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
  - ".netmodules"
  - "collegamento [C++], moduli"
  - "moduli, Visual C++"
  - "MSIL (collegamento)"
ms.assetid: a4bcbe8a-4255-451d-853b-f88cfd82f4e1
caps.latest.revision: 22
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .File con estensione netmodule come input del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

link.exe ora accetta il codice MSIL .obj e .netmodules come input.  Il file di output generato dal linker sarà un assembly o un .netmodule senza dipendenza di runtime da uno dei file .obj o .netmodules che sono stati introdotti nel linker.  
  
 I .netmodule vengono creati dal compilatore Visual C\+\+ con [\/LN \(Crea modulo MSIL\)](../../build/reference/ln-create-msil-module.md) oppure dal linker con [\/NOASSEMBLY \(Crea un modulo MSIL\)](../../build/reference/noassembly-create-a-msil-module.md). I file obj vengono sempre creati in una compilazione Visual C\+\+.  Per altri compilatori di Visual Studio, utilizzare l'opzione del compilatore **\/target:module**.  
  
 Nella maggior parte dei casi, sarà necessario passare al linker il file .obj dalla compilazione di Visual C\+\+ che ha creato il .netmodule, a meno che il .netmodule venga creato con [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  I .netmodule MSIL utilizzati come input per il linker devono essere file MSIL puri, ovvero file che possono essere generati dal compilatore Visual C\+\+ utilizzando **\/clr:safe**.  Altri compilatori di Visual Studio generano moduli pure di MSIL per impostazione predefinita.  
  
 Per informazioni su come richiamare il linker dalla riga di comando, vedere [Sintassi della riga di comando del linker](../../build/reference/linker-command-line-syntax.md) e [Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
 Passare un file .netmodule o .dll al linker compilato dal compilatore Visual C\+\+ con **\/clr** o **\/clr:pure** può comportare un errore del linker.  Per ulteriori informazioni, vedere [Scelta del formato dei file di input con estensione netmodule](../../build/reference/choosing-the-format-of-netmodule-input-files.md).  
  
 Il linker accetta file obj nativi e file obj di MSIL compilati con **\/clr**, **\/clr:pure** o **\/clr:safe**.  Quando nella stessa build vengono passati file obj misti, la verificabilità del file di output risultante sarà, per impostazione predefinita, uguale al livello minimo di verificabilità dei moduli di input.  Se, ad esempio, si passa un file con estensione obj pure sicuro al linker, il file di output sarà pure.  [\/CLRIMAGETYPE \(Specifica il tipo di immagine CLR\)](../../build/reference/clrimagetype-specify-type-of-clr-image.md) consente di specificare un livello di verificabilità più basso, se necessario.  
  
 Se si dispone di un'applicazione composta da due o più assembly e si desidera che l'applicazione sia contenuta in uno solo, è necessario ricompilare gli assembly e collegare i file .obj o .netmodule per produrre un singolo assembly.  
  
 Quando si crea un'immagine eseguibile, è necessario specificare un punto di ingresso utilizzando [\/ENTRY \(Simbolo del punto di ingresso\)](../../build/reference/entry-entry-point-symbol.md).  
  
 Nel collegamento a un file MSIL .obj o .netmodule, utilizzare [\/LTCG \(Generazione di codice in fase di collegamento\)](../../build/reference/ltcg-link-time-code-generation.md), altrimenti quando il linker rileva il codice MSIL .obj o .netmodule, riavvierà il collegamento con l'opzione \/LTCG.  
  
 I file MSIL .obj o .netmodule possono essere passati anche a cl.exe.  
  
 I file di input MSIL .obj o .netmodule non possono disporre di risorse incorporate.  Una risorsa viene incorporata in un file di output \(modulo o assembly\) con l'opzione del linker [\/ASSEMBLYRESOURCE \(Incorpora una risorsa gestita\)](../../build/reference/assemblyresource-embed-a-managed-resource.md) o con l'opzione del compilatore **\/resource** in altri compilatori di Visual Studio.  
  
 Quando si eseguono collegamenti MSIL, e non viene specificato anche [\/LTCG \(Generazione di codice in fase di collegamento\)](../../build/reference/ltcg-link-time-code-generation.md), viene visualizzato un messaggio in cui si segnala che il collegamento viene riavviato.  Sebbene sia possibile ignorare il messaggio, per migliorare le prestazioni del linker con i collegamenti MSIL è opportuno specificare **\/LTCG** in modo esplicito.  
  
## Esempio  
 Nel codice C\+\+ verrà richiamato il blocco catch di un blocco try corrispondente per un'eccezione non di sistema.  Tuttavia, per impostazione predefinita, CLR esegue il wrapping di eccezioni non di sistema con <xref:System.Runtime.CompilerServices.RuntimeWrappedException>.  Quando viene creato un assembly dai moduli Visual C\+\+ e non Visual C\+\+ e si desidera che un blocco catch nel codice C\+\+ venga richiamato dalla clausola try corrispondente alla generazione di un'eccezione non di sistema da parte del blocco try, sarà necessario aggiungere  
  
 l'attributo \[assembly:System::Runtime::CompilerServices::RuntimeCompatibility\(WrapNonExceptionThrows\=false\)\] al codice sorgente per i moduli non C\+\+.  
  
```  
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
  
## Esempio  
 Se si modifica il valore booleano dell'attributo WrapNonExceptionThrows, verrà modificata la capacità del codice Visual C\+\+ di rilevare un'eccezione non di sistema.  
  
```  
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
  
  **eccezione di sistema non rilevata nel file di codice sorgente C\+\+**   
## Vedere anche  
 [File di input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)