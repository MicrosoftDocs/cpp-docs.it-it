---
title: "Aggiunta guidata metodo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.method.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Aggiunta guidata metodo [C++]"
  - "metodi [C++], aggiunta tramite procedure guidate"
ms.assetid: b9a71b0e-9ecf-40fa-9f86-4200cb23d671
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta guidata metodo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa procedura guidata per aggiungere un metodo a un'interfaccia.  A seconda del tipo di progetto o di interfaccia cui si aggiunge il metodo, vengono visualizzate opzioni differenti.  
  
## Nomi  
 **Tipo restituito**  
 Tipo di dati restituito dal metodo.  `HRESULT` è consigliato per tutti i tipi di interfaccia, in quanto consente una modalità di restituzione standard degli errori.  
  
|Tipo di interfaccia|Descrizione|  
|-------------------------|-----------------|  
|Interfaccia duale|`HRESULT`.  Non modificabile.|  
|Interfaccia personalizzata|`HRESULT`.  Non modificabile.|  
|Interfaccia personalizzata locale|Specificare il tipo restituito desiderato o selezionarlo dall'elenco.|  
|Interfaccia dispatch|Specificare il tipo restituito desiderato o selezionarlo dall'elenco.|  
|Interfaccia dispatch del controllo ActiveX MFC|Se si implementa un metodo predefinito, il tipo restituito sarà impostato sul valore appropriato e non sarà modificabile.  Se si seleziona un metodo dall'elenco **Nome metodo** e si fa clic su **Personalizzato** in **Selezionare il tipo di metodo**, sarà possibile selezionare un tipo restituito dall'elenco.|  
  
 **Nome del metodo**  
 Consente di impostare il nome del metodo.  
  
|Tipo di interfaccia|Descrizione|  
|-------------------------|-----------------|  
|Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Specificare un nome per il metodo personalizzato.|  
|Interfaccia dispatch MFC|Specificare un nome per il metodo personalizzato o selezionarne uno dall'elenco.  Se si seleziona un nome dall'elenco, nella casella **Tipo restituito** verrà visualizzato il valore appropriato, che non sarà modificabile.|  
|Interfaccia dispatch del controllo ActiveX MFC|Specificare il proprio metodo oppure selezionare il metodo predefinito [DoClick](../Topic/COleControl::DoClick.md) o [Refresh](../Topic/COleControl::Refresh.md).  Per ulteriori informazioni, vedere [Controlli ActiveX MFC: aggiunta di metodi predefiniti](../mfc/mfc-activex-controls-adding-stock-methods.md).|  
  
 **Tipo di metodo**  
 Disponibile solo per i controlli ActiveX MFC.  Se, anziché selezionare un metodo dall'elenco, si specifica un nome di metodo nella casella **Nome metodo**, questa casella non sarà disponibile.  
  
 Se si seleziona uno dei metodi dell'elenco **Nome metodo**, selezionare l'implementazione predefinita o un'implementazione personalizzata.  
  
|Tipo di metodo|Descrizione|  
|--------------------|-----------------|  
|**Predefinito**|Valore predefinito.  Inserisce l'implementazione predefinita del metodo selezionato nell'elenco **Nome metodo**.  Se si seleziona **Predefinito** non sarà possibile modificare **Tipo restituito**.|  
|**Personalizzato**|Inserisce un'implementazione stub del metodo selezionato nell'elenco **Nome metodo**.  Per i tipi di metodi personalizzati è possibile immettere un tipo restituito personalizzato o selezionarne uno dall'elenco **Tipo restituito**.|  
  
 **Nome interno**  
 Disponibile per i soli metodi personalizzati aggiunti a un'interfaccia dispatch MFC.  Imposta il nome utilizzato nella mappa di invio, il file di intestazione \(con estensione H\) e il file di implementazione \(con estensione CPP\).  Per impostazione predefinita, questo nome corrisponde a **Nome metodo**.  È possibile modificare il nome del metodo se si utilizza un'interfaccia dispatch MFC o se si aggiunge un metodo personalizzato a un'interfaccia dispatch del controllo ActiveX MFC.  
  
|Tipo di interfaccia|Descrizione|  
|-------------------------|-----------------|  
|Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Non disponibile|  
|Interfaccia dispatch MFC|Impostata sul nome del metodo per impostazione predefinita.  È possibile modificare il nome interno.|  
|Interfaccia dispatch del controllo ActiveX MFC|È possibile impostare il nome interno solo per i metodi personalizzati.  Per i metodi predefiniti non viene utilizzato alcun nome interno.|  
  
 **Attributi dei parametri**  
 Consente di impostare eventuali attributi aggiuntivi per il parametro specificato in **Nome parametro**.  
  
|Attributo parametro|Descrizione|Combinazioni consentite|  
|-------------------------|-----------------|-----------------------------|  
|**In**|Indica che il parametro viene passato dalla procedura chiamante a quella chiamata.|solo **in**<br /><br /> **in** e **out**|  
|**Out**|Indica che il parametro del puntatore viene restituito dalla procedura chiamata a quella chiamante \(dal server al client\).|solo **out**<br /><br /> **in** e **out**<br /><br /> **out** e **retval**|  
|**Retval**|Indica che il parametro riceve il valore restituito del membro.|**retval** e out|  
  
 **Tipo di parametro**  
 Consente di impostare il tipo di dati del parametro.  Selezionare il tipo desiderato dall'elenco.  
  
 **Nome parametro**  
 Imposta il nome di un parametro da passare attraverso il metodo.  Dopo aver digitato il nome, fare clic su **Aggiungi** per aggiungerlo all'elenco dei parametri che verranno passati attraverso il metodo.  Se non si specifica alcun nome di parametro, verranno ignorati gli eventuali attributi del parametro \(solo ATL\) o le selezioni effettuate in **Tipo parametro**.  
  
 Dopo avere scelto **Aggiungi**, il nome del parametro verrà visualizzato in **Elenco parametri**.  
  
 **Nota** Se si specifica un nome di parametro e si sceglie **Fine** senza aver fatto clic su **Aggiungi**, il parametro non verrà aggiunto al metodo.  Sarà necessario individuare il metodo e inserire il parametro manualmente.  
  
 **Aggiungi**  
 Consente di aggiungere a **Elenco parametri** il parametro specificato in **Nome parametro**, nonché il tipo e gli attributi del parametro.  Fare clic su **Aggiungi** per aggiungere un parametro all'elenco.  
  
 **Rimuovi**  
 Consente di rimuovere dall'elenco il parametro selezionato nella casella di riepilogo **Elenco parametri**.  
  
 **Elenco parametri**  
 Consente di visualizzare tutti i parametri aggiunti per il metodo nonché i modificatori e i tipi di tali parametri.  Quando si aggiungono parametri, **Elenco parametri** viene aggiornato in modo da indicare ciascun parametro con i relativi modificatore e tipo.  
  
## Vedere anche  
 [Aggiunta di un metodo](../ide/adding-a-method-visual-cpp.md)   
 [Attributi IDL, Aggiunta guidata metodo](../ide/idl-attributes-add-method-wizard.md)