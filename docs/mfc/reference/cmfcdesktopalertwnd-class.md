---
title: "CMFCDesktopAlertWnd Class | Microsoft Docs"
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
  - "CMFCDesktopAlertWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDesktopAlertWnd class"
ms.assetid: 73a2dd7b-ea84-4ae2-9830-7cf6e8dd2425
caps.latest.revision: 33
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCDesktopAlertWnd Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCDesktopAlertWnd` implementa la funzionalità di una finestra di dialogo non modale che viene visualizzata sullo schermo informare l'utente su un evento.  
  
## Sintassi  
  
```  
class CMFCDesktopAlertWnd : public CWnd  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDesktopAlertWnd::Create](../Topic/CMFCDesktopAlertWnd::Create.md)|Crea e inizializza la finestra di avviso.|  
|[CMFCDesktopAlertWnd::GetAnimationSpeed](../Topic/CMFCDesktopAlertWnd::GetAnimationSpeed.md)|Restituisce la velocità di animazione.|  
|[CMFCDesktopAlertWnd::GetAnimationType](../Topic/CMFCDesktopAlertWnd::GetAnimationType.md)|Restituisce il tipo di animazione.|  
|[CMFCDesktopAlertWnd::GetAutoCloseTime](../Topic/CMFCDesktopAlertWnd::GetAutoCloseTime.md)|Restituisce automaticamente Chiudi è scaduto.|  
|[CMFCDesktopAlertWnd::GetCaptionHeight](../Topic/CMFCDesktopAlertWnd::GetCaptionHeight.md)|Restituisce l'altezza della barra del titolo.|  
|[CMFCDesktopAlertWnd::GetDialogSize](../Topic/CMFCDesktopAlertWnd::GetDialogSize.md)||  
|[CMFCDesktopAlertWnd::GetLastPos](../Topic/CMFCDesktopAlertWnd::GetLastPos.md)|Restituisce l'ultima posizione valida della finestra di avviso sullo schermo.|  
|[CMFCDesktopAlertWnd::GetTransparency](../Topic/CMFCDesktopAlertWnd::GetTransparency.md)|Restituisce il livello di trasparenza.|  
|[CMFCDesktopAlertWnd::HasSmallCaption](../Topic/CMFCDesktopAlertWnd::HasSmallCaption.md)|Determina se la finestra di avviso con una piccola barra del titolo.|  
|[CMFCDesktopAlertWnd::OnBeforeShow](../Topic/CMFCDesktopAlertWnd::OnBeforeShow.md)||  
|[CMFCDesktopAlertWnd::OnClickLinkButton](../Topic/CMFCDesktopAlertWnd::OnClickLinkButton.md)|Chiamato dal framework quando l'utente fa clic su un pulsante di collegamento posizionato nel menu attenzione desktop.|  
|[CMFCDesktopAlertWnd::OnCommand](../Topic/CMFCDesktopAlertWnd::OnCommand.md)|Il framework chiama la funzione membro quando l'utente seleziona un elemento da un menu, quando un controllo figlio invia un messaggio di notifica, oppure quando una sequenza di tasti di scelta rapida viene convertito.  \(Override [CWnd::OnCommand](../Topic/CWnd::OnCommand.md)\).|  
|[CMFCDesktopAlertWnd::OnDraw](../Topic/CMFCDesktopAlertWnd::OnDraw.md)||  
|[CMFCDesktopAlertWnd::ProcessCommand](../Topic/CMFCDesktopAlertWnd::ProcessCommand.md)||  
|[CMFCDesktopAlertWnd::SetAnimationSpeed](../Topic/CMFCDesktopAlertWnd::SetAnimationSpeed.md)|Imposta la nuova velocità di animazione.|  
|[CMFCDesktopAlertWnd::SetAnimationType](../Topic/CMFCDesktopAlertWnd::SetAnimationType.md)|Imposta il tipo di animazione.|  
|[CMFCDesktopAlertWnd::SetAutoCloseTime](../Topic/CMFCDesktopAlertWnd::SetAutoCloseTime.md)|Imposta automaticamente Chiudi è scaduto.|  
|[CMFCDesktopAlertWnd::SetSmallCaption](../Topic/CMFCDesktopAlertWnd::SetSmallCaption.md)|Opzioni tra le piccole e didascalie normali.|  
|[CMFCDesktopAlertWnd::SetTransparency](../Topic/CMFCDesktopAlertWnd::SetTransparency.md)|Imposta il livello di trasparenza.|  
  
## Note  
 Una finestra di avviso può essere trasparente, può essere visualizzato con effetti animazione e può scomparire \(dopo un ritardo specificato o quando l'utente lo chiude facendo clic sul pulsante da\).  
  
 Una finestra di messaggio può anche contenere una finestra di dialogo predefinita che a sua volta contiene un'icona, il testo del messaggio \(un'etichetta\) e un collegamento.  In alternativa, una finestra di messaggio può contenere una finestra di dialogo personalizzata dalle risorse dell'applicazione.  
  
 Creazione di una finestra di avviso in due passaggi.  Innanzitutto, chiamare il costruttore per costruire l'oggetto `CMFCDesktopAlertWnd`.  In secondo luogo, chiamare la funzione membro [CMFCDesktopAlertWnd::Create](../Topic/CMFCDesktopAlertWnd::Create.md) per creare la finestra e per associarlo all'oggetto `CMFCDesktopAlertWnd`.  
  
 L'oggetto `CMFCDesktopAlertWnd` creata una finestra di dialogo figlio speciale che riempie l'area client della finestra di avviso.  La finestra di dialogo a tutti i controlli che vengono inseriti in.  
  
 Per visualizzare una finestra di dialogo personalizzata nella finestra popup, seguire questi passaggi:  
  
1.  Derivare una classe da `CMFCDesktopAlertDialog`.  
  
2.  Creare un modello di finestra di dialogo figlio nelle risorse.  
  
3.  Chiamare [CMFCDesktopAlertWnd::Create](../Topic/CMFCDesktopAlertWnd::Create.md) mediante l'id della risorsa modello di finestra di dialogo e un puntatore alle informazioni sulla classe di runtime della classe derivata.  
  
4.  Pianificare la finestra di dialogo personalizzata per gestire tutte le notifiche provenienti dai controlli contenuti, o programmi i controlli ospitati per gestire direttamente le notifiche.  
  
 Utilizzare le seguenti funzioni per controllare il comportamento della finestra di avviso:  
  
-   Impostare il tipo di animazione chiamando [CMFCDesktopAlertWnd::SetAnimationType](../Topic/CMFCDesktopAlertWnd::SetAnimationType.md).  Le opzioni valide sono illustrati, scorrono e si dissolvenze.  
  
-   Impostare la velocità di animazione di frame chiamando [CMFCDesktopAlertWnd::SetAnimationSpeed](../Topic/CMFCDesktopAlertWnd::SetAnimationSpeed.md).  
  
-   Impostare il livello di trasparenza chiamando [CMFCDesktopAlertWnd::SetTransparency](../Topic/CMFCDesktopAlertWnd::SetTransparency.md).  
  
-   Modificare la dimensione della barra del titolo a piccolo chiamando [CMFCDesktopAlertWnd::SetSmallCaption](../Topic/CMFCDesktopAlertWnd::SetSmallCaption.md).  Una piccola barra del titolo è 7 pixel di altezza.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCDesktopAlertWnd` per configurare un oggetto `CMFCDesktopAlertWnd`.  L'esempio mostra come impostare un tipo di animazione, impostare la trasparenza della finestra popup, specifica che la finestra di avviso viene visualizzata una piccola barra del titolo e impostare il tempo che i periodi prima della finestra di avviso chiude automaticamente.  Viene inoltre illustrato come creare e inizializzare la finestra di avviso.  Questo frammento di codice fa parte [Esempio di demo del desktop](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo#1](../../mfc/reference/codesnippet/CPP/cmfcdesktopalertwnd-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md)  
  
## Requisiti  
 **intestazione:** afxDesktopAlertWnd.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCDesktopAlertWndInfo Class](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)   
 [CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)