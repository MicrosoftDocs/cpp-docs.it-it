---
title: /LN (Crea modulo MSIL)
ms.date: 11/04/2016
f1_keywords:
- /LN
helpviewer_keywords:
- -LN compiler option [C++]
- /LN compiler option [C++]
ms.assetid: 4f38f4f4-3176-4caf-8200-5c7585dc1ed3
ms.openlocfilehash: 18b0e72d50f328afc1f2856f833cec1aa7d46f30
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62176216"
---
# <a name="ln-create-msil-module"></a>/LN (Crea modulo MSIL)

Specifica che un manifesto dell'assembly non deve essere inserito nel file di output.

## <a name="syntax"></a>Sintassi

```
/LN
```

## <a name="remarks"></a>Note

Per impostazione predefinita **/LN** non è attiva (un manifesto dell'assembly viene inserito nel file di output).

Quando **/LN** viene usato uno del [/clr (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md) devono essere utilizzate anche opzioni.

Un programma gestito non dispone di un assembly di metadati nel manifesto viene chiamato un modulo. Se esegue la compilazione con [/c (compila senza collegamenti)](c-compile-without-linking.md) e **/LN**, specificare [/NOASSEMBLY (Crea un modulo MSIL)](noassembly-create-a-msil-module.md) nella fase del linker per creare il file di output.

È possibile creare moduli, se si desidera adottare un approccio basato su componenti per la generazione di assembly.  Vale a dire, è possibile modificare i tipi e compilarle in moduli.  Quindi, è possibile generare un assembly da uno o più moduli.  Per altre informazioni sulla creazione di assembly da moduli, vedere [file con estensione netmodule come Input del Linker](netmodule-files-as-linker-input.md) oppure [Al.exe (Assembly Linker)](/dotnet/framework/tools/al-exe-assembly-linker).

L'estensione di file predefinita per un modulo è netmodule.

Nelle versioni di Visual C++ precedenti Visual C++ 2005, un modulo è stato creato con **/CLR: noAssembly**.

Il linker MSVC accetta file con estensione netmodule come input e il file di output generato dal linker sarà un assembly o file con estensione netmodule con alcuna dipendenza dalla fase di esecuzione in uno qualsiasi dei netmodule che sono stati introdotti nel linker.  Per altre informazioni, vedere [File con estensione netmodule come input del linker](netmodule-files-as-linker-input.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

- Specificare [/NOASSEMBLY (Crea un modulo MSIL)](noassembly-create-a-msil-module.md) nella fase del linker per creare il file di output.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Questa opzione del compilatore non può essere modificata a livello di codice.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
