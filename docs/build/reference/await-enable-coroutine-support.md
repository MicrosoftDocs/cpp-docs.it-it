---
title: -await (abilitare il supporto coroutine) | Documenti Microsoft
ms.custom: ''
ms.date: 08/15/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /await
- -await
dev_langs:
- C++
helpviewer_keywords:
- /await enable coroutine support [C++]
- -await enable coroutine support [C++]
- await enable coroutine support [C++]
ms.assetid: 302c8e69-09b6-4c58-bcdd-0a6a8713a8df
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 78a62195ca28be49ed8c00dacacce003281699f9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32371031"
---
# <a name="await-enable-coroutine-support"></a>/ await (abilitare il supporto coroutine)  
  
Utilizzare il **/ await** l'opzione del compilatore per attivare il supporto del compilatore coroutine.  
  
## <a name="syntax"></a>Sintassi  
  
> / await  
  
## <a name="remarks"></a>Note  
  
Il **/ await** l'opzione del compilatore offre il supporto del compilatore coroutine C++ e le parole chiave **co_await**, **co_yield**, e **co_return**. Questa opzione è disattivata per impostazione predefinita. Per informazioni sul supporto per le coroutine in Visual Studio, vedere il [blog del Team di Visual Studio](https://blogs.msdn.microsoft.com/vcblog/category/coroutine/). Per ulteriori informazioni sulla proposta coroutine standard, vedere [N4628 Working Draft, specifiche tecniche per le estensioni di C++ per le coroutine](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/n4628.pdf).  

Il **/ await** opzione è disponibile a partire da Visual Studio 2015.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1. Aprire il progetto **pagine delle proprietà** la finestra di dialogo.   
  
2. In **le proprietà di configurazione**, espandere il **C/C++** cartella e scegliere il **riga di comando** pagina delle proprietà.  
  
3. Immettere il **/ await** opzione del compilatore nella **opzioni aggiuntive** casella. Scegliere **OK** o **applica** per salvare le modifiche.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
  
[Opzioni del compilatore](../../build/reference/compiler-options.md)   
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)