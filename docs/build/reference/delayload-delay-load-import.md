---
title: /DELAYLOAD (Importazione a caricamento ritardato)
ms.date: 11/04/2016
f1_keywords:
- /delayload
- VC.Project.VCLinkerTool.DelayLoadDLLS
helpviewer_keywords:
- DELAYLOAD linker option
- -DELAYLOAD linker option
- /DELAYLOAD linker option
- delayed loading of DLLs, /DELAYLOAD option
ms.assetid: 39ea0f1e-5c01-450f-9c75-2d9761ff9b28
ms.openlocfilehash: aa8cc5a565b4af625a1ee85f67ca1c82e065486b
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57416280"
---
# <a name="delayload-delay-load-import"></a>/DELAYLOAD (Importazione a caricamento ritardato)

> **/DELAYLOAD:**_dllname_

## <a name="parameters"></a>Parametri

*dllname*<br/>
Il nome di una DLL di cui si vuole ritardare il caricamento.

## <a name="remarks"></a>Note

L'opzione /DELAYLOAD fa sì che la DLL specificata da `dllname` venga caricata solo alla prima chiamata da parte del programma a una funzione nella DLL. Per altre informazioni, vedere [supporto per le DLL a caricamento ritardato nel Linker](../../build/reference/linker-support-for-delay-loaded-dlls.md). È possibile usare questa opzione tutte le volte necessarie per specificare tutte le DLL scelte. È necessario usare Delayimp.lib quando il programma viene collegato oppure implementare una funzione di supporto al caricamento ritardato.

Il [/Delay](../../build/reference/delay-delay-load-import-settings.md) opzione specifica l'associazione e il caricamento di opzioni per ogni DLL a caricamento ritardato.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Nel **Linker** cartella, selezionare la **Input** pagina delle proprietà.

1. Modificare il **DLL a caricamento ritardato** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
