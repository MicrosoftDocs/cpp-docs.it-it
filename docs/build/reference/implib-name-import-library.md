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
ms.openlocfilehash: 268a091d3e0bc825acae96dafc5d92ffa11c7bc3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50589579"
---
# <a name="implib-name-import-library"></a>/IMPLIB (Assegna un nome alla libreria di importazione)

> /IMPLIB:*nomefile*

## <a name="parameters"></a>Parametri

*filename*<br/>
Un nome specificato dall'utente per la libreria di importazione. Sostituisce il nome predefinito.

## <a name="remarks"></a>Note

L'opzione /IMPLIB sostituisce il nome predefinito per la libreria di importazione che verrà creata quando compila un programma che contiene esportazioni. Il nome predefinito è costituito dal nome di base del file di output principale e l'estensione. lib. Un programma contiene esportazioni se vengono specificati uno o più delle seguenti operazioni:

- Il [dllexport](../../cpp/dllexport-dllimport.md) parola chiave nel codice sorgente

- [ESPORTAZIONI](../../build/reference/exports.md) istruzione in un file def

- Un' [/Export](../../build/reference/export-exports-a-function.md) specifica in un comando LINK

COLLEGAMENTO /IMPLIB viene ignorata quando non sia stata creata una libreria di importazione. Se viene specificata alcuna esportazione, non verrà creata una libreria di importazione. Se un file di esportazione viene usato nella compilazione, collegamento si presuppone che esista già una libreria di importazione e non crearne uno. Per informazioni sulle librerie di importazione e file di esportazione, vedere [riferimenti a LIB](../../build/reference/lib-reference.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **libreria di importazione** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ImportLibrary%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)