---
title: -c (compila senza collegamenti) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /c
dev_langs:
- C++
helpviewer_keywords:
- suppress link
- cl.exe compiler, compiling without linking
- -c compiler option [C++]
- c compiler option [C++]
- /c compiler option [C++]
ms.assetid: 8017fc3d-e5dd-4668-a1f7-3120daa95d20
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 86bd1ddcb6d44cfa433d4119f90eb02695089aa4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32370436"
---
# <a name="c-compile-without-linking"></a>/c (Compila senza collegamenti)
Impedisce la chiamata automatica al collegamento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/c  
```  
  
## <a name="remarks"></a>Note  
 La compilazione con **/c** crea solo file con estensione obj. È necessario chiamare collegamento in modo esplicito mediante le opzioni per eseguire la fase di collegamento della compilazione e i file appropriati.  
  
 Qualsiasi progetto interno creato nell'ambiente di sviluppo utilizza il **/c** opzione per impostazione predefinita.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
-   Questa opzione non è disponibile all'interno dell'ambiente di sviluppo.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Per impostare questa opzione del compilatore a livello di codice, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileOnly%2A>.  
  
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
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)