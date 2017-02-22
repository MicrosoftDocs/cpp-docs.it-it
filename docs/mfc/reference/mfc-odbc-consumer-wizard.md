---
title: "Creazione guidata consumer ODBC MFC (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.class.mfc.consumer.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata consumer ODBC MFC (C++)"
  - "procedure guidate [MFC]"
ms.assetid: f64a890b-a252-4887-88a1-782a7cd4ff3d
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Creazione guidata consumer ODBC MFC (C++)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inserire qui il riepilogo dei risultati di ricerca.  
  
 È possibile utilizzare questa procedura guidata per impostare una classe recordset ODBC e le associazioni dati necessarie per accedere all'origine dati specificata.  
  
## Elenco UIElement  
 **Origine dati**  
 Utilizzando il pulsante **Origine dati** è possibile impostare l'origine dati specificata mediante il driver ODBC specificato.  Per ulteriori informazioni sui file di origine dati, DSN, vedere l'articolo [File Data Sources](https://msdn.microsoft.com/en-us/library/ms715401.aspx) nell'SDK ODBC \(informazioni in lingua inglese\).  Nella finestra di dialogo **Selezione origine dati** sono disponibili due schede:  
  
-   Scheda **Origine dati su file**: nella casella **Cerca in** è specificata la directory nella quale selezionare i file da utilizzare come origini dati.  Il percorso predefinito è \\Programmi\\File comuni\\ODBC\\Data Sources.  Le origini dati dei file esistenti \(file DSN\) vengono visualizzate nella casella di riepilogo principale.  È possibile impostare prima le origini dati mediante la scheda **DSN su file** con l'[Amministratore origine dati ODBC](https://msdn.microsoft.com/en-us/library/ms714024.aspx) o creare origini dati nuove utilizzando questa finestra di dialogo.  
  
     Per creare una nuova origine dati file da questa finestra di dialogo, fare clic su `Nuovo` per specificare un nome DSN. Verrà visualizzata la finestra di dialogo **Crea nuova origine dati**.  Selezionare un driver appropriato e fare clic su `Avanti`. Scegliere **Sfoglia**, quindi selezionare il nome del file da utilizzare come origine dati. È necessario selezionare "Tutti i file" per visualizzare i file non DSN, ad esempio i file XLS. Scegliere `Avanti`, quindi **Fine**. Se si seleziona un file non DSN, verrà visualizzata una finestra di dialogo specifica del driver, ad esempio una finestra relativa alla configurazione ODBC per Microsoft Excel, che convertirà il file in DSN.  
  
    > [!NOTE]
    >  È anche possibile creare prima una nuova origine dati file mediante l'Amministratore origine dati ODBC.  Fare clic sul pulsante **Start**, scegliere **Impostazioni**, quindi **Pannello di controllo**, **Strumenti di amministrazione**, **Origini dati \(ODBC\)** e infine **Amministratore origine dati ODBC**.  
  
     Nella casella **Nome DSN** è possibile specificare un nome per l'origine dati file.  È necessario verificare che il nome DSN abbia l'estensione di file appropriata, ad esempio XLS per i file di Excel o MDB per quelli di Access.  
  
     Per ulteriori informazioni sui file DSN, vedere l'articolo [File Data Sources](https://msdn.microsoft.com/en-us/library/ms715401.aspx) nell'SDK ODBC \(informazioni in lingua inglese\).  
  
-   Scheda **Origine dati computer**: in questa scheda è disponibile l'elenco delle origini dati di sistema e utente.  Le origini dati utente sono specifiche di un utente del computer in uso.  Le origini dati sistema possono essere utilizzate da tutti gli utenti del computer o di un servizio a livello di sistema.  Vedere [Machine Data Sources](https://msdn.microsoft.com/en-us/library/ms710952.aspx) nell'ODBC SDK \(informazioni in lingua inglese\).  
  
 Per ulteriori informazioni sulle origini dati ODBC, vedere l'articolo [Data Sources](https://msdn.microsoft.com/en-us/library/ms711688.aspx) nell'SDK ODBC \(informazioni in lingua inglese\).  
  
 Scegliere **OK** per terminare.  Verrà visualizzata la finestra di dialogo **Seleziona oggetto di database**.  In questa finestra di dialogo selezionare la tabella o la visualizzazione che verrà utilizzata dal consumer.  Per selezionare più visualizzazioni e tabelle, tenere premuto CTRL mentre si fa clic sugli elementi.  
  
 **Classe**  
 Nome della classe consumer. Per impostazione predefinita, tale nome è basato sul nome dell'origine dati file o computer selezionata.  
  
 **File H**  
 Nome del file di intestazione della classe consumer. Per impostazione predefinita, tale nome è basato sul nome dell'origine dati file o computer selezionata.  
  
 **File CPP**  
 Nome del file di implementazione della classe consumer. Per impostazione predefinita, tale nome è basato sul nome dell'origine dati file o computer selezionata.  
  
 **Type**  
 Specifica se il recordset è un dynaset \(impostazione predefinita\) o uno snapshot.  
  
-   **Dynaset**: utilizzare questa opzione per specificare che il recordset è di tipo dynaset.  Un dynaset, ovvero il risultato di una query che fornisce una visualizzazione indicizzata dei dati del database in cui è stata effettuata la ricerca,  memorizza nella cache solo un indice integrale dei dati originali offrendo così prestazioni più elevate rispetto allo snapshot.  L'indice fa direttamente riferimento a ciascun record trovato come risultato di una query e indica se un record è stato rimosso.  È inoltre possibile accedere alle informazioni aggiornate nei record in cui viene effettuata la ricerca.  Questa è l'impostazione predefinita.  
  
-   **Snapshot**: utilizzare questa opzione per specificare che il recordset è di tipo snapshot.  Uno snapshot è il risultato di una query e costituisce una visualizzazione di un database in un determinato momento.  Poiché tutti i record trovati come risultato della query vengono memorizzati nella cache, nei record originali non viene visualizzata alcuna modifica.  
  
 **Associa tutte le colonne**  
 Specifica se vengono associate tutte le colonne della tabella selezionata.  Se si seleziona questa casella \(impostazione predefinita\), vengono associate tutte le colonne. In caso contrario non viene associata alcuna colonna e l'associazione deve essere effettuata manualmente nella classe recordset.  
  
## Vedere anche  
 [Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)