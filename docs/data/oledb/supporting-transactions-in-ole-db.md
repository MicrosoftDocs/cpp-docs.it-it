---
title: "Supporto delle transazioni in OLE DB | Microsoft Docs"
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
helpviewer_keywords: 
  - "database [C++], transazioni"
  - "transazioni distribuite [C++]"
  - "transazioni annidate [C++]"
  - "OLE DB [C++], supporto della transazione"
  - "modelli consumer OLE DB [C++], supporto della transazione"
  - "transazioni [C++], supporto OLE DB funzioni di accesso"
ms.assetid: 3d72e583-ad38-42ff-8f11-e2166d60a5a7
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto delle transazioni in OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una [transazione](../../data/transactions-mfc-data-access.md) è una soluzione per raggruppare una serie di aggiornamenti relativi a un'origine dati, in modo che il commit di tutti gli aggiornamenti venga eseguito in un'unica operazione oppure che, nel caso di esito negativo anche di un solo aggiornamento, non venga eseguito alcun commit e l'intera transazione venga annullata.  Questo processo assicura l'integrità dei risultati dell'origine dati.  
  
 In OLE DB le transazioni vengono supportate con i tre metodi seguenti:  
  
-   [\<caps:sentence id\="tgt4" sentenceid\="0699a86bb6d6316bff035b804a56f0aa" class\="tgtSentence"\>ITransactionLocal::StartTransaction\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms709786.aspx)  
  
-   [\<caps:sentence id\="tgt5" sentenceid\="39299b0fea086b86052550bd165334f7" class\="tgtSentence"\>ITransaction::Commit\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms713008.aspx)  
  
-   [\<caps:sentence id\="tgt6" sentenceid\="8e992150c28ae247d532408ca7828bfe" class\="tgtSentence"\>ITransaction::Abort\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms709833.aspx)  
  
## Relazione tra sessioni e transazioni  
 Un singolo oggetto origine dati può creare uno o più oggetti sessione, ciascuno dei quali può trovarsi all'interno o all'esterno dell'ambito di una transazione in un determinato momento.  
  
 Quando una sessione non rientra in una transazione, tutte le operazioni eseguite all'interno della sessione riguardanti l'archivio dati vengono confermate immediatamente in corrispondenza della chiamata di ciascun metodo. Questo meccanismo viene a volte definito commit automatico o modalità implicita.  
  
 Quando una sessione rientra in una transazione, tutte le operazioni eseguite all'interno di tale sessione sull'archivio dati diventano parte della transazione e vengono confermate o annullate in un'unica operazione. Questo meccanismo viene a volte definito commit manuale.  
  
 Il supporto delle transazioni è specifico del provider.  Se il provider in uso supporta le transazioni, un oggetto sessione in grado di supportare **ITransaction** e **ITransactionLocal** potrà fare parte di una transazione semplice, ovvero non annidata.  La classe [CSession](../../data/oledb/csession-class.md) dei modelli OLE DB supporta queste interfacce ed è la soluzione consigliata per implementare il supporto delle transazioni in Visual C\+\+.  
  
## Avvio e terminazione di una transazione  
 I metodi `StartTransaction`, **Commit** e **Abort** vengono chiamati nell'oggetto rowset del consumer.  
  
 Quando si chiama **ITransactionLocal::StartTransaction**, viene avviata una nuova transazione locale.  Quando si avvia la transazione, le modifiche apportate dalle operazioni successive verranno effettivamente applicate all'archivio dati solo dopo il commit della transazione.  
  
 Quando si chiama **ITransaction::Commit** o **ITransaction::Abort**, la transazione viene terminata.  **Commit** applica all'archivio dati tutte le modifiche che rientrano nell'ambito della transazione.  **Abort** annulla tutte le modifiche che rientrano nell'ambito della transazione. L'archivio dati rimane nello stato in cui si trovava prima dell'avvio della transazione.  
  
## Transazioni annidate  
 Una [transazione annidata](https://msdn.microsoft.com/en-us/library/ms716985.aspx) si verifica se si avvia una nuova transazione locale quando esiste già una transazione attiva nella sessione.  La nuova transazione viene avviata come transazione annidata rispetto alla transazione corrente.  Se il provider non supporta le transazioni annidate e si chiama `StartTransaction` quando è già presente una transazione attiva sulla sessione, viene restituito **XACT\_E\_XTIONEXISTS**.  
  
## Transazioni distribuite  
 Una transazione distribuita è una transazione che aggiorna dati distribuiti, ovvero dati memorizzati su più sistemi di computer connessi in rete.  Se si desidera supportare le transazioni su un sistema distribuito, è necessario utilizzare Microsoft .NET Framework anziché il sistema di supporto delle transazioni di OLE DB.  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)