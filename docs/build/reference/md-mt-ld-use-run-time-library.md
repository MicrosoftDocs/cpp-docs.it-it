---
title: /MD,-MT,-LD (usare la libreria di Runtime)
ms.date: 07/17/2019
f1_keywords:
- /ld
- /mt
- VC.Project.VCCLWCECompilerTool.RuntimeLibrary
- VC.Project.VCCLCompilerTool.RuntimeLibrary
- /md
- /ml
helpviewer_keywords:
- /MT compiler option [C++]
- -MD compiler option [C++]
- threading [C++], multithread compiler option
- MSVCRTD.lib
- MSVCRT.lib
- LIBCMT.lib
- MD compiler option [C++]
- /MD compiler option [C++]
- MT compiler option [C++]
- LD compiler option [C++]
- MDd compiler option [C++]
- -MDd compiler option [C++]
- LIBCD.lib
- -MTd compiler option [C++]
- MTd compiler option [C++]
- /MTd compiler option [C++]
- -LD compiler option [C++]
- /MDd compiler option [C++]
- multithread compiler option
- _STATIC_CPPLIB symbol
- LIBC.lib
- /LD compiler option [C++]
- DLLs [C++], compiler options
- LIBCMTD.lib
- -MT compiler option [C++]
ms.assetid: cf7ed652-dc3a-49b3-aab9-ad60e5395579
ms.openlocfilehash: a66677ebbef984e9a4c8190f184ca3a9126a7b83
ms.sourcegitcommit: d4da3693f83a24f840e320e35c24a4a07cae68e2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/18/2020
ms.locfileid: "83550758"
---
# <a name="md-mt-ld-use-run-time-library"></a>/MD, /MT, /LD (utilizzo della libreria di runtime)

Indica se un modulo con multithreading è una DLL e specifica versioni finali o di debug della libreria di runtime.

## <a name="syntax"></a>Sintassi

```
/MD[d]
/MT[d]
/LD[d]
```

## <a name="remarks"></a>Osservazioni

|Opzione|Description|
|------------|-----------------|
|**/MD**|Fa in modo che l'applicazione utilizzi la versione multithreading e DLL della libreria di runtime. Definisce `_MT` e `_DLL` e fa in modo che il compilatore inserisca il nome della libreria MSVCRT.lib nel file OBJ.<br /><br /> Le applicazioni compilate con questa opzione vengono collegate staticamente a MSVCRT.lib. Questa libreria fornisce un livello di codice che consente al linker di risolvere i riferimenti esterni. Il codice di lavoro effettivo è contenuto in MSVCR*VersionNumber*. DLL, che deve essere disponibile in fase di esecuzione per le applicazioni collegate a MSVCRT. lib.|
|**/MDd**|Definisce `_DEBUG`, `_MT` e `_DLL` e fa in modo che l'applicazione utilizzi la versione con multithreading e DLL della libreria di runtime. Fa inoltre in modo che il compilatore inserisca il nome della libreria MSVCRTD.lib nel file .obj.|
|**/MT**|Fa in modo che l'applicazione utilizzi la versione statica con multithreading della libreria di runtime. Definisce `_MT` e fa in modo che il compilatore inserisca il nome della libreria LIBCMT.lib nel file OBJ, in modo che il linker utilizzi LIBCMT.lib per risolvere i simboli esterni.|
|**/MTd**|Definisce `_DEBUG` e `_MT`. Fa inoltre in modo che il compilatore inserisca il nome della libreria LIBCMTD.lib nel file .obj affinché il linker utilizzi LIBCMTD.lib per risolvere i simboli esterni.|
|**/LD**|Crea una DLL.<br /><br /> Passa l'opzione **/dll** al linker. Il linker cerca, ma non richiede, una funzione `DllMain`. Se non si scrive una funzione `DllMain`, il linker inserisce una funzione `DllMain` che restituisce TRUE.<br /><br /> Collega il codice di avvio della DLL.<br /><br /> Crea una libreria di importazione (LIB) se sulla riga di comando non è stato specificato un file di esportazione (EXP). Collegare la libreria di importazione alle applicazioni che chiamano la DLL.<br /><br /> Interpreta [/Fe (nome file exe)](fe-name-exe-file.md) come denominazione di una dll anziché di un file exe. Per impostazione predefinita, il nome del programma diventa *baseName*. dll anziché *baseName*. exe.<br /><br /> Implica **/mt** a meno che non si specifichi in modo esplicito **/MD**.|
|**/LDd**|Crea una DLL di debug. Definisce `_MT` e `_DEBUG`.|

Per ulteriori informazioni sulle librerie di runtime C e sulle librerie utilizzate per la compilazione con [/CLR (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md), vedere la pagina relativa alle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

Tutti i moduli passati a una determinata chiamata del linker devono essere stati compilati con la stessa opzione del compilatore della libreria di runtime (**/MD**, **/mt**, **/LD**).

Per ulteriori informazioni sull'utilizzo delle versioni di debug delle librerie di runtime, vedere [riferimenti alla libreria di runtime C](../../c-runtime-library/c-run-time-library-reference.md).

Per altre informazioni sulle dll, vedere [creare DLL C/C++ in Visual Studio](../dlls-in-visual-cpp.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**delle  >  proprietà di generazione del codice**C/C++**  >  **Code Generation** .

1. Modificare la proprietà **libreria di runtime** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.RuntimeLibrary%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
