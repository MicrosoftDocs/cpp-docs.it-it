---
title: Creazione di un Consumer semplice | Microsoft Docs
ms.custom: ''
ms.date: 10/09/2018
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB consumers, creating
ms.assetid: ae32d657-72ea-4db8-9839-75cb5cff68ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 85efb2a1d699914c6d7ffb1fd079a38be70f0b52
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49163842"
---
# <a name="creating-a-simple-consumer"></a>Creazione di un consumer semplice

Usare la creazione guidata progetto ATL e creazione guidata Consumer OLE DB ATL per generare un consumer di modelli OLE DB.

## <a name="to-create-a-console-application-for-an-ole-db-consumer"></a>Per creare un'applicazione console per un consumer OLE DB

1. Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.

   Verrà visualizzata la finestra di dialogo **Nuovo progetto** .

1. Nel **tipi di progetto** riquadro, fare clic sul **installato** > **modelli** > **Visual C++** cartella e quindi fare clic sui **applicazione Console Win32** icona nel **modelli** riquadro. Nel **Name** immettere il nome del progetto, ad esempio *MyCons*.

1. Fare clic su **OK**.

   Viene visualizzata la creazione guidata applicazione Win32.

1. Nel **Application Settings** pagina, selezionare **applicazione Console**e quindi selezionare **aggiungere file di intestazione comuni per ATL**.

1. Fare clic su **fine** per chiudere la procedura guidata e generare il progetto.

Successivamente, utilizzare la creazione guidata Consumer OLE DB ATL per aggiungere un oggetto del consumer OLE DB.

## <a name="to-create-a-consumer-with-the-atl-ole-db-consumer-wizard"></a>Per creare un consumer con la creazione guidata Consumer OLE DB ATL

1. Nelle **Esplora soluzioni**, fare doppio clic su di `MyCons` progetto.

1. Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **classe**.

   Il **Aggiungi classe** verrà visualizzata la finestra di dialogo.

1. Nel **categorie** riquadro, fare clic su **installati** > **Visual C++** > **ATL**, fare clic su di **Consumer OLEDB ATL** icona nel **modelli** riquadro e quindi fare clic su **Add**.

   Viene visualizzata la creazione guidata Consumer OLE DB ATL.

1. Scegliere il **Zdroj dat** pulsante.

   Il **proprietà di Data Link** verrà visualizzata la finestra di dialogo.

1. Nel **proprietà di Data Link** dialogo casella, eseguire le operazioni seguenti:

   - Nel **Provider** scheda, specificare un provider OLE DB.

   - Nel **connessione** , specificare le informazioni necessarie, ad esempio nome del server, l'ID di accesso e password per l'origine dati e il database nel server.

   > [!NOTE]
   > Si verifica un problema di sicurezza con il **Consenti salvataggio password** funzionalità delle **proprietà di Data Link** nella finestra di dialogo. Nelle **immettere le informazioni per l'accesso al server**, sono presenti due pulsanti di opzione: **Usa Windows protezione integrata NT** e **usare un nome utente specifico e una password**.

   > [!NOTE]
   > Se si seleziona **usare un nome utente specifico e una password**, è possibile scegliere di salvare la password (usando la **Consenti salvataggio password** casella di controllo), tuttavia, questa opzione non è sicura. Si consiglia di selezionare **utilizza Windows protezione integrata NT**; questa opzione utilizza Windows NT per verificare la tua identità.

   > [!NOTE]
   > Se non è possibile utilizzare la sicurezza integrata di Windows NT, è consigliabile usare un'applicazione di livello intermedio per richiedere all'utente la password o per archiviare la password in un percorso con meccanismi di sicurezza per consentirne la protezione (invece che nel codice sorgente).

   Dopo aver selezionato il provider e altre impostazioni, fare clic su **Test connessione** per verificare le selezioni effettuate nelle pagine precedenti della finestra di dialogo. Se il **risultati** casella reports `Test connection succeeded`, fare clic su **OK** per creare il collegamento di dati.

   Il **Seleziona oggetto di Database** verrà visualizzata la finestra di dialogo.

1. Usare il controllo albero per selezionare una tabella, vista o stored procedure. Ai fini di questa procedura, selezionare la `Products` dalla tabella di `Northwind` database.

1. Fare clic su **OK**. Verrà visualizzata nuovamente la creazione guidata Consumer OLE DB ATL.

1. I nomi di termine della procedura guidata `Class` e **file con estensione h** in base al nome della tabella, vista o una stored procedure che è stato selezionato. Se si desidera, è possibile modificare questi nomi.

1. Cancella il **con attributi** casella di controllo in modo che la procedura guidata crea il codice di consumer usando [classi di modelli OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) anziché il valore predefinito [attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md).

1. Sotto **tipo**, selezionare **comando**.

   La procedura guidata crea una [CCommand](../../data/oledb/ccommand-class.md)-basati su consumer, se si seleziona **comando** o un [CTable](../../data/oledb/ctable-class.md)-basati su consumer, se si seleziona **tabella**. La classe di tabella o un comando è denominata dopo l'oggetto selezionato, ma è possibile modificare il nome.

1. Sotto **supporto**, lasciare il **modifica**, **Inserisci**, e **Elimina** deselezionate le caselle.

   Selezionare il **Change**, **Inserisci**, e **Elimina** caselle di controllo per supportare la modifica, inserimento ed eliminazione di record nel set di righe, se necessario. Per altre informazioni sulla scrittura di dati per i dati dell'archivio, vedere [aggiornamento dei rowset](../../data/oledb/updating-rowsets.md).

1. Fare clic su **fine** per creare i consumer.

La procedura guidata genera una classe di comando e una classe di record utente, come illustrato nella [classi riguardano](../../data/oledb/consumer-wizard-generated-classes.md). La classe di comando assumerà il nome immesso nel `Class` finestra della procedura guidata (in questo caso, `CProducts`), e la classe di record utente avrà un nome nel formato "*NomeClasse*della funzione di accesso" (in questo caso, `CProductsAccessor`).

> [!NOTE]
> La procedura guidata inserisce la riga seguente in Products. h:

```cpp
#error Security Issue: The connection string may contain a password
```

> [!NOTE]
> Questa riga impedisce all'applicazione consumer la compilazione e ricordarsi di controllare la stringa di connessione per le password impostate come hardcoded. Dopo avere verificato la stringa di connessione, è possibile rimuovere questa riga di codice.

## <a name="see-also"></a>Vedere anche

[Creazione di un consumer OLE DB tramite la procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)
