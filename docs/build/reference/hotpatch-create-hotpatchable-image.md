---
description: Altre informazioni su:/hotpatch (Crea immagine Hotpatchable)
title: /hotpatch (Crea immagine con funzionalità di patch a caldo)
ms.date: 11/12/2018
f1_keywords:
- /hotpatch
- VC.Project.VCCLCompilerTool.CreateHotpatchableImage
helpviewer_keywords:
- hot patching
- -hotpatch compiler option [C++]
- /hotpatch compiler option [C++]
- hotpatching
ms.assetid: aad539b6-c053-4c78-8682-853d98327798
ms.openlocfilehash: 2fc5fe629afcb1e721943b852c6f92351900ab7e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199870"
---
# <a name="hotpatch-create-hotpatchable-image"></a>/hotpatch (Crea immagine con funzionalità di patch a caldo)

Prepara un'immagine per l'applicazione di una patch a caldo.

## <a name="syntax"></a>Sintassi

```
/hotpatch
```

## <a name="remarks"></a>Osservazioni

Quando **/hotpatch** viene usato in una compilazione, il compilatore garantisce che la prima istruzione di ogni funzione sia almeno di due byte, necessaria per l'applicazione di patch a caldo.

Per completare la preparazione per la creazione di un'immagine Hotpatchable, dopo aver usato **/hotpatch** per la compilazione, è necessario usare [/FUNCTIONPADMIN (Create Hotpatchable Image)](functionpadmin-create-hotpatchable-image.md) per il collegamento. Quando si compila e si collega un'immagine usando una chiamata di cl.exe, **/hotpatch** implica **/FUNCTIONPADMIN**.

Poiché le istruzioni sono sempre di due byte o maggiori nell'architettura ARM e perché la compilazione x64 viene sempre considerata come se fosse stato specificato **/hotpatch** , non è necessario specificare **/hotpatch** quando si esegue la compilazione per queste destinazioni. Tuttavia, è comunque necessario eseguire il collegamento usando **/FUNCTIONPADMIN** per creare immagini Hotpatchable. L'opzione del compilatore **/hotpatch** ha effetto solo sulla compilazione x86.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **C/C++** .

1. Selezionare la pagina delle proprietà **riga di comando** .

1. Aggiungere l'opzione del compilatore alla casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
