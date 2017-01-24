---
title: "/GUARD (abilita i controlli di protezione) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 72758e23-70ac-4616-94d7-d767477406d1
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /GUARD (abilita i controlli di protezione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica il supporto per i controlli di Guard flusso di controllo nell'immagine eseguibile.  
  
## Sintassi  
  
```  
/GUARD:{CF|NO}  
```  
  
## Note  
 Quando si specifica \/GUARD:CF, il linker modifica l'intestazione di un file DLL o EXE in modo che indichi il supporto per i controlli di runtime di Guard flusso di controllo.  Anche il linker aggiunge all'intestazione i dati dell'indirizzo di destinazione del flusso di controllo richiesti.  Per impostazione predefinita, \/GUARD:CF è disabilitato.  Può essere disabilitato in modo esplicito con \/GUARD:NO.  Per essere efficace, \/GUARD:CF richiede anche l'opzione [\/DYNAMICBASE \(utilizzo della funzionalità ASLR\)](../../build/reference/dynamicbase-use-address-space-layout-randomization.md) del linker, che è attivata per impostazione predefinita.  
  
 Quando il codice sorgente viene compilato con l'opzione [\/guard:cf](../../build/reference/guard-enable-control-flow-guard.md), il compilatore analizza il flusso di controllo esaminando tutte le chiamate indirette per individuare i possibili indirizzi di destinazione.  Il compilatore inserisce codice per verificare che l'indirizzo di destinazione di un'istruzione di chiamata indiretta sia incluso nell'elenco degli indirizzi di destinazione noti in fase di esecuzione.  Con i sistemi operativi che supportano Guard flusso di controllo un programma che non supera il controllo di runtime di questa funzionalità viene arrestato.  In questo modo l'autore di un attacco può meno facilmente eseguire codice dannoso sfruttando dati danneggiati per modificare una destinazione di chiamata.  
  
 Per creare immagini di eseguibili abilitati per Guard flusso di controllo, l'opzione \/GUARD:CF deve essere specificata sia nel compilatore che nel linker.  Al codice compilato ma non collegato con \/GUARD:CF è associato un certo costo per i controlli di runtime. In questa situazione, inoltre, la protezione di Guard flusso di controllo non viene abilitata.  Quando per il comando `cl` si specifica l'opzione \/GUARD:CF per eseguire compilazione e collegamento in un solo passaggio, il compilatore passa il flag al linker.  Se la proprietà **Guard flusso di controllo** è impostata in Visual Studio, l'opzione \/GUARD:CF viene passata sia al compilatore che al linker.  Se il file oggetto o le librerie sono state compilate separatamente, è necessario specificare esplicitamente l'opzione nel comando `link`.  
  
### Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per altre informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere **Proprietà di configurazione**, **Linker**, quindi selezionare **Riga di comando**.  
  
3.  In **Opzioni aggiuntive** immettere `/GUARD:CF`.  
  
## Vedere anche  
 [\/guard \(abilita la protezione del flusso di controllo\)](../../build/reference/guard-enable-control-flow-guard.md)   
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)