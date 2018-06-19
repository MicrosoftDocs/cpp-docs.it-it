---
title: -Qimprecise_fwaits (rimozione di fwait nei blocchi Try) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Qimprecise_fwaits
dev_langs:
- C++
helpviewer_keywords:
- -Qimprecise_fwaits compiler option (C++)
- /Qimprecise_fwaits compiler option (C++)
ms.assetid: b1501f21-7e08-4fea-95e8-176ec03a635b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a688f4b9f8f3c9302bb6a49e4b0a94a0e0931b33
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378054"
---
# <a name="qimprecisefwaits-remove-fwaits-inside-try-blocks"></a>/Qimprecise_fwaits (rimuovere comandi fwait all'interno dei blocchi try)
Rimuove il `fwait` comandi all'interno dei `try` blocca quando si utilizza il [/fp: tranne](../../build/reference/fp-specify-floating-point-behavior.md) l'opzione del compilatore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Qimprecise_fwaits  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione non ha alcun effetto se **/fp: tranne** inoltre non è specificato. Se si specifica il **/fp: tranne** opzione, il compilatore inserirà un `fwait` comando per ogni riga di codice in un `try` blocco. In questo modo, il compilatore può identificare la riga di codice che genera un'eccezione specifica. **/Qimprecise_fwaits** rimuove interne `fwait` le istruzioni, lasciando solo le attese intorno il `try` blocco. Ciò migliora le prestazioni, ma il compilatore sarà solo possibile affermare che `try` blocco genera un'eccezione, non la riga.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni /Q (operazioni di basso livello)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)