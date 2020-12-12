---
description: Ulteriori informazioni su:/VERSION (informazioni sulla versione)
title: /VERSION (Informazioni sulla versione)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.Version
- /version
helpviewer_keywords:
- -VERSION linker option
- Version Information linker option
- version numbers, specifying in .exe
- /VERSION linker option
- VERSION linker option
ms.assetid: b86d0e86-dca6-4316-aee2-d863ccb9f223
ms.openlocfilehash: 7c6a27e4829c4acf66db2887e01a147aceb1c5d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176366"
---
# <a name="version-version-information"></a>/VERSION (Informazioni sulla versione)

```
/VERSION:major[.minor]
```

## <a name="arguments"></a>Argomenti

*principale* e *minore*<br/>
Il numero di versione desiderato nell'intestazione del file con estensione exe o dll.

## <a name="remarks"></a>Commenti

L'opzione/VERSION indica al linker di inserire un numero di versione nell'intestazione del file con estensione exe o dll. Usare DUMPBIN [/headers](headers.md) per visualizzare il campo versione immagine dei valori di intestazione facoltativi per vedere l'effetto di/Version.

Gli argomenti *principale* e *secondario* sono numeri decimali nell'intervallo compreso tra 0 e 65.535. Il valore predefinito è la versione 0,0.

Le informazioni specificate con /VERSION non hanno alcun effetto sulle informazioni sulla versione indicate per un'applicazione quando se ne visualizzano le proprietà in Esplora file. Le informazioni sulla versione provengono da un file di risorse utilizzato per compilare l'applicazione. Per ulteriori informazioni, vedere [editor di informazioni sulla versione](../../windows/version-information-editor.md) .

Un altro modo per inserire un numero di versione è con l'istruzione [Version](version-c-cpp.md) Module-Definition.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **generale** .

1. Modificare la proprietà **Version** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Version%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
