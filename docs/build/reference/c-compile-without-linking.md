---
description: Ulteriori informazioni su:/c (compila senza collegamento)
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
ms.openlocfilehash: b9dd692dd99cddf63015fe26e37dc54841816f7f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179369"
---
# <a name="c-compile-without-linking"></a>/c (Compila senza collegamenti)

Impedisce la chiamata automatica al collegamento.

## <a name="syntax"></a>Sintassi

```
/c
```

## <a name="remarks"></a>Osservazioni

La compilazione con **/c** crea solo file con estensione obj. È necessario chiamare il collegamento in modo esplicito con i file e le opzioni appropriati per eseguire la fase di collegamento della compilazione.

Per impostazione predefinita, per tutti i progetti interni creati nell'ambiente di sviluppo viene utilizzata l'opzione **/c** .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

- Questa opzione non è disponibile nell'ambiente di sviluppo.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Per impostare questa opzione del compilatore a livello di codice, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileOnly%2A>.

## <a name="example"></a>Esempio

La riga di comando seguente crea prima i file oggetto. obj e SECOND. obj. TERZO. obj viene ignorato.

```
CL /c FIRST.C SECOND.C THIRD.OBJ
```

Per creare un file eseguibile, è necessario richiamare il collegamento:

```
LINK firsti.obj second.obj third.obj /OUT:filename.exe
```

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
