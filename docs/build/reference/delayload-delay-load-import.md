---
description: Altre informazioni su:/DELAYLOAD (importazione a caricamento ritardato)
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
ms.openlocfilehash: 9f6a91a102b66a16896d51b960d44273a7935d79
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201495"
---
# <a name="delayload-delay-load-import"></a>/DELAYLOAD (Importazione a caricamento ritardato)

> **/DELAYLOAD:**_dllname_

## <a name="parameters"></a>Parametri

*DllName*<br/>
Il nome di una DLL di cui si vuole ritardare il caricamento.

## <a name="remarks"></a>Commenti

L'opzione /DELAYLOAD fa sì che la DLL specificata da `dllname` venga caricata solo alla prima chiamata da parte del programma a una funzione nella DLL. Per ulteriori informazioni, vedere [supporto del linker per le dll Delay-Loaded](linker-support-for-delay-loaded-dlls.md). È possibile usare questa opzione tutte le volte necessarie per specificare tutte le DLL scelte. È necessario usare Delayimp.lib quando il programma viene collegato oppure implementare una funzione di supporto al caricamento ritardato.

L'opzione [/delay](delay-delay-load-import-settings.md) specifica le opzioni di binding e caricamento per ogni DLL a caricamento ritardato.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Nella cartella **linker** selezionare la pagina delle proprietà **input** .

1. Modificare la proprietà **dll a caricamento ritardato** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
