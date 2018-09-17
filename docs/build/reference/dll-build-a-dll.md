---
title: -DLL (compilare una DLL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /dll
dev_langs:
- C++
helpviewer_keywords:
- -DLL linker option
- /DLL linker option [C++]
- exporting DLLs [C++], specifying exports
- DLLs [C++], building
- DLL linker option [C++]
ms.assetid: c7685aec-31d0-490f-9503-fb5171a23609
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ec5beed66de3834759f35a5021d0155eab0a066e
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45716833"
---
# <a name="dll-build-a-dll"></a>/DLL (compilazione di una DLL)

```
/DLL
```

## <a name="remarks"></a>Note

L'opzione /DLL compila una DLL come file di output principale. Una DLL contiene in genere le esportazioni che possono essere usate da un altro programma. Esistono tre metodi per la specifica di esportazioni, elencate in ordine di preferenza di utilizzo:

1. [dllexport](../../cpp/dllexport-dllimport.md) nel codice sorgente

1. Un' [esportazioni](../../build/reference/exports.md) istruzione in un file def

1. Un' [/Export](../../build/reference/export-exports-a-function.md) specifica in un comando LINK

Un programma può utilizzare più di un metodo.

È possibile compilare una DLL con il **libreria** istruzione di definizione moduli. Le opzioni /DLL e /BASE insieme sono equivalenti per le **libreria** istruzione.

Non si specifica questa opzione interno dell'ambiente di sviluppo. Questa opzione è destinata solo nella riga di comando. Questa opzione viene impostata quando si crea un progetto di DLL con una creazione guidata applicazione.

Si noti che se si crea la libreria di importazione in un passaggio preliminare, prima di creare la DLL, è necessario passare lo stesso set di file oggetto quando si compila il file DLL, come è stato passato quando si compila la libreria di importazione.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **le proprietà di configurazione** cartella.

1. Scegliere il **generale** pagina delle proprietà.

1. Modificare il **tipo di configurazione** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCPropertySheet.ConfigurationType%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)