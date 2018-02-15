---
title: file con estensione netmodule come Input del Linker | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MSIL linking
- linking [C++], modules
- .netmodules
- modules, Visual C++
ms.assetid: a4bcbe8a-4255-451d-853b-f88cfd82f4e1
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d1c30c56012dc14392ecdc6a089dcd88a217d6d8
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="netmodule-files-as-linker-input"></a>.File con estensione netmodule come input del linker
link.exe ora accetta file MSIL con estensione obj e netmodule come input. Il file di output generato dal linker sarà un assembly o un file con estensione netmodule senza dipendenza di runtime da uno dei file con estensione obj o netmodule che sono stati introdotti nel linker.  
  
 i file netmodule vengono creati dal compilatore Visual C++ con [/LN (creazione di un modulo MSIL)](../../build/reference/ln-create-msil-module.md) o dal linker con [/NOASSEMBLY (Crea un modulo MSIL)](../../build/reference/noassembly-create-a-msil-module.md). file obj vengono sempre creati in una compilazione di Visual C++. Per altri compilatori di Visual Studio, utilizzare il **/target: module** l'opzione del compilatore.  
  
  È necessario passare al linker i file con estensione obj e la compilazione di Visual C++ che ha creato il file netmodule. Il passaggio di un file netmodule non è più supportato perché il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e verrà rimossa in una versione futura del compilatore.   
  
 Per informazioni su come richiamare il linker dalla riga di comando, vedere [sintassi della riga di comando del Linker](../../build/reference/linker-command-line-syntax.md), [codice C/C++ di compilazione nella riga di comando](../../build/building-on-the-command-line.md), e [impostare il percorso e le variabili di ambiente Le compilazioni da riga di comando](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
 Passaggio di un file con estensione netmodule o DLL al linker che è stato compilato dal compilatore Visual C++ con **/clr** può comportare un errore del linker. Per ulteriori informazioni, vedere [scegliendo il formato del file di Input. netmodule](../../build/reference/choosing-the-format-of-netmodule-input-files.md).  
  
 Il linker accetta file obj nativi, nonché i file con estensione obj MSIL compilati con **/clr**. Quando si passano i file obj misti nella stessa compilazione, verificabilità del file di output risultante, per impostazione predefinita, sarà uguale al livello più basso di verificabilità dei moduli di input. 
  
 Se si dispone di un'applicazione composta da due o più assembly e si desidera che l'applicazione sia contenuta in uno solo, è necessario ricompilare gli assembly e collegare i file con estensione obj o netmodule per produrre un singolo assembly.  
  
 È necessario specificare un punto di ingresso utilizzando [/ENTRY (simbolo del punto di ingresso)](../../build/reference/entry-entry-point-symbol.md) durante la creazione di un'immagine eseguibile.  
  
 Durante il collegamento con un file con estensione obj o. netmodule MSIL, utilizzare [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md), quando il linker rileva file obj MSIL o. netmodule, in caso contrario verrà riavviato il collegamento con /LTCG.  
  
 I file MSIL con estensione obj o netmodule possono essere passati anche a cl.exe.  
  
 I file di input MSIL con estensione obj o netmodule non possono disporre di risorse incorporate. Una risorsa è incorporata in un file di output (modulo o assembly) con [/ASSEMBLYRESOURCE (incorpora una risorsa gestita)](../../build/reference/assemblyresource-embed-a-managed-resource.md) l'opzione del linker o con il **/resource** opzione del compilatore in altri compilatori di Visual Studio.  
  
 Quando si esegue il collegamento MSIL e, se non si specifica anche [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md), si verrà visualizzato un messaggio informativo che segnala che il collegamento viene riavviato. Questo messaggio può essere ignorato, ma to migliorare le prestazioni del linker MSIL (collegamento), specificare in modo esplicito **/LTCG**.  
  
## <a name="example"></a>Esempio  
 Nel codice C++ per un'eccezione di sistema non verrà richiamato il blocco catch di un blocco try corrispondente. Tuttavia, per impostazione predefinita, CLR esegue il wrapping di eccezioni non di sistema con <xref:System.Runtime.CompilerServices.RuntimeWrappedException>. Quando viene creato un assembly da Visual C++ e i moduli non Visual C++ e si desidera che un blocco catch nel codice C++ venga richiamato dalla clausola try corrispondente quando il blocco try genera un'eccezione non di sistema, è necessario aggiungere il  
  
 attributo [assembly:System::Runtime::CompilerServices::RuntimeCompatibility(WrapNonExceptionThrows=false)] per il codice sorgente per i moduli non C++.  
  
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
  
## <a name="example"></a>Esempio  
 Se si modifica il valore booleano dell'attributo WrapNonExceptionThrows, verrà modificata la capacità del codice Visual C++ per rilevare un'eccezione non di sistema.  
  
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
  
```Output  
caught non System exception in C++ source code file  
```  
  
## <a name="see-also"></a>Vedere anche  
 [File di Input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)