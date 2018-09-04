---
title: -clr (Common Language Runtime Compilation) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /CLR
- VC.Project.VCNMakeTool.CompileAsManaged
- VC.Project.VCCLCompilerTool.CompileAsManaged
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, common language runtime option
- -clr compiler option [C++]
- clr compiler option [C++]
- /clr compiler option [C++]
- Managed Extensions for C++, compiling
- common language runtime, /clr compiler option
ms.assetid: fec5a8c0-40ec-484c-a213-8dec918c1d6c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ff46958afea8825f29941d9f3cbead20c533c76c
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43676985"
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
  
 [Assembly misti (nativi e gestiti)](../../dotnet/mixed-native-and-managed-assemblies.md) e  
  
 [Procedura: migrare a /clr](../../dotnet/how-to-migrate-to-clr.md).  
  
 **/clr:pure**  
 /clr:pure è stato deprecato. Una versione futura del compilatore potrebbe non supportare questa opzione. È consigliabile convertire in C# il codice che deve essere MSIL pure.  
  
 **/clr:safe**  
 /clr:safe è stato deprecato. Una versione futura del compilatore potrebbe non supportare questa opzione. È consigliabile convertire il codice che deve essere MSIL sicuro a c#. 
  
 **/clr:noAssembly**  
 Specifica che un manifesto dell'assembly non deve essere inserito nel file di output. Per impostazione predefinita, l'opzione **noAssembly** non è attiva.  
  
 L'opzione **noAssembly** è deprecata. In alternativa, usare [/LN (Create MSIL Module)](../../build/reference/ln-create-msil-module.md) .  
  
 Un programma gestito senza metadati dell'assembly nel manifesto è detto *modulo*. L'opzione **noAssembly** può essere usata solo per produrre un modulo. Se si esegue la compilazione con [/c](../../build/reference/c-compile-without-linking.md) e **/clr:noAssembly**, specificare l'opzione [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md) nella fase del linker per creare un modulo.  
  
 Nelle versioni precedenti a Visual C++ 2005 **/clr:noAssembly** richiede **/LD**. **/LD** è ora implicito quando si specifica **/clr:noAssembly**.  
  
 **/clr:initialAppDomain**  
 Consente a un'applicazione Visual C++ per l'esecuzione nella versione 1 di CLR.  Un'applicazione compilata usando **initialAppDomain** non deve essere usata da un'applicazione che usa ASP.NET, perché questo non è supportato nella versione 1 di CLR.  
  
 **/clr:nostdlib**  
 Indica al compilatore di ignorare la directory \clr predefinita. Il compilatore produce errori se si includono più versioni di una DLL, ad esempio System.dll. Questa opzione consente di specificare il framework specifico da usare durante la compilazione.  
  
## <a name="remarks"></a>Note  
 Quello gestito è un codice che può essere ispezionato e gestito da CLR. Il codice gestito può accedere agli oggetti gestiti. Per altre informazioni, vedere [/clr Restrictions](../../build/reference/clr-restrictions.md).  
  
 Per informazioni su come sviluppare applicazioni che definiscono e utilizzano i tipi gestiti, vedere [Component Extensions for Runtime Platforms](../../windows/component-extensions-for-runtime-platforms.md).  
  
 Un'applicazione compilata usando **/clr** non contiene necessariamente dati gestiti.  
  
 Per abilitare il debug in un'applicazione gestita, vedere [/ASSEMBLYDEBUG (aggiunge DebuggableAttribute)](../../build/reference/assemblydebug-add-debuggableattribute.md).  
  
 Solo dei tipi CLR verrà creata un'istanza nell'heap del Garbage Collector. Per altre informazioni, vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md). Per compilare un funzione nel codice nativo, usare la direttiva pragma `unmanaged` . Per altre informazioni, vedere [managed, unmanaged](../../preprocessor/managed-unmanaged.md).  
  
 Per impostazione predefinita, l'opzione **/clr** non è attiva. Quando l'opzione **/clr** è attiva, è attiva anche l'opzione **/MD** . Per altre informazioni, vedere [/MD, /MT, /LD (utilizzo della libreria di runtime)](../../build/reference/md-mt-ld-use-run-time-library.md). **/MD** fa sì che le versioni multithread collegate in modo dinamico delle routine di runtime vengano selezionate dai file di intestazione (con estensione h) standard. Il multithreading è richiesto per la programmazione gestita perché il Garbage Collector CLR esegue i finalizzatori in un thread ausiliario.  
  
 Se esegue la compilazione usando **/c**, è possibile specificare il tipo CLR del file di output risultante con [/CLRIMAGETYPE](../../build/reference/clrimagetype-specify-type-of-clr-image.md).  
  
 **/clr** implica **/EHa**. Nessun'altra opzione **/EH** è supportata per **/clr**. Per altre informazioni, vedere [/EH (Modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md).  
  
 Per altre informazioni su come determinare il tipo di immagine CLR di un file, vedere [/CLRHEADER](../../build/reference/clrheader.md).  
  
 È necessario che tutti i moduli passati a una determinata chiamata del linker vengano compilati usando la stessa opzione del compilatore della libreria di runtime (**/MD** o **/LD**).  
  
 Usare l'opzione del linker [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md) per incorporare una risorsa in un assembly. Le opzione del linker[/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md), [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)e [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) consentono anche di personalizzare la creazione di un assembly.  
  
 Quando si usa l'opzione **/clr** , il simbolo `_MANAGED` viene definito come 1. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).  
  
 Prima vengono inizializzate le variabili globali in un file oggetto nativo (durante DllMain se l'eseguibile è una DLL) e quindi vengono inizializzate le variabili globali nella sezione gestita (prima che il codice gestito venga eseguito). `#pragma`[init_seg](../../preprocessor/init-seg.md) ha effetto solo sull'ordine di inizializzazione nelle categorie gestite e non gestite.  
  
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
    >  Inoltre, quando si esegue il debug di un'applicazione **/clr** , impostare la proprietà **Tipo di debugger** su **Misto** o **Solo gestito**. Per altre informazioni, vedere [impostazioni di progetto per una configurazione di Debug C++](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration).  
  
     Per informazioni su come creare un modulo, vedere [/NOASSEMBLY (Crea un modulo MSIL)](../../build/reference/noassembly-create-a-msil-module.md).  
  
#### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAsManaged%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)