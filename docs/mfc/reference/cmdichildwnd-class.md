---
title: "CMDIChildWnd Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMDIChildWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre figlio, CMDIChildWnd class"
  - "CMDIChildWnd class"
  - "MDI [C++], finestre figlio"
  - "windows [C++], MDI"
ms.assetid: 6d07f5d4-9a3e-4723-9fa5-e65bb669fdd5
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMDIChildWnd Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di una finestra figlio di \(MDI\) con interfaccia a documenti multipli di Windows, con membri per gestire la finestra.  
  
## Sintassi  
  
```  
class CMDIChildWnd : public CFrameWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDIChildWnd::CMDIChildWnd](../Topic/CMDIChildWnd::CMDIChildWnd.md)|Costruisce un oggetto `CMDIChildWnd`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDIChildWnd::Create](../Topic/CMDIChildWnd::Create.md)|Crea la finestra figlio MDI Windows associata all'oggetto `CMDIChildWnd`.|  
|[CMDIChildWnd::GetMDIFrame](../Topic/CMDIChildWnd::GetMDIFrame.md)|Restituisce il frame padre MDI della finestra client MDI.|  
|[CMDIChildWnd::MDIActivate](../Topic/CMDIChildWnd::MDIActivate.md)|Attiva la finestra figlio MDI.|  
|[CMDIChildWnd::MDIDestroy](../Topic/CMDIChildWnd::MDIDestroy.md)|Elimina tale finestra figlio MDI.|  
|[CMDIChildWnd::MDIMaximize](../Topic/CMDIChildWnd::MDIMaximize.md)|Ottimizza la finestra figlio MDI.|  
|[CMDIChildWnd::MDIRestore](../Topic/CMDIChildWnd::MDIRestore.md)|Ripristinare questa finestra figlio MDI dimensione ingrandita o ridotta.|  
|[CMDIChildWnd::SetHandles](../Topic/CMDIChildWnd::SetHandles.md)|Imposta un handle per le risorse tasto di scelta rapida e del menu.|  
  
## Note  
 Gli aspetti di una finestra figlio MDI molto simile a una finestra cornice tipica, con la differenza che la finestra figlio MDI viene visualizzato in una finestra cornice MDI anziché sul desktop.  Una finestra figlio MDI non include una barra dei menu dei propri, ma condivide il menu della finestra cornice MDI.  Il framework modifica automaticamente il menu della cornice MDI per rappresentare attualmente alla finestra figlio MDI attiva.  
  
 Per creare una finestra figlio MDI utile per l'applicazione, derivare una classe da `CMDIChildWnd`.  Aggiungere le variabili membro alla classe derivata all'archivio dati specifici dell'applicazione.  Implementare la funzione membro per la gestione e una mappa messaggi nella classe derivata per specificare l'evento che si verifica quando i messaggi vengono indirizzati alla finestra.  
  
 Esistono tre modi per creare una finestra figlio MDI:  
  
-   Direttamente costruiscala utilizzando **Crea**.  
  
-   Direttamente costruiscala utilizzando `LoadFrame`.  
  
-   Costruiscala indirettamente da un modello di documento.  
  
 Prima di chiamare **Crea** o `LoadFrame`, è necessario costruire l'oggetto della finestra cornice nell'heap tramite l'operatore C\+\+ **new**.  Prima che chiami **Crea** può inoltre possibile registrare una classe finestra con la funzione globale [AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md) per impostare gli stili della classe e l'icona del frame.  
  
 Utilizzare la funzione membro **Crea** per passare i parametri di creazione del frame come argomenti diretti.  
  
 `LoadFrame` richiede meno argomenti che **Crea**e ne recupera la maggior parte dei relativi valori predefiniti delle risorse, inclusi la barra del titolo del frame, l'icona, la tabella dei tasti di scelta rapida e il menu.  Per essere accessibile da `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa, ad esempio **IDR\_MAINFRAME**\).  
  
 Quando un oggetto `CMDIChildWnd` contiene le visualizzazioni e i documenti, vengono creati indirettamente dal framework anziché direttamente dal programmatore.  L'oggetto `CDocTemplate` orchestra la creazione del frame, la creazione delle visualizzazioni contenitore e la connessione delle visualizzazioni al documento appropriato.  I parametri del costruttore `CDocTemplate` specificano `CRuntimeClass` delle tre classi in questione \(documento, frame e visualizzazione.  Un oggetto `CRuntimeClass` viene utilizzato dal framework per creare dinamicamente i nuovi frame una volta specificato dall'utente \(ad esempio, utilizzando il nuovo comando del file o comandi della finestra MDI il nuovo\).  
  
 Una classe della finestra cornice derivata da `CMDIChildWnd` deve essere dichiarata con `DECLARE_DYNCREATE` in modo che il meccanismo di sopra `RUNTIME_CLASS` per funzionare correttamente.  
  
 La classe `CMDIChildWnd` eredita preoccuparsi della relativa implementazione predefinita da `CFrameWnd`.  Per un elenco dettagliato di queste funzionalità, fare riferimento alla descrizione della classe [CFrameWnd](../../mfc/reference/cframewnd-class.md).  La classe `CMDIChildWnd` presenta le seguenti funzionalità aggiuntive:  
  
-   Insieme alla classe `CMultiDocTemplate`, più oggetti `CMDIChildWnd` lo stesso modello di documento condividono lo stesso menu, salvante le risorse di sistema di Windows.  
  
-   Attualmente a un menu attivo della finestra figlio MDI sostituisce completamente attualmente il menu della finestra cornice MDI e la didascalia di alla finestra figlio MDI attiva viene aggiunto alla barra del titolo della finestra cornice MDI.  Per ulteriori esempi di funzioni di finestra figlio MDI che vengono implementate insieme a una finestra cornice MDI, vedere la descrizione della classe `CMDIFrameWnd`.  
  
 Non utilizzare l'operatore C\+\+ **delete** per eliminare una finestra cornice.  In alternativa, utilizzare `CWnd::DestroyWindow`.  L'implementazione `CFrameWnd``PostNcDestroy` eliminato l'oggetto C\+\+ quando la finestra viene distrutta.  Quando l'utente chiude la finestra cornice, il gestore predefinito `OnClose` chiamerà `DestroyWindow`.  
  
 Per ulteriori informazioni su `CMDIChildWnd`, vedere [Applicazioni utilizzano](../../mfc/frame-windows.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 `CMDIChildWnd`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC esempi MDI](../../top/visual-cpp-samples.md)   
 [Esempio MDIDOCVW MFC](../../top/visual-cpp-samples.md)   
 [Esempio SNAPVW MFC](../../top/visual-cpp-samples.md)   
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CMDIFrameWnd Class](../../mfc/reference/cmdiframewnd-class.md)