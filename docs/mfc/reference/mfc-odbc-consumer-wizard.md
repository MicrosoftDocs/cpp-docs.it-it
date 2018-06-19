---
title: Creazione guidata Consumer ODBC MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.codewiz.class.mfc.consumer.overview
dev_langs:
- C++
helpviewer_keywords:
- MFC ODBC Consumer Wizard
- wizards [MFC]
ms.assetid: f64a890b-a252-4887-88a1-782a7cd4ff3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c8a707df6878cd0031cb2ec9b06285e568503992
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33371424"
---
# <a name="mfc-odbc-consumer-wizard"></a>Creazione guidata consumer ODBC MFC (C++)
Inserire qui "Riepilogo risultati di ricerca".  
  
 Questa procedura guidata per impostare una classe recordset ODBC e le associazioni dati necessaria per accedere all'origine dati specificata.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Origine dati**  
 Il **origine dati** pulsante consente di impostare l'origine dati specificata tramite il driver ODBC specificato. Per ulteriori informazioni sui file di origine dati (DSN), vedere [origini dati dei File](https://msdn.microsoft.com/library/ms715401.aspx) nel SDK di ODBC. Il **Seleziona origine dati** la finestra di dialogo è disponibili due schede:  
  
-   **File di origine dati** scheda: il **Cerca in** finestra consente di specificare la directory in cui si desidera selezionare i file da utilizzare come origini dati. Il valore predefinito è \Programmi\File Files\ODBC\Data Sources. Le origini di dati di file esistente (file DSN) vengono visualizzati nella casella di riepilogo principale. È possibile impostare le origini dati preventivamente utilizzando il **DSN su File** scheda la [Amministrazione origine dati ODBC](https://msdn.microsoft.com/library/ms714024.aspx), oppure creare nuove utilizzando questa finestra di dialogo.  
  
     Per creare una nuova origine dati di file da questa finestra di dialogo, fare clic su `New` per specificare un nome DSN; il **Crea nuova origine dati** viene visualizzata la finestra di dialogo. Nel **Crea nuova origine dati** finestra di dialogo, selezionare un driver appropriato e fare clic su `Next`; fare clic su **Sfoglia**e selezionare il nome del file da utilizzare come origine dati (è necessario selezionare "Tutti i file" per visualizzazione non DSN file, ad esempio file con estensione xls). Fare clic su `Next`, quindi fare clic su **fine**. (Se si seleziona un file non DSN, si otterrà una casella di dialogo specifiche del driver, ad esempio "Configurazione ODBC per Microsoft Excel," che il file verrà convertito in un DSN.)  
  
    > [!NOTE]
    >  È anche possibile creare una nuova origine dati file prima di utilizzare Amministrazione origine dati ODBC. Dal **avviare** dal menu **impostazioni**, **Pannello di controllo**, **strumenti di amministrazione**, **origini dati (ODBC)** e quindi **Amministrazione origine dati ODBC**.  
  
     Il **nome DSN** casella consente di specificare un nome per l'origine dati file. È necessario assicurarsi che il nome DSN termina con l'estensione di file appropriato, ad esempio con estensione xls per i file di Excel o mdb per accedere ai file.  
  
     Per ulteriori informazioni sul DSN, vedere [origini dati dei File](https://msdn.microsoft.com/library/ms715401.aspx) nel SDK di ODBC.  
  
-   **Origine dati computer** scheda: questa scheda sono elencate origini di sistema e dati utente. Origini dati utente sono specifiche di un utente in questo computer. Origini dati di sistema utilizzabile da tutti gli utenti del computer o in un servizio a livello di sistema. Vedere [origini dati del computer](https://msdn.microsoft.com/library/ms710952.aspx) nel SDK di ODBC  
  
 Per ulteriori informazioni sulle origini dati ODBC, vedere [origini dati](https://msdn.microsoft.com/library/ms711688.aspx) nel SDK di ODBC.  
  
 Fare clic su **OK** completamento. Il **Seleziona oggetto di Database** viene visualizzata la finestra di dialogo. Da questa finestra di dialogo, selezionare la tabella o visualizzazione che verranno utilizzate dal consumer. Si noti che è possibile selezionare più tabelle e viste tenendo premuto il tasto CTRL mentre si fa clic sugli elementi.  
  
 **Classe**  
 Il nome della classe consumer, in base al nome dell'origine dati macchina o di file che è stata selezionata per impostazione predefinita.  
  
 **file con estensione h**  
 Il nome del file di intestazione di classe consumer, in base al nome dell'origine dati macchina o di file che è stata selezionata per impostazione predefinita.  
  
 **file con estensione cpp**  
 Il nome del file di implementazione di classe consumer, in base al nome dell'origine dati macchina o di file che è stata selezionata per impostazione predefinita.  
  
 **Type**  
 Specifica se il recordset è un dynaset (impostazione predefinita) o uno snapshot.  
  
-   **Dynaset**: Specifica che il recordset è un dynaset. Un dynaset è il risultato di una query che fornisce una vista indicizzata nei dati del database sottoposto a query. Un memorizza nella cache solo un indice integrale ai dati originali e offre prestazioni assumere su uno snapshot. L'indice fa riferimento direttamente a ogni record ottenuti come risultato di una query e indica se un record viene rimosso. È possibile accedere alle informazioni aggiornate nei record di query. Questa è l'impostazione predefinita.  
  
-   **Snapshot**: Specifica che il recordset è uno snapshot. Uno snapshot è il risultato di una query e costituisce una vista di un database in un determinato punto nel tempo. Tutti i record ottenuti come risultato della query vengono memorizzati nella cache, in modo che non tutte le modifiche ai record originale.  
  
 **Associare tutte le colonne**  
 Specifica se tutte le colonne della tabella selezionata sono associate. Se si seleziona questa casella (impostazione predefinita), tutte le colonne sono associate. Se non si seleziona questa casella, viene associata alcuna colonna e necessario associare manualmente nella classe recordset.  
  
## <a name="see-also"></a>Vedere anche  
 [Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)

