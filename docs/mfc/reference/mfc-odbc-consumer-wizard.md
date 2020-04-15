---
title: Creazione guidata consumer ODBC MFC (C++)
ms.date: 08/29/2019
helpviewer_keywords:
- wizards [MFC]
ms.assetid: f64a890b-a252-4887-88a1-782a7cd4ff3d
ms.openlocfilehash: 45087434c0093f99383096761d58a8029c9d5009
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373015"
---
# <a name="mfc-odbc-consumer-wizard"></a>Creazione guidata consumer ODBC MFC (C++)

::: moniker range="vs-2019"

Questa procedura guidata non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

Questa procedura guidata consente di impostare una classe recordset ODBC e le associazioni dati necessarie per accedere all'origine dati specificata.

## <a name="uielement-list"></a>Elenco degli elementi di interfaccia

- **Origine dati**

  Il pulsante **Origine dati** consente di impostare l'origine dati specificata utilizzando il driver ODBC specificato. Per ulteriori informazioni sui file di origine dati (DSN), vedere [origini dati File](/sql/odbc/reference/file-data-sources) nell'SDK ODBC.

  Nella finestra di dialogo **Seleziona origine dati** sono disponibili due schede:

  - **Scheda Origine dati file:**

     La casella **Cerca in** specifica la directory in cui selezionare i file da utilizzare come origini dati. L'impostazione predefinita è , ovvero . Le origini dati sui file esistenti (file con estensione dsn) vengono visualizzate nella casella di riepilogo principale. È possibile impostare le origini dati in anticipo utilizzando la scheda **DSN su file** in [Amministrazione origine dati ODBC](/sql/odbc/admin/odbc-data-source-administrator)oppure crearne di nuove utilizzando questa finestra di dialogo.

     Per creare una nuova origine dati file `New` da questa finestra di dialogo, fare clic per specificare un nome DSN; viene visualizzata la finestra di dialogo **Crea nuova origine dati.** Nella finestra di dialogo Crea nuova origine `Next` **dati,** selezionare un driver appropriato e fare clic su ; fare clic su **Sfoglia**e selezionare il nome del file da utilizzare come origine dati (è necessario selezionare "Tutti i file" per visualizzare i file non DSN, ad esempio i file xls); fare `Next`clic su e quindi su **Fine**. Se è stato selezionato un file non DSN, verrà visualizzato una finestra di dialogo specifica del driver, ad esempio "Programma di installazione ODBC di Microsoft Excel", che convertirà il file in un DSN.

     > [!NOTE]
     > È inoltre possibile creare una nuova origine dati file in anticipo utilizzando l'Amministratore origine dati ODBC. Dal menu **Start** selezionare **Impostazioni**, **Pannello di controllo**, Strumenti di **amministrazione**, Origini **dati (ODBC)** e quindi **Amministratore origine dati ODBC**.

     La casella **Nome DSN** consente di specificare un nome per l'origine dati file. È necessario assicurarsi che il nome DSN termini con l'estensione di file appropriata, ad esempio xls per i file di Excel o mdb per i file di Access.

     Per ulteriori informazioni sui DSN, vedere [Origini dati File](/sql/odbc/reference/file-data-sources) nell'SDK di ODBC.

  - **Scheda Origine dati macchina:**

     Questa scheda elenca le origini system e User DATA. Le origini dati utente sono specifiche di un utente in questo computer. Le origini dati di sistema possono essere utilizzate da tutti gli utenti del computer o in un servizio a livello di sistema. Vedere Origini dati macchina nell'SDK ODBCSee [Machine Data Sources](/sql/odbc/reference/machine-data-sources) in the ODBC SDK

     Per ulteriori informazioni sulle origini dati ODBC, vedere [origini dati](/sql/odbc/reference/data-sources) nell'SDK ODBC.

  Fare clic su **OK** per completare la procedura. Verrà visualizzata la finestra di dialogo **Seleziona oggetto di database**. In questa finestra di dialogo selezionare la tabella o la vista che verrà utilizzata dal consumer. Si noti che è possibile selezionare più viste e tabelle tenendo premuto il tasto di controllo mentre si fa clic sugli elementi. Fare clic su **OK** per completare la procedura.

- **Class**

   Nome della classe consumer, basato per impostazione predefinita sul nome del file o dell'origine dati del computer selezionata.

- **File con estensione h**

   Nome del file di intestazione della classe consumer, basato per impostazione predefinita sul nome del file o dell'origine dati del computer selezionata.

- **File con estensione cpp**

   Nome del file di implementazione della classe consumer, basato per impostazione predefinita sul nome del file o dell'origine dati del computer selezionata.

- **Tipo**

   Specifica se il recordset è un dynaset (impostazione predefinita) o uno snapshot.

  - **Dynaset**: Specifica che il recordset è un dynaset. Un dynaset è il risultato di una query che fornisce una vista indicizzata nei dati del database sottoposto a query. Un dynaset memorizza nella cache solo un indice integrale dei dati originali e offre quindi un miglioramento delle prestazioni rispetto a uno snapshot. L'indice punta direttamente a ogni record trovato come risultato di una query e indica se un record viene rimosso. È inoltre possibile accedere alle informazioni aggiornate nei record sottoposti a query. Questa è la modalità predefinita.

  - **Snapshot**: Specifica che il recordset è uno snapshot. Uno snapshot è il risultato di una query ed è una vista in un database in un unico momento. Tutti i record trovati come risultato della query vengono memorizzati nella cache, pertanto non vengono visualizzate modifiche ai record originali.

- **Associare tutte le colonne**

   Specifica se tutte le colonne della tabella selezionata sono associate. Se si seleziona questa casella (impostazione predefinita), tutte le colonne vengono associate; Se non si seleziona questa casella, non viene associata alcuna colonna ed è necessario associarle manualmente nella classe recordset.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)
