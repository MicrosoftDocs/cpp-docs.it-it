---
title: Creazione guidata consumer ODBC MFC (C++)
ms.date: 08/29/2019
helpviewer_keywords:
- wizards [MFC]
ms.assetid: f64a890b-a252-4887-88a1-782a7cd4ff3d
ms.openlocfilehash: fd7e8df6692889914af2dd060ac42ed4ca3ebb8b
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446434"
---
# <a name="mfc-odbc-consumer-wizard"></a>Creazione guidata consumer ODBC MFC (C++)

::: moniker range="vs-2019"

Questa procedura guidata non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

Questa procedura guidata configura una classe recordset ODBC e le associazioni dati necessarie per accedere all'origine dati specificata.

## <a name="uielement-list"></a>Elenco degli elementi di interfaccia

- **Origine dati**

  Il pulsante **origine dati** consente di configurare l'origine dati specificata utilizzando il driver ODBC specificato. Per ulteriori informazioni sui file di origine dati (DSN), vedere [origini dati file](/sql/odbc/reference/file-data-sources) in ODBC SDK.

  Nella finestra di dialogo **Seleziona origine dati sono disponibili** due schede:

  - Scheda **origine dati file** :

     Nella casella **Cerca in** viene specificata la directory in cui selezionare i file da utilizzare come origini dati. Il valore predefinito è \Programmi\file Comuni\odbc\data sources. Le origini dati dei file esistenti (file con estensione DSN) vengono visualizzate nella casella di riepilogo principale. È possibile configurare le origini dati in anticipo utilizzando la scheda **DSN file** di [Amministrazione origine dati ODBC](/sql/odbc/admin/odbc-data-source-administrator)o crearne di nuove utilizzando questa finestra di dialogo.

     Per creare una nuova origine dati file da questa finestra di dialogo, fare clic su `New` per specificare un nome DSN; verrà visualizzata la finestra di dialogo **Crea nuova origine dati** . Nella finestra di dialogo **Crea nuova origine dati** selezionare un driver appropriato e fare clic su `Next`; fare clic su **Sfoglia**e selezionare il nome del file da utilizzare come origine dati. è necessario selezionare "tutti i file" per visualizzare i file non DSN, ad esempio i file con estensione xls. fare clic su `Next`, quindi fare clic su **fine**. Se è stato selezionato un file non DSN, viene visualizzata una finestra di dialogo specifica del driver, ad esempio "installazione ODBC di Microsoft Excel", che converte il file in un DSN.

     > [!NOTE]
     > È inoltre possibile creare una nuova origine dati di file in anticipo utilizzando Amministrazione origine dati ODBC. Dal menu **Start** selezionare **Impostazioni**, pannello di **controllo**, **strumenti di amministrazione**, **origini dati (ODBC)** , quindi **Amministrazione origine dati ODBC**.

     La casella **nome DSN** consente di specificare un nome per l'origine dati del file. È necessario assicurarsi che il nome DSN termini con l'estensione di file appropriata, ad esempio xls per i file di Excel o mdb per i file di Access.

     Per ulteriori informazioni sui DSN, vedere [file Data Sources](/sql/odbc/reference/file-data-sources) in ODBC SDK.

  - Scheda **origine dati computer** :

     Questa scheda elenca le origini dati del sistema e dell'utente. Le origini dati utente sono specifiche di un utente di questo computer. Le origini dati di sistema possono essere usate da tutti gli utenti in questo computer o in un servizio a livello. Vedere [origini dati del computer](/sql/odbc/reference/machine-data-sources) in ODBC SDK

     Per ulteriori informazioni sulle origini dati ODBC, vedere [origini dati](/sql/odbc/reference/data-sources) in ODBC SDK.

  Al termine, fare clic su **OK** . Verrà visualizzata la finestra di dialogo **Seleziona oggetto di database**. Da questa finestra di dialogo selezionare la tabella o la vista che verrà utilizzata dal consumer. Si noti che è possibile selezionare più viste e tabelle tenendo premuto il tasto CTRL mentre si fa clic sugli elementi. Al termine, fare clic su **OK** .

- **Class**

   Nome della classe consumer, basato per impostazione predefinita sul nome del file o dell'origine dati del computer selezionato.

- **File con estensione h**

   Nome del file di intestazione della classe consumer, basato per impostazione predefinita sul nome del file o dell'origine dati del computer selezionato.

- **File con estensione cpp**

   Nome del file di implementazione della classe consumer, basato per impostazione predefinita sul nome del file o dell'origine dati del computer selezionato.

- **Tipo**

   Specifica se il recordset è di un dynaset (impostazione predefinita) o di uno snapshot.

   - **Dynaset**: specifica che il recordset è un dynaset. Un dynaset è il risultato di una query che fornisce una vista indicizzata nei dati del database sottoposto a query. Un dynaset memorizza nella cache solo un indice integrale per i dati originali e pertanto offre un miglioramento delle prestazioni in uno snapshot. L'indice punta direttamente a ogni record trovato come risultato di una query e indica se un record viene rimosso. È anche possibile accedere alle informazioni aggiornate nei record sottoposti a query. Questa è la modalità predefinita.

   - **Snapshot**: specifica che il recordset è uno snapshot. Uno snapshot è il risultato di una query ed è una visualizzazione di un database in un determinato momento. Tutti i record trovati come risultato della query vengono memorizzati nella cache, pertanto non vengono visualizzate modifiche ai record originali.

- **Associa tutte le colonne**

   Specifica se sono associate tutte le colonne della tabella selezionata. Se si seleziona questa casella (impostazione predefinita), vengono associate tutte le colonne; Se non si seleziona questa casella, nessuna colonna viene associata ed è necessario associarle manualmente nella classe recordset.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)
