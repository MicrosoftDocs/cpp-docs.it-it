---
title: "Classe CMFCCaptionBar | Microsoft Docs"
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
  - "CMFCCaptionBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCCaptionBar (classe)"
ms.assetid: acb54d5f-14ff-4c96-aeb3-7717cf566d9a
caps.latest.revision: 28
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CMFCCaptionBar
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un oggetto di `CMFCCaptionBar` è una barra di controllo da visualizzare tre elementi: un pulsante, un'etichetta di testo e una bitmap.  È possibile visualizzare solo un elemento di ogni tipo per volta.  È possibile allineare ogni elemento a sinistra o al bordo destro del controllo o al centro.  È inoltre possibile applicare un piano o uno stile tridimensionale ai bordi superiore e inferiore dell'elevato della barra del titolo.  
  
## Sintassi  
  
```  
class CMFCCaptionBar : public CPane  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionBar::Create](../Topic/CMFCCaptionBar::Create.md)|Crea il controllo barra del titolo e lo aggiunge all'oggetto di `CMFCCaptionBar`.|  
|[CMFCCaptionBar::DoesAllowDynInsertBefore](../Topic/CMFCCaptionBar::DoesAllowDynInsertBefore.md)|Indica se un altro riquadro può essere inserito dinamicamente dalla barra del titolo e il relativo frame padre.  \(Override [CBasePane::DoesAllowDynInsertBefore](../Topic/CBasePane::DoesAllowDynInsertBefore.md)\).|  
|[CMFCCaptionBar::EnableButton](../Topic/CMFCCaptionBar::EnableButton.md)|Abilita o disabilita il pulsante sulla barra del titolo.|  
|[CMFCCaptionBar::GetAlignment](../Topic/CMFCCaptionBar::GetAlignment.md)|Restituisce l'allineamento dell'elemento specificato.|  
|[CMFCCaptionBar::GetBorderSize](../Topic/CMFCCaptionBar::GetBorderSize.md)|Restituisce la dimensione del bordo della barra del titolo.|  
|[CMFCCaptionBar::GetButtonRect](../Topic/CMFCCaptionBar::GetButtonRect.md)|Recupera il rettangolo di delimitazione del pulsante sulla barra del titolo.|  
|[CMFCCaptionBar::GetMargin](../Topic/CMFCCaptionBar::GetMargin.md)|Restituisce la distanza tra il bordo degli elementi della barra del titolo e il bordo del controllo barra del titolo.|  
|[CMFCCaptionBar::IsMessageBarMode](../Topic/CMFCCaptionBar::IsMessageBarMode.md)|Specifica se la barra del titolo è in modalità barra dei messaggi.|  
|[CMFCCaptionBar::RemoveBitmap](../Topic/CMFCCaptionBar::RemoveBitmap.md)|Rimuove l'immagine bitmap dalla barra del titolo.|  
|[CMFCCaptionBar::RemoveButton](../Topic/CMFCCaptionBar::RemoveButton.md)|Rimuove il pulsante della barra del titolo.|  
|[CMFCCaptionBar::RemoveIcon](../Topic/CMFCCaptionBar::RemoveIcon.md)|Rimuove l'icona dalla barra del titolo.|  
|[CMFCCaptionBar::RemoveText](../Topic/CMFCCaptionBar::RemoveText.md)|Rimuove l'etichetta di testo dalla barra del titolo.|  
|[CMFCCaptionBar::SetBitmap](../Topic/CMFCCaptionBar::SetBitmap.md)|L'immagine bitmap per la didascalia.|  
|[CMFCCaptionBar::SetBorderSize](../Topic/CMFCCaptionBar::SetBorderSize.md)|Imposta la dimensione del bordo della barra del titolo.|  
|[CMFCCaptionBar::SetButton](../Topic/CMFCCaptionBar::SetButton.md)|Imposta il pulsante per la barra del titolo.|  
|[CMFCCaptionBar::SetButtonPressed](../Topic/CMFCCaptionBar::SetButtonPressed.md)|Specifica se la coerenza del pulsante hanno raggiunto.|  
|[CMFCCaptionBar::SetButtonToolTip](../Topic/CMFCCaptionBar::SetButtonToolTip.md)|Imposta la descrizione comando per il pulsante.|  
|[CMFCCaptionBar::SetFlatBorder](../Topic/CMFCCaptionBar::SetFlatBorder.md)|Imposta lo stile del bordo della barra del titolo.|  
|[CMFCCaptionBar::SetIcon](../Topic/CMFCCaptionBar::SetIcon.md)|Imposta l'icona per una didascalia.|  
|[CMFCCaptionBar::SetImageToolTip](../Topic/CMFCCaptionBar::SetImageToolTip.md)|Imposta la descrizione comando per l'immagine alla barra del titolo.|  
|[CMFCCaptionBar::SetMargin](../Topic/CMFCCaptionBar::SetMargin.md)|Imposta la distanza tra il bordo dell'elemento barra del titolo e il bordo del controllo barra del titolo.|  
|[CMFCCaptionBar::SetText](../Topic/CMFCCaptionBar::SetText.md)|Impostare l'etichetta di testo della didascalia.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionBar::OnDrawBackground](../Topic/CMFCCaptionBar::OnDrawBackground.md)|Chiamato dal framework per riempire lo sfondo della didascalia.|  
|[CMFCCaptionBar::OnDrawBorder](../Topic/CMFCCaptionBar::OnDrawBorder.md)|Chiamato dal framework per disegnare il bordo della barra del titolo.|  
|[CMFCCaptionBar::OnDrawButton](../Topic/CMFCCaptionBar::OnDrawButton.md)|Chiamato dal framework per disegnare il pulsante della barra del titolo.|  
|[CMFCCaptionBar::OnDrawImage](../Topic/CMFCCaptionBar::OnDrawImage.md)|Chiamato dal framework per disegnare l'immagine della barra del titolo.|  
|[CMFCCaptionBar::OnDrawText](../Topic/CMFCCaptionBar::OnDrawText.md)|Chiamato dal framework per creare il testo della didascalia.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionBar::m\_clrBarBackground](../Topic/CMFCCaptionBar::m_clrBarBackground.md)|Il colore di sfondo della didascalia.|  
|[CMFCCaptionBar::m\_clrBarBorder](../Topic/CMFCCaptionBar::m_clrBarBorder.md)|Il colore del bordo della barra del titolo.|  
|[CMFCCaptionBar::m\_clrBarText](../Topic/CMFCCaptionBar::m_clrBarText.md)|Il colore del testo della didascalia.|  
  
## Note  
 Per creare una barra del titolo, seguire questi passaggi:  
  
1.  Creare l'oggetto di `CMFCCaptionBar`.  In genere, è necessario aggiungere la barra del titolo a una classe della finestra cornice.  
  
2.  Chiamare il metodo di [CMFCCaptionBar::Create](../Topic/CMFCCaptionBar::Create.md) per creare il controllo barra del titolo e per associarlo all'oggetto di `CMFCCaptionBar`.  
  
3.  Chiamare [CMFCCaptionBar::SetButton](../Topic/CMFCCaptionBar::SetButton.md), [CMFCCaptionBar::SetText](../Topic/CMFCCaptionBar::SetText.md), [CMFCCaptionBar::SetIcon](../Topic/CMFCCaptionBar::SetIcon.md)e [CMFCCaptionBar::SetBitmap](../Topic/CMFCCaptionBar::SetBitmap.md) per impostare gli elementi della barra del titolo.  
  
 Quando si imposta l'elemento pulsante, è necessario assegnare un ID di comando sul pulsante.  Quando l'utente fa clic sul pulsante, la didascalia di destinazione dei messaggi di `WM_COMMAND` con questo ID alla finestra cornice padre.  
  
 La barra del titolo può anche essere utilizzata in modalità barra dei messaggi, che consente la barra dei messaggi che viene visualizzato nelle applicazioni Microsoft Office 2007.  In modalità barra dei messaggi, la barra del titolo visualizzare una bitmap, un messaggio e un pulsante \(in genere visualizzata una finestra di dialogo.\) È possibile assegnare una descrizione comandi la bitmap.  
  
 Per abilitare la modalità della barra dei messaggi, chiamare [CMFCCaptionBar::Create](../Topic/CMFCCaptionBar::Create.md) e il quarto parametro \(bIsMessageBarMode\) a `TRUE`.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe di `CMFCCaptionBar`.  L'esempio mostra come creare il controllo barra del titolo, impostare un bordo tridimensionale barra del titolo, impostare la distanza, in pixel, tra il bordo degli elementi della barra del titolo e il bordo del controllo barra del titolo, impostare il pulsante per la barra del titolo, impostare la descrizione comando per il pulsante, impostare l'etichetta di testo alla barra del titolo, impostare l'immagine bitmap alla barra del titolo e impostare la descrizione comando per l'immagine nella barra del titolo.  Questo frammento di codice fa parte di [Esempio 2007 demo di MS Office](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo#1](../../mfc/reference/codesnippet/CPP/cmfccaptionbar-class_1.h)]  
[!code-cpp[NVC_MFC_MSOffice2007Demo#2](../../mfc/reference/codesnippet/CPP/cmfccaptionbar-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCCaptionBar](../../mfc/reference/cmfccaptionbar-class.md)  
  
## Requisiti  
 **Intestazione:** afxcaptionbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)