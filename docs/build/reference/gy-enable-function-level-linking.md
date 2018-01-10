---
title: -Gy (Attiva collegamento a livello di funzione) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableFunctionLevelLinking
- /gy
- VC.Project.VCCLWCECompilerTool.EnableFunctionLevelLinking
dev_langs: C++
helpviewer_keywords:
- enable function-level linking compiler option [C++]
- COMDAT function
- Gy compiler option [C++]
- -Gy compiler option [C++]
- /Gy compiler option [C++]
- packaged functions
ms.assetid: 0d3cf14c-ed7d-4ad3-b4b6-104e56f61046
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ebe272b12a503a310319526f53f312a033a0ee26
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="gy-enable-function-level-linking"></a>/Gy (Attiva collegamento a livello di funzione)
Consente al compilatore di assemblare le singole funzioni sotto forma di funzioni incluse nel pacchetto (COMDAT).  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Gy[-]  
```  
  
## <a name="remarks"></a>Note  
 Il linker richiede che le funzioni essere compresso separatamente come COMDAT per escludere o ordinare singole funzioni in un file DLL o .exe.  
  
 È possibile utilizzare l'opzione del linker [/OPT (ottimizzazioni)](../../build/reference/opt-optimizations.md) per escludere le funzioni di package dal file .exe.  
  
 È possibile utilizzare l'opzione del linker [/ORDER (inserire funzioni in ordine)](../../build/reference/order-put-functions-in-order.md) per includere le funzioni di package nell'ordine specificato nel file .exe.  
  
 Funzioni inline sono sempre inclusi nel pacchetto se l'istanza viene creata come chiamate (che si verifica, ad esempio, se l'incorporamento è impostata su off o richiedere un indirizzo della funzione). Inoltre, le funzioni membro C++ definite nella dichiarazione di classe sono automaticamente inclusi nel pacchetto; altre funzioni non sono, e se si seleziona questa opzione è necessario per compilarli come funzioni incluse nel pacchetto.  
  
> [!NOTE]
>  Il [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md) opzione, utilizzata per la modifica e continuazione, imposta automaticamente il **/Gy** opzione.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **la generazione di codice** pagina delle proprietà.  
  
4.  Modificare il **Attiva collegamento a livello di funzione** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFunctionLevelLinking%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)