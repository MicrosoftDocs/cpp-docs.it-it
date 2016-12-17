---
title: "CMFCStatusBar Class | Microsoft Docs"
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
  - "CMFCStatusBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCStatusBar class"
ms.assetid: f2960d1d-f4ed-41e8-bd99-0382b2f8d88e
caps.latest.revision: 36
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCStatusBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCStatusBar` implementa una barra di stato simile alla classe `CStatusBar`.  Tuttavia, la classe `CMFCStatusBar` dispone di funzionalità non fornite dalla classe `CStatusBar`, come la possibilità di visualizzare le immagini, le animazioni e gli indicatori di stato, e la capacità di risposta del mouse fare doppio clic su.  
  
## Sintassi  
  
```  
class CMFCStatusBar : public CPane  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCStatusBar::CalcFixedLayout](../Topic/CMFCStatusBar::CalcFixedLayout.md)|\(Override [CBasePane::CalcFixedLayout](../Topic/CBasePane::CalcFixedLayout.md)\).|  
|[CMFCStatusBar::CommandToIndex](../Topic/CMFCStatusBar::CommandToIndex.md)||  
|[CMFCStatusBar::Create](../Topic/CMFCStatusBar::Create.md)|Crea una barra di controllo e allegarlo all'oggetto [CPane](../../mfc/reference/cpane-class.md).  \(Override [CPane::Create](../Topic/CPane::Create.md)\).|  
|[CMFCStatusBar::CreateEx](../Topic/CMFCStatusBar::CreateEx.md)|Crea una barra di controllo e allegarlo all'oggetto [CPane](../../mfc/reference/cpane-class.md).  \(Override [CPane::CreateEx](../Topic/CPane::CreateEx.md)\).|  
|[CMFCStatusBar::DoesAllowDynInsertBefore](../Topic/CMFCStatusBar::DoesAllowDynInsertBefore.md)|Determina se un altro riquadro può essere inserito dinamicamente da questo riquadro e il frame padre.  \(Override [CBasePane::DoesAllowDynInsertBefore](../Topic/CBasePane::DoesAllowDynInsertBefore.md)\).|  
|[CMFCStatusBar::EnablePaneDoubleClick](../Topic/CMFCStatusBar::EnablePaneDoubleClick.md)|Abilita o disabilita la gestione del mouse fare doppio clic su sulla barra di stato.|  
|[CMFCStatusBar::EnablePaneProgressBar](../Topic/CMFCStatusBar::EnablePaneProgressBar.md)|Visualizzare un indicatore di stato nel riquadro specificato.|  
|[CMFCStatusBar::GetCount](../Topic/CMFCStatusBar::GetCount.md)|Restituisce il numero dei riquadri nella barra di stato.|  
|[CMFCStatusBar::GetDrawExtendedArea](../Topic/CMFCStatusBar::GetDrawExtendedArea.md)||  
|[CMFCStatusBar::GetExtendedArea](../Topic/CMFCStatusBar::GetExtendedArea.md)||  
|[CMFCStatusBar::GetItemID](../Topic/CMFCStatusBar::GetItemID.md)||  
|[CMFCStatusBar::GetItemRect](../Topic/CMFCStatusBar::GetItemRect.md)||  
|[CMFCStatusBar::GetPaneInfo](../Topic/CMFCStatusBar::GetPaneInfo.md)||  
|[CMFCStatusBar::GetPaneProgress](../Topic/CMFCStatusBar::GetPaneProgress.md)||  
|[CMFCStatusBar::GetPaneStyle](../Topic/CMFCStatusBar::GetPaneStyle.md)|Restituisce lo stile del riquadro.  \(Override [CBasePane::GetPaneStyle](../Topic/CBasePane::GetPaneStyle.md)\).|  
|[CMFCStatusBar::GetPaneText](../Topic/CMFCStatusBar::GetPaneText.md)||  
|[CMFCStatusBar::GetPaneWidth](../Topic/CMFCStatusBar::GetPaneWidth.md)|Restituisce la larghezza, in pixel, del riquadro specificato barra di stato.|  
|[CMFCStatusBar::GetTipText](../Topic/CMFCStatusBar::GetTipText.md)|Restituisce il testo di descrizione comandi per il riquadro specificato barra di stato.|  
|[CMFCStatusBar::InvalidatePaneContent](../Topic/CMFCStatusBar::InvalidatePaneContent.md)|Invalida il riquadro specificato e ridisegna il contenuto.|  
|[CMFCStatusBar::PreCreateWindow](../Topic/CMFCStatusBar::PreCreateWindow.md)|Chiamato dal framework prima della creazione della finestra di Windows associata a questo oggetto `CWnd`.  \(Override [CWnd::PreCreateWindow](../Topic/CWnd::PreCreateWindow.md)\).|  
|[CMFCStatusBar::SetDrawExtendedArea](../Topic/CMFCStatusBar::SetDrawExtendedArea.md)||  
|[CMFCStatusBar::SetIndicators](../Topic/CMFCStatusBar::SetIndicators.md)||  
|[CMFCStatusBar::SetPaneAnimation](../Topic/CMFCStatusBar::SetPaneAnimation.md)|Assegna un'animazione al riquadro specificato.|  
|[CMFCStatusBar::SetPaneBackgroundColor](../Topic/CMFCStatusBar::SetPaneBackgroundColor.md)|Imposta il colore di sfondo del riquadro specificato barra di stato.|  
|[CMFCStatusBar::SetPaneIcon](../Topic/CMFCStatusBar::SetPaneIcon.md)|Imposta l'icona dell'indicatore del riquadro specificato barra di stato.|  
|[CMFCStatusBar::SetPaneInfo](../Topic/CMFCStatusBar::SetPaneInfo.md)||  
|[CMFCStatusBar::SetPaneProgress](../Topic/CMFCStatusBar::SetPaneProgress.md)|Imposta lo stato corrente dell'indicatore di stato per il riquadro specificato barra di stato.|  
|[CMFCStatusBar::SetPaneStyle](../Topic/CMFCStatusBar::SetPaneStyle.md)|Imposta lo stile del riquadro.  \(Override [CBasePane::SetPaneStyle](../Topic/CBasePane::SetPaneStyle.md)\).|  
|[CMFCStatusBar::SetPaneText](../Topic/CMFCStatusBar::SetPaneText.md)||  
|[CMFCStatusBar::SetPaneTextColor](../Topic/CMFCStatusBar::SetPaneTextColor.md)|Imposta il colore del testo per il riquadro specificato barra di stato.|  
|[CMFCStatusBar::SetPaneWidth](../Topic/CMFCStatusBar::SetPaneWidth.md)|Imposta la larghezza in pixel il riquadro specificato barra di stato.|  
|[CMFCStatusBar::SetTipText](../Topic/CMFCStatusBar::SetTipText.md)|Imposta il testo di descrizione comandi per il riquadro specificato barra di stato.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCStatusBar::OnDrawPane](../Topic/CMFCStatusBar::OnDrawPane.md)|Chiamato dal framework quando ridisegna il riquadro della barra di stato.|  
  
## Note  
 Nel diagramma seguente viene illustrata una figura barra di stato dell'applicazione [Esempio demo barra di stato](../../top/visual-cpp-samples.md).  
  
 ![Esempio di CMFCStatusBar](../../mfc/reference/media/cmfcstatusbar.png "CMFCStatusBar")  
  
## Esempio  
 L'esempio seguente illustra le variabili locali dall'applicazione per chiamare diversi metodi nella classe `CMFCStatusBar`.  Queste variabili vengono dichiarate in StatusBarDemoView.h.  La cornice principale è dichiarata in MainFrm.h, il documento viene dichiarato in StatusBarDemoDoc.h e la visualizzazione viene dichiarata in StatusBarDemoView.h.  Questo frammento di codice fa parte [Esempio demo barra di stato](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#9](../../mfc/reference/codesnippet/CPP/cmfcstatusbar-class_1.h)]  
  
## Esempio  
 L'esempio seguente illustra come ottenere un riferimento all'oggetto `CMFCStatusBar` introducendo il metodo `GetStatusBar` in MainFrm.h quindi chiamare il metodo dal metodo `GetStatusBar` in StatusBarDemoView.h.  Questo frammento di codice fa parte [Esempio demo barra di stato](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#7](../../mfc/reference/codesnippet/CPP/cmfcstatusbar-class_2.h)]  
[!code-cpp[NVC_MFC_StatusBarDemo#8](../../mfc/reference/codesnippet/CPP/cmfcstatusbar-class_3.h)]  
  
## Esempio  
 Nell'esempio seguente viene illustrato come chiamare i vari metodi della classe `CMFCStatusBar` in StatusBarDemoView.cpp.  Le costanti sono dichiarate in MainFrm.h.  L'esempio mostra come impostare l'icona, impostare il testo di descrizione comandi del riquadro della barra di stato, viene visualizzato un indicatore di stato nel riquadro specificato, assegnare un'animazione al riquadro specificato, impostare il testo e la larghezza del riquadro della barra di stato e impostare l'indicatore di stato corrente dell'indicatore di stato per il riquadro della barra di stato.  Questo frammento di codice fa parte [Esempio demo barra di stato](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#6](../../mfc/reference/codesnippet/CPP/cmfcstatusbar-class_4.h)]  
[!code-cpp[NVC_MFC_StatusBarDemo#1](../../mfc/reference/codesnippet/CPP/cmfcstatusbar-class_5.cpp)]  
[!code-cpp[NVC_MFC_StatusBarDemo#2](../../mfc/reference/codesnippet/CPP/cmfcstatusbar-class_6.cpp)]  
[!code-cpp[NVC_MFC_StatusBarDemo#3](../../mfc/reference/codesnippet/CPP/cmfcstatusbar-class_7.cpp)]  
[!code-cpp[NVC_MFC_StatusBarDemo#4](../../mfc/reference/codesnippet/CPP/cmfcstatusbar-class_8.cpp)]  
[!code-cpp[NVC_MFC_StatusBarDemo#5](../../mfc/reference/codesnippet/CPP/cmfcstatusbar-class_9.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md)  
  
## Requisiti  
 **intestazione:** afxstatusbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)   
 [CStatusBar Class](../../mfc/reference/cstatusbar-class.md)