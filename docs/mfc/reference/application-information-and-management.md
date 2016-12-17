---
title: "Informazioni sull&#39;applicazione e gestione | Microsoft Docs"
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
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni [MFC], gestione"
ms.assetid: b72f4154-24db-4e75-bca3-6873e2459c15
caps.latest.revision: 17
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Informazioni sull&#39;applicazione e gestione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando si scrive un'applicazione, è necessario creare un singolo [CWinApp](../../mfc/reference/cwinapp-class.md)\- oggetto derivato.  Talvolta, è possibile ottenere informazioni su questo oggetto esterno di `CWinApp`\- oggetto derivato.  
  
 La libreria MFC fornisce le seguenti funzioni globali per eseguire queste attività:  
  
### Informazioni sull'applicazione e funzioni di gestione  
  
|||  
|-|-|  
|[AfxBeginThread](../Topic/AfxBeginThread.md)|Crea un nuovo thread.|  
|[AfxEndThread](../Topic/AfxEndThread.md)|Terminare il thread corrente.|  
|[AfxFreeLibrary](../Topic/AfxFreeLibrary.md)|Decrementa il conteggio dei riferimenti del modulo caricato di \(DLL\) della libreria a collegamento dinamico; quando il conteggio dei riferimenti arriva a zero, il modulo non è mappato.|  
|[AfxGetApp](../Topic/AfxGetApp.md)|Restituisce un puntatore a un singolo oggetto di `CWinApp` dell'applicazione.|  
|[AfxGetAppName](../Topic/AfxGetAppName.md)|Restituisce una stringa contenente il nome dell'applicazione.|  
|[AfxGetInstanceHandle](../Topic/AfxGetInstanceHandle.md)|Restituisce `HINSTANCE` che rappresenta l'istanza dell'applicazione.|  
|[AfxGetMainWnd](../Topic/AfxGetMainWnd.md)|Restituisce un puntatore alla finestra "main" corrente di un'applicazione non OLE, verrà visualizzata la finestra cornice sul posto di un'applicazione server.|  
|[AfxGetPerUserRegistration](../Topic/AfxGetPerUserRegistration.md)|Utilizzare questa funzione per determinare se l'applicazione per l'accesso al Registro di sistema nel nodo di **HKEY\_CURRENT\_USER** \(**HKCU**\).|  
|[AfxGetResourceHandle](../Topic/AfxGetResourceHandle.md)|Restituisce `HINSTANCE` all'origine di risorse predefinite dell'applicazione.  Utilizzare questo metodo per accedere direttamente alle risorse dell'applicazione.|  
|[AfxGetThread](../Topic/AfxGetThread.md)|Recupera un puntatore all'oggetto corrente di [CWinThread](../../mfc/reference/cwinthread-class.md).|  
|[AfxInitRichEdit](../Topic/AfxInitRichEdit.md)|Inizializza il controllo Rich Edit versione 1,0 per l'applicazione.|  
|[AfxInitRichEdit2](../Topic/AfxInitRichEdit2.md)|Inizializza la versione 2,0 e il controllo Rich Edit successivo per l'applicazione.|  
|[AfxLoadLibrary](../Topic/AfxLoadLibrary.md)|Esegue il mapping di un modulo DLL e restituisce l'handle che possono essere utilizzate per ottenere l'indirizzo di una funzione di DLL.|  
|[AfxRegisterClass](../Topic/AfxRegisterClass.md)|Registra una classe della finestra in una DLL che utilizza MFC.|  
|[Chiamata di AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md)|Registra una classe di finestre di windows per completare quelli registrati automaticamente da MFC.|  
|[AfxSetPerUserRegistration](../Topic/AfxSetPerUserRegistration.md)|Imposta se l'applicazione per l'accesso al Registro di sistema nel nodo di **HKEY\_CURRENT\_USER** \(**HKCU**\).|  
|[AfxSetResourceHandle](../Topic/AfxSetResourceHandle.md)|Impostare l'handle di `HINSTANCE` in cui le risorse predefinite dell'applicazione vengono caricati.|  
|[AfxSocketInit](../Topic/AfxSocketInit.md)|Chiamato nell'override di `CWinApp::InitInstance` per inizializzare Windows Sockets.|  
|[AfxWinInit](../Topic/AfxWinInit.md)|Chiamato dalla funzione fornita da MFC di `WinMain`, come parte dell'inizializzazione di [CWinApp](../../mfc/reference/cwinapp-class.md) di un'applicazione basata su GUI, inizializzare MFC.  Deve essere chiamato direttamente per le applicazioni console che utilizzano MFC.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [CWinApp Class](../../mfc/reference/cwinapp-class.md)