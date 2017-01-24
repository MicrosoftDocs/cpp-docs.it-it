---
title: "Recordset: esecuzione di un join (ODBC) | Microsoft Docs"
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
  - "associazione dati [C++], colonne nei recordset"
  - "associazione dati [C++], colonne dei recordset"
  - "filtri [C++], condizioni join per recordset"
  - "join [C++], in recordset"
  - "ODBC (recordset) [C++], join"
  - "recordset [C++], associazione dati"
  - "recordset [C++], join di tabelle"
ms.assetid: ca720900-a156-4780-bf01-4293633bea64
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: esecuzione di un join (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
## Definizione di join  
 L'operazione di join, una comune attività di accesso ai dati, consente di utilizzare i dati contenuti in più tabelle tramite un unico oggetto recordset.  Il join di due o più tabelle produce un recordset in grado di contenere le colonne di ciascuna tabella ma visualizzate nell'applicazione come tabella singola.  Il join utilizza talvolta tutte le colonne di tutte le tabelle, mentre la clausola SQL **SELECT** in un join consente di utilizzare solo alcune delle colonne di ciascuna tabella.  Le classi di database supportano esclusivamente i join in sola lettura e non quelli aggiornabili.  
  
 Per selezionare i record contenenti le colonne di tabelle unite in join, sono necessari gli elementi riportati di seguito.  
  
-   Un elenco di tabelle contenente i nomi di tutte le tabelle da unire.  
  
-   Un elenco di colonne contenente i nomi di tutte le colonne partecipanti.  Le colonne con lo stesso nome ma contenute in tabelle differenti sono qualificate dal nome della tabella.  
  
-   Un filtro \(clausola SQL **WHERE**\) che specifica le colonne in base alle quali si esegue il join delle tabelle.  Il filtro esegue il join e ha la seguente forma: "Tabella1.ColChiave \= Tabella2.ColChiave".  
  
 È possibile unire più di due tabelle con lo stesso metodo, eguagliando più coppie di colonne, ciascuna delle quali unita dalla parola chiave SQL **AND**.  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [Recordset: dichiarazione di una classe per una query già definita \(ODBC\)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md)   
 [Recordset: dichiarazione di una classe per una tabella \(ODBC\)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)   
 [Recordset: ripetizione di una query in un recordset \(ODBC\)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)