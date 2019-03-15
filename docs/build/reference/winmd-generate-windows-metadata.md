---
title: /WINMD (generare metadati di Windows)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.GenerateWindowsMetadata
ms.assetid: bcfb4901-411e-4c9e-9f78-23028b6e5fcc
ms.openlocfilehash: 93db20d14d3477734e35d33111246f9459310b90
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57810367"
---
# <a name="winmd-generate-windows-metadata"></a>/WINMD (generare metadati di Windows)

Abilita la generazione di file di metadati di Windows Runtime (con estensione winmd).

> **/WINMD**\[**:**{**NO**\|**ONLY**}]

## <a name="arguments"></a>Argomenti

**/WINMD**<br/>
L'impostazione predefinita per le app della piattaforma Windows universale. Il linker genera sia il file eseguibile binario che il file di metadati con estensione winmd.

**/WINMD:NO**<br/>
Il linker genera solo il file eseguibile binario, ma non un file con estensione winmd.

**/ WINMD: SOLO**<br/>
Il linker genera solo il file con estensione winmd, ma non un file eseguibile binario.

## <a name="remarks"></a>Note

Il **/WINMD** l'opzione del linker viene utilizzato per le app UWP e di componenti Windows runtime per controllare la creazione di un file di metadati (con estensione winmd) di Windows Runtime. Un file con estensione winmd è un tipo di DLL che contiene i metadati per i tipi Windows runtime e, nel caso di componenti di runtime, le implementazioni di tali tipi. I metadati seguono il [ECMA-335](http://www.ecma-international.org/publications/standards/Ecma-335.htm) standard.

Per impostazione predefinita, il nome del file di output ha il formato *binaryname*. winmd. Per specificare un nome file diverso, usare il [/WINMDFILE](winmdfile-specify-winmd-file.md) opzione.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **metadati Windows** pagina delle proprietà.

1. Nel **genera metadati Windows** elenco a discesa, selezionare l'opzione desiderata.

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: Creazione di un componente semplice Windows Runtime e chiamata da JavaScript](/windows/uwp/winrt-components/walkthrough-creating-a-simple-windows-runtime-component-and-calling-it-from-javascript)<br/>
[Introduzione al linguaggio di definizione dell'interfaccia Microsoft 3.0](/uwp/midl-3/intro)<br/>
[/WINMDFILE (specifica il file winmd)](winmdfile-specify-winmd-file.md)<br/>
[/WINMDKEYFILE (specifica il file di chiave winmd)](winmdkeyfile-specify-winmd-key-file.md)<br/>
[/WINMDKEYCONTAINER (specifica il contenitore di chiavi)](winmdkeycontainer-specify-key-container.md)<br/>
[/WINMDDELAYSIGN (firma parzialmente un winmd)](winmddelaysign-partially-sign-a-winmd.md)<br/>
[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
