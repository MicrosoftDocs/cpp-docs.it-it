---
title: -LN (Crea modulo MSIL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /LN
dev_langs:
- C++
helpviewer_keywords:
- -LN compiler option [C++]
- /LN compiler option [C++]
ms.assetid: 4f38f4f4-3176-4caf-8200-5c7585dc1ed3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1ca6d1933b684cc574bc4e0107b9f3f30364c908
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42609462"
---
# <a name="ln-create-msil-module"></a>/LN (Crea modulo MSIL)
Specifica che un manifesto dell'assembly non deve essere inserito nel file di output.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/LN  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita **/LN** non è attiva (un manifesto dell'assembly viene inserito nel file di output).  
  
 Quando **/LN** viene usato uno del [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) devono essere utilizzate anche opzioni.  
  
 Un programma gestito non dispone di un assembly di metadati nel manifesto viene chiamato un modulo. Se esegue la compilazione con [/c (compila senza collegamenti)](../../build/reference/c-compile-without-linking.md) e **/LN**, specificare [/NOASSEMBLY (Crea un modulo MSIL)](../../build/reference/noassembly-create-a-msil-module.md) nella fase del linker per creare il file di output.  
  
 È possibile creare moduli, se si desidera adottare un approccio basato su componenti per la generazione di assembly.  Vale a dire, è possibile modificare i tipi e compilarle in moduli.  Quindi, è possibile generare un assembly da uno o più moduli.  Per altre informazioni sulla creazione di assembly da moduli, vedere [file con estensione netmodule come Input del Linker](../../build/reference/netmodule-files-as-linker-input.md) oppure [Al.exe (Assembly Linker)](/dotnet/framework/tools/al-exe-assembly-linker).  
  
 L'estensione di file predefinita per un modulo è netmodule.  
  
 Nelle versioni di Visual C++ precedenti Visual C++ 2005, un modulo è stato creato con **/CLR: noAssembly**.  
  
 Il linker di Visual C++ accetta i file con estensione netmodule come input e il file di output generato dal linker sarà un assembly o un file netmodule senza dipendenza di runtime dai file netmodule che sono stati introdotti nel linker.  Per altre informazioni, vedere [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
-   Specificare [/NOASSEMBLY (Crea un modulo MSIL)](../../build/reference/noassembly-create-a-msil-module.md) nella fase del linker per creare il file di output.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Questa opzione del compilatore non può essere modificata a livello di codice.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)