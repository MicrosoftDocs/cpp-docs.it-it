---
title: /clr (Compilazione Common Language Runtime)
description: Usare l'opzione del compilatore Microsoft C++/CLR per compilare il codice C++/CLI e C++ come codice gestito.
ms.date: 10/27/2020
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
ms.openlocfilehash: 9d27d9fb6226f84c4ea67a8f9387a595ba65468b
ms.sourcegitcommit: 9c801a43ee0d4d84956b03fd387716c818705e0d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/28/2020
ms.locfileid: "92907597"
---
# <a name="clr-common-language-runtime-compilation"></a>`/clr` (Compilazione Common Language Runtime)

Consente alle applicazioni e ai componenti di usare le funzionalità del Common Language Runtime (CLR) e Abilita la compilazione di C++/CLI.

## <a name="syntax"></a>Sintassi

> **`/clr`**\[**`:`**_Opzioni_ ]

## <a name="arguments"></a>Argomenti

*Opzioni*\
Uno o più degli argomenti delimitati da virgole seguenti.

- Nessuno

   Senza opzioni, **`/clr`** Crea i metadati per il componente. I metadati possono essere utilizzati da altre applicazioni CLR e consentono al componente di utilizzare i tipi e i dati nei metadati di altri componenti CLR. Per altre informazioni, vedere [Assembly misti (nativi e gestiti)](../../dotnet/mixed-native-and-managed-assemblies.md).

- **`NetCore`**

   **`/clr:NetCore`** Crea metadati e codice per il componente usando la versione più recente di .NET Framework multipiattaforma, nota anche come .NET Core. I metadati possono essere usati da altre applicazioni .NET Core. L'opzione consente al componente di utilizzare i tipi e i dati nei metadati di altri componenti di .NET Core.

- **`nostdlib`**

   Indica al compilatore di ignorare la directory predefinita *`\clr`* . Il compilatore genera errori se si includono più versioni di una DLL, ad esempio System.dll. Questa opzione consente di specificare il Framework specifico da usare durante la compilazione.

- **`pure`**

   **`/clr:pure` è deprecato** . L'opzione è stata rimossa in Visual Studio 2017 e versioni successive. È consigliabile convertire in C# il codice che deve essere MSIL pure.

- **`safe`**

   **`/clr:safe` è deprecato** . L'opzione è stata rimossa in Visual Studio 2017 e versioni successive. È consigliabile convertire in C# il codice che deve essere safe MSIL.

- **`noAssembly`**

   **`/clr:noAssembly` è deprecato** . In alternativa, usare [ `/LN` (Crea modulo MSIL)](ln-create-msil-module.md) .

   Indica al compilatore di non inserire un manifesto dell'assembly nel file di output. Per impostazione predefinita, l' **`noAssembly`** opzione non è attiva.

   Un programma gestito senza metadati dell'assembly nel manifesto è noto come *modulo* . L' **`noAssembly`** opzione può essere usata solo per produrre un modulo. Se si compila usando [`/c`](c-compile-without-linking.md) e **`/clr:noAssembly`** , specificare l' [`/NOASSEMBLY`](noassembly-create-a-msil-module.md) opzione nella fase del linker per creare un modulo.

   Prima di Visual Studio 2005, **`/clr:noAssembly`** obbligatorio **`/LD`** . **`/LD`** è ora implicito quando si specifica **`/clr:noAssembly`** .

- **`initialAppDomain`**

   **`initialAppDomain` è obsoleto** . Consente l'esecuzione di un'applicazione C++/CLI sulla versione 1 di CLR.  Un'applicazione compilata usando non **`initialAppDomain`** deve essere usata da un'applicazione che usa ASP.NET perché non è supportata nella versione 1 di CLR.

## <a name="remarks"></a>Osservazioni

Il codice *gestito* è un codice che può essere controllato e gestito da CLR. Il codice gestito può accedere agli oggetti gestiti. Per ulteriori informazioni, vedere [ `/clr` restrizioni](clr-restrictions.md).

Per informazioni sullo sviluppo di applicazioni che definiscono e utilizzano i tipi gestiti in C++, vedere [estensioni componenti per le piattaforme runtime](../../extensions/component-extensions-for-runtime-platforms.md).

Un'applicazione compilata utilizzando **`/clr`** può contenere o meno dati gestiti.

Per abilitare il debug in un'applicazione gestita, vedere [ `/ASSEMBLYDEBUG` (aggiungere DebuggableAttribute)](assemblydebug-add-debuggableattribute.md).

Viene creata un'istanza solo dei tipi CLR nell'heap sottoposti a Garbage Collection. Per altre informazioni, vedere [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md) (Classi e struct). Per compilare un funzione nel codice nativo, usare la direttiva pragma `unmanaged` . Per ulteriori informazioni, vedere [ `managed` `unmanaged` . ](../../preprocessor/managed-unmanaged.md)

Per impostazione predefinita, **`/clr`** non è attivo. Quando **`/clr`** è attivo, **`/MD`** è attivo anche. Per ulteriori informazioni, vedere [ `/MD` , `/MT` , `/LD` (utilizzare Run-Time libreria)](md-mt-ld-use-run-time-library.md). **`/MD`** garantisce che le versioni multithreading collegate in modo dinamico delle routine di runtime vengano selezionate dai file di intestazione standard. Il multithreading è richiesto per la programmazione gestita perché il Garbage Collector CLR esegue i finalizzatori in un thread ausiliario.

Se si esegue la compilazione utilizzando **`/c`** , è possibile specificare il tipo CLR del file di output risultante utilizzando l' [`/CLRIMAGETYPE`](clrimagetype-specify-type-of-clr-image.md) opzione del linker.

**`/clr`** implica **`/EHa`** e non **`/EH`** sono supportate altre opzioni per **`/clr`** . Per ulteriori informazioni, vedere [ `/EH` (modello di gestione delle eccezioni)](eh-exception-handling-model.md).

Per informazioni su come determinare il tipo di immagine CLR di un file, vedere [`/CLRHEADER`](clrheader.md) .

Tutti i moduli passati a una determinata chiamata del linker devono essere compilati usando la stessa opzione del compilatore della libreria di runtime ( **`/MD`** o **`/LD`** ).

Usare l' [`/ASSEMBLYRESOURCE`](assemblyresource-embed-a-managed-resource.md) opzione del linker per incorporare una risorsa in un assembly. [`/DELAYSIGN`](delaysign-partially-sign-an-assembly.md)[`/KEYCONTAINER`](keycontainer-specify-a-key-container-to-sign-an-assembly.md)le opzioni, e del [`/KEYFILE`](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) linker consentono inoltre di personalizzare la modalità di creazione di un assembly.

Quando **`/clr`** si usa, il `_MANAGED` simbolo viene definito come 1. Per altre informazioni, vedere [macro predefinite](../../preprocessor/predefined-macros.md).

Le variabili globali in un file oggetto nativo vengono inizializzate per prime (durante `DllMain` se l'eseguibile è una dll) e quindi vengono inizializzate le variabili globali nella sezione gestita (prima dell'esecuzione di qualsiasi codice gestito). [`#pragma init_seg`](../../preprocessor/init-seg.md) influiscono solo sull'ordine di inizializzazione nelle categorie gestite e non gestite.

### <a name="metadata-and-unnamed-classes"></a>Metadati e classi senza nome

Le classi senza nome vengono visualizzate nei metadati sotto i nomi  `$UnnamedClass$<crc-of-current-file-name>$<index>$` , ad esempio, dove `<index>` è un conteggio sequenziale delle classi senza nome nella compilazione. Ad esempio, l'esempio di codice seguente genera una classe senza nome nei metadati.

```cpp
// clr_unnamed_class.cpp
// compile by using: /clr /LD
class {} x;
```

Usare ildasm.exe per visualizzare i metadati.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Impostare l'elenco a discesa **configurazione** su **tutte le configurazioni** e impostare l'elenco a discesa **piattaforma** su **tutte le piattaforme** .

1. Selezionare la pagina generale di **proprietà di configurazione**  >  **C/C++**  >  **General** .

1. Modificare la proprietà **supporto Common Language Runtime** . Scegliere **OK** per salvare le modifiche.

> [!NOTE]
> Nell'IDE di Visual Studio, l' **`/clr`** opzione del compilatore può essere impostata singolarmente nella pagina **proprietà di configurazione**  >  **C/C++**  >  **generale** della finestra di dialogo Pagine delle proprietà. Tuttavia, è consigliabile utilizzare un modello CLR per creare il progetto. Imposta tutte le proprietà necessarie per la corretta creazione di un componente CLR. Un altro modo per impostare queste proprietà consiste nell'utilizzare la proprietà **supporto Common Language Runtime** nella **Configuration Properties**  >  pagina **Avanzate** proprietà di configurazione della finestra di dialogo Pagine delle proprietà. Questa proprietà imposta tutte le altre opzioni dello strumento correlate a CLR in una sola volta.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAsManaged>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
