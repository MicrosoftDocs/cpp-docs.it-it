---
title: Aggiunta di un controllo (ATL esercitazione, parte 2) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
ms.assetid: c9575a75-1064-41f1-9697-7aada560c669
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: aed69a5dd421e967e1da33bb3a2f2c41fa80698d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-a-control-atl-tutorial-part-2"></a>Aggiunta di un controllo (Esercitazione di ATL, parte 2)
In questo passaggio, verrà di aggiungere un controllo al progetto, compilarlo ed eseguirne il test in una pagina Web.  
  
## <a name="procedures"></a>Procedure  
  
#### <a name="to-add-an-object-to-an-atl-project"></a>Per aggiungere un oggetto a un progetto ATL  
  
1.  In visualizzazione classi, fare clic sul progetto poligono.  
  
2.  Scegliere **Aggiungi** nel menu di scelta rapida e fare clic su **classe** nel sottomenu.  
  
     Il **Aggiungi classe** viene visualizzata la finestra di dialogo. Della struttura ad albero a sinistra, sono elencate le categorie di un oggetto diverso.  
  
3.  Fare clic su di **ATL** cartella.  
  
4.  Nell'elenco dei modelli a destra, selezionare **controllo ATL**. Fare clic su **Aggiungi**. Verrà aperta la creazione guidata controllo ATL, ed è possibile configurare il controllo.  
  
5.  Tipo `PolyCtl` come il nome breve e si noti che gli altri campi vengono completati automaticamente. Non fare clic **fine** ancora, poiché è necessario apportare alcune modifiche.  
  
 Del Creazione guidata controllo ATL **nomi** pagina contiene i campi seguenti:  
  
|Campo|Sommario|  
|-----------|--------------|  
|**Nome breve**|Il nome che immesso per il controllo.|  
|**Classe**|Il nome di classe C++ creato per implementare il controllo.|  
|**file con estensione h**|Il file creato per contenere la definizione della classe C++.|  
|**file con estensione cpp**|Il file creato per contenere l'implementazione della classe C++.|  
|**Coclasse**|Il nome della classe del componente per questo controllo.|  
|**Interface**|Il nome dell'interfaccia in cui il controllo implementerà relativi metodi e proprietà personalizzati.|  
|**Type**|Descrizione per il controllo.|  
|**ProgID**|Il nome leggibile che può essere usato per cercare il CLSID del controllo.|  
  
 È necessario apportare alcune impostazioni aggiuntive nella creazione guidata controllo ATL.  
  
#### <a name="to-enable-support-for-rich-error-information-and-connection-points"></a>Per abilitare il supporto per la connessione e informazioni dettagliate sull'errore punti  
  
1.  Fare clic su **opzioni** per aprire la **opzioni** pagina.  
  
2.  Selezionare il **punti di connessione** casella di controllo. Supporto per un'interfaccia in uscita verrà creata nel file IDL.  
  
 È anche possibile rendere il controllo inseribile, il che significa che può essere incorporato in applicazioni che supportano gli oggetti incorporati, ad esempio Excel o Word.  
  
#### <a name="to-make-the-control-insertable"></a>Per rendere il controllo inseribile  
  
1.  Fare clic su **aspetto** per aprire la **aspetto** pagina.  
  
2.  Selezionare il **inseribile** casella di controllo.  
  
 Il poligono visualizzato dall'oggetto avrà un colore di riempimento a tinta unita, pertanto è necessario aggiungere un `Fill Color` proprietà predefinite.  
  
#### <a name="to-add-a-fill-color-stock-property-and-create-the-control"></a>Per aggiungere una proprietà predefinita Fill Color e creare il controllo  
  
1.  Fare clic su **proprietà predefinite** per aprire la **proprietà predefinite** pagina.  
  
2.  In **non supportato**, scorrere verso il basso l'elenco delle proprietà predefinite disponibili. Fare doppio clic su `Fill Color` per spostare il **supportati** elenco.  
  
3.  Le opzioni per il controllo è stata completata. Scegliere **Fine**.  
  
 Come verrà creato il controllo, si è verificato più modifiche al codice e aggiunte di file. Sono stati creati i file seguenti:  
  
|File|Descrizione|  
|----------|-----------------|  
|PolyCtl. H|Contiene la maggior parte dell'implementazione della classe C++ `CPolyCtl`.|  
|PolyCtl|Contiene le parti restanti della `CPolyCtl`.|  
|PolyCtl.rgs|Un file di testo che contiene lo script del Registro di sistema utilizzato per registrare il controllo.|  
|PolyCtl|Una pagina Web contenente un riferimento al controllo appena creato.|  
  
 La procedura guidata vengono eseguite anche le modifiche al codice seguente:  
  
-   Aggiungere un `#include` istruzione file stdafx. h e stdafx.cpp per includere la libreria ATL file necessari per supportare i controlli.  
  
-   Polygon modificate per includere i dettagli del nuovo controllo.  
  
-   Aggiunto il nuovo controllo alla mappa oggetto Polygon.  
  
 Ora è possibile compilare il controllo per visualizzarlo nell'azione.  
  
## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo  
  
#### <a name="to-build-and-test-the-control"></a>Per compilare e testare il controllo  
  
1.  Nel **compilare** menu, fare clic su **Genera Polygon**.  
  
     Al termine della compilazione, il controllo fare doppio clic su PolyCtl in **Esplora** e selezionare **Visualizza nel Browser**. La pagina HTML Web che contiene il controllo è visualizzata. Verrà visualizzata una pagina con il titolo "Pagina di prova 8.0 ATL per oggetto PolyCtl" e il testo **PolyCtl**. Questo è il controllo.  
  
> [!NOTE]
>  Durante il completamento di questa esercitazione, se si riceve un messaggio di errore in cui non è possibile creare il file DLL, chiudere il file PolyCtl e ActiveX Control Test container e compilare di nuovo la soluzione. Se non è possibile creare la DLL, riavviare il computer o disconnettersi (se si utilizza servizi Terminal).  
  
 Successivamente, si aggiungerà una proprietà personalizzata per il controllo.  
  
 [Al passaggio 1](../atl/creating-the-project-atl-tutorial-part-1.md) &#124; [Al passaggio 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)

