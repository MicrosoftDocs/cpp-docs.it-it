---
title: -WL (Abilita diagnostica a riga singola) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /wl
dev_langs: C++
helpviewer_keywords:
- -WL compiler option [C++]
- /WL compiler option [C++]
- WL compiler option [C++]
ms.assetid: 332cadb4-8ea6-45fe-b67d-33ddec1f2c2e
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 48ba6ab05ac596c98c4fa5a95971735c62267a35
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="wl-enable-one-line-diagnostics"></a>/WL (Attiva le informazioni di diagnostica su una sola riga)
Aggiunge informazioni aggiuntive a un messaggio di errore o avviso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/WL  
```  
  
## <a name="remarks"></a>Note  
 Messaggi di errore e avviso dal compilatore C++ possono essere seguiti da informazioni aggiuntive che verrà visualizzata per impostazione predefinita, in una nuova riga. Quando esegue la compilazione dalla riga di comando, la riga di informazioni aggiuntiva può essere aggiunto per il messaggio di errore o avviso. Potrebbe risultare utile se si acquisisce l'output di compilazione in un file di log e quindi elabora tale log per trovare tutti gli errori e avvisi. Un punto e virgola separano il messaggio di errore o avviso dalla riga aggiuntiva.  
  
 Non tutti i messaggi di errore e avviso dispongono di una riga di informazioni aggiuntiva. Il codice seguente genererà un errore con una riga aggiuntiva delle informazioni. sarà possibile testare l'effetto quando si utilizza **/WL**.  
  
```  
// compiler_option_WL.cpp  
// compile with: /WL  
#include <queue>  
int main() {  
   std::queue<int> q;  
   q.fromthecontinuum();   // C2039  
}  
```  
  
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