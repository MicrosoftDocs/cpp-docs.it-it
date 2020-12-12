---
description: Altre informazioni su:/GM (Abilita ricompilazione minima)
title: /Gm (Attiva ricompilazione minima)
ms.date: 11/12/2018
f1_keywords:
- VC.Project.VCCLCompilerTool.MinimalRebuild
- /Gm
- VC.Project.VCCLWCECompilerTool.MinimalRebuild
helpviewer_keywords:
- /Gm compiler option [C++]
- minimal rebuild
- enable minimal rebuild compiler option [C++]
- Gm compiler option [C++]
- -Gm compiler option [C++]
ms.assetid: d8869ce0-d2ea-40eb-8dae-6d2cdb61dd59
ms.openlocfilehash: 2e0035f4fc50f16ce1c381dd707a2411b29bdb6c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191888"
---
# <a name="gm-enable-minimal-rebuild"></a>/Gm (Attiva ricompilazione minima)

Deprecato. Abilita la ricompilazione minima, che determina se è necessario ricompilare i file di origine C++ che includono modifiche alle definizioni delle classi C++ archiviate nei file di intestazione con estensione h.

## <a name="syntax"></a>Sintassi

```
/Gm
```

## <a name="remarks"></a>Osservazioni

**/GM** è deprecato. Potrebbe non attivare una compilazione per determinati tipi di modifiche del file di intestazione. Questa opzione può essere rimossa in modo sicuro dai progetti. Per migliorare i tempi di compilazione, si consiglia di usare le intestazioni precompilate e le opzioni di compilazione incrementali e parallele. Per un elenco delle opzioni del compilatore deprecate, vedere la sezione Opzioni del compilatore **deprecate e rimosse** in [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

Il compilatore archivia le informazioni sulla dipendenza tra i file di origine e le definizioni delle classi nel file con estensione idb del progetto durante la prima compilazione. Le informazioni sulla dipendenza indicano quale file di origine è dipendente da una determinata definizione di classe e in quale file con estensione h si trova la definizione. Nelle compilazioni successive le informazioni archiviate nel file con estensione idb vengono usate per stabilire se occorre compilare un file di origine, anche se include un file con estensione h modificato.

> [!NOTE]
> La ricompilazione minima richiede che le definizioni delle classi non vengano modificate nei file di inclusione. Le definizioni delle classi devono essere globali per un progetto (dovrebbe esistere una sola definizione di una determinata classe) perché le informazioni sulla dipendenza nel file con estensione idb vengono create per l'intero progetto. Se esiste più di una definizione per una classe nel progetto, disabilitare la ricompilazione minima.

Poiché il linker incrementale non supporta i metadati di Windows inclusi nei file con estensione obj utilizzando l'opzione [/ZW (compilazione Windows Runtime)](zw-windows-runtime-compilation.md) , l'opzione **/GM** non è compatibile con **/ZW**.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** delle  >  proprietà di generazione del codice **C/C++**  >   .

1. Modificare la proprietà **Abilita ricompilazione minima** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.MinimalRebuild%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
