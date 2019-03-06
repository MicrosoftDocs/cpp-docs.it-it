---
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
ms.openlocfilehash: 709ba836fb537fbcb594f7eb6aa2f2d43df5b4d1
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414707"
---
# <a name="version-version-information"></a>/VERSION (Informazioni sulla versione)

```
/VERSION:major[.minor]
```

## <a name="arguments"></a>Argomenti

*principali* e *secondaria*<br/>
Il numero di versione da nell'intestazione del file con estensione dll o .exe.

## <a name="remarks"></a>Note

L'opzione /VERSION indica al linker di inserire un numero di versione nell'intestazione del file con estensione dll o .exe. Usare DUMPBIN [/HEADERS](../../build/reference/headers.md) per visualizzare il campo della versione di immagine di OPTIONAL HEADER VALUES per visualizzare l'effetto di /Version.

Il *principali* e *secondaria* argomenti sono numeri decimali compresi tra 0 e 65.535. Il valore predefinito è la versione 0.0.

Le informazioni specificate con /VERSION non hanno alcun effetto sulle informazioni sulla versione indicate per un'applicazione quando se ne visualizzano le proprietà in Esplora file. Tali informazioni provengono da un file di risorse usato per compilare l'applicazione. Visualizzare [Editor di informazioni sulla versione](../../windows/version-information-editor.md) per altre informazioni.

È possibile inserire un numero di versione con il [versione](../../build/reference/version-c-cpp.md) istruzione di definizione moduli.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **generale** pagina delle proprietà.

1. Modificare il **versione** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Version%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
