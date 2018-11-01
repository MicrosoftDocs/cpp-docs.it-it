---
title: /showIncludes (Elenca i file di inclusione)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLWCECompilerTool.ShowIncludes
- VC.Project.VCCLCompilerTool.ShowIncludes
- /showincludes
helpviewer_keywords:
- include files
- /showIncludes compiler option [C++]
- include files, displaying in compilation
- -showIncludes compiler option [C++]
- showIncludes compiler option [C++]
ms.assetid: 0b74b052-f594-45a6-a7c7-09e1a319547d
ms.openlocfilehash: 7be3d93f91133ad1a29e6b4d6d2c50157a3376b3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50523045"
---
# <a name="showincludes-list-include-files"></a>/showIncludes (Elenca i file di inclusione)

Indica al compilatore di generare un elenco dei file di inclusione. Annidate includono i file sono anche visualizzati (i file inclusi dai file incluse).

## <a name="syntax"></a>Sintassi

```
/showIncludes
```

## <a name="remarks"></a>Note

Quando viene rilevato un file di inclusione durante la compilazione, verrà generato un messaggio, ad esempio:

```
Note: including file: d:\MyDir\include\stdio.h
```

Annidate includono i file sono indicati da un rientro, uno spazio per ogni livello di annidamento, ad esempio:

```
Note: including file: d:\temp\1.h
Note: including file:  d:\temp\2.h
```

In questo caso `2.h` è stato incluso dall'interno `1.h`, di conseguenza il rientro.

Il **/showIncludes** l'opzione genera al `stderr`, non `stdout`.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **Mostra inclusioni** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ShowIncludes%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)