---
description: Altre informazioni su:/WINMD (genera metadati di Windows)
title: /WINMD (generare metadati di Windows)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.GenerateWindowsMetadata
ms.assetid: bcfb4901-411e-4c9e-9f78-23028b6e5fcc
ms.openlocfilehash: 7cf52a49716e6ec30a29c7e6a96fe7a078b4830c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259084"
---
# <a name="winmd-generate-windows-metadata"></a>/WINMD (generare metadati di Windows)

Abilita la generazione di file di metadati di Windows Runtime (con estensione winmd).

> **/WinMD** \[ **:**{**non** \| **solo**}]

## <a name="arguments"></a>Argomenti

**/WINMD**<br/>
Impostazione predefinita per le app piattaforma UWP (Universal Windows Platform). Il linker genera sia il file eseguibile binario che il file di metadati con estensione winmd.

**/WINMD:NO**<br/>
Il linker genera solo il file eseguibile binario, ma non un file con estensione winmd.

**/WINMD:ONLY**<br/>
Il linker genera solo il file con estensione winmd, ma non un file eseguibile binario.

## <a name="remarks"></a>Commenti

L'opzione del linker **/WinMD** viene usata per le app UWP e i componenti Windows Runtime per controllare la creazione di un file di metadati di Windows Runtime (WinMD). Un file con estensione WinMD è un tipo di DLL che contiene i metadati per i tipi di Windows Runtime e, nel caso di componenti di runtime, le implementazioni di tali tipi. I metadati seguono lo standard [ECMA-335](https://www.ecma-international.org/publications/standards/Ecma-335.htm) .

Per impostazione predefinita, il formato del nome del file di output è *binaryname*. winmd. Per specificare un nome file diverso, usare l'opzione [/WINMDFILE](winmdfile-specify-winmd-file.md) .

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle  >  proprietà **dei metadati di Windows** del linker proprietà di configurazione.

1. Nella casella di riepilogo a discesa **genera metadati Windows** selezionare l'opzione desiderata.

## <a name="see-also"></a>Vedi anche

[Procedura dettagliata: Creazione di un semplice componente Windows Runtime e chiamata del componente da JavaScript](/windows/uwp/winrt-components/walkthrough-creating-a-simple-windows-runtime-component-and-calling-it-from-javascript)<br/>
[Introduzione a Microsoft Interface Definition Language 3,0](/uwp/midl-3/intro)<br/>
[/WINMDFILE (specifica il file winmd)](winmdfile-specify-winmd-file.md)<br/>
[/WINMDKEYFILE (specifica il file di chiave winmd)](winmdkeyfile-specify-winmd-key-file.md)<br/>
[/WINMDKEYCONTAINER (specifica il contenitore di chiavi)](winmdkeycontainer-specify-key-container.md)<br/>
[/WINMDDELAYSIGN (firma parzialmente un winmd)](winmddelaysign-partially-sign-a-winmd.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
