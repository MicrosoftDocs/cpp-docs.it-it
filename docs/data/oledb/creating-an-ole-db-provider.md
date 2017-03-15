---
title: "Creazione di un provider OLE DB | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modelli del provider OLE DB, creazione di provider"
  - "provider OLE DB, creazione"
ms.assetid: f73017c3-c89f-41a6-a306-ea992cf6092c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Creazione di un provider OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per creare un provider OLE DB si consiglia di generare un progetto COM ATL e un provider utilizzando le procedure guidate, quindi modificare i file mediante i modelli OLE DB.  Durante la personalizzazione del provider è possibile impostare come commento le proprietà non desiderate e aggiungere interfacce facoltative.  
  
 Le operazioni da eseguire sono elencate di seguito.  
  
1.  Utilizzare la Creazione guidata progetto ATL per generare i file base del progetto e la Creazione guidata provider OLE DB ATL per generare il provider, selezionando **Provider OLE DB ATL** dalla cartella Visual C\+\+ in **Aggiungi classe**.  
  
2.  Modificare il codice nel metodo `Execute` in CMyProviderRS.h.  Per un esempio, vedere [Lettura di stringhe in un provider OLE DB](../../data/oledb/reading-strings-into-the-ole-db-provider.md).  
  
3.  Modificare le mappe delle proprietà in MyProviderDS.h, MyProviderSess.h e MyProviderRS.h.  La procedura guidata crea mappe delle proprietà contenenti tutte le proprietà che possono essere implementate da un provider.  Scorrere il contenuto delle mappe delle proprietà e rimuovere o impostare come commento le proprietà che non si desidera supportare.  
  
4.  Aggiornare PROVIDER\_COLUMN\_MAP disponibile in MyProviderRS.h.  Per un esempio, vedere [Memorizzazione di stringhe in un provider OLE DB](../../data/oledb/storing-strings-in-the-ole-db-provider.md).  
  
5.  Per eseguire il test del provider, cercare il provider in un'enumerazione di provider.  Per esempi di codice di test utilizzabile per cercare un provider in un'enumerazione, vedere [CATDB](http://msdn.microsoft.com/it-it/003d516b-2bf6-444e-8be5-4ebaa0b66046) e [DBVIEWER](http://msdn.microsoft.com/it-it/07620f99-c347-4d09-9ebc-2459e8049832) oppure l'esempio contenuto in [Implementazione di un consumer semplice](../../data/oledb/implementing-a-simple-consumer.md).  
  
6.  Se lo si desidera, aggiungere eventuali interfacce supplementari.  Per un esempio vedere [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md).  
  
    > [!NOTE]
    >  Per impostazione predefinita, nelle procedure guidate viene generato codice conforme con il livello 0 di OLE DB.  Per assicurare che l'applicazione rimanga conforme con il livello 0, non rimuovere dal codice alcuna interfaccia generata nelle procedure guidate.  
  
## Vedere anche  
 [CATDB](http://msdn.microsoft.com/it-it/003d516b-2bf6-444e-8be5-4ebaa0b66046)   
 [DBVIEWER](http://msdn.microsoft.com/it-it/07620f99-c347-4d09-9ebc-2459e8049832)