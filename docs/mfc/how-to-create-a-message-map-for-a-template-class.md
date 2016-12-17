---
title: "Procedura: creare una mappa messaggi per una classe modello | Microsoft Docs"
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
  - "mappe messaggi, classi modello"
  - "classi modello, creazione di mappe messaggi"
ms.assetid: 4e7e24f8-06df-4b46-82aa-7435c8650de3
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: creare una mappa messaggi per una classe modello
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il mapping del messaggio in MFC fornisce un modo efficace per indirizzare i messaggi di windows a un'istanza di oggetto appropriata di C\+\+.  Esempi delle destinazioni della mappa messaggi MFC includono le classi delle classi di applicazione, di documento e di visualizzazione, classi di controlli, e così via.  
  
 Le mappe messaggi tradizionali MFC vengono dichiarate utilizzando la macro di [BEGIN\_MESSAGE\_MAP](../Topic/BEGIN_MESSAGE_MAP.md) dichiarare l'inizio della mappa messaggi, di macro voce per ogni metodo della classe del gestore messaggi e infine di una macro di [END\_MESSAGE\_MAP](../Topic/END_MESSAGE_MAP.md) dichiarare la fine della mappa messaggi.  
  
 Una limitazione con la macro di [BEGIN\_MESSAGE\_MAP](../Topic/BEGIN_MESSAGE_MAP.md) si verifica quando viene utilizzata insieme A una classe contenente gli argomenti di modello.  Una volta utilizzata con una classe template, questa macro genera un errore in fase di compilazione a causa dei parametri di modello mancanti durante l'espansione della macro.  La macro di [BEGIN\_TEMPLATE\_MESSAGE\_MAP](../Topic/BEGIN_TEMPLATE_MESSAGE_MAP.md) è stata progettata per consentire le classi che contengono un solo argomento di template per dichiarare le rispettive mappe messaggi.  
  
## Esempio  
 Si consideri un esempio in cui la classe MFC [CListBox](../mfc/reference/clistbox-class.md) viene estesa per fornire la sincronizzazione con un'origine dati esterna.  La classe fittizia di **CSyncListBox** viene dichiarata come segue:  
  
 [!code-cpp[NVC_MFC_CListBox#42](../mfc/codesnippet/CPP/how-to-create-a-message-map-for-a-template-class_1.h)]  
  
 La classe di **CSyncListBox** è basata su modelli in un unico tipo che descrive l'origine dati che verrà sincronizzata con.  Anche dichiara tre metodi che prenderanno parte alla mappa messaggi della classe: **OnPaint**, **OnDestroy** e **OnSynchronize**.  Il metodo di **OnSynchronize** viene implementato come segue:  
  
 [!code-cpp[NVC_MFC_CListBox#43](../mfc/codesnippet/CPP/how-to-create-a-message-map-for-a-template-class_2.cpp)]  
  
 L'implementazione sopra riportato consente la classe di **CSyncListBox** di rendere specifico a qualsiasi tipo di classe che implementa il metodo di **GetCount**, come **CArray**, **CList** e su **CMap**.  La funzione di **StringizeElement** è una funzione di modello con prototipo da quanto segue:  
  
 [!code-cpp[NVC_MFC_CListBox#44](../mfc/codesnippet/CPP/how-to-create-a-message-map-for-a-template-class_3.cpp)]  
  
 In genere, la mappa messaggi per questa classe è definita come segue:  
  
 `BEGIN_MESSAGE_MAP(CSyncListBox, CListBox)`  
  
 `ON_WM_PAINT()`  
  
 `ON_WM_DESTROY()`  
  
 `ON_MESSAGE(LBN_SYNCHRONIZE, OnSynchronize)`  
  
 `END_MESSAGE_MAP()`  
  
 dove **LBN\_SYNCHRONIZE** è un messaggio utente personalizzato definito dall'applicazione, ad esempio:  
  
 [!code-cpp[NVC_MFC_CListBox#45](../mfc/codesnippet/CPP/how-to-create-a-message-map-for-a-template-class_4.cpp)]  
  
 La macro mappa sopraindicato non viene compilato, dovuto al fatto che la specifica del modello per la classe di **CSyncListBox** risulterà durante l'espansione della macro.  La macro di **BEGIN\_TEMPLATE\_MESSAGE\_MAP** risolve questa incorporando il parametro di modello specificato nella mappa macro espansa.  La mappa messaggi per questa classe diventa:  
  
 [!code-cpp[NVC_MFC_CListBox#46](../mfc/codesnippet/CPP/how-to-create-a-message-map-for-a-template-class_5.cpp)]  
  
 Di seguito viene illustrato l'utilizzo di esempio della classe di **CSyncListBox** utilizzo di un oggetto di **CStringList** :  
  
 [!code-cpp[NVC_MFC_CListBox#47](../mfc/codesnippet/CPP/how-to-create-a-message-map-for-a-template-class_6.cpp)]  
  
 Per completare il test, la funzione di **StringizeElement** deve essere specializzata per utilizzare la classe di **CStringList** :  
  
 [!code-cpp[NVC_MFC_CListBox#48](../mfc/codesnippet/CPP/how-to-create-a-message-map-for-a-template-class_7.cpp)]  
  
## Vedere anche  
 [BEGIN\_TEMPLATE\_MESSAGE\_MAP](../Topic/BEGIN_TEMPLATE_MESSAGE_MAP.md)   
 [Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md)