---
title: "Utilizzo dell&#39;associazione dati ADO in Visual C++ | Microsoft Docs"
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
  - "ADO [C++], associazione dati"
  - "controlli con associazione [C++], ADO"
  - "controlli con associazione [C++], RDO"
  - "associazione dati [C++], ADO"
  - "associazione dati [C++], RDO"
ms.assetid: ad193919-3437-41ee-b41c-9d353f6274e5
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo dell&#39;associazione dati ADO in Visual C++
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per utilizzare l'associazione dati ADO in Visual C\+\+, eseguire i seguenti passaggi:  
  
-   Aggiungere un controllo dati ADO.  
  
-   Puntare a un'origine dati.  
  
-   Specificare l'origine record \(linguaggio di recupero dati o query SQL\).  
  
-   Aggiungere un controllo ADO associato a dati.  
  
-   Connettere il controllo associato a dati a un controllo dati ADO.  
  
-   Selezionare i campi da associare all'origine record del controllo dati ADO.  
  
### Per utilizzare l'associazione dati ADO in Visual C\+\+  
  
1.  Creare un'applicazione MFC basata su una finestra di dialogo o un'applicazione MFC basata su una Formview mediante la Creazione guidata applicazione MFC.  
  
2.  Aggiungere il controllo dati ADO Microsoft alla finestra di dialogo. Vedere [Inserimento di un controllo in un'applicazione Visual C\+\+](../../data/ado-rdo/inserting-the-control-into-a-visual-cpp-application.md).  
  
3.  Impostare il controllo dati ADO affinché punti all'origine dati OLE DB.  
  
    1.  Fare clic con il pulsante destro del mouse sul controllo dati ADO, quindi scegliere **Proprietà**.  
  
    2.  Nella scheda **Controllo** fare clic su **Usa stringa di connessione**.  È possibile utilizzare il provider fornito oppure eliminarlo.  
  
    3.  Fare clic su **Compila**.  Se si è eliminato il provider da **Usa stringa di connessione**, sarà ora possibile definirne uno.  Dopo aver definito il provider, accedere nuovamente alle proprietà del controllo dati ADO e selezionare nuovamente **Compila** per continuare.  
  
         Se è stato definito un provider in **Usa stringa di connessione** prima di selezionare **Compila**, sarà ora possibile definire le proprietà per il collegamento ai dati.  Verrà visualizzata la procedura guidata per il collegamento dati.  
  
    4.  Modificare il **Provider**, se necessario, e definire i valori di **Percorso** e **Origine dati**, come appropriato per il provider scelto.  Se, ad esempio, si utilizza un provider SQL Server, in **Percorso** sarà necessario specificare il server database e in **Origine dati** il database.  Se si utilizza un provider ODBC, **Origine dati** corrisponderà al DSN ODBC.  
  
    5.  Fare clic sulla scheda **Autenticazione** e quindi impostare i valori di **Nome utente** e **Password**, se richiesti dall'origine dati.  
  
    6.  Fare clic sulla scheda **Connessione**, quindi su **Test connessione** per effettuare il test dell'origine dati.  Scorrere la finestra dei risultati fino all'ultima riga per verificare se il test ha avuto esito positivo.  In caso di esito negativo, controllare la configurazione dell'origine dati.  Il test può avere esito negativo a causa di errori comuni, quali l'immissione di password errate o di valori non validi nei campi **Percorso** e **Origine dati**.  
  
    7.  Chiudere la procedura guidata per il collegamento dati e tornare alla finestra delle proprietà del controllo dati ADO.  
  
4.  Nella scheda `RecordSource` immettere una query in **Command Text \(SQL\)**.  È possibile associare i controlli associati a dati al risultato di questa query.  La query sarà in genere di tipo SQL.  Alcuni provider OLE DB, tuttavia, non fanno uso di SQL.  
  
5.  Impostare eventuali altre proprietà del controllo dati ADO come necessario e chiudere la finestra delle proprietà del controllo dati ADO.  
  
6.  Aggiungere un controllo associato a dati.  Aggiungere, ad esempio, il controllo DataGrid, che è diverso dal controllo RDO DBGrid.  
  
7.  Impostare le proprietà del controllo DataGrid.  
  
    1.  Fare clic con il pulsante destro del mouse sul controllo DataGrid, quindi scegliere **Proprietà**.  
  
    2.  Fare clic sulla scheda **Tutte**, quindi impostare la proprietà **DataSource** sul controllo dati ADO.  Fare clic sulla casella di riepilogo a discesa **DataSource** e cercare l'ID del controllo dati ADO.  Il nome predefinito dell'ID è IDC\_ADODC1.  
  
8.  Per l'esecuzione in modalità test, premere CTRL\+T.  Sarà possibile scorrere i dati.  Premere ESC o chiudere la finestra di dialogo per terminare la modalità test.  
  
 Sarà possibile scorrere i dati anche compilando ed eseguendo il programma.  
  
## Vedere anche  
 [Associazione dati ADO](../../data/ado-rdo/ado-databinding.md)   
 [Associazione dati con controlli ActiveX in Visual C\+\+](../../data/ado-rdo/databinding-with-activex-controls-in-visual-cpp.md)