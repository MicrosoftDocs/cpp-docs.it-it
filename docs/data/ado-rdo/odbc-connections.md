---
title: "Connessioni ODBC | Microsoft Docs"
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
  - "ODBC (connessioni), configurazione"
  - "ODBC, connessione"
ms.assetid: c9df2fa6-d9e2-4335-b885-724662968691
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Connessioni ODBC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le connessioni ODBC possono essere configurate nel Pannello di controllo del sistema.  È possibile stabilire connessioni ODBC a qualsiasi origine dati per la quale sia stato installato un driver ODBC.  Visual C\+\+ versione 6.0 o successiva comprende driver per file di testo, Access, FoxPro, Paradox, dBASE, Excel, SQL Server e Oracle.  Durante la creazione, alla connessione ODBC viene automaticamente assegnato un DSN \(Data Source Name, Nome origine dati\).  Il DSN verrà in seguito utilizzato per identificare le connessioni nei controlli dati, quali il controllo dati ADO e il controllo RemoteData RDO.  
  
 **Connessioni OLE DB** Per configurare una connessione OLE DB non sono necessarie ulteriori operazioni.  Un'origine dati ODBC creata, ad esempio, verrà automaticamente rilevata dal provider OLE DB per ODBC.  
  
### Per configurare un'origine dati ODBC  
  
1.  Fare clic sul pulsante **Start**, quindi su **Impostazioni** e infine su **Pannello di controllo**.  
  
2.  Nel Pannello di controllo selezionare 32bit ODBC in Windows 95 o 98, oppure Strumenti di amministrazione e Origine dati \(ODBC\) in Windows NT o 2000.  
  
3.  Fare clic sulla scheda **DSN utente** o **DSN di sistema**.  **DSN utente** consente di creare DSN specifici dell'utente, mentre **DSN di sistema** consente di creare DSN disponibili per tutti gli utenti.  
  
4.  Fare clic su **Aggiungi** per visualizzare l'elenco dei driver ODBC installati sul computer.  
  
5.  Selezionare il driver corrispondente all'ISAM \(Indexed Sequential Access Method\) o al database a cui si desidera eseguire la connessione, quindi fare clic su **Fine**.  
  
6.  Attenersi alle istruzioni specifiche del driver.  Al termine della procedura, il DSN sarà disponibile per l'utilizzo.  
  
 Quando si genera un DSN per alcuni tipi di driver ODBC, è necessario conoscere il percorso del file effettivo.  Quando, ad esempio, si crea un DSN di Access, è necessario conoscere il percorso del file MDB.  È inoltre necessario disporre di un nome utente e di una password validi.  Ad esempio, il nome utente di sistema per la maggior parte dei sistemi Access è *admin*.  
  
 Quando si crea un DSN [Oracle](../../data/ado-rdo/oracle-connections.md) è necessario conoscere la stringa di connessione di SQL\*Net.  
  
## Vedere anche  
 [Creazione di connessioni a database](../../data/ado-rdo/creating-database-connections.md)