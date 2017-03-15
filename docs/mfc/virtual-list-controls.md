---
title: "Controlli List virtuali | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cache, dati elemento controllo elenco virtuale"
  - "controlli elenco, visualizzazione elenco"
  - "controlli elenco, virtuale"
  - "controlli elenco virtuali"
ms.assetid: 319f841f-e426-423a-8276-d93f965b0b45
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Controlli List virtuali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo elenco virtuale è un controllo di visualizzazione elenco che presenta lo stile **LVS\_OWNERDATA**.  Questo stile consente al controllo di supportare un numero di elementi fino a `DWORD` \(il numero predefinito dell'elemento si estende solo a `int`\).  Tuttavia, il massimo vantaggio offerto da questo stile è la possibilità di disporre solo di elementi di un sottoinsieme di dati in memoria in qualsiasi momento.  In questo modo il controllo elenco virtuale si presterà ad essere utilizzato con grandi database di informazioni, dove i metodi specifici di accesso ai dati sono già presenti sul posto.  
  
> [!NOTE]
>  Oltre a fornire funzionalità di elenco virtuale in `CListCtrl`, MFC fornisce inoltre la stessa funzionalità nella classe [CListView](../mfc/reference/clistview-class.md).  
  
 Esistono alcuni problemi di compatibilità da tenere presenti quando si sviluppano i controlli elenco virtuali.  Per ulteriori informazioni, vedere la sezione dei problemi di compatibilità dell'argomento dei controlli di visualizzazione elenchi in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Gestire la notifica LVN\_GETDISPINFO  
 I controlli elenco virtuali conservano pochissime informazioni dell'elemento.  Fatta eccezione per la selezione dell'elemento e le informazioni sullo stato attivo, tutte le informazioni sull'elemento vengono gestite dal proprietario del controllo.  Le informazioni vengono richieste dal framework tramite un messaggio di notifica **LVN\_GETDISPINFO**.  Per fornire le informazioni necessarie, il proprietario del controllo elenco virtuale \(o il controllo stesso\) dovrà gestire la notifica.  Questa operazione può essere effettuata utilizzando la Finestra Proprietà \(vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)\).  Il codice risultante deve essere simile all'esempio seguente \(dove `CMyDialog` è il proprietario dell'oggetto controllo elenco virtuale e la finestra di dialogo gestisce la notifica\):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#23](../mfc/codesnippet/CPP/virtual-list-controls_1.cpp)]  
  
 Nel gestore del messaggio di notifica **LVN\_GETDISPINFO**, è necessario controllare il tipo di informazioni che vengono richieste.  I valori possibili sono:  
  
-   `LVIF_TEXT` Il membro `pszText` deve essere popolato.  
  
-   `LVIF_IMAGE` Il membro `iImage` deve essere popolato.  
  
-   **LVIF\_INDENT** Il membro *iIndent* deve essere popolato.  
  
-   `LVIF_PARAM` Il membro *lParam* deve essere popolato. \(Non disponibile per gli elementi secondari\).  
  
-   `LVIF_STATE` Il membro *state* deve essere popolato.  
  
 È quindi necessario fornire le informazioni necessarie al framework.  
  
 Nell'esempio seguente \(ricavato dal corpo del gestore di notifica per l'oggetto del controllo elenco\) viene illustrato un metodo possibile per fornire informazioni per i buffer di testo e l'immagine di un elemento:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#24](../mfc/codesnippet/CPP/virtual-list-controls_2.cpp)]  
  
## Memorizzazione nella cache e controlli elenco virtuali  
 Poiché questo tipo di controllo elenco è destinato a grandi quantità di dati, si consiglia di memorizzare nella cache i dati dell'elemento richiesto per migliorare le prestazioni di recupero.  Il framework fornisce un meccanismo di suggerimento per l'ottimizzazione della cache inviando un messaggio di notifica **LVN\_ODCACHEHINT**.  
  
 L'esempio seguente aggiorna la cache con l'intervallo passato alla funzione di gestione.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#25](../mfc/codesnippet/CPP/virtual-list-controls_3.cpp)]  
  
 Per ulteriori informazioni sulla preparazione e sulla gestione della cache, vedere la sezione gestione della cache dell'argomento dei controlli di visualizzazione elenchi in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Trovare elementi specifici  
 Il messaggio di notifica **LVN\_ODFINDITEM** viene inviato dal controllo elenco virtuale quando un particolare elemento del controllo elenco deve essere trovato.  Il messaggio di notifica viene inviato quando il controllo elenco riceve l'accesso rapido alla chiave o quando riceve un messaggio **LVM\_FINDITEM**.  Le informazioni presenti vengono inviate sotto la forma della struttura **LVFINDINFO**, il quale è un membro della struttura **NMLVFINDITEM**.  Gestire questo messaggio eseguendo l'override della funzione `OnChildNotify` dell'oggetto controllo elenco e all'interno del corpo del gestore, controllare il messaggio **LVN\_ODFINDITEM**.  Se trovato, eseguire l'azione appropriata.  
  
 È necessario essere pronti a cercare un elemento che corrisponde alle informazioni fornite dal controllo visualizzazione elenco.  È necessario restituire il valore dell'elemento in caso di esito positivo, oppure \-1 se non viene rilevato alcun elemento corrispondente.  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)