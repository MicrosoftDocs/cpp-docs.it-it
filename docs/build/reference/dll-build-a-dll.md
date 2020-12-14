---
description: Altre informazioni su:/DLL (compila una DLL)
title: /DLL (compilazione di una DLL)
ms.date: 11/04/2016
f1_keywords:
- /dll
helpviewer_keywords:
- -DLL linker option
- /DLL linker option [C++]
- exporting DLLs [C++], specifying exports
- DLLs [C++], building
- DLL linker option [C++]
ms.assetid: c7685aec-31d0-490f-9503-fb5171a23609
ms.openlocfilehash: 42535fb15762e5c0f1691d5c28029c7368005f87
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201404"
---
# <a name="dll-build-a-dll"></a>/DLL (compilazione di una DLL)

```
/DLL
```

## <a name="remarks"></a>Commenti

L'opzione/DLL compila una DLL come file di output principale. Una DLL contiene in genere le esportazioni che possono essere usate da un altro programma. Sono disponibili tre metodi per specificare le esportazioni, elencate nell'ordine di utilizzo consigliato:

1. [__declspec (dllexport)](../../cpp/dllexport-dllimport.md) nel codice sorgente

1. Un'istruzione [exports](exports.md) in un file con estensione def

1. Una specifica [/Export](export-exports-a-function.md) in un comando di collegamento

Un programma può utilizzare più di un metodo.

Un altro modo per compilare una DLL è con l'istruzione Module-Definition della **libreria** . Le opzioni/BASE e/DLL insieme sono equivalenti all'istruzione **Library** .

Non specificare questa opzione all'interno dell'ambiente di sviluppo; Questa opzione è utilizzabile solo nella riga di comando. Questa opzione viene impostata quando si crea un progetto DLL con una creazione guidata applicazione.

Si noti che se si crea la libreria di importazione in un passaggio preliminare, prima di creare il file con estensione dll, è necessario passare lo stesso set di file oggetto quando si compila la libreria di importazione.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **proprietà di configurazione** .

1. Fare clic sulla pagina delle proprietà **generale** .

1. Modificare la proprietà **tipo di configurazione** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCPropertySheet.ConfigurationType%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
