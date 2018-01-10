---
title: Creazione di un Consumer semplice | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: OLE DB consumers, creating
ms.assetid: ae32d657-72ea-4db8-9839-75cb5cff68ae
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5febdc019f5e575f685e4e93c892b7f5e777b776
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-a-simple-consumer"></a>Creazione di un consumer semplice
Utilizzare la creazione guidata progetto ATL e la creazione guidata Consumer OLE DB ATL per generare un consumer di modelli OLE DB.  
  
#### <a name="to-create-a-console-application-for-an-ole-db-consumer"></a>Per creare un'applicazione console per un consumer OLE DB  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
     Verrà visualizzata la finestra di dialogo **Nuovo progetto** .  
  
2.  Nel riquadro Tipi progetto, fare clic su di **progetti Visual C++** cartella, quindi scegliere il **progetto Win32** icona nel riquadro dei modelli. Nel **nome** , immettere il nome del progetto, ad esempio, **MyCons**.  
  
3.  Fare clic su **OK**.  
  
     Verrà visualizzata la creazione guidata progetto Win32.  
  
4.  Nel **le impostazioni dell'applicazione** selezionare **applicazione Console**, quindi selezionare **aggiungere il supporto per ATL**.  
  
5.  Fare clic su **fine** per chiudere la procedura guidata e generare il progetto.  
  
 Successivamente, utilizzare la creazione guidata Consumer OLE DB ATL per aggiungere un oggetto del consumer OLE DB.  
  
#### <a name="to-create-a-consumer-with-the-atl-ole-db-consumer-wizard"></a>Per creare un consumer con la creazione guidata Consumer OLE DB ATL  
  
1.  In visualizzazione classi, fare doppio clic su di `MyCons` progetto.  
  
2.  Menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **Aggiungi classe**.  
  
     Il **Aggiungi classe** viene visualizzata la finestra di dialogo.  
  
3.  Nel riquadro delle categorie fare clic su **Visual C++**, fare clic su di **Consumer OLE DB ATL** icona nel riquadro Modelli e quindi fare clic su **aprire**.  
  
     Verrà visualizzata la creazione guidata Consumer OLE DB ATL.  
  
4.  Fare clic su di **origine dati** pulsante.  
  
     Il **proprietà di Data Link** viene visualizzata la finestra di dialogo.  
  
5.  Nel **proprietà di Data Link** finestra di dialogo casella, eseguire le operazioni seguenti:  
  
    -   Nel **Provider** scheda, specificare un provider OLE DB.  
  
    -   Nel **connessione** , specificare il nome del server, l'ID di accesso e password per l'origine dati e il database nel server.  
  
    > [!NOTE]
    >  Si verifica un problema di sicurezza con il **Consenti salvataggio password** funzionalità il **proprietà di Data Link** la finestra di dialogo. In **immettere informazioni per l'accesso al server**, sono disponibili due pulsanti di opzione: **la sicurezza integrata di Windows NT di utilizzare** e **Usa specifica di nome utente e password**.  
  
    > [!NOTE]
    >  Se si seleziona **Usa specifica di nome utente e password**, è possibile scegliere di salvare la password (utilizzando la **Consenti salvataggio password** casella di controllo), tuttavia, questa opzione non è sicura. Si consiglia di selezionare **la sicurezza integrata di Windows NT di utilizzare**; questa opzione utilizza Windows NT per verificare la tua identità.  
  
    > [!NOTE]
    >  Se non è possibile utilizzare la sicurezza integrata di Windows NT, è necessario utilizzare un'applicazione di livello intermedio per richiedere all'utente la password o per archiviare la password in un percorso con meccanismi di sicurezza per proteggere (anziché nel codice sorgente).  
  
     Dopo aver selezionato il provider e altre impostazioni, fare clic su **Test connessione** per verificare le selezioni effettuate nelle schede della finestra di dialogo precedente. Se il **risultati** casella report `Test connection succeeded`, fare clic su **OK** per creare il collegamento di dati.  
  
     Il **Seleziona oggetto di Database** viene visualizzata la finestra di dialogo.  
  
6.  Utilizzare il controllo struttura ad albero per selezionare una tabella, una vista o una stored procedure. Allo scopo di questa procedura, selezionare la tabella Products del database Northwind.  
  
7.  Fare clic su **OK**. Verrà visualizzata nuovamente la creazione guidata Consumer OLE DB ATL.  
  
8.  I nomi di termine della procedura guidata `Class` e **file con estensione h** in base al nome della tabella, vista o stored procedure che è stata selezionata. Se si desidera, è possibile modificare questi nomi.  
  
9. Cancella il **con attributi** casella di controllo in modo che la procedura guidata crea il codice consumer utilizzando [classi di modelli OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md) anziché il valore predefinito [attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md).  
  
10. In **tipo**selezionare **comando**.  
  
     La procedura guidata crea un [CCommand](../../data/oledb/ccommand-class.md)-basati su consumer, se si seleziona **comando** o [CTable](../../data/oledb/ctable-class.md)-basati su consumer, se si seleziona **tabella**. La tabella o un comando di classe è denominata dopo l'oggetto selezionato, ma è possibile modificare il nome.  
  
11. In **supporto**, lasciare il **modifica**, **inserire**, e **eliminare** deselezionate le caselle.  
  
     Selezionare il **modifica**, **inserire**, e **eliminare** caselle di controllo per supportare la modifica, inserimento ed eliminazione di record nel set di righe, se necessario. Per ulteriori informazioni sulla scrittura di dati ai dati archiviati, vedere [aggiornamento dei rowset](../../data/oledb/updating-rowsets.md).  
  
12. Fare clic su **fine** per creare il consumer.  
  
 La procedura guidata genera una classe di comando e una classe di record utente, come illustrato nella [classi generate](../../data/oledb/consumer-wizard-generated-classes.md). La classe di comando avrà il nome immesso nel `Class` casella nella procedura guidata (in questo caso, `CProducts`), e la classe di record utente avrà un nome nel formato "*ClassName*della funzione di accesso" (in questo caso, `CProductsAccessor`).  
  
> [!NOTE]
>  La procedura guidata inserisce la riga seguente in Products. h:  
  
```  
#error Security Issue: The connection string may contain a password  
```  
  
> [!NOTE]
>  Questa riga impedisce la compilazione dell'applicazione consumer e ricordarsi di controllare la stringa di connessione per le password hardcoded. Dopo avere verificato la stringa di connessione, è possibile rimuovere questa riga di codice.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un consumer OLE DB tramite la procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)