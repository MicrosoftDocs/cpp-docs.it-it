---
title: -GUARD (Abilita i controlli) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 72758e23-70ac-4616-94d7-d767477406d1
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 48abdc4f923ed01ecba482b82da897d06fd56dcd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="guard-enable-guard-checks"></a>/GUARD (abilita i controlli di protezione)
Specifica il supporto per i controlli di Guard flusso di controllo nell'immagine eseguibile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/GUARD:{CF|NO}  
```  
  
## <a name="remarks"></a>Note  
 Quando si specifica /GUARD:CF, il linker modifica l'intestazione di un file DLL o EXE in modo che indichi il supporto per i controlli di runtime di Guard flusso di controllo. Anche il linker aggiunge all'intestazione i dati dell'indirizzo di destinazione del flusso di controllo richiesti. Per impostazione predefinita, /GUARD:CF è disabilitato. Può essere disabilitato in modo esplicito con /GUARD:NO. Per essere efficace, /Guard: CF richiede anche il [/DYNAMICBASE (utilizzo funzionalità address space layout randomization)](../../build/reference/dynamicbase-use-address-space-layout-randomization.md) opzione del linker, che è attivata per impostazione predefinita.  
  
 Quando il codice sorgente viene compilato utilizzando il [/Guard: CF](../../build/reference/guard-enable-control-flow-guard.md) opzione, il compilatore analizza il flusso di controllo esaminando tutte le chiamate indirette per gli indirizzi di destinazione possibile. Il compilatore inserisce codice per verificare che l'indirizzo di destinazione di un'istruzione di chiamata indiretta sia incluso nell'elenco degli indirizzi di destinazione noti in fase di esecuzione. Con i sistemi operativi che supportano Guard flusso di controllo un programma che non supera il controllo di runtime di questa funzionalità viene arrestato. In questo modo l'autore di un attacco può meno facilmente eseguire codice dannoso sfruttando dati danneggiati per modificare una destinazione di chiamata.  
  
 Per creare immagini di eseguibili abilitati per Guard flusso di controllo, l'opzione /GUARD:CF deve essere specificata sia nel compilatore che nel linker. Al codice compilato ma non collegato con /GUARD:CF è associato un certo costo per i controlli di runtime. In questa situazione, inoltre, la protezione di Guard flusso di controllo non viene abilitata. Quando l'opzione /Guard: CF è specificato per il `cl` comando per compilare e collegare in un unico passaggio, il compilatore passa il flag al linker. Quando il **Guard flusso di controllo** è impostata in Visual Studio, l'opzione /Guard: CF viene passata per il compilatore e del linker. Quando l'oggetto file o le librerie sono state compilate separatamente, l'opzione deve essere specificata esplicitamente nel `link` comando.  
  
### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere **le proprietà di configurazione**, **Linker**, **riga di comando**.  
  
3.  In **opzioni aggiuntive**, immettere `/GUARD:CF`.  
  
## <a name="see-also"></a>Vedere anche  
 [/Guard (Abilita Guard flusso di controllo)](../../build/reference/guard-enable-control-flow-guard.md)   
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)