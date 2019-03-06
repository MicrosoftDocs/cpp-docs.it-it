---
title: /Fo (Nome file oggetto)
ms.date: 11/04/2016
f1_keywords:
- /Fo
- VC.Project.VCCLCompilerTool.ObjectFile
- VC.Project.VCCLWCECompilerTool.ObjectFile
helpviewer_keywords:
- Fo compiler option [C++]
- object files, naming
- /Fo compiler option [C++]
- -Fo compiler option [C++]
ms.assetid: 0e6d593e-4e7f-4990-9e6e-92e1dcbcf6e6
ms.openlocfilehash: bcb0f96eba277b65e3478843ca0e1666f9c404aa
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57418360"
---
# <a name="fo-object-file-name"></a>/Fo (Nome file oggetto)

Specifica un nome file oggetto (OBJ) o una directory da usare al posto dell'impostazione predefinita.

## <a name="syntax"></a>Sintassi

```
/Fopathname
```

## <a name="remarks"></a>Note

Se non si usa questa opzione, il file oggetto Usa il nome base del file di origine e l'estensione obj. È possibile usare qualsiasi nome ed estensione desiderati, ma la convenzione consigliata consiste nell'usare. obj.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **File di output** .

1. Modificare il **nome del File oggetto** proprietà.  Nell'ambiente di sviluppo, il file oggetto deve avere un'estensione della. obj.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ObjectFile%2A>.

## <a name="example"></a>Esempio

Riga di comando seguente crea un file oggetto denominato this. obj in una directory esistente, \OBJECT, nell'unità B.

```
CL /FoB:\OBJECT\ THIS.C
```

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](../../build/reference/output-file-f-options.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)
