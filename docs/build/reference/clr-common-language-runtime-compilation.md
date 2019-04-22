---
title: /clr (Compilazione Common Language Runtime)
ms.date: 09/18/2018
f1_keywords:
- /CLR
- VC.Project.VCNMakeTool.CompileAsManaged
- VC.Project.VCCLCompilerTool.CompileAsManaged
helpviewer_keywords:
- cl.exe compiler, common language runtime option
- -clr compiler option [C++]
- clr compiler option [C++]
- /clr compiler option [C++]
- Managed Extensions for C++, compiling
- common language runtime, /clr compiler option
ms.assetid: fec5a8c0-40ec-484c-a213-8dec918c1d6c
ms.openlocfilehash: 1946fdabe66934e64cf95d3c3f12e16bc98ba664
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58779352"
---
# <a name="clr-common-language-runtime-compilation"></a>/clr (Compilazione Common Language Runtime)

Consente alle applicazioni e ai componenti di usare le funzionalità di Common Language Runtime (CLR).

## <a name="syntax"></a>Sintassi

> **/clr**[**:**_options_]

## <a name="arguments"></a>Argomenti

*options*<br/>
Una o più delle seguenti opzioni, delimitate da virgole.

- none

   Senza opzioni **/clr** crea i metadati per l'applicazione. I metadati possono essere usati da altre applicazioni CLR e l'applicazione può usare tipi e dati nei metadati di altri componenti CLR. Per altre informazioni, vedere [assembly misti (nativi e gestiti)](../../dotnet/mixed-native-and-managed-assemblies.md).

- **pure**

   **/CLR: pure è deprecato**. L'opzione è stata rimossa in Visual Studio 2017. È consigliabile convertire in C# il codice che deve essere MSIL pure.

- **safe**

   **/CLR: safe è deprecata**. L'opzione è stata rimossa in Visual Studio 2017. È consigliabile convertire il codice che deve essere MSIL sicuro a c#.

- **noAssembly**

   **è stato deprecato /CLR: noAssembly**. In alternativa, usare [/LN (Create MSIL Module)](ln-create-msil-module.md) .

   Specifica che un manifesto dell'assembly non deve essere inserito nel file di output. Per impostazione predefinita, l'opzione **noAssembly** non è attiva.

   Un programma gestito senza metadati dell'assembly nel manifesto è detto *modulo*. L'opzione **noAssembly** può essere usata solo per produrre un modulo. Se si esegue la compilazione con [/c](c-compile-without-linking.md) e **/clr:noAssembly**, specificare l'opzione [/NOASSEMBLY](noassembly-create-a-msil-module.md) nella fase del linker per creare un modulo.

   Nelle versioni precedenti a Visual C++ 2005 **/clr:noAssembly** richiede **/LD**. **/LD** è ora implicito quando si specifica **/clr:noAssembly**.

- **initialAppDomain**

   Consente a un'applicazione Visual C++ per l'esecuzione nella versione 1 di CLR.  Un'applicazione compilata usando **initialAppDomain** non deve essere usata da un'applicazione che usa ASP.NET, perché questo non è supportato nella versione 1 di CLR.

- **nostdlib**

   Indica al compilatore di ignorare la directory \clr predefinita. Il compilatore produce errori se si includono più versioni di una DLL, ad esempio System.dll. Questa opzione consente di specificare il framework specifico da usare durante la compilazione.

## <a name="remarks"></a>Note

Quello gestito è un codice che può essere ispezionato e gestito da CLR. Il codice gestito può accedere agli oggetti gestiti. Per altre informazioni, vedere [/clr Restrictions](clr-restrictions.md).

Per informazioni su come sviluppare applicazioni che definiscono e utilizzano i tipi gestiti, vedere [Component Extensions for Runtime Platforms](../../extensions/component-extensions-for-runtime-platforms.md).

Un'applicazione compilata usando **/clr** non contiene necessariamente dati gestiti.

Per abilitare il debug in un'applicazione gestita, vedere [/ASSEMBLYDEBUG (aggiunge DebuggableAttribute)](assemblydebug-add-debuggableattribute.md).

Solo dei tipi CLR verrà creata un'istanza nell'heap del Garbage Collector. Per altre informazioni, vedere [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md). Per compilare un funzione nel codice nativo, usare la direttiva pragma `unmanaged` . Per altre informazioni, vedere [managed, unmanaged](../../preprocessor/managed-unmanaged.md).

Per impostazione predefinita, l'opzione **/clr** non è attiva. Quando l'opzione **/clr** è attiva, è attiva anche l'opzione **/MD** . Per altre informazioni, vedere [/MD, /MT, /LD (utilizzo della libreria di runtime)](md-mt-ld-use-run-time-library.md). **/MD** fa sì che le versioni multithread collegate in modo dinamico delle routine di runtime vengano selezionate dai file di intestazione (con estensione h) standard. Il multithreading è richiesto per la programmazione gestita perché il Garbage Collector CLR esegue i finalizzatori in un thread ausiliario.

Se esegue la compilazione usando **/c**, è possibile specificare il tipo CLR del file di output risultante con [/CLRIMAGETYPE](clrimagetype-specify-type-of-clr-image.md).

**/clr** implica **/EHa**. Nessun'altra opzione **/EH** è supportata per **/clr**. Per altre informazioni, vedere [/EH (Modello di gestione delle eccezioni)](eh-exception-handling-model.md).

Per altre informazioni su come determinare il tipo di immagine CLR di un file, vedere [/CLRHEADER](clrheader.md).

È necessario che tutti i moduli passati a una determinata chiamata del linker vengano compilati usando la stessa opzione del compilatore della libreria di runtime (**/MD** o **/LD**).

Usare l'opzione del linker [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md) per incorporare una risorsa in un assembly. Le opzione del linker[/DELAYSIGN](delaysign-partially-sign-an-assembly.md), [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md)e [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) consentono anche di personalizzare la creazione di un assembly.

Quando si usa l'opzione **/clr** , il simbolo `_MANAGED` viene definito come 1. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md).

Prima vengono inizializzate le variabili globali in un file oggetto nativo (durante DllMain se l'eseguibile è una DLL) e quindi vengono inizializzate le variabili globali nella sezione gestita (prima che il codice gestito venga eseguito). `#pragma` [init_seg](../../preprocessor/init-seg.md) interessa solo l'ordine di inizializzazione nelle categorie gestite e non gestite.

## <a name="metadata-and-unnamed-classes"></a>Metadati e classi senza nome

Classi senza nome verranno visualizzate nei metadati denominati come segue: `$UnnamedClass$`*crc-del-nome-file-corrente*`$`*indice*`$`, dove *indice* è un numero sequenziale delle classi senza nome nella compilazione. Ad esempio, l'esempio di codice seguente genera una classe senza nome nei metadati.

```cpp
// clr_unnamed_class.cpp
// compile by using: /clr /LD
class {} x;
```

Usare ildasm.exe per visualizzare i metadati.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
