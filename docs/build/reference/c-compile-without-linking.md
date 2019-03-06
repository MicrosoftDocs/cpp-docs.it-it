---
title: /c (Compila senza collegamenti)
ms.date: 11/04/2016
f1_keywords:
- /c
helpviewer_keywords:
- suppress link
- cl.exe compiler, compiling without linking
- -c compiler option [C++]
- c compiler option [C++]
- /c compiler option [C++]
ms.assetid: 8017fc3d-e5dd-4668-a1f7-3120daa95d20
ms.openlocfilehash: cdce86f9ba74b2541529d922c580d6393a93f775
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57416462"
---
# <a name="c-compile-without-linking"></a>/c (Compila senza collegamenti)

Impedisce la chiamata automatica al collegamento.

## <a name="syntax"></a>Sintassi

```
/c
```

## <a name="remarks"></a>Note

La compilazione con **/c** crea solo i file con estensione obj. COLLEGAMENTO è necessario chiamare in modo esplicito con il file appropriati e le opzioni per eseguire la fase di collegamento della compilazione.

Qualsiasi progetto interno creato nell'ambiente di sviluppo utilizza il **/c** opzione per impostazione predefinita.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

- Questa opzione non è disponibile all'interno dell'ambiente di sviluppo.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Per impostare questa opzione del compilatore a livello di codice, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileOnly%2A>.

## <a name="example"></a>Esempio

Riga di comando seguente crea i file oggetto riportata e Second. Third viene ignorato.

```
CL /c FIRST.C SECOND.C THIRD.OBJ
```

Per creare un file eseguibile, è necessario richiamare collegamento:

```
LINK firsti.obj second.obj third.obj /OUT:filename.exe
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
