---
title: "Utilizzo delle finestre delle propriet&#224; nell&#39;applicazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddPage (metodo)"
  - "CPropertyPage (classe), stili"
  - "Create (metodo) [C++], finestre delle proprietà"
  - "risorse finestra di dialogo"
  - "modelli di finestra di dialogo, finestre delle proprietà"
  - "DoModal (finestre delle proprietà del metodo)"
  - "proprietà (pagine), finestre delle proprietà"
  - "finestre delle proprietà, informazioni sulle finestre delle proprietà"
ms.assetid: 240654d4-152b-4e3f-af7b-44234339206e
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo delle finestre delle propriet&#224; nell&#39;applicazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per utilizzare una finestra delle proprietà nell'applicazione, completare i passaggi seguenti:  
  
1.  Creare una risorsa modello di finestra di dialogo per ogni pagina delle proprietà.  Tenere presente che l'utente può passare da una pagina a un'altra, pertanto disporre ogni pagina nel modo più consistente possibile.  
  
     I modelli della finestra di dialogo per tutte le pagine non devono avere le stesse dimensioni.  Il framework utilizza la dimensione della più ampia pagina per determinare la quantità di spazio da allocare nella finestra delle proprietà delle pagine delle proprietà.  
  
     Quando si crea una risorsa modello di finestra di dialogo per una pagina delle proprietà, è necessario specificare i seguenti stili nella finestra delle proprietà delle proprietà della finestra di dialogo:  
  
    -   Impostare la casella di modifica **Titolo** nella pagina **Generale** al testo che si desidera visualizzare nella scheda per questa pagina.  
  
    -   Impostare la casella di riepilogo **Stile** nella pagina **Stili** a **Figlio**.  
  
    -   Impostare la casella di riepilogo **Bordo** nella pagina **Stili** a **Sottile**.  
  
    -   Verificare che la casella di controllo **Barra del titolo** nella pagina **Stili** sia selezionata.  
  
    -   Verificare che la casella di controllo **Disattivato** nella pagina **Ulteriori Stili** sia selezionata.  
  
2.  Creare una [CPropertyPage](../mfc/reference/cpropertypage-class.md)\- classe derivata corrispondente a ogni modello di finestra di dialogo di pagina delle proprietà.  Vedere [Aggiunta di un classe](../ide/adding-a-class-visual-cpp.md).  Scegliere `CPropertyPage` come classe base.  
  
3.  Creare le variabili membro per contenere i valori per questa pagina delle proprietà.  Il processo di aggiunta delle variabili membro in una pagina delle proprietà è esattamente uguale all'aggiunta di variabili membro ad una finestra di dialogo, perché una pagina delle proprietà è una finestra di dialogo complessa.  Per ulteriori informazioni, vedere [Definizione delle variabili membro per i controlli della finestra di dialogo](../mfc/defining-member-variables-for-dialog-controls.md).  
  
4.  Costruisce un oggetto [CPropertySheet](../mfc/reference/cpropertysheet-class.md) nel codice sorgente.  In genere, si crea l'oggetto `CPropertySheet` nel gestore per il comando che visualizza la finestra delle proprietà.  Questo oggetto rappresenta l'intera finestra delle proprietà.  Se si crea una finestra delle proprietà modale tramite la funzione [DoModal](../Topic/CPropertySheet::DoModal.md), il framework fornisce tre pulsanti di comando per impostazione predefinita: OK, Annulla e Applica.  Il framework non crea pulsanti di comando per le finestre delle proprietà non modali create con la funzione [Crea](../Topic/CPropertySheet::Create.md).  Non è necessario derivare una classe da `CPropertySheet` a meno che non si aggiungano altri controlli \(ad esempio una finestra di anteprima\) o visualizzino una finestra delle proprietà non modale.  Questa operazione è necessaria per le finestre delle proprietà non modali perché non contiene alcuni controlli predefiniti che possano essere utilizzati per chiudere la finestra delle proprietà.  
  
5.  Per ogni pagina da aggiungere alla finestra delle proprietà, effettuare le seguenti operazioni:  
  
    -   Costruire un oggetto per ciascuna `CPropertyPage`\- classe derivata precedentemente creata in questo processo.  
  
    -   Chiamare [CPropertySheet::AddPage](../Topic/CPropertySheet::AddPage.md) per ogni pagina.  
  
     In genere, l'oggetto che crea `CPropertySheet` crea inoltre gli oggetti `CPropertyPage` in questo passaggio.  Tuttavia, se si implementa `CPropertySheet`\- classe derivata, è possibile importare gli oggetti `CPropertyPage` nell'oggetto `CPropertySheet` e chiamare `AddPage` per ogni pagina da `CPropertySheet`\- costruttore di classe derivata.  `AddPage` aggiunge l'oggetto `CPropertyPage` all'elenco della finestra delle proprietà delle pagine, ma non crea la finestra per la pagina.  Di conseguenza, non è necessario attendere fino alla creazione della finestra delle proprietà per chiamare `AddPage`; è possibile chiamare `AddPage` dal costruttore della finestra delle proprietà.  
  
     Per impostazione predefinita, se una finestra delle proprietà dispone di più schede di quelle che può contenere in una singola riga della finestra delle proprietà, le schede verranno impilate in più righe.  Per disabilitare lo stacking, chiamare [CPropertySheet::EnableStackedTabs](../Topic/CPropertySheet::EnableStackedTabs.md) con il parametro impostato su **FALSE**.  È necessario chiamare `EnableStackedTabs` quando si crea la finestra delle proprietà.  
  
6.  Chiamare [CPropertySheet::DoModal](../Topic/CPropertySheet::DoModal.md) o [Crea](../Topic/CPropertySheet::Create.md) per visualizzare la finestra delle proprietà.  Chiamare `DoModal` per creare una finestra delle proprietà come finestra di dialogo modale.  Chiamare **Crea** per creare la finestra delle proprietà come finestra di dialogo non modale.  
  
7.  Trasferimento di dati tra le pagine delle proprietà e il proprietario della finestra delle proprietà.  Questa situazione viene illustrata nell'articolo [Lo scambio di dati](../mfc/exchanging-data.md).  
  
 Per un esempio di come utilizzare le finestre delle proprietà, vedere l'esempio MFC generale [PROPDLG](../top/visual-cpp-samples.md).  
  
## Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)