---
title: "Supporto MAPI in MFC | Microsoft Docs"
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
  - "CDocument (classe), e MAPI"
  - "supporto MAPI in MFC"
  - "MAPI, MFC"
  - "MFC, supporto MAPI"
  - "OnFileSendMail (metodo)"
  - "OnUpdateFileSendMail (metodo)"
ms.assetid: cafbecb1-0427-4077-b4b8-159bae5b49b8
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto MAPI in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporto di MFC fornisce a un sottoinsieme di application program interface \(MAPI\) di messaggistica Microsoft nella classe **CDocument**.  In particolare, **CDocument** ha funzioni membro che determinano se il supporto di posta elettronica è presente nel computer dell'utente finale e, in caso affermativo, attivare un comando invia messaggio di posta elettronica di cui l'id di comando standard è **ID\_FILE\_SEND\_MAIL**.  La funzione di gestione MFC per questo comando consente all'utente di inviare un documento tramite posta elettronica.  
  
> [!TIP]
>  Sebbene MFC non incapsulare l'intero set di funzione MAPI, è ancora possibile chiamare direttamente le funzioni MAPI, come è possibile chiamare le funzioni API Win32 direttamente da programmi MFC.  
  
 Assegnare al comando invia messaggio di posta elettronica nell'applicazione è molto semplice.  MFC fornisce l'implementazione per comprimere un documento \(ovvero **CDocument**\- oggetto derivato\) come allegato e di inviarlo come posta elettronica.  Questo allegato è equivalente a un comando di salvataggio file che salva \(serializza\) il contenuto del documento nel messaggio di posta elettronica.  Questa implementazione rivolge al client di posta elettronica nel computer dell'utente per consentire all'utente la possibilità di inviare la posta elettronica e aggiungere l'oggetto e il testo del messaggio al messaggio di posta elettronica.  Gli utenti visualizzano l'interfaccia utente comune dell'applicazione di posta elettronica.  Questa funzionalità viene fornita da due funzioni membro di **CDocument** : `OnFileSendMail` e `OnUpdateFileSendMail`.  
  
 MAPI deve leggere il file per inviare allegato.  Se l'applicazione gestisce file di dati aperto durante la chiamata di funzione di `OnFileSendMail`, il file deve essere aperto con una modalità di condivisione che consente di più processi l'accesso al file.  
  
> [!NOTE]
>  Una versione di override di `OnFileSendMail` per `COleDocument` classe gestisce correttamente i documenti composti.  
  
#### Per implementare un messaggio di posta elettronica da inviare ordini con MFC  
  
1.  Utilizzare l'editor di menu di Visual C\+\+ per aggiungere una voce di menu in cui l'id di comando è **ID\_FILE\_SEND\_MAIL**.  
  
     Questo ID comando viene fornito dal framework in AFXRES.H.  Il comando può essere aggiunto al menu, ma in genere viene aggiunto al menu di **File**.  
  
2.  Aggiungere manualmente quanto segue alla mappa messaggi del documento:  
  
     [!code-cpp[NVC_MFCDocView#9](../mfc/codesnippet/CPP/mapi-support-in-mfc_1.cpp)]  
  
    > [!NOTE]
    >  Funzionamento della mappa messaggi per un documento derivato da **CDocument** o da **COleDocument** \- accetta la classe base corretta in entrambi i casi, anche se la mappa messaggi è presente nella classe derivata del documento.  
  
3.  Compilare l'applicazione.  
  
 Se il supporto di posta elettronica è disponibile, MFC consente la voce di menu con `OnUpdateFileSendMail` e successivamente elabora il comando con `OnFileSendMail`.  Se il supporto di posta elettronica non è disponibile, MFC rimuove automaticamente la voce di menu pertanto l'utente non la visualizzarla.  
  
> [!TIP]
>  Anziché manualmente aggiungendo voci della mappa messaggi come descritte in precedenza, è possibile utilizzare la finestra delle proprietà della classe per eseguire il mapping di messaggi a funzioni.  Per ulteriori informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
 Per informazioni correlate, vedere cenni preliminari su [MAPI](../mfc/mapi.md).  
  
 Per ulteriori informazioni sulle funzioni membro di **CDocument** che consentono MAPI, vedere:  
  
-   [CDocument::OnFileSendMail](../Topic/CDocument::OnFileSendMail.md)  
  
-   [CDocument::OnUpdateFileSendMail](../Topic/CDocument::OnUpdateFileSendMail.md)  
  
-   [COleDocument::OnFileSendMail](../Topic/COleDocument::OnFileSendMail.md)  
  
## Vedere anche  
 [MAPI](../mfc/mapi.md)