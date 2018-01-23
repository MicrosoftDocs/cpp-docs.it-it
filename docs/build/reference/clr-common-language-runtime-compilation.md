---
title: -clr (Common Language Runtime Compilation) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /CLR
- VC.Project.VCNMakeTool.CompileAsManaged
- VC.Project.VCCLCompilerTool.CompileAsManaged
dev_langs: C++
helpviewer_keywords:
- cl.exe compiler, common language runtime option
- -clr compiler option [C++]
- clr compiler option [C++]
- /clr compiler option [C++]
- Managed Extensions for C++, compiling
- common language runtime, /clr compiler option
ms.assetid: fec5a8c0-40ec-484c-a213-8dec918c1d6c
caps.latest.revision: "72"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6a867203585a66bd07eb9f95e289557e82e0553a
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="clr-common-language-runtime-compilation"></a>/clr (Compilazione Common Language Runtime)
Consente alle applicazioni e ai componenti di usare le funzionalità di Common Language Runtime (CLR).  
  
## <a name="syntax"></a>Sintassi  
  
```  
/clr[:options]  
```  
  
## <a name="arguments"></a>Argomenti  
 `options`  
 Una o più delle seguenti opzioni, delimitate da virgole.  
  
 **/clr**  
 Crea i metadati per l'applicazione. I metadati possono essere usati da altre applicazioni CLR e l'applicazione può usare tipi e dati nei metadati di altri componenti CLR.  
  
 Per altre informazioni, vedere  
  
 [Assembly (nativi e gestiti) misti](../../dotnet/mixed-native-and-managed-assemblies.md) e  
  
 [How to: Migrate to /clr](../../dotnet/how-to-migrate-to-clr.md).  
  
 **/clr:pure**  
 Produce un file di output solo MSIL (Microsoft Intermediate Language) senza codice eseguibile nativo. Tuttavia, può contenere tipi nativi compilati per MSIL.  
  
 Per ulteriori informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 /clr:pure è stato deprecato. Una versione futura del compilatore potrebbe non supportare questa opzione. È consigliabile convertire in C# il codice che deve essere MSIL pure.  
  
 **/clr:safe**  
 Produce un file di output verificabile solo MSIL senza codice eseguibile nativo. **/clr:safe** abilita la diagnostica di verifica ([Strumento PEVerify (Peverify.exe)](/dotnet/framework/tools/peverify-exe-peverify-tool)).  
  

 /clr:safe è stato deprecato. Una versione futura del compilatore potrebbe non supportare questa opzione. È consigliabile convertire in C# il codice che deve essere MSIL verificabile e pure.  
  
 **/clr:noAssembly**  
 Specifica che un manifesto dell'assembly non deve essere inserito nel file di output. Per impostazione predefinita, l'opzione **noAssembly** non è attiva.  
  
 L'opzione **noAssembly** è deprecata. In alternativa, usare [/LN (Create MSIL Module)](../../build/reference/ln-create-msil-module.md) .  
  
 Un programma gestito senza metadati dell'assembly nel manifesto è detto *modulo*. L'opzione **noAssembly** può essere usata solo per produrre un modulo. Se si esegue la compilazione con [/c](../../build/reference/c-compile-without-linking.md) e **/clr:noAssembly**, specificare l'opzione [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md) nella fase del linker per creare un modulo.  
  
 Nelle versioni precedenti a Visual C++ 2005 **/clr:noAssembly** richiede **/LD**. **/LD** è ora implicito quando si specifica **/clr:noAssembly**.  
  
 **/clr:initialAppDomain**  
 Consente di eseguire un'applicazione [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] nella versione 1 di CLR. Se si utilizza **initialAppDomain**, possono verificarsi alcuni dei problemi discussi sono trattati in [BUG: eccezione AppDomainUnloaded quando si usano estensioni gestite per componenti Visual C++](http://go.microsoft.com/fwlink/p/?linkid=169465) su Microsoft Sito Web del supporto.  
  
 Un'applicazione compilata usando **initialAppDomain** non deve essere usata da un'applicazione che usa ASP.NET, perché questo non è supportato nella versione 1 di CLR.  
  
 **/clr:nostdlib**  
 Indica al compilatore di ignorare la directory \clr predefinita. Il compilatore produce errori se si includono più versioni di una DLL, ad esempio System.dll. Questa opzione consente di specificare il framework specifico da usare durante la compilazione.  
  
## <a name="remarks"></a>Note  
 Quello gestito è un codice che può essere ispezionato e gestito da CLR. Il codice gestito può accedere agli oggetti gestiti. Per altre informazioni, vedere [/clr Restrictions](../../build/reference/clr-restrictions.md).  
  
 Per informazioni su come sviluppare applicazioni che definiscono e utilizzano i tipi gestiti, vedere [Component Extensions for Runtime Platforms](../../windows/component-extensions-for-runtime-platforms.md).  
  
 Un'applicazione compilata usando **/clr** non contiene necessariamente dati gestiti.  
  
 Per abilitare il debug in un'applicazione gestita, vedere [/ASSEMBLYDEBUG (Add DebuggableAttribute)](../../build/reference/assemblydebug-add-debuggableattribute.md).  
  
 Solo dei tipi CLR verrà creata un'istanza nell'heap del Garbage Collector. Per ulteriori informazioni, vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md). Per compilare un funzione nel codice nativo, usare la direttiva pragma `unmanaged` . Per ulteriori informazioni, vedere [managed, unmanaged](../../preprocessor/managed-unmanaged.md).  
  
 Per impostazione predefinita, l'opzione **/clr** non è attiva. Quando l'opzione **/clr** è attiva, è attiva anche l'opzione **/MD** . Per altre informazioni, vedere [/MD, /MT, /LD (utilizzo della libreria di runtime)](../../build/reference/md-mt-ld-use-run-time-library.md). **/MD** fa sì che le versioni multithread collegate in modo dinamico delle routine di runtime vengano selezionate dai file di intestazione (con estensione h) standard. Il multithreading è richiesto per la programmazione gestita perché il Garbage Collector CLR esegue i finalizzatori in un thread ausiliario.  
  
 Se si esegue la compilazione usando **/c**, è possibile specificare il tipo CLR (IJW, safe o pure) del file di output risultante con [/CLRIMAGETYPE](../../build/reference/clrimagetype-specify-type-of-clr-image.md).  
  
 **/clr** implica **/EHa**. Nessun'altra opzione **/EH** è supportata per **/clr**. Per altre informazioni, vedere [/EH (Modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md).  
  
 Per altre informazioni su come determinare il tipo di immagine CLR di un file, vedere [/CLRHEADER](../../build/reference/clrheader.md).  
  
 È necessario che tutti i moduli passati a una determinata chiamata del linker vengano compilati usando la stessa opzione del compilatore della libreria di runtime (**/MD** o **/LD**).  
  
 Usare l'opzione del linker [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md) per incorporare una risorsa in un assembly. Le opzione del linker[/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md), [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)e [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) consentono anche di personalizzare la creazione di un assembly.  
  
 Quando si usa l'opzione **/clr** , il simbolo `_MANAGED` viene definito come 1. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).  
  
 Prima vengono inizializzate le variabili globali in un file oggetto nativo (durante DllMain se l'eseguibile è una DLL) e quindi vengono inizializzate le variabili globali nella sezione gestita (prima che il codice gestito venga eseguito). `#pragma`[init_seg](../../preprocessor/init-seg.md) ha effetto solo sull'ordine di inizializzazione nelle categorie gestite e non gestite.  
  
 La compilazione con **/clr:safe** è analoga alla compilazione con [/platform:anycpu](/dotnet/csharp/language-reference/compiler-options/platform-compiler-option) nei linguaggi come C#.  
  
## <a name="safe-and-pure-images"></a>Immagini pure e safe  
 Un'immagine pure usa una versione CLR della libreria run-time C (CRT). Tuttavia, CRT non è verificabile e quindi non è possibile usare CRT quando si esegue la compilazione con **/clr:safe**. Per altre informazioni, vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
 Gli esempi di codice nativo che non possono essere visualizzati in un'immagine pure includono l'assembly inline, [setjmp](../../c-runtime-library/reference/setjmp.md)e [longjmp](../../c-runtime-library/reference/longjmp.md).  
  
 Ogni punto di ingresso di un'immagine pure o safe è gestito. Quando si esegue la compilazione usando **/clr**, il punto di ingresso è nativo. Per altre informazioni, vedere [__clrcall](../../cpp/clrcall.md).  
  
 Quando si esegue la compilazione usando **/clr:safe**, le variabili sono [appdomain](../../cpp/appdomain.md) e non possono essere per processo per impostazione predefinita. Per **/clr:pure**, anche se **appdomain** è l'opzione predefinita, è possibile usare variabili [process](../../cpp/process.md) .  
  
 Quando si esegue un file EXE a 32 bit compilato usando **/clr** o **/clr:pure** in un sistema operativo a 64 bit, l'applicazione verrà eseguita in WOW64, che permette l'esecuzione di un'applicazione a 32 bit in CLR a 32 bit in un sistema operativo a 64 bit. Per impostazione predefinita, un file EXE compilato usando **/clr:safe** verrà eseguito in CLR a 64 bit in un computer che esegue un sistema operativo a 64 bit. In un sistema operativo a 32 bit, lo stesso file exe verrebbe eseguito in CLR a 32 bit. Tuttavia, un'applicazione safe potrebbe caricare un componente a 32 bit. In questo caso, un'immagine safe in esecuzione su un sistema operativo a 64 bit avrà esito negativo quando caricherà l'applicazione a 32 bit (BadFormatException). Per essere certi che un'immagine safe continui a essere eseguita quando carica un'immagine a 32 bit su un sistema operativo a 64 bit, è necessario usare [/CLRIMAGETYPE](../../build/reference/clrimagetype-specify-type-of-clr-image.md) per modificare i metadati (corflags) e contrassegnarla per l'esecuzione in WOW64. La riga di comando seguente è un esempio. Sostituire il proprio simbolo di ingresso.  
  
 **cl /clr:safe t.cpp /link /clrimagetype:pure /entry:?main@@$$HYMHXZ /subsystem:console**  
  
 Per informazioni su come ottenere un nome decorato, vedere [Decorated Names](../../build/reference/decorated-names.md). Per ulteriori informazioni sulle destinazioni a 64 bit, vedere [configurare Visual C++ per x64 a 64 bit, destinazioni](../../build/configuring-programs-for-64-bit-visual-cpp.md). Per informazioni sull'utilizzo del codice Common Language Runtime puro, vedere [procedura: migrare a /clr: pure (C + + CLI)](../../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md) e [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## <a name="metadata-and-unnamed-classes"></a>Metadati e classi senza nome  
 Classi senza nome verranno visualizzate nei metadati denominati come segue: `$UnnamedClass$`*crc-del-nome-file-corrente*`$`*indice*`$`, dove *indice* è un numero sequenziale delle classi senza nome nella compilazione. Ad esempio, l'esempio di codice seguente genera una classe senza nome nei metadati.  
  
```  
// clr_unnamed_class.cpp  
// compile by using: /clr /LD  
class {} x;  
```  
  
 Usare ildasm.exe per visualizzare i metadati.  
  
## <a name="managed-extensions-for-c"></a>Estensioni gestite per C++  
 Visual C++ non supporta più l'opzione **/clr:oldsyntax** . Questa opzione è stata deprecata in Visual Studio 2005. La sintassi supportata per la scrittura di codice gestito in C++ è C++/CLI. Per altre informazioni, vedere [Component Extensions for Runtime Platforms](../../windows/component-extensions-for-runtime-platforms.md).  
  
 Se si dispone di codice che usa le estensioni gestite per C++, è consigliabile convertirlo per poter usare la sintassi C++/CLI. Per informazioni su come convertire il codice, vedere [C++/CLI Migration Primer](../../dotnet/cpp-cli-migration-primer.md).  
  
#### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio  
  
1.  In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul nome del progetto e quindi scegliere **Pagine delle proprietà** per visualizzare la finestra di dialogo corrispondente **del progetto**.  
  
2.  Selezionare la cartella **Proprietà di configurazione** .  
  
3.  Nella pagina delle proprietà **Generale** modificare la proprietà **Supporto Common Language Runtime** .  
  
    > [!NOTE]
    >  Quando l'opzione **/clr** è abilitata nella finestra di dialogo **Pagine delle proprietà** , vengono modificate nel modo necessario anche le proprietà delle opzioni del compilatore che non sono compatibili con **/clr** . Ad esempio se l'opzione **/RTC** è impostata e quindi si abilita l'opzione **/clr** , l'opzione **/RTC** viene disattivata.  
    >   
    >  Inoltre, quando si esegue il debug di un'applicazione **/clr** , impostare la proprietà **Tipo di debugger** su **Misto** o **Solo gestito**. Per ulteriori informazioni, vedere [le impostazioni di progetto per una configurazione di Debug C++](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration).  
  
     Per informazioni su come creare un modulo, vedere [/NOASSEMBLY (Crea un modulo MSIL)](../../build/reference/noassembly-create-a-msil-module.md).  
  
#### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAsManaged%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)