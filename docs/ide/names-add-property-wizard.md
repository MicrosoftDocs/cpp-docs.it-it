---
title: "Nomi, Aggiunta guidata propriet&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.prop.overview"
dev_langs: 
  - "C++"
ms.assetid: 0453b7ea-89cb-41a1-80a2-d45f61589c0a
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Nomi, Aggiunta guidata propriet&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa procedura guidata per aggiungere una proprietà a un'interfaccia.  
  
 **Tipo proprietà**  
 Consente di impostare il tipo della proprietà da aggiungere.  Per le interfacce dispatch MFC specificare il tipo desiderato o selezionarlo dall'elenco predefinito.  Se si fornisce un'implementazione predefinita di una proprietà, **Tipo proprietà** verrà impostato sul tipo predefinito e sarà possibile modificarlo.  
  
 **Nome della proprietà**  
 Consente di impostare il nome della proprietà.  Per le interfacce dispatch MFC associate ai controlli ActiveX, è possibile fornire il nome desiderato o selezionare un nome di proprietà predefinito dall'apposito elenco.  Se si specifica un nome di proprietà personalizzato, il tipo di implementazione **Predefinita** non sarà disponibile.  Per una descrizione delle proprietà indicate nell'elenco, vedere [Proprietà predefinite](../ide/stock-properties.md).  
  
|Tipo di interfaccia|Descrizione|  
|-------------------------|-----------------|  
|Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Specificare un nome di proprietà|  
|Interfaccia dispatch MFC, interfaccia dispatch del controllo ActiveX MFC|Specificare un nome di proprietà o selezionare una proprietà predefinita dall'elenco.  Se si seleziona una proprietà dall'elenco, il valore appropriato verrà visualizzato nella casella **Tipo proprietà**.  Sarà possibile modificare questo tipo, a seconda della selezione effettuata nella casella **Tipo di implementazione**.|  
  
 **Tipo restituito**  
 Solo interfacce ATL.  Consente di impostare il tipo restituito per la proprietà.  Per le interfacce duali il tipo restituito è sempre `HRESULT` e la casella non è disponibile.  Per le interfacce personalizzate è possibile selezionare un tipo restituito dall'elenco.  È comunque consigliato `HRESULT`, in quanto consente una modalità di restituzione standard degli errori.  
  
 **Nome variabile**  
 Solo interfacce dispatch MFC.  Disponibile solo se si specifica **Variabile membro** nella casella **Tipo di implementazione**.  Consente di impostare il nome della variabile membro cui è associata la proprietà.  Per impostazione predefinita, il nome della variabile è impostato su m\_*NomeProprietà*.  È possibile modificare questo nome.  
  
 **Funzione notifica**  
 Solo interfacce dispatch MFC.  Disponibile solo se si specifica **Variabile membro** nella casella **Tipo di implementazione**.  Consente di impostare il nome della funzione di notifica che viene chiamata se la proprietà subisce modifiche.  Per impostazione predefinita il nome della funzione di notifica è impostato su  On*NomeProprietà*Changed.  È possibile modificare questo nome.  
  
 **Funzione Get**  
 Per le interfacce dispatch MFC.  Disponibile solo se si specifica **Metodi Get\/Set** nella casella **Tipo di implementazione**.  Consente di impostare il nome della funzione che consente di visualizzare la proprietà.  Per impostazione predefinita il nome della funzione Get è impostato su Get*NomeProprietà*.  È possibile modificare questo nome.  Se si elimina il nome, la funzione [GetNotSupported](../Topic/COleControl::GetNotSupported.md) verrà inserita nella mappa di invio dell'interfaccia.  La funzione Get*NomeProprietà* specifica che la proprietà è leggibile.  
  
 **Funzione Set**  
 Solo interfacce dispatch MFC.  Disponibile solo se si specifica **Metodi Get\/Set** nella casella **Tipo di implementazione**.  Consente di impostare il nome della funzione che permette di impostare la proprietà.  Per impostazione predefinita il nome della funzione Set è impostato su Set*NomeProprietà*.  È possibile modificare questo nome.  Se si elimina il nome, la funzione [SetNotSupported](../Topic/COleControl::SetNotSupported.md) verrà inserita nella mappa di invio dell'interfaccia.  La funzione Set*NomeProprietà* specifica che la proprietà è modificabile.  
  
 **Tipo di implementazione**  
 Solo interfacce dispatch MFC.  Consente di specificare le modalità di implementazione della proprietà da aggiungere.  
  
|Tipo di implementazione|Descrizione|  
|-----------------------------|-----------------|  
|**Predefinito**|Specifica un'implementazione predefinita per la proprietà selezionata in **Nome proprietà**.  Valore predefinito.  Per ulteriori informazioni, vedere [Proprietà predefinite](../ide/stock-properties.md).<br /><br /> Se si specifica **Predefinita**, le caselle **Tipo proprietà**, **Tipo parametro** e **Nome parametro** saranno inattive.|  
|**Variabile membro**|Specifica che la proprietà viene aggiunta come variabile membro.  È possibile aggiungere come variabili membro sia proprietà personalizzate che la maggior parte delle proprietà predefinite.  Non è possibile specificare **Variabile membro** per le proprietà **Caption**, **hWnd** e **Text**.<br /><br /> Fornisce nomi predefiniti in **Nome variabile** e **Funzione notifica**.  È possibile modificare questo nome.|  
|**Metodi Get\/Set**|Specifica che, per impostazione predefinita, la proprietà viene aggiunta sotto forma di funzioni Get*NomeProprietà* e Set*NomeProprietà*.  Questi nomi vengono visualizzati in **Funzione Get** e **Funzione Set**.<br /><br /> È possibile modificare il **Tipo di proprietà** predefinito, che passa un valore per la funzione Get.  È possibile specificare parametri per le funzioni **Get** e `Set`.|  
  
 **Funzione Get**  
 Per interfacce ATL.  Consente di impostare la proprietà come leggibile, creando a tale scopo il metodo **Get** per il recupero della proprietà dall'oggetto.  È necessario selezionare **Get**, `Put` o entrambi.  
  
 **Funzione Put**  
 Solo interfacce ATL.  Consente di impostare la proprietà come modificabile, creando a tale scopo il metodo `Put` per l'impostazione della proprietà dell'oggetto.  È necessario selezionare **Get**, `Put` o entrambi.  Se si seleziona quest'opzione, sarà possibile scegliere una delle due modalità di implementazione del metodo riportate di seguito:  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**PropPut**|La funzione [PropPut](../windows/propput.md) restituisce una copia dell'oggetto.  Si tratta del modo predefinito e più comune di rendere modificabile la proprietà.|  
|**PropPutRef**|La funzione [PropPutRef](../windows/propputref.md) restituisce un riferimento all'oggetto, anziché restituire la copia dell'oggetto stesso.  Prendere in considerazione l'utilizzo di questa opzione per oggetti quali strutture o matrici di grandi dimensioni che potrebbero presentare sovraccarichi di inizializzazione.|  
  
 **Attributi dei parametri**  
 Solo interfacce ATL.  Consente di specificare se il parametro indicato in **Nome parametro** presenti l'attributo **in**, **out**, entrambi o nessuno dei due.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**in**|Indica che il parametro viene passato dalla procedura chiamante a quella chiamata.|  
|**out**|Indica che il parametro del puntatore viene restituito dalla procedura chiamata a quella chiamante \(dal server al client\).|  
  
 **Tipo di parametro**  
 Consente di impostare il tipo di dati del parametro.  Selezionare il tipo desiderato dall'elenco.  
  
 **Nome parametro**  
 Consente di impostare il nome del parametro aggiunto per la proprietà, se quest'ultima dispone di parametri.  Dopo avere scelto **Aggiungi**, il nome del parametro verrà visualizzato in **Elenco parametri**.  
  
 **Elenco parametri**  
 Consente di visualizzare l'elenco degli attributi da aggiungere alla proprietà.  Ciascuna voce dell'elenco riporta il nome, il tipo e gli attributi del parametro.  Utilizzare **Aggiungi** e **Rimuovi** per aggiornare l'elenco.  
  
 **Aggiungi**  
 Consente di aggiungere alla casella di riepilogo **Elenco parametri** il parametro specificato in **Nome parametro** e **Tipo parametro**.  Fare clic su **Aggiungi** per aggiungere un parametro all'elenco.  
  
 **Rimuovi**  
 Consente di rimuovere il parametro selezionato in **Elenco parametri**.  
  
 **Proprietà predefinita**  
 Solo interfaccia dispatch MFC.  Consente di impostare la proprietà come predefinita per l'interfaccia.  A ciascuna interfaccia è possibile associare una sola proprietà predefinita. Quando la proprietà predefinita è già stata specificata, per qualsiasi altra proprietà aggiunta all'interfaccia la casella risulterà non disponibile.  
  
## Vedere anche  
 [Aggiunta di una proprietà](../ide/adding-a-property-visual-cpp.md)   
 [Attributi IDL, Aggiunta guidata proprietà](../ide/idl-attributes-add-property-wizard.md)   
 [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md)