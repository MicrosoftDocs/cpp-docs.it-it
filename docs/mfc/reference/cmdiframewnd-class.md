---
title: "CMDIFrameWnd Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMDIFrameWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMDIFrameWnd class"
  - "MDI frame windows"
ms.assetid: fa8736e6-511b-4c51-8b4d-eba78378aeb9
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CMDIFrameWnd Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di una finestra cornice di \(MDI\) con interfaccia a documenti multipli di Windows, con membri per gestire la finestra.  
  
## Sintassi  
  
```  
class CMDIFrameWnd : public CFrameWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDIFrameWnd::CMDIFrameWnd](../Topic/CMDIFrameWnd::CMDIFrameWnd.md)|Costruisce un oggetto `CMDIFrameWnd`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDIFrameWnd::CreateClient](../Topic/CMDIFrameWnd::CreateClient.md)|Crea una finestra di Windows **MDICLIENT** per questo `CMDIFrameWnd`.  Chiamata dalla funzione membro `OnCreate``CWnd`.|  
|[CMDIFrameWnd::CreateNewChild](../Topic/CMDIFrameWnd::CreateNewChild.md)|Crea una nuova finestra figlio.|  
|[CMDIFrameWnd::GetWindowMenuPopup](../Topic/CMDIFrameWnd::GetWindowMenuPopup.md)|Restituisce il menu di scelta rapida della finestra.|  
|[CMDIFrameWnd::MDIActivate](../Topic/CMDIFrameWnd::MDIActivate.md)|Attiva una finestra figlio MDI diverso.|  
|[CMDIFrameWnd::MDICascade](../Topic/CMDIFrameWnd::MDICascade.md)|Disporre le finestre figlio in un formato sovrapposte.|  
|[CMDIFrameWnd::MDIGetActive](../Topic/CMDIFrameWnd::MDIGetActive.md)|Recupera attualmente alla finestra figlio MDI attiva, con un flag che indica se il figlio viene ingrandita.|  
|[CMDIFrameWnd::MDIIconArrange](../Topic/CMDIFrameWnd::MDIIconArrange.md)|Disporre le finestre figlio ridotte a icona del documento.|  
|[CMDIFrameWnd::MDIMaximize](../Topic/CMDIFrameWnd::MDIMaximize.md)|Ottimizza una finestra figlio MDI.|  
|[CMDIFrameWnd::MDINext](../Topic/CMDIFrameWnd::MDINext.md)|Attualmente attiva la finestra figlio immediatamente sottostante alla finestra figlio attiva e posiziona attualmente alla finestra figlio attiva in tutte le altre finestre figlio.|  
|[CMDIFrameWnd::MDIPrev](../Topic/CMDIFrameWnd::MDIPrev.md)|Attiva la finestra figlio precedente e posiziona attualmente alla finestra figlio attiva immediatamente sottostante.|  
|[CMDIFrameWnd::MDIRestore](../Topic/CMDIFrameWnd::MDIRestore.md)|Ripristina una finestra figlio MDI dimensione ingrandita o ridotta.|  
|[CMDIFrameWnd::MDISetMenu](../Topic/CMDIFrameWnd::MDISetMenu.md)|Sostituisce il menu di una finestra cornice MDI, il menu di scelta rapida della finestra, o di entrambi.|  
|[CMDIFrameWnd::MDITile](../Topic/CMDIFrameWnd::MDITile.md)|Disporre le finestre figlio in un formato affiancato.|  
  
## Note  
 Per creare una finestra cornice MDI utile per l'applicazione, derivare una classe da `CMDIFrameWnd`.  Aggiungere le variabili membro alla classe derivata all'archivio dati specifici dell'applicazione.  Implementare la funzione membro per la gestione e una mappa messaggi nella classe derivata per specificare l'evento che si verifica quando i messaggi vengono indirizzati alla finestra.  
  
 È possibile costruire una finestra cornice MDI chiamando la funzione membro [LoadFrame](../Topic/CFrameWnd::LoadFrame.md) o [Crea](../Topic/CFrameWnd::Create.md)`CFrameWnd`.  
  
 Prima di chiamare **Crea** o `LoadFrame`, è necessario costruire l'oggetto della finestra cornice nell'heap tramite l'operatore C\+\+ **new**.  Prima che chiami **Crea** può inoltre possibile registrare una classe finestra con la funzione globale [AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md) per impostare gli stili della classe e l'icona del frame.  
  
 Utilizzare la funzione membro **Crea** per passare i parametri di creazione del frame come argomenti diretti.  
  
 `LoadFrame` richiede meno argomenti che **Crea**e ne recupera la maggior parte dei relativi valori predefiniti delle risorse, inclusi la barra del titolo del frame, l'icona, la tabella dei tasti di scelta rapida e il menu.  Per essere eseguito da `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa, ad esempio **IDR\_MAINFRAME**\).  
  
 Sebbene **MDIFrameWnd** derivi da `CFrameWnd`, una classe finestra cornice è derivato da `CMDIFrameWnd` non deve essere dichiarata con `DECLARE_DYNCREATE`.  
  
 La classe `CMDIFrameWnd` eredita preoccuparsi della relativa implementazione predefinita da `CFrameWnd`.  Per un elenco dettagliato di queste funzionalità, vedere la descrizione della classe [CFrameWnd](../../mfc/reference/cframewnd-class.md).  La classe `CMDIFrameWnd` presenta le seguenti funzionalità aggiuntive:  
  
-   Una finestra cornice MDI gestisce la finestra **MDICLIENT**, riposizionante lo insieme alle barre di controllo.  La finestra client MDI è il padre diretto delle finestre cornice figlio MDI.  Gli stili della finestra **WS\_VSCROLL** e **WS\_HSCROLL** specificati in `CMDIFrameWnd` si applicano alla finestra client MDI anziché la finestra cornice principale pertanto l'utente può scorrere l'area client MDI \(come in program manager Windows, ad esempio\).  
  
-   Una finestra cornice MDI possiede un menu predefinito utilizzato come barra dei menu quando non è disponibile alcuna finestra figlio MDI attiva.  Quando esiste un figlio MDI attivo, la barra dei menu della finestra cornice MDI viene automaticamente sostituito dal menu della finestra figlio MDI.  
  
-   Funzionamento di una finestra cornice MDI insieme alla finestra figlio MDI corrente, se presente.  Ad esempio, i messaggi di comando delegati sono attualmente al figlio MDI attivo prima della finestra cornice MDI.  
  
-   Una finestra cornice MDI ha gestori predefiniti per i seguenti comandi di menu standard della finestra:  
  
    -   **ID\_WINDOW\_TILE\_VERT**  
  
    -   **ID\_WINDOW\_TILE\_HORZ**  
  
    -   **ID\_WINDOW\_CASCADE**  
  
    -   **ID\_WINDOW\_ARRANGE**  
  
-   Una finestra cornice MDI dispone di un'implementazione **ID\_WINDOW\_NEW**, che crea un nuovo frame e visualizzazione del documento corrente.  Un'applicazione può eseguire l'override di queste implementazioni predefinite di comando per personalizzare la gestione della finestra MDI.  
  
 Non utilizzare l'operatore C\+\+ **delete** per eliminare una finestra cornice.  In alternativa, utilizzare `CWnd::DestroyWindow`.  L'implementazione `CFrameWnd``PostNcDestroy` eliminato l'oggetto C\+\+ quando la finestra viene distrutta.  Quando l'utente chiude la finestra cornice, il gestore predefinito `OnClose` chiamerà `DestroyWindow`.  
  
 Per ulteriori informazioni su `CMDIFrameWnd`, vedere [Applicazioni utilizzano](../../mfc/frame-windows.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 `CMDIFrameWnd`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC esempi MDI](../../top/visual-cpp-samples.md)   
 [Esempio MDIDOCVW MFC](../../top/visual-cpp-samples.md)   
 [Esempio SNAPVW MFC](../../top/visual-cpp-samples.md)   
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CMDIChildWnd Class](../../mfc/reference/cmdichildwnd-class.md)