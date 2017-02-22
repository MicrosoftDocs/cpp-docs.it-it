---
title: "Aggiunta di un controllo (Esercitazione di ATL, parte 2) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
ms.assetid: c9575a75-1064-41f1-9697-7aada560c669
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Aggiunta di un controllo (Esercitazione di ATL, parte 2)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo passaggio, verrà aggiunto un controllo al progetto, verrà compilato e testato in una pagina Web.  
  
## Procedure  
  
#### Per aggiungere un oggetto a un progetto ATL.  
  
1.  In Visualizzazione classi fare clic con il pulsante destro del mouse sul progetto Polygon.  
  
2.  Nel menu di scelta rapida scegliere **Aggiungi**, quindi nel sottomenu fare clic su **Classe**.  
  
     Verrà visualizzata la finestra di dialogo **Aggiungi classe**.  Le varie categorie di oggetti sono elencate nella struttura ad albero a sinistra.  
  
3.  Fare clic sulla cartella **ALT**.  
  
4.  Selezionare **Controllo ATL** dall'elenco dei modelli a destra.  Scegliere **Aggiungi**.  Verrà aperta la Creazione guidata controllo ATL nella quale sarà possibile configurare il controllo.  
  
5.  Digitare `PolyCtl` come nome breve e notare che gli altri campi vengono completati automaticamente.  Non fare ancora clic su **Fine** perché è necessario apportare alcune modifiche.  
  
 La pagina **Nomi** della Creazione guidata controllo ATL contiene i seguenti campi:  
  
|Campo|Contenuto|  
|-----------|---------------|  
|**Nome breve**|Nome immesso per il controllo.|  
|**Classe**|Nome della classe C\+\+ creato per implementare il controllo.|  
|**File H**|File creato per contenere la definizione della classe C\+\+.|  
|**File CPP**|File creato per contenere l'implementazione della classe C\+\+.|  
|**CoClass**|Nome della classe di componente di questo controllo.|  
|**Interfaccia**|Nome dell'interfaccia in cui il controllo implementerà i relativi metodi e proprietà personalizzati.|  
|**Type**|Descrizione per il controllo.|  
|**ProgID**|Nome leggibile che può essere utilizzato per cercare il CLSID del controllo.|  
  
 È necessario configurare varie impostazioni aggiuntive nella Creazione guidata controllo ATL.  
  
#### Per abilitare il supporto per le informazioni dettagliate sugli errori e i punti di connessione  
  
1.  Fare clic su **Opzioni** per aprire la pagina **Opzioni**.  
  
2.  Selezionare la casella di controllo **Punti di connessione**.  In questo modo viene creato il supporto per un'interfaccia in uscita nel file idl.  
  
 È possibile rendere il controllo inseribile, ossia che può essere incorporato nelle applicazioni che supportano gli oggetti incorporati, quali Excel o Word.  
  
#### Per rendere il controllo inseribile  
  
1.  Fare clic su **Aspetto** per aprire la pagina **Aspetto**.  
  
2.  Selezionare la casella di controllo **Inseribile**.  
  
 Il poligono visualizzato dall'oggetto apparirà riempito con un colore a tinta unita, pertanto è necessario aggiungere una proprietà predefinita `Fill Color`.  
  
#### Per aggiungere una proprietà predefinita Colore riempimento e creare il controllo  
  
1.  Fare clic su **Proprietà predefinite** per aprire la pagina **Proprietà predefinite**.  
  
2.  In **Non supportata** scorrere l'elenco delle possibili proprietà predefinite.  Fare doppio clic su `Fill Color` per spostarlo nell'elenco **Supportato**.  
  
3.  Ciò completa le opzioni per il controllo.  Fare clic su **Fine**.  
  
 Poiché il controllo è stato creato nella procedura guidata, si sono verificate diverse modifiche al codice e aggiunte al file.  Sono stati creati i seguenti file:  
  
|File|Descrizione|  
|----------|-----------------|  
|PolyCtl.h|Contiene la maggior parte dell'implementazione della classe C\+\+ `CPolyCtl`.|  
|PolyCtl.cpp|Contiene le parti rimanenti di `CPolyCtl`.|  
|PolyCtl.rgs|File di testo contenente gli script del registro utilizzati per registrare il controllo.|  
|PolyCtl.htm|Pagina Web contenente un riferimento al controllo appena creato.|  
  
 La procedura guidata ha inoltre apportato le seguenti modifiche al codice:  
  
-   Aggiunge un'istruzione `#include` ai file stdafx.cpp e STDAFX.H per includere i file ATL necessari per i controlli di supporto.  
  
-   Polygon.idl modificato per includere i dettagli del nuovo controllo.  
  
-   È stato aggiunto il nuovo controllo alla mappa dell'oggetto in Polygon.cpp.  
  
 Ora è possibile compilare il controllo per vederne il funzionamento.  
  
## Compilazione e test del controllo  
  
#### Per compilare e testare il controllo  
  
1.  Scegliere **Compila poligono** dal menu **Compila**.  
  
     Una volta completata la compilazione del controllo, fare clic con il pulsante destro del mouse su PolyCtl.htm in **Esplora soluzioni** e selezionare **Visualizza nel browser**.  Verrà visualizzata la pagina Web HTML contenente il controllo.  Verrà visualizzata una pagina con il titolo "Pagina di test ATL 8.0 per l'oggetto PolyCtl" e il testo **PolyCtl**.  Si tratta di un controllo .  
  
> [!NOTE]
>  Alla fine di questa esercitazione, se viene visualizzato un messaggio di errore che segnala l'impossibilità di creare il file DLL, chiudere il file PolyCtl.htm e il test del controllo ActiveX e compilare nuovamente la soluzione.  Se non è ancora possibile creare la DLL, riavviare il computer o disconnettersi \(se si utilizza Servizi terminal\).  
  
 A questo punto, verrà aggiunta una proprietà personalizzata al controllo.  
  
 [Torna al passaggio 1](../atl/creating-the-project-atl-tutorial-part-1.md) &#124; [Nel passaggio 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md)  
  
## Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)