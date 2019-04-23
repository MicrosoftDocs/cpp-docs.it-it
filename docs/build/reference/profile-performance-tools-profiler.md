---
title: /PROFILE (Profiler strumenti di prestazioni)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.Profile
helpviewer_keywords:
- -PROFILE linker option
- /PROFILE linker option
ms.assetid: e676baa1-5063-47a3-a357-ba0d1f0d1699
ms.openlocfilehash: 23cbccba9a8ec839252d553cc5cbafd37e66bbf9
ms.sourcegitcommit: 14b292596bc9b9b883a9c58cd3e366b282a1f7b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2019
ms.locfileid: "60124772"
---
# <a name="profile-performance-tools-profiler"></a>/PROFILE (Profiler strumenti di prestazioni)

Produce un file di output che può essere usato con il profiler di Strumenti per le prestazioni.

## <a name="syntax"></a>Sintassi

```
/PROFILE
```

## <a name="remarks"></a>Note

/ PROFILE implica le seguenti opzioni del linker:

- [/OPT:REF](opt-optimizations.md)

- /OPT:NOICF

- [/INCREMENTAL:NO](incremental-link-incrementally.md)

- [/FIXED:NO](fixed-fixed-base-address.md)

O il profilo indica al linker generare una sezione di rilocazione nell'immagine del programma.  Una sezione di rilocazione consente al profiler di trasformare l'immagine del programma per ottenere i dati del profilo.

**/ PROFILO** è solo disponibile solo nelle versioni Enterprise per team di sviluppo.  Per altre informazioni su PREfast, vedere [analisi del codice per C/C++ Panoramica](/visualstudio/code-quality/code-analysis-for-c-cpp-overview).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **avanzate** pagina delle proprietà.

1. Modificare il **profilo** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Profile%2A>.

### <a name="to-set-this-linker-option-within-visual-studio-cmake-project"></a>Per impostare l'opzione del linker all'interno di progetto CMake per Visual Studio

**CMake** progetto non dispone di un **pagine delle proprietà**, le opzioni del linker possono essere impostate da modifica il file cmakelists. txt.

1. Aprire il file cmakelists. txt nella directory radice del progetto.

1. Aggiungere il codice riportato di seguito. Per informazioni dettagliate, vedere [riferimenti di CMake](https://cmake.org/cmake/help/v3.0/command/set_target_properties.html)

1. Ricompilare la soluzione.

```
SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/PROFILE")
```

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

