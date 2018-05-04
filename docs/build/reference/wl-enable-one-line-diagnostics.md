---
title: -WL (Abilita diagnostica a riga singola) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /wl
dev_langs:
- C++
helpviewer_keywords:
- -WL compiler option [C++]
- /WL compiler option [C++]
- WL compiler option [C++]
ms.assetid: 332cadb4-8ea6-45fe-b67d-33ddec1f2c2e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 58a6b41e66f7ec37ad02747edb8331049b9baef5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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