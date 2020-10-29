---
title: Creazione di un consumer semplice
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB consumers, creating
ms.assetid: ae32d657-72ea-4db8-9839-75cb5cff68ae
ms.openlocfilehash: 651c50c387f433c7db1ca007482c4b0a1b011f1a
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919163"
---
# <a name="creating-a-simple-consumer"></a>Creazione di un consumer semplice

::: moniker range="msvc-160"

La Creazione guidata consumer OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile aggiungere la funzionalità manualmente. Per altre informazioni, vedere [Creazione di un consumer senza utilizzare una procedura guidata](creating-a-consumer-without-using-a-wizard.md).

::: moniker-end

::: moniker range="<=msvc-150"

Usare la **Creazione guidata progetto ATL** e la **Creazione guidata Consumer OLE DB ATL** per generare un consumer di modelli OLE DB.

## <a name="to-create-a-console-application-for-an-ole-db-consumer"></a>Per crea un'applicazione console per un consumer OLE DB

1. Scegliere **Nuovo** dal menu **File** , quindi fare clic su **Progetto** .

   Verrà visualizzata la finestra di dialogo **Nuovo progetto** .

1. Nel riquadro **Tipi di progetto** fare clic sulla cartella **Installati** > **Visual C++** > **Desktop di Windows** e quindi fare clic sull'icona **Creazione guidata applicazione desktop di Windows** nel riquadro **Modelli** . Nella casella **Nome** immettere il nome del progetto, ad esempio *MyCons* .

1. Fare clic su **OK** .

   Viene avviata la **Creazione guidata applicazione desktop di Windows** .

1. Nella pagina **Impostazioni applicazione** selezionare **Applicazione console** e quindi **Aggiungi file di intestazione comune per ATL** .

1. Fare clic su **OK** per chiudere la procedura guidata e generare il progetto.

Usare quindi la **Creazione guidata Consumer OLE DB ATL** per aggiungere un oggetto consumer OLE DB.

## <a name="to-create-a-consumer-with-the-atl-ole-db-consumer-wizard"></a>Per creare un consumer con la Creazione guidata consumer OLE DB ATL

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul `MyCons` progetto.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Nuovo elemento** .

   Verrà visualizzata la finestra di dialogo **Aggiungi nuovo elemento** .

1. Nel riquadro **Categorie** fare clic su **Installati** > **Visual C++** > **ATL** , fare clic sull'icona **Consumer OLE DB ATL** nel riquadro **Modelli** e quindi fare clic su **Aggiungi** .

   Viene avviata la **Creazione guidata consumer OLE DB ATL** .

1. Fare clic sul pulsante **Origine dati** .

   Viene visualizzata la finestra di dialogo **Proprietà di Data Link** .

1. Nella finestra di dialogo **Proprietà di Data Link** eseguire le operazioni seguenti:

   1. Nella scheda **Provider** specificare un provider OLE DB.

   1. Nella scheda **Connessione** specificare le informazioni necessarie, ad esempio il nome del server, l'ID di accesso e la password per l'origine dati e il database nel server.

      > [!NOTE]
      > Esiste un problema di sicurezza relativo alla funzionalità **Consenti salvataggio password** della finestra di dialogo **Proprietà di Data Link** . In **immettere le informazioni per l'accesso al server** sono disponibili due pulsanti di opzione: **Usa la sicurezza integrata di Windows NT** e **Usa un nome utente e una password specifici** .

      > [!NOTE]
      > Se si seleziona **Utilizza nome utente e password specifici** , è possibile scegliere di salvare la password (usando la casella di controllo **Consenti salvataggio password** ), ma questa opzione non è sicura. È consigliabile selezionare **Usa sicurezza integrata di Windows NT** : questa opzione usa Windows NT per verificare l'identità dell'utente.

      > [!NOTE]
      > Se non è possibile ricorrere alla sicurezza integrata di Windows NT, è consigliabile usare un'applicazione di livello intermedio per richiedere all'utente la password o per archiviare la password in un percorso con meccanismi di sicurezza per consentirne la protezione (invece che nel codice sorgente).

   1. Dopo aver selezionato il provider e altre impostazioni, fare clic su **Test connessione** per verificare le selezioni effettuate nelle pagine precedenti della finestra di dialogo. Se la casella **Risultati** indica `Test connection succeeded`, fare clic su **OK** per creare il collegamento dati.

   Verrà visualizzata la finestra di dialogo **Seleziona oggetto di database** .

1. Usare il controllo albero per selezionare una tabella, una visualizzazione o una stored procedure. Per questo esempio, selezionare la tabella `Products` dal database `Northwind`.

1. Fare clic su **OK** . Viene visualizzata di nuovo la **Creazione guidata consumer OLE DB ATL** .

1. La procedura guidata immette i nomi per `Class` e **File con estensione h** in base al nome della tabella, della visualizzazione o della stored procedure selezionata. È possibile modificare questi nomi se lo si desidera.

1. Deselezionare la casella di controllo **Con attributi** in modo che la procedura guidata crei il codice del consumer tramite [classi di modelli OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) invece degli [attributi del consumer OLE DB](../../windows/attributes/ole-db-consumer-attributes.md) predefiniti.

1. In **Tipo** selezionare **Comando** .

   La procedura guidata crea un consumer basato su [CCommand](../../data/oledb/ccommand-class.md) se si seleziona **Comando** o un consumer basato su [CTable](../../data/oledb/ctable-class.md) se si seleziona **Tabella** . La classe di tabella o di comando viene denominata in base all'oggetto selezionato, ma è possibile modificare il nome.

1. In **Supporto** lasciare deselezionate le caselle **Cambia** , **Inserisci** ed **Elimina** .

   Selezionare le caselle di controllo **Cambia** , **Inserisci** ed **Elimina** per supportare la modifica, l'inserimento e l'eliminazione di record nel set di righe. Per altre informazioni sulla scrittura di dati nell'archivio dati, vedere [Aggiornamento dei set di righe](../../data/oledb/updating-rowsets.md).

1. Fare clic su **Fine** per creare il consumer.

La procedura guidata genera una classe di comando e una classe di record utente, come mostrato in [Classi generate mediante la Creazione guidata consumer](../../data/oledb/consumer-wizard-generated-classes.md). Il nome della classe di comando sarà quello immesso nella casella `Class` nella procedura guidata (in questo caso `CProducts`), mentre il nome della classe di record utente avrà il formato " *NomeClasse* Accessor" (in questo caso `CProductsAccessor`).

> [!NOTE]
> La procedura guidata inserisce la riga seguente in `Products.h`:

```cpp
#error Security Issue: The connection string may contain a password
```

> [!NOTE]
> Questa riga impedisce la compilazione dell'applicazione consumer e ricorda di controllare la stringa di connessione per individuare le password impostate come hardcoded. Dopo avere controllato la stringa di connessione, è possibile rimuovere questa riga di codice.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Creazione di un consumer di OLE DB tramite una procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)
