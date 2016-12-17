---
title: "Controlli ActiveX MFC: metodi | Microsoft Docs"
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
  - "MFC (controlli ActiveX), metodi"
ms.assetid: e20271de-6ffa-4ba0-848b-bafe6c9e510c
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: metodi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo ActiveX genera eventi per comunicare tra se stesso e il proprio contenitore di controlli.  Un contenitore è possibile comunicare con un controllo per l'utilizzo di metodi e proprietà.  I metodi sono definiti anche funzioni.  
  
 Le proprietà e i metodi forniscono un'interfaccia esportata per l'utilizzo da parte di altre applicazioni, ad esempio i client di automazione e contenitori di controlli ActiveX.  Per ulteriori informazioni sulle proprietà dei controlli ActiveX, vedere l'articolo [Controlli ActiveX MFC: Proprietà](../mfc/mfc-activex-controls-properties.md).  
  
 I metodi sono simili utilizzato e scopo le funzioni membro di una classe c\+\+.  Esistono due tipi di metodi che il controllo può implementare: e azione personalizzata.  Simile agli eventi predefiniti, i metodi predefiniti sono quei metodi per i quali [COleControl](../mfc/reference/colecontrol-class.md) fornisce un'implementazione.  Per ulteriori informazioni sui metodi predefiniti, vedere l'articolo [Controlli ActiveX MFC: Aggiunta dei metodi predefiniti](../mfc/mfc-activex-controls-adding-stock-methods.md).  I metodi personalizzati, definiti dallo sviluppatore, consentono la personalizzazione aggiuntive del controllo.  Per ulteriori informazioni, vedere l'articolo [Controlli ActiveX MFC: Metodi personalizzate di aggiunta](../mfc/mfc-activex-controls-adding-custom-methods.md).  
  
 Libreria Microsoft Foundation classes \(MFC\) implementa un meccanismo che consente il controllo ai metodi predefiniti e personalizzati di supporto.  La prima parte è una classe `COleControl`.  Derivato da `CWnd`, i metodi di azione del supporto tecnico funzioni membro di `COleControl` comuni a tutti i controlli ActiveX.  La seconda parte di questo meccanismo è la mappa submit.  Una mappa di invio è simile a una mappa messaggi; tuttavia, anziché eseguire il mapping di una funzione a un messaggio ID delle finestre, una mappa di invio esegue il mapping delle funzioni membro virtuali agli ID IDispatch.  
  
 Affinché un controllo supporta i vari metodi correttamente, la classe deve dichiarare una mappa di invio.  Questa operazione viene eseguita dalla riga di codice seguente trova in intestazione della classe del controllo \(. H\) file:  
  
 [!code-cpp[NVC_MFC_AxUI#13](../mfc/codesnippet/CPP/mfc-activex-controls-methods_1.h)]  
  
 Lo scopo principale della mappa di invio è stabilire la relazione tra i nomi dei metodi utilizzati da un chiamante esterno \(come il contenitore\) e le funzioni membro di classe di controlli che implementano i metodi.  Dopo la mappa di invio è stata dichiarata, deve essere definita nel file di implementazione del controllo \(.CPP\).  Le seguenti righe di codice definiscono la mappa di invio:  
  
 [!code-cpp[NVC_MFC_AxUI#14](../mfc/codesnippet/CPP/mfc-activex-controls-methods_2.cpp)]  
[!code-cpp[NVC_MFC_AxUI#15](../mfc/codesnippet/CPP/mfc-activex-controls-methods_3.cpp)]  
  
 Se è stato utilizzato [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md) per creare il progetto, tali righe sono state aggiunte automaticamente.  Se la Creazione guidata controllo ActiveX MFC non venisse utilizzato, è necessario aggiungere queste righe manualmente.  
  
 Gli articoli seguenti vengono illustrati in dettaglio i metodi:  
  
-   [Controlli ActiveX MFC: Aggiunta dei metodi predefiniti](../mfc/mfc-activex-controls-adding-stock-methods.md)  
  
-   [Controlli ActiveX MFC: Metodi personalizzate di aggiunta](../mfc/mfc-activex-controls-adding-custom-methods.md)  
  
-   [Controlli ActiveX MFC: Restituzione di codici di errore da un metodo](../mfc/mfc-activex-controls-returning-error-codes-from-a-method.md)  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)