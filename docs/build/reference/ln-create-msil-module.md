---
description: Altre informazioni su:/LN (Crea modulo MSIL)
title: /LN (Crea modulo MSIL)
ms.date: 11/04/2016
f1_keywords:
- /LN
helpviewer_keywords:
- -LN compiler option [C++]
- /LN compiler option [C++]
ms.assetid: 4f38f4f4-3176-4caf-8200-5c7585dc1ed3
ms.openlocfilehash: 63b6f47fe6bef24341d3c19a6ad96ac3808e486e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190919"
---
# <a name="ln-create-msil-module"></a>/LN (Crea modulo MSIL)

Specifica che un manifesto dell'assembly non deve essere inserito nel file di output.

## <a name="syntax"></a>Sintassi

```
/LN
```

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, **/LN** non è attivo (un manifesto dell'assembly viene inserito nel file di output).

Quando si usa **/LN** , è necessario usare anche una delle opzioni [/CLR (Common Language Runtime Compilation)](clr-common-language-runtime-compilation.md) .

Un programma gestito senza metadati dell'assembly nel manifesto è detto modulo. Se si esegue la compilazione con [/c (compila senza collegamento)](c-compile-without-linking.md) e **/LN**, specificare [/NOASSEMBLY (creare un modulo MSIL)](noassembly-create-a-msil-module.md) nella fase del linker per creare il file di output.

Si consiglia di creare moduli se si desidera adottare un approccio basato su componenti per la compilazione di assembly.  Ovvero è possibile creare tipi e compilarli in moduli.  Quindi, è possibile generare un assembly da uno o più moduli.  Per altre informazioni sulla creazione di assembly dai moduli, vedere [file con estensione netmodule come input del linker](netmodule-files-as-linker-input.md) o [Al.exe (assembly linker)](/dotnet/framework/tools/al-exe-assembly-linker).

L'estensione di file predefinita per un modulo è netmodule.

Nelle versioni precedenti a Visual Studio 2005, è stato creato un modulo con **/CLR: noAssembly**.

Il linker MSVC accetta i file con estensione netmodule come input e il file di output prodotto dal linker sarà un assembly o un file con estensione netmodule senza dipendenze in fase di esecuzione da nessuno dei file con estensione netmodule che sono stati inseriti nel linker.  Per altre informazioni, vedere [File con estensione netmodule come input del linker](netmodule-files-as-linker-input.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

- Specificare [/NOASSEMBLY (crea un modulo MSIL)](noassembly-create-a-msil-module.md) nella fase del linker per creare il file di output.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Questa opzione del compilatore non può essere modificata a livello di codice.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
