---
title: / MD, -MT, -LD (utilizzo della libreria Run-Time)
ms.date: 11/04/2016
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
ms.openlocfilehash: 59b0483d76a2a98c1f278a323a827b243d21adea
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62321293"
---
# <a name="md-mt-ld-use-run-time-library"></a>/MD, /MT, /LD (utilizzo della libreria di runtime)

Indica se un modulo con multithreading è una DLL e specifica versioni finali o di debug della libreria di runtime.

## <a name="syntax"></a>Sintassi

```
/MD[d]
/MT[d]
/LD[d]
```

## <a name="remarks"></a>Note

|Opzione|Descrizione|
|------------|-----------------|
|**/MD**|Fa in modo che l'applicazione utilizzi la versione multithreading e DLL della libreria di runtime. Definisce `_MT` e `_DLL` e fa in modo che il compilatore inserisca il nome della libreria MSVCRT.lib nel file OBJ.<br /><br /> Le applicazioni compilate con questa opzione vengono collegate staticamente a MSVCRT.lib. Questa libreria fornisce un livello di codice che consente al linker di risolvere i riferimenti esterni. Il codice effettivo è contenuto nel file MSVCR*versionnumber*. DLL, che deve essere disponibile in fase di esecuzione per le applicazioni collegate a MSVCRT. lib.|
|**/MDd**|Definisce `_DEBUG`, `_MT` e `_DLL` e fa in modo che l'applicazione utilizzi la versione con multithreading e DLL della libreria di runtime. Fa inoltre in modo che il compilatore inserisca il nome della libreria MSVCRTD.lib nel file .obj.|
|**/MT**|Fa in modo che l'applicazione utilizzi la versione statica con multithreading della libreria di runtime. Definisce `_MT` e fa in modo che il compilatore inserisca il nome della libreria LIBCMT.lib nel file OBJ, in modo che il linker utilizzi LIBCMT.lib per risolvere i simboli esterni.|
|**/MTd**|Definisce `_DEBUG` e `_MT`. Fa inoltre in modo che il compilatore inserisca il nome della libreria LIBCMTD.lib nel file .obj affinché il linker utilizzi LIBCMTD.lib per risolvere i simboli esterni.|
|**/LD**|Crea una DLL.<br /><br /> Passa il **/DLL** opzione al linker. Il linker cerca, ma non richiede, una funzione `DllMain`. Se non si scrive una funzione `DllMain`, il linker inserisce una funzione `DllMain` che restituisce TRUE.<br /><br /> Collega il codice di avvio della DLL.<br /><br /> Crea una libreria di importazione (LIB) se sulla riga di comando non è stato specificato un file di esportazione (EXP). Collegare la libreria di importazione alle applicazioni che chiamano la DLL.<br /><br /> Interpreta [/Fe (specifica file EXE File)](fe-name-exe-file.md) come una DLL anziché un file .exe di denominazione. Per impostazione predefinita, il nome del programma diventa *basename*DLL anziché *basename*.exe.<br /><br /> Implica **/MT** a meno che non si specifica esplicitamente **/MD**.|
|**/LDd**|Crea una DLL di debug. Definisce `_MT` e `_DEBUG`.|

Per altre informazioni sulle librerie di runtime C e le librerie a cui vengono utilizzate durante la compilazione con [/clr (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md), vedere [funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).

Tutti i moduli passati a una determinata chiamata del linker sono stati compilati con la stessa opzione del compilatore libreria run-time (**/MD**, **/MT**, **/LD**).

Per altre informazioni su come usare le versioni di debug delle librerie di runtime, vedere [C Run-Time Library Reference](../../c-runtime-library/c-run-time-library-reference.md).

Per altre informazioni sulle DLL, vedere [DLL in Visual C++](../dlls-in-visual-cpp.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere la **C/C++** cartella.

1. Selezionare il **generazione di codice** pagina delle proprietà.

1. Modificare il **libreria di Runtime** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.RuntimeLibrary%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
