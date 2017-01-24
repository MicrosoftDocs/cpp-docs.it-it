---
title: "Avviso: impossibile copiare la dipendenza &quot;file&quot; del progetto &quot;progetto&quot; nella directory di esecuzione perch&#233; sovrascriverebbe il riferimento &quot;file&quot;. | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.copy_version_warning"
ms.assetid: 116819f3-a4d4-48b5-9e71-7c54660d38ef
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Avviso: impossibile copiare la dipendenza &quot;file&quot; del progetto &quot;progetto&quot; nella directory di esecuzione perch&#233; sovrascriverebbe il riferimento &quot;file&quot;.
Esiste un conflitto tra le dipendenze. Per eseguire l'applicazione, è necessario copiare più di un file di assembly distinto con lo stesso nome nella directory bin. La directory di esecuzione è in grado di risolvere il conflitto, poiché una delle dipendenze è un riferimento primario.  
  
 Facendo doppio clic sull'elemento Elenco attività si passerà al nodo del riferimento primario in conflitto.  
  
 Questo avviso viene visualizzato in presenza di un conflitto di dipendenza che si è cercato di risolvere aggiungendo una delle dipendenze in conflitto come un riferimento. Oppure si può avere un riferimento alla versione 1 al quale si è aggiunto un secondo riferimento che a sua volta fa riferimento alla versione 2 del primo riferimento.  
  
 Questo errore si verifica perché i progetti nella soluzione hanno riferimenti reciproci, che tuttavia sono stati creati come riferimenti a file \(usando il pulsante **Sfoglia** nella finestra di dialogo [Aggiungi riferimento](http://msdn.microsoft.com/it-it/2feb0fe2-0805-4cc9-8cba-b0315849dfb7)\) piuttosto che come riferimenti da progetto a progetto \(usando la scheda **Progetto** nella finestra di dialogo **Aggiungi riferimento**\). Il vantaggio di un riferimento da progetto a progetto è che si crea una dipendenza tra i progetti nel sistema di compilazione in base alla quale il progetto dipendente viene compilato in caso di modifica dall'ultima volta in cui è stato compilato il progetto di riferimento. Un riferimento a file non crea una dipendenza di compilazione ed è quindi possibile compilare il progetto di riferimento senza compilare il progetto dipendente, con la possibilità che il riferimento diventi obsoleto. Un progetto può fare riferimento a una versione di compilazione precedente. Ciò potrebbe comportare l'esigenza di varie versioni di una singola DLL nella directory bin, il che non è possibile, e verrà quindi visualizzato questo messaggio di errore.  
  
 Tale messaggio viene visualizzato ogni volta che si verifica un conflitto nella directory bin e l'applicazione potrebbe non funzionare correttamente. Anche se si è aggirato il problema, questo avviso viene ancora visualizzato perché il sistema di progetto non può determinare se la versione di una dipendenza funzionerà correttamente con tutti i componenti.  
  
 **Per correggere l'errore**  
  
-   Copiare uno \(o zero\) file di assembly nella directory bin, operazione che può essere eseguita inserendo i file di assembly nella Global Assembly Cache. La Global Assembly Cache consente di risolvere i conflitti nel nome del file. Non vengono eseguite copie locali del file di assembly dal momento che Common Language Runtime sa come trovare assembly nella Global Assembly Cache. Per altre informazioni, vedere [Utilizzo di assembly e della Global Assembly Cache](../Topic/Working%20with%20Assemblies%20and%20the%20Global%20Assembly%20Cache.md) e [Errore: impossibile copiare la dipendenza "file" del progetto "progetto" nella directory di esecuzione perché genererebbe un conflitto con la dipendenza "file"](../misc/error-the-dependency-file-in-project-project-cannot-be-copied-to-the-run-directory-because-it-would-conflict-with-dependency-file.md).  
  
## Vedere anche  
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [Global Assembly Cache](../Topic/Global%20Assembly%20Cache.md)   
 [Procedura: creare e rimuovere dipendenze di progetto](../Topic/How%20to:%20Create%20and%20Remove%20Project%20Dependencies.md)