---
title: "Creazione di un consumer semplice | Microsoft Docs"
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
  - "OLE DB (consumer), creazione"
ms.assetid: ae32d657-72ea-4db8-9839-75cb5cff68ae
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Creazione di un consumer semplice
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare la Creazione guidata progetto ATL e la Creazione guidata consumer OLE DB ATL per generare un consumer basato sui modelli OLE DB.  
  
#### Per creare un'applicazione console per un consumer OLE DB  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
     Verrà visualizzata la finestra di dialogo **Nuovo progetto**.  
  
2.  Nel riquadro Tipi progetto fare clic sulla cartella **Progetti di Visual C\+\+**, quindi nel riquadro Modelli fare clic sull'icona **Progetto Win32**.  Nella casella **Nome** immettere un nome per il progetto, ad esempio **MyCons**.  
  
3.  Scegliere **OK**.  
  
     Verrà visualizzata la Creazione guidata progetto Win32.  
  
4.  Nella pagina **Impostazioni applicazione** selezionare **Applicazione console**, quindi **Aggiungi supporto per ATL**.  
  
5.  Scegliere **Fine** per chiudere la procedura guidata e generare il progetto.  
  
 A questo punto, utilizzare la Creazione guidata consumer OLE DB ATL per aggiungere un oggetto consumer OLE DB.  
  
#### Per creare un consumer con la Creazione guidata consumer OLE DB ATL  
  
1.  In Visualizzazione classi, fare clic con il pulsante destro del mouse sul progetto `MyCons`.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
     Verrà visualizzata la finestra di dialogo **Aggiungi classe**.  
  
3.  Nel riquadro Categorie fare clic su **Visual C\+\+**, quindi nel riquadro Modelli fare clic sull'icona **Consumer OLE DB ATL** e scegliere **Apri**.  
  
     Verrà avviata la Creazione guidata consumer OLE DB ATL.  
  
4.  Scegliere il pulsante **Origine dati**.  
  
     Verrà visualizzata la finestra di dialogo **Proprietà Data Link**.  
  
5.  Nella finestra di dialogo delle proprietà **Data Link** eseguire le seguenti operazioni:  
  
    -   Nella scheda **Provider** specificare un provider OLE DB.  
  
    -   Nella scheda **Connessione** specificare il nome del server, l'ID e la password di accesso dell'origine dati e il database presente nel server.  
  
    > [!NOTE]
    >  Esiste un problema di sicurezza relativo all'opzione per il salvataggio della password nella finestra di dialogo delle proprietà Data Link.  Nell'area delle informazioni di accesso per il server sono presenti due pulsanti di opzione: **Usa sicurezza integrata di Windows NT** e **Usa un nome utente e una password specifici**.  
  
    > [!NOTE]
    >  Se si seleziona **Usa un nome utente e una password specifici**, è possibile scegliere di salvare la password utilizzando la casella di controllo **Consenti salvataggio password**. Tuttavia, questa opzione non è sicura.  Si consiglia di selezionare **Usa sicurezza integrata di Windows NT**, in quanto si tratta di un'opzione che prevede l'utilizzo di Windows NT per verificare l'identità.  
  
    > [!NOTE]
    >  Se non è possibile utilizzare la sicurezza integrata di Windows NT, sarà necessario utilizzare un'applicazione intermedia per richiedere all'utente di digitare la password o per archiviare questa in una posizione protetta, anziché nel codice sorgente.  
  
     Dopo avere selezionato il provider e altre impostazioni, scegliere **Test connessione** per verificare le opzioni impostate nelle schede della finestra di dialogo.  Se la casella di **Risultati** riferimento `Test connection succeeded`, fare clic su **OK** per creare il collegamento ai dati.  
  
     Verrà visualizzata la finestra di dialogo **Seleziona oggetto di database**.  
  
6.  Utilizzare il controllo struttura ad albero per selezionare una tabella, una visualizzazione o una stored procedure.  In questa procedura di esempio, selezionare la tabella Products del database Northwind.  
  
7.  Scegliere **OK**.  Verrà visualizzata nuovamente la Creazione guidata consumer OLE DB ATL.  
  
8.  Completato la procedura guidata i nomi per `Class` e **.h file** in base al nome della tabella, della visualizzazione, o della stored procedure selezionata.  Se opportuno, è possibile modificare questi nomi.  
  
9. Deselezionare la casella di controllo **Con attributi** in modo che il codice del consumer venga creato dalla procedura guidata in base alle [classi di modelli OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) anziché in base agli [attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md).  
  
10. In **Tipo** selezionare **Comando**.  
  
     Verrà creato un consumer basato su [CCommand](../../data/oledb/ccommand-class.md) se si seleziona **Comando** e un consumer basato su [CTable](../../data/oledb/ctable-class.md) se si seleziona **Tabella**.  La classe di tabella o di comando viene denominata in base all'oggetto selezionato, ma è comunque possibile modificare il nome proposto.  
  
11. In **Supporto** lasciare deselezionate le caselle **Cambia**, **Inserisci** ed **Elimina**.  
  
     Selezionare le caselle di controllo **Cambia**, **Inserisci** ed **Elimina** solo per supportare la modifica, l'inserimento e l'eliminazione di record del rowset, se necessario.  Per ulteriori informazioni sulla scrittura di dati nell'archivio dati, vedere [Aggiornamento dei rowset](../../data/oledb/updating-rowsets.md).  
  
12. Scegliere **Fine** per creare il consumer.  
  
 Verrà generata una classe di comando e una classe di record utente come illustrato in [Classi generate mediante la Creazione guidata consumer](../../data/oledb/consumer-wizard-generated-classes.md).  La classe di comando sarà il nome immesso nella casella di `Class` nella procedura guidata \(in questo caso, `CProducts`\) e la classe di record utente avrà il formato "*Ambito*" \(in questo caso, `CProductsAccessor`\).  
  
> [!NOTE]
>  La riga seguente verrà inserita in Products.h:  
  
```  
#error Security Issue: The connection string may contain a password  
```  
  
> [!NOTE]
>  Questa riga impedisce la compilazione dell'applicazione consumer e ricorda all'utente di verificare se per la stringa di connessione sono previste password hardcoded.  Dopo la verifica della stringa di connessione, è possibile rimuovere questa riga di codice.  
  
## Vedere anche  
 [Creazione di un consumer OLE DB mediante procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)