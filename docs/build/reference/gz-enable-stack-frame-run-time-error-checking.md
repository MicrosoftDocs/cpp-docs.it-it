---
title: -GZ (abilitare Stack Frame controllo degli errori di Run-Time) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /gz
dev_langs:
- C++
helpviewer_keywords:
- -GZ compiler option [C++]
- release-build errors
- /GZ compiler option [C++]
- GZ compiler option [C++]
- debug builds, catch release-build errors
ms.assetid: b3efeeff-d5e3-4057-91c9-f6fc73d0270c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 31224fa3b2809cbc7b7f29868ad4c3e6a89954e0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32373553"
---
# <a name="gz-enable-stack-frame-run-time-error-checking"></a>/GZ (Attiva controllo errori in fase di esecuzione dello stack frame)
Esegue le stesse operazioni come la [/RTC (controlli errore di Run-Time)](../../build/reference/rtc-run-time-error-checks.md) opzione. Deprecato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/GZ  
```  
  
## <a name="remarks"></a>Note  
 **/GZ** è solo per l'utilizzo in un elemento PInvoke ([/Od (disabilita (Debug))](../../build/reference/od-disable-debug.md)) di compilazione.  
  
 **/GZ** è deprecato a partire da Visual Studio 2005; usare [/RTC (controlli di errore di Run-Time)](../../build/reference/rtc-run-time-error-checks.md) invece. Per un elenco di opzioni del compilatore obsolete, vedere **deprecate o rimosse le opzioni del compilatore** in [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)