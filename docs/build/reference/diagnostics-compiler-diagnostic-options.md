---
title: -diagnostica (opzioni del compilatore diagnostica) | Documenti Microsoft
ms.custom: 
ms.date: 11/11/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /diagnostics
- VC.Project.VCCLCompilerTool.DiagnosticsFormat
dev_langs: C++
helpviewer_keywords:
- /diagnostics compiler diagnostic options [C++]
- -diagnostics compiler diagnostic options [C++]
- diagnostics compiler diagnostic options [C++]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
caps.latest.revision: "15"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 4034e875c2feb52f938edeb4b05383d954476a21
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="diagnostics-compiler-diagnostic-options"></a>/Diagnostics (opzioni del compilatore diagnostica)  
  
Utilizzare il **/diagnostics** dell'opzione del compilatore specificano la visualizzazione di informazioni sul percorso di errore e avviso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/diagnostics:{caret|classic|column}
```  

## <a name="remarks"></a>Note  
Il **/diagnostics** l'opzione del compilatore determina la visualizzazione di errori e avvisi.  
  
Il **/diagnostics:classic** è l'impostazione predefinita, che restituisce solo il numero di riga in cui è stato trovato il problema.  
  
Il **/diagnostics:column** opzione include anche la colonna in cui è stato trovato il problema. Ciò consente di identificare il costrutto di linguaggio specifico o il carattere che causa il problema.  
  
Il **/diagnostics:caret** opzione include la colonna in cui il problema è stato trovato e inserisce un accento circonflesso (^) nella posizione nella riga di codice in cui è stato rilevato il problema.  
  
Si noti che in alcuni casi, il compilatore non rileva un problema in cui si è verificato. Ad esempio, un punto e virgola mancante non può essere rilevato fino a quando non sono stati rilevati i simboli di altri e imprevisti. La colonna viene restituita e il cursore viene posizionato in cui il compilatore ha rilevato che un elemento è stato corretto, che non è sempre in cui è necessario apportare la correzione.  
  
Il **/diagnostics** opzione è disponibile a partire da Visual Studio 2017.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1. Aprire il progetto **pagine delle proprietà** la finestra di dialogo.   
  
2. In **le proprietà di configurazione**, espandere il **C/C++** cartella e scegliere il **generale** pagina delle proprietà.  
  
3. Utilizzare il controllo elenco a discesa di **formato diagnostica** campo per selezionare una diagnostica visualizzare l'opzione. Scegliere **OK** o **applica** per salvare le modifiche.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)