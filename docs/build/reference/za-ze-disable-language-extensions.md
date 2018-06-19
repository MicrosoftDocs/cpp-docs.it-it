---
title: -Za, - Ze (Disabilita estensioni linguaggio) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLWCECompilerTool.DisableLanguageExtensions
- /za
- /ze
- VC.Project.VCCLCompilerTool.DisableLanguageExtensions
dev_langs:
- C++
helpviewer_keywords:
- -Za compiler option [C++]
- Za compiler option [C++]
- language extensions, disabling in compiler
- -Ze compiler option [C++]
- language extensions
- enable language extensions
- /Za compiler option [C++]
- /Ze compiler option [C++]
- Disable Language Extensions compiler option
- Ze compiler option [C++]
ms.assetid: 65e49258-7161-4289-a176-7c5c0656b1a2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2949a3d60af6d9058f02d12aac1fd86dead5affa
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378145"
---
# <a name="za-ze-disable-language-extensions"></a>/Za, /Ze (Disabilita estensioni linguaggio)
Il **/Za** opzione del compilatore genera un errore per i costrutti di linguaggio che non sono compatibili con C89 ANSI o ISO C++ 11. Il **/Ze** opzione del compilatore, che è attivata per impostazione predefinita, attiva le estensioni Microsoft.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Za  
/Ze  
```  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Il **/Ze** opzione è deprecata poiché il comportamento è attivato per impostazione predefinita. Si consiglia di usare il [/Zc (conformità)](../../build/reference/zc-conformance.md) opzioni del compilatore per controllare le funzionalità di estensione di linguaggio specifico. Per un elenco di opzioni del compilatore obsolete, vedere il **deprecate o rimosse le opzioni del compilatore** sezione [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).  
  
 Il [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] compilatore offre una serie di funzionalità oltre a quelli specificati in standard ANSI C89, ISO C99 o ISO C++. Queste funzionalità sono note come estensioni Microsoft a C e C++. Queste estensioni sono disponibili per impostazione predefinita ma non quando il **/Za** opzione specificata. Per ulteriori informazioni sulle estensioni specifiche, vedere [Extensions Microsoft a C e C++](../../build/reference/microsoft-extensions-to-c-and-cpp.md).  
  
 Si consiglia di disabilitare le estensioni del linguaggio, specificando il **/Za** opzione se si prevede di portare il proprio programma in altri ambienti. Quando **/Za** è specificato, il compilatore considera Microsoft estesi parole chiave come identificatori semplici, disabilita le altre estensioni Microsoft e definisce automaticamente il `__STDC__` macro predefinita per i programmi C.  
  
 Le altre opzioni del compilatore utilizzate con **/Za** possono influire sulla modalità con cui il compilatore garantisce conformità agli standard. Ad esempio, **/Za** e [/fp (specifica il comportamento a virgola mobile)](../../build/reference/fp-specify-floating-point-behavior.md) potrebbero causare comportamenti di promozione tipo a virgola mobile che non è conforme a ISO C99 o C++ 11 standard.  
  
 Per individuare i modi specificare le impostazioni del comportamento specifico conformi agli standard, vedere il [/Zc](../../build/reference/zc-conformance.md) l'opzione del compilatore.  
  
 Per ulteriori informazioni sui problemi di conformità con [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)], vedere [comportamento non standard](../../cpp/nonstandard-behavior.md).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel riquadro di spostamento, scegliere **le proprietà di configurazione**, **C/C++**, **Language**.  
  
3.  Modificare il **Disabilita estensioni linguaggio** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableLanguageExtensions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [/Zc (conformità)](../../build/reference/zc-conformance.md)