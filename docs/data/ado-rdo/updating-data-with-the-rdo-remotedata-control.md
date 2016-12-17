---
title: "Aggiornamento dei dati con il controllo RemoteData RDO | Microsoft Docs"
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
  - "RDO RemoteData (controllo)"
  - "RDO RemoteData (controllo), aggiornamento di dati"
  - "RemoteData (controllo)"
  - "RemoteData (controllo), aggiornamento di dati"
ms.assetid: abb4175f-612e-4645-905e-c0fa918b0fd7
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiornamento dei dati con il controllo RemoteData RDO
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I dati dei controlli RemoteData RDO possono essere sia in sola lettura che modificabili.  
  
### Per creare un'applicazione con modifica dei dati mediante il controllo RemoteData RDO  
  
1.  Impostare la proprietà **CursorDriver** del controllo RemoteData RDO.  
  
    -   I cursori del lato server memorizzano i dati restituiti sul server.  
  
    -   I cursori del lato client ODBC memorizzano i dati nella memoria locale del client.  
  
    -   I cursori batch del lato client utilizzano una libreria di cursori sviluppata per la gestione dei problemi di concorrenza.  
  
    -   L'opzione No Cursor viene utilizzata quando si esegue una query di comando e non è pertanto necessario alcun cursore.  
  
2.  Impostare la proprietà **LockType** del controllo RemoteData RDO.  È consigliabile impostare la concorrenza ottimistica in base all'opzione del gruppo di risultati.  
  
    -   Non impostare la concorrenza in sola lettura se si desidera che i dati siano modificabili.  
  
    -   Con la concorrenza pessimistica i dati vengono bloccati durante l'aggiornamento in modo che altri utenti non rischino di apportare modifiche non compatibili.  
  
    -   Con la concorrenza ottimistica i dati non vengono bloccati, ma se durante il commit viene rilevato l'invio di uno stato incompatibile da parte di un client, il controllo RemoteData RDO genererà un errore.  
  
3.  Impostare la proprietà **ResultsetType** del controllo RemoteData RDO.  Assicurarsi che il driver ODBC supporti le opzioni scelte.  
  
    -   Quando si sceglie la creazione di un cursore statico le modifiche non vengono rilevate finché il cursore non viene chiuso e riaperto.  
  
    -   Quando si sceglie la creazione di un cursore di tipo keyset, il cursore consente di eseguire qualsiasi operazione di inserimento, aggiornamento ed eliminazione all'interno del cursore keyset stesso.  
  
4.  Impostare il controllo associato a dati per consentire gli aggiornamenti.  Tenere presente che alcuni controlli non consentono gli aggiornamenti.  
  
 Per informazioni sull'utilizzo di questi oggetti, vedere la documentazione relativa al controllo RemoteData RDO.  
  
## Vedere anche  
 [Associazione dati RDO](../../data/ado-rdo/rdo-databinding.md)   
 [Utilizzo dell'associazione dati RDO in Visual C\+\+](../../data/ado-rdo/using-rdo-databinding-in-visual-cpp.md)