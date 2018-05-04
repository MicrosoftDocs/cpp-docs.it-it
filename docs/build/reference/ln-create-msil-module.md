---
title: -LN (Crea modulo MSIL) | Documenti Microsoft
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
ms.openlocfilehash: 918b3857c2e6f26a7f2e11614a00049e9b615ea8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ln-create-msil-module"></a>/LN (Crea modulo MSIL)
Specifica che un manifesto dell'assembly non deve essere inserito nel file di output.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/LN  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, **/LN** non è attiva (un manifesto dell'assembly viene inserito nel file di output).  
  
 Quando **/LN** viene utilizzato uno del [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) devono essere utilizzate anche le opzioni.  
  
 Un programma gestito che non dispone di metadati dell'assembly nel manifesto viene chiamato un modulo. Se si compila con [/c (compila senza collegamenti)](../../build/reference/c-compile-without-linking.md) e **/LN**, specificare [/NOASSEMBLY (Crea un modulo MSIL)](../../build/reference/noassembly-create-a-msil-module.md) nella fase del linker per creare il file di output.  
  
 È consigliabile creare moduli, se si desidera adottare un approccio basato su componenti per la generazione di assembly.  Ovvero, è possibile modificare i tipi e compilarle in moduli.  Quindi, è possibile generare un assembly da uno o più moduli.  Per ulteriori informazioni sulla creazione di assembly da moduli, vedere [file con estensione netmodule come Input del Linker](../../build/reference/netmodule-files-as-linker-input.md) o [Al.exe (Assembly Linker)](/dotnet/framework/tools/al-exe-assembly-linker).  
  
 L'estensione di file predefinita per un modulo è netmodule.  
  
 In [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] versioni precedenti di Visual C++ 2005, un modulo è stato creato con **/CLR: noAssembly**.  
  
 Il linker di Visual C++ accetta i file con estensione netmodule come input e il file di output generato dal linker sarà un assembly o un file netmodule senza dipendenza di runtime dai file netmodule che sono stati introdotti nel linker.  Per altre informazioni, vedere [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
-   Specificare [/NOASSEMBLY (Crea un modulo MSIL)](../../build/reference/noassembly-create-a-msil-module.md) nella fase del linker per creare il file di output.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Impossibile modificare l'opzione del compilatore a livello di codice.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)