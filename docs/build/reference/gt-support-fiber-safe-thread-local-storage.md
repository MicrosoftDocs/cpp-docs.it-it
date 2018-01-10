---
title: -GT (archiviazione locale di Thread di supporto indipendente da Fiber) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.EnableFiberSafeOptimizations
- /gt
dev_langs: C++
helpviewer_keywords:
- /GT compiler option [C++]
- GT compiler option [C++]
- thread-local storage
- static thread-local storage and fiber safety
- -GT compiler option [C++]
- fiber-safe static thread-local storage compiler option [C++]
ms.assetid: 071fec79-c701-432b-9970-457344133159
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 86c027a1796f42d7b2932f68aff00136ee0d217f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="gt-support-fiber-safe-thread-local-storage"></a>/GT (Supporta archiviazione locale di thread indipendente da fiber)
Supporta l'indipendenza da fiber per i dati allocati mediante l'archiviazione locale di thread statici, vale a dire i dati allocati con `__declspec(thread)`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/GT  
```  
  
## <a name="remarks"></a>Note  
 Dati dichiarato con `__declspec(thread)` viene fatto riferimento tramite un array di archiviazione locale di thread (TLS). La matrice TLS è una matrice di indirizzi che il sistema mantiene per ogni thread. Ogni indirizzo in questa matrice fornisce la posizione dei dati di archiviazione locale di thread.  
  
 Un fiber è un oggetto semplice che include uno stack e un contesto di registro e possa essere pianificato nei diversi thread. Un fiber è possibile eseguire in qualsiasi thread. Poiché un fiber può essere scambiato e riavviato in un secondo momento su un thread diverso, l'indirizzo della matrice TLS non deve essere memorizzato nella cache o ottimizzato come sottoespressione comune in una chiamata di funzione (vedere il [/Og (ottimizzazioni globali)](../../build/reference/og-global-optimizations.md) opzione Dettagli). **/GT** impedisce che tali ottimizzazioni.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **ottimizzazione** pagina delle proprietà.  
  
4.  Modificare il **abilita ottimizzazioni fiber** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFiberSafeOptimizations%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)