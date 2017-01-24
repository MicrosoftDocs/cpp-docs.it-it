---
title: "Adding Connection Points to an Object | Microsoft Docs"
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
  - "punti di connessione [C++], aggiunta a oggetti ATL"
  - "Implement Connection Point ATL wizard"
ms.assetid: 843531be-4a36-4db0-9d54-e029b1a72a8b
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Adding Connection Points to an Object
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[L'esercitazione ATL](../atl/active-template-library-atl-tutorial.md) viene illustrato come creare un controllo con supporto per i punti di connessione, come aggiungere eventi e come implementare il punto di connessione.  ATL implementa i punti di connessione con la classe [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md).  
  
 Per implementare un punto di connessione, sono disponibili due opzioni:  
  
-   Implementare la propria origine evento in uscita, aggiungere un punto di connessione al controllo o.  
  
-   Riutilizzare un'interfaccia del punto di connessione definita in un'altra libreria dei tipi.  
  
 In entrambi i casi, la procedura guidata punto di connessione di utilizzare utilizza una libreria dei tipi per le attività.  
  
### Per aggiungere un punto di connessione a un controllo o oggetto  
  
1.  Definire un'interfaccia dispatch nel blocco di libreria del file IDL.  Se attivare il supporto per i punti di connessione dopo avere creato il controllo con la creazione guidata controllo ATL, l'interfaccia dispatch già verrà creata.  Se non è stato attivato il supporto per i punti di connessione dopo aver creato il controllo, è necessario aggiungere manualmente un'interfaccia dispatch nel file IDL.  L'esempio seguente è un esempio di un'interfaccia dispatch.  Le interfacce in uscita non devono essere interfacce dispatch molti linguaggi di script come VBScript o JScript richiedono questo, in modo che questo esempio vengono utilizzati due interfacce dispatch:  
  
     [!code-cpp[NVC_ATL_Windowing#81](../atl/codesnippet/CPP/adding-connection-points-to-an-object_1.idl)]  
  
     Utilizzare il uuidgen.exe o l'utilità di guidgen.exe per generare un GUID.  
  
2.  Aggiungere l'interfaccia dispatch come interfaccia `[default,source]` la coclasse per l'oggetto nel file IDL del progetto.  Nuovamente, se attivare il supporto per i punti di connessione dopo aver creato il controllo, la procedura guidata controllo ATL creare la voce `[default,source`\].  Per aggiungere manualmente questa voce, aggiungere la riga in grassetto:  
  
     [!code-cpp[NVC_ATL_Windowing#82](../atl/codesnippet/CPP/adding-connection-points-to-an-object_2.idl)]  
  
     Vedere il file idl in [Circ](../top/visual-cpp-samples.md) ATL mediante campionamento per un esempio.  
  
3.  Utilizzare la Visualizzazione classi per aggiungere metodi e proprietà all'interfaccia eventi.  Fare clic con il pulsante destro del mouse sulla classe in Visualizzazione classi, scegliere **Aggiungi** il menu di scelta rapida e scegliere **AggiungiConnection Point**.  
  
4.  Nella casella di riepilogo **Interfacce di origine** guidata punto di connessione di utilizzo, **Project's interfaces**selezionato.  Se si sceglie un'interfaccia per il controllo e premere **OK**, come:  
  
    -   Generare un file di intestazione con una classe proxy di evento che implementa il codice che effettua richieste in uscita per l'evento.  
  
    -   Aggiungere una voce alla mappa dei punti di connessione.  
  
     Inoltre visualizzato un elenco di tutte le librerie dei tipi nel computer.  È consigliabile utilizzare solo una di queste altre librerie dei tipi per definire il punto di connessione se si desidera distribuire esattamente la stessa interfaccia in uscita trova in un'altra libreria dei tipi.  
  
### Per riutilizzare un'interfaccia del punto di connessione definita in un'altra libreria dei tipi  
  
1.  In Visualizzazione classi, fare clic con il pulsante destro del mouse sulla classe che implementa una macro **BEGIN\_COM\_MAP**, scegliere **Aggiungi** il menu di scelta rapida e scegliere **AggiungiConnection Point**.  
  
2.  Nella procedura guidata punto di connessione del centro, selezionare una libreria dei tipi e un'interfaccia nella libreria dei tipi e fare clic **Aggiungi**.  
  
3.  Modificare il file IDL a uno dei seguenti:  
  
    -   Copiare l'interfaccia dispatch dal file .idl dell'oggetto di cui l'origine evento viene utilizzata.  
  
    -   Utilizzare l'istruzione **importlib** su tale libreria.  
  
## Vedere anche  
 [Punto di connessione](../atl/atl-connection-points.md)