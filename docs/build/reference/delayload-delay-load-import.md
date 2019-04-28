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
ms.openlocfilehash: e92b470b7b5e76b39371f333cbbda150e7f6e8c7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62273358"
---
# <a name="delayload-delay-load-import"></a>/DELAYLOAD (Importazione a caricamento ritardato)

> **/DELAYLOAD:**_dllname_

## <a name="parameters"></a>Parametri

*dllname*<br/>
Il nome di una DLL di cui si vuole ritardare il caricamento.

## <a name="remarks"></a>Note

L'opzione /DELAYLOAD fa sì che la DLL specificata da `dllname` venga caricata solo alla prima chiamata da parte del programma a una funzione nella DLL. Per altre informazioni, vedere [supporto per le DLL a caricamento ritardato nel Linker](linker-support-for-delay-loaded-dlls.md). È possibile usare questa opzione tutte le volte necessarie per specificare tutte le DLL scelte. È necessario usare Delayimp.lib quando il programma viene collegato oppure implementare una funzione di supporto al caricamento ritardato.

Il [/Delay](delay-delay-load-import-settings.md) opzione specifica l'associazione e il caricamento di opzioni per ogni DLL a caricamento ritardato.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Nel **Linker** cartella, selezionare la **Input** pagina delle proprietà.

1. Modificare il **DLL a caricamento ritardato** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
