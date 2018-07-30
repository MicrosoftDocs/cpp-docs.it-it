---
title: Creazione di un Consumer semplice | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: e9f7c5a51765e2ce29df503aeefa9f850b71b1d4
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39339854"
---
# <a name="creating-a-simple-consumer"></a>Creazione di un consumer semplice
Usare la creazione guidata progetto ATL e creazione guidata Consumer OLE DB ATL per generare un consumer di modelli OLE DB.  
  
### <a name="to-create-a-console-application-for-an-ole-db-consumer"></a>Per creare un'applicazione console per un consumer OLE DB  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
     Verrà visualizzata la finestra di dialogo **Nuovo progetto** .  
  
2.  Nel riquadro di tipi di progetto, scegliere il **i progetti Visual C++** cartella e quindi fare clic sulla **progetto Win32** icona nel riquadro dei modelli. Nel **Name** immettere il nome del progetto, ad esempio **MyCons**.  
  
3.  Fare clic su **OK**.  
  
     Viene visualizzata la creazione guidata progetto Win32.  
  
4.  Nel **le impostazioni dell'applicazione** pagina, selezionare **applicazione Console**e quindi selezionare **aggiungere il supporto per ATL**.  
  
5.  Fare clic su **fine** per chiudere la procedura guidata e generare il progetto.  
  
 Successivamente, utilizzare la creazione guidata Consumer OLE DB ATL per aggiungere un oggetto del consumer OLE DB.  
  
#### <a name="to-create-a-consumer-with-the-atl-ole-db-consumer-wizard"></a>Per creare un consumer con la creazione guidata Consumer OLE DB ATL  
  
1.  In visualizzazione classi, fare doppio clic il `MyCons` progetto.  
  
2.  Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **Aggiungi classe**.  
  
     Il **Aggiungi classe** verrà visualizzata la finestra di dialogo.  
  
3.  Nel riquadro delle categorie fare clic su **Visual C++**, fare clic sui **Consumer OLE DB ATL** icona nel riquadro Modelli e quindi fare clic su **Open**.  
  
     Viene visualizzata la creazione guidata Consumer OLE DB ATL.  
  
4.  Scegliere il **Zdroj dat** pulsante.  
  
     Il **proprietà di Data Link** verrà visualizzata la finestra di dialogo.  
  
5.  Nel **proprietà di Data Link** dialogo casella, eseguire le operazioni seguenti:  
  
    -   Nel **Provider** scheda, specificare un provider OLE DB.  
  
    -   Nel **connessione** , specificare il nome del server, l'ID di accesso e password per l'origine dati e il database nel server.  
  
    > [!NOTE]
    >  Si verifica un problema di sicurezza con il **per il salvataggio della password** funzionalità delle **proprietà di Data Link** nella finestra di dialogo. Nelle **immettere le informazioni per l'accesso al server**, sono presenti due pulsanti di opzione: **Usa Windows protezione integrata NT** e **usare un nome utente specifico e una password**.  
  
    > [!NOTE]
    >  Se si seleziona **usare un nome utente specifico e una password**, è possibile scegliere di salvare la password (usando la **Consenti salvataggio password** casella di controllo), tuttavia, questa opzione non è sicura. Si consiglia di selezionare **utilizza Windows protezione integrata NT**; questa opzione utilizza Windows NT per verificare la tua identità.  
  
    > [!NOTE]
    >  Se non è possibile utilizzare la sicurezza integrata di Windows NT, è consigliabile usare un'applicazione di livello intermedio per richiedere all'utente la password o per archiviare la password in un percorso con meccanismi di sicurezza per consentirne la protezione (invece che nel codice sorgente).  
  
     Dopo aver selezionato il provider e altre impostazioni, fare clic su **Test connessione** per verificare le selezioni effettuate nelle pagine precedenti della finestra di dialogo. Se il **risultati** casella reports `Test connection succeeded`, fare clic su **OK** per creare il collegamento di dati.  
  
     Il **Seleziona oggetto di Database** verrà visualizzata la finestra di dialogo.  
  
6.  Usare il controllo albero per selezionare una tabella, vista o stored procedure. Ai fini di questa procedura, selezionare la tabella Products del database Northwind.  
  
7.  Fare clic su **OK**. Verrà visualizzata nuovamente la creazione guidata Consumer OLE DB ATL.  
  
8.  I nomi di termine della procedura guidata `Class` e **file con estensione h** in base al nome della tabella, vista o una stored procedure che è stato selezionato. Se si desidera, è possibile modificare questi nomi.  
  
9. Cancella il **con attributi** casella di controllo in modo che la procedura guidata crea il codice di consumer usando [classi di modelli OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) anziché il valore predefinito [attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md).  
  
10. Sotto **tipo**, selezionare **comando**.  
  
     La procedura guidata crea una [CCommand](../../data/oledb/ccommand-class.md)-basati su consumer, se si seleziona **comando** o un [CTable](../../data/oledb/ctable-class.md)-basati su consumer, se si seleziona **tabella**. La classe di tabella o un comando è denominata dopo l'oggetto selezionato, ma è possibile modificare il nome.  
  
11. Sotto **supporto**, lasciare il **modifica**, **Inserisci**, e **Elimina** deselezionate le caselle.  
  
     Selezionare il **Change**, **Inserisci**, e **Elimina** caselle di controllo per supportare la modifica, inserimento ed eliminazione di record nel set di righe, se necessario. Per altre informazioni sulla scrittura di dati per i dati dell'archivio, vedere [aggiornamento dei rowset](../../data/oledb/updating-rowsets.md).  
  
12. Fare clic su **fine** per creare i consumer.  
  
 La procedura guidata genera una classe di comando e una classe di record utente, come illustrato nella [classi riguardano](../../data/oledb/consumer-wizard-generated-classes.md). La classe di comando assumerà il nome immesso nel `Class` finestra della procedura guidata (in questo caso, `CProducts`), e la classe di record utente avrà un nome nel formato "*NomeClasse*della funzione di accesso" (in questo caso, `CProductsAccessor`).  
  
> [!NOTE]
>  La procedura guidata inserisce la riga seguente in Products. h:  
  
```cpp  
#error Security Issue: The connection string may contain a password  
```  
  
> [!NOTE]
>  Questa riga impedisce all'applicazione consumer la compilazione e ricordarsi di controllare la stringa di connessione per le password impostate come hardcoded. Dopo avere verificato la stringa di connessione, è possibile rimuovere questa riga di codice.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un consumer OLE DB tramite la procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)