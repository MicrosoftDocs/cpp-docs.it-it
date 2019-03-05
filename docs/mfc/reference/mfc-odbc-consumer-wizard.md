---
title: Creazione guidata consumer ODBC MFC (C++)
ms.date: 10/03/2018
f1_keywords:
- vc.codewiz.class.mfc.consumer.overview
helpviewer_keywords:
- MFC ODBC Consumer Wizard
- wizards [MFC]
ms.assetid: f64a890b-a252-4887-88a1-782a7cd4ff3d
ms.openlocfilehash: 75d62eb5ce3d24322d7af5030fb8d723ffa8fedb
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57259932"
---
# <a name="mfc-odbc-consumer-wizard"></a>Creazione guidata consumer ODBC MFC (C++)

> [!WARNING]
> In Visual Studio 2017 versione 15.9 questa procedura guidata del codice è deprecata e verrà rimossa in una versione futura di Visual Studio. Questa procedura guidata viene usata raramente. Il supporto generale per ATL e MFC non subisce attualmente l'effetto della rimozione di questa procedura guidata. Se vuoi condividere i tuoi commenti e suggerimenti su questa deprecazione, compila il [presente sondaggio](https://www.surveymonkey.com/r/QDWKKCN). I tuoi commenti e suggerimenti sono importanti per noi.

Questa procedura guidata per impostare una classe recordset ODBC e le associazioni di dati necessaria per accedere all'origine dati specificata.

## <a name="uielement-list"></a>Elenco UIElement

- **Origine dati**

  Il **Zdroj dat** pulsante configurare l'origine dati specificata tramite il driver ODBC specificato. Per altre informazioni sui file di origine dati (DSN), vedere [origini dati dei File](/previous-versions/windows/desktop/ms715401) nel SDK di ODBC.

  Il **selezionare un'origine dati** nella finestra di dialogo è disponibili due schede:

  - **Origine dati file** scheda:

     Il **Cerca in** finestra specifica la directory in cui si desidera selezionare i file da utilizzare come origini dati. Il valore predefinito è \Programmi\Common Files\ODBC\Data Sources. Le origini di dati di file esistente (file DSN) vengono visualizzati nella casella di riepilogo principale. È possibile impostare le origini dati in anticipo usando il **DSN su File** scheda le [Amministrazione origine dati ODBC](/previous-versions/windows/desktop/ms714024), o crearne uno nuovo tramite questa finestra di dialogo.

     Per creare una nuova origine dati file dalla finestra di dialogo, fare clic su `New` per specificare un nome DSN; la **Crea nuova origine dati** verrà visualizzata la finestra di dialogo. Nel **Crea nuova origine dati** finestra di dialogo, selezionare un driver appropriato e scegliere `Next`; fare clic su **Sfoglia**e selezionare il nome del file da utilizzare come origine dati (è necessario selezionare "Tutti i file" per visualizzazione non DSN file, ad esempio file con estensione xls). Fare clic su `Next`, quindi fare clic su **fine**. (Se si seleziona un file non DSN, si otterrà una finestra di dialogo specifiche del driver, ad esempio "Configurazione ODBC per Microsoft Excel," che convertirà il file in un DSN.)

     > [!NOTE]
     > È anche possibile creare una nuova origine dati file in anticipo tramite Amministrazione origine dati ODBC. Dal **avviare** dal menu **impostazioni**, **Pannello di controllo**, **strumenti di amministrazione**, **origine dati (ODBC)** e quindi **Amministrazione origine dati ODBC**.

     Il **nome DSN** consente di specificare un nome per l'origine dati di file. È necessario assicurarsi che il nome DSN termina con l'estensione di file appropriato, ad esempio file con estensione xls per i file di Excel o file con estensione mdb per accedere ai file.

     Per altre informazioni sul DSN, vedere [origini dati dei File](/previous-versions/windows/desktop/ms715401) nel SDK di ODBC.

  - **Origine dati del computer** scheda:

     Questa scheda sono elencate origini di sistema e dati utente. Le origini dati utente sono specifiche di un utente in questo computer. Origini dati di sistema sono utilizzabile da tutti gli utenti in questo computer o su un servizio a livello di sistema. Visualizzare [Machine Zdroje dat](/previous-versions/windows/desktop/ms710952) nel SDK di ODBC

     Per altre informazioni sulle origini dati ODBC, vedere [Zdroje dat](/previous-versions/windows/desktop/ms711688) nel SDK di ODBC.

  Fare clic su **OK** alla fine. Il **Seleziona oggetto di Database** verrà visualizzata la finestra di dialogo. Da questa finestra di dialogo, selezionare la tabella o vista che verranno utilizzate dal consumer. Si noti che è possibile selezionare più tabelle e viste tenendo premuto il tasto CTRL mentre si fa clic sugli elementi. Fare clic su **OK** alla fine.

- **Classe**

      The name of the consumer class, based by default on the name of the file or machine data source that you selected.

- **File con estensione h**

   Il nome del file di intestazione classe consumer, per impostazione predefinita in base al nome dell'origine dati file o computer selezionato.

- **File con estensione cpp**

   Il nome del file di implementazione classe consumer, per impostazione predefinita in base al nome dell'origine dati file o computer selezionato.

- **Type**

   Specifica se il recordset è dynaset (impostazione predefinita) o uno snapshot.

   - **Dynaset**: Specifica che il recordset è di tipo snapshot. Tipo snapshot è il risultato di una query che fornisce una vista indicizzata nei dati del database sottoposto a query. Un memorizza nella cache solo un indice integrale per i dati originali e ottenere pertanto offre un prestazioni su uno snapshot. L'indice fa riferimento direttamente a ogni record trovato come risultato di una query e indica se un record viene rimosso. È possibile accedere a informazioni aggiornate nei record sottoposto a query. Questa è l'impostazione predefinita.

   - **Snapshot**: Specifica che il recordset è uno snapshot. Uno snapshot è il risultato di una query ed è una vista in un database a un certo punto nel tempo. Tutti i record trovati come risultato della query vengono memorizzati nella cache, in modo che tutte le modifiche ai record originale non viene visualizzata.

- **Associare tutte le colonne**

   Specifica se sono associate tutte le colonne della tabella selezionata. Se si seleziona questa casella (impostazione predefinita), tutte le colonne sono associate. Se non si seleziona questa casella, viene associata alcuna colonna, e necessario associare manualmente nella classe recordset.

## <a name="see-also"></a>Vedere anche

[Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)
