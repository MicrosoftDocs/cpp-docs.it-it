---
title: /IMPLIB (Assegna un nome alla libreria di importazione)
ms.date: 11/04/2016
f1_keywords:
- /implib
- VC.Project.VCLinkerTool.ImportLIbrary
helpviewer_keywords:
- IMPLIB linker option
- /IMPLIB linker option
- -IMPLIB linker option
- import libraries, overriding default name
ms.assetid: fe8f71ab-7055-41b5-8ef8-2b97cfa4a432
ms.openlocfilehash: dc9a9220d55f7831a00f70ec155cc5b57a695818
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62269986"
---
# <a name="implib-name-import-library"></a>/IMPLIB (Assegna un nome alla libreria di importazione)

> /IMPLIB:*filename*

## <a name="parameters"></a>Parametri

*filename*<br/>
Un nome specificato dall'utente per la libreria di importazione. Sostituisce il nome predefinito.

## <a name="remarks"></a>Note

L'opzione /IMPLIB sostituisce il nome predefinito per la libreria di importazione che verrà creata quando compila un programma che contiene esportazioni. Il nome predefinito è costituito dal nome di base del file di output principale e l'estensione. lib. Un programma contiene esportazioni se vengono specificati uno o più delle seguenti operazioni:

- Il [dllexport](../../cpp/dllexport-dllimport.md) parola chiave nel codice sorgente

- [ESPORTAZIONI](exports.md) istruzione in un file def

- Un' [/Export](export-exports-a-function.md) specifica in un comando LINK

COLLEGAMENTO /IMPLIB viene ignorata quando non sia stata creata una libreria di importazione. Se viene specificata alcuna esportazione, non verrà creata una libreria di importazione. Se un file di esportazione viene usato nella compilazione, collegamento si presuppone che esista già una libreria di importazione e non crearne uno. Per informazioni sulle librerie di importazione e file di esportazione, vedere [riferimenti a LIB](lib-reference.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **libreria di importazione** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ImportLibrary%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
