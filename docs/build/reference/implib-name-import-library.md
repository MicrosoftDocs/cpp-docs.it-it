---
description: Altre informazioni su:/IMPLIB (nome libreria di importazione)
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
ms.openlocfilehash: 2a5ea590368d1bc3abbecf38845e97a99a0d1f96
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191316"
---
# <a name="implib-name-import-library"></a>/IMPLIB (Assegna un nome alla libreria di importazione)

> /IMPLIB:*nomefile*

## <a name="parameters"></a>Parametri

*filename*<br/>
Nome specificato dall'utente per la libreria di importazione. Sostituisce il nome predefinito.

## <a name="remarks"></a>Commenti

L'opzione/IMPLIB sostituisce il nome predefinito della libreria di importazione creata dal collegamento durante la compilazione di un programma che contiene esportazioni. Il nome predefinito è formato dal nome di base del file di output principale e dall'estensione LIB. Un programma contiene esportazioni se vengono specificate una o più delle seguenti condizioni:

- Parola chiave [__declspec (dllexport)](../../cpp/dllexport-dllimport.md) nel codice sorgente

- [Esporta](exports.md) un'istruzione in un file con estensione def

- Una specifica [/Export](export-exports-a-function.md) in un comando di collegamento

Il collegamento Ignora/IMPLIB quando non viene creata una libreria di importazione. Se non viene specificata alcuna esportazione, il collegamento non crea una libreria di importazione. Se nella compilazione viene utilizzato un file di esportazione, il collegamento presuppone che esista già una libreria di importazione senza crearne una. Per informazioni sulle librerie di importazione e sull'esportazione di file, vedere Guida di [riferimento a lib](lib-reference.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Avanzate** .

1. Modificare la proprietà della **libreria di importazione** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ImportLibrary%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
