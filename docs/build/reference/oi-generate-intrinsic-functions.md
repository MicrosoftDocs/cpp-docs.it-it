---
title: -Oi (genera funzioni intrinseche) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableIntrinsicFunctions
- /oi
- VC.Project.VCCLWCECompilerTool.EnableIntrinsicFunctions
dev_langs: C++
helpviewer_keywords:
- Oi compiler option [C++]
- intrinsic functions, generate
- /Oi compiler option [C++]
- -Oi compiler option [C++]
- generate intrinsic functions compiler option [C++]
ms.assetid: fa4a3bf6-0ed8-481b-91c0-add7636132b4
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d0a24830dbc67466e52f3f3c488dda7ac5b4778d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="oi-generate-intrinsic-functions"></a>/Oi (Genera funzioni intrinseche)
Sostituisce alcune chiamate di funzione con intrinseci o speciali form della funzione che consentono l'applicazione è stato eseguito più velocemente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Oi[-]  
```  
  
## <a name="remarks"></a>Note  
 I programmi che utilizzano le funzioni intrinseche sono più veloce perché non hanno il sovraccarico delle chiamate di funzione, ma potrebbero essere più grandi a causa del codice aggiuntivo creato.  
  
 Vedere [intrinseco](../../preprocessor/intrinsic.md) per ulteriori informazioni, in cui le funzioni hanno formati intrinseci.  
  
 **/Oi** è solo una richiesta di sostituire alcune chiamate di funzione con gli intrinseci; il compilatore può chiamare la funzione (e non sostituire la chiamata di funzione con una funzione intrinseca) se si ottengono prestazioni migliori.  
  
 **x86 specifico**  
  
 Le funzioni a virgola mobile intrinseche non esegue alcun controllo su valori di input speciali e pertanto funzionano in intervalli di input limitati e hanno condizioni limite le routine di libreria con lo stesso nome e la gestione delle eccezioni diverse. Utilizzo di formati intrinseci reali implica la perdita di gestione delle eccezioni IEEE e di `_matherr` e `errno` funzionalità; quest'ultimo comporta la perdita della conformità ANSI. Tuttavia, intrinseci possono velocizzare notevolmente la programmi complessi di virgola mobile e per molte applicazioni, i problemi di conformità sono di scarso valore pratico.  
  
 È possibile utilizzare il [Za](../../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore per eseguire l'override di generazione delle opzioni a virgola mobile intrinseche true. In tal caso le funzioni vengono generate come routine della libreria che passano gli argomenti direttamente al chip a virgola mobile anziché inserirli nello stack del programma.  
  
 **FINE x86 specifico**  
  
 È inoltre possibile utilizzare [intrinseco](../../preprocessor/intrinsic.md) per creare funzioni intrinseche o [funzione (C/C++)](../../preprocessor/function-c-cpp.md) per forzare in modo esplicito una chiamata di funzione.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **ottimizzazione** pagina delle proprietà.  
  
4.  Modificare il **attiva funzioni intrinseche** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableIntrinsicFunctions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni /O (Ottimizza codice)](../../build/reference/o-options-optimize-code.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Intrinseci del compilatore](../../intrinsics/compiler-intrinsics.md)