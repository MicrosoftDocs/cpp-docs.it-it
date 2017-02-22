---
title: "CMFCOutlookBarPane Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCOutlookBarPane"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanBeRestored method"
  - "CMFCOutlookBarPane class"
  - "Dock method"
  - "IsChangeState method"
  - "OnBeforeFloat method"
  - "RestoreOriginalstate method"
  - "SmartUpdate method"
ms.assetid: 094e2ef3-a118-487e-a4cc-27626108fe08
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CMFCOutlookBarPane Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 Un controllo derivato da [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md) che può essere inserito in una barra di Outlook \([Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)\).  Il riquadro della barra di Outlook contiene una colonna di grandi dimensioni pulsanti.  L'utente può scorrere verso l'alto e verso il basso l'elenco dei pulsanti se è maggiore del riquadro.  Quando l'utente rimuove un riquadro della barra di Outlook dalla barra di Outlook, è mobile o ancorare la finestra cornice principale.  
  
## Sintassi  
  
```  
class CMFCOutlookBarPane : public CMFCToolBar  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCOutlookBarPane::CMFCOutlookBarPane`|Costruttore predefinito.|  
|`CMFCOutlookBarPane::~CMFCOutlookBarPane`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCOutlookBarPane::AddButton](../Topic/CMFCOutlookBarPane::AddButton.md)|Aggiungere un pulsante al riquadro della barra di Outlook.|  
|[CMFCOutlookBarPane::CanBeAttached](../Topic/CMFCOutlookBarPane::CanBeAttached.md)|Determina se il riquadro può essere ancorata a un altro riquadro o finestra cornice.  \(Override [CBasePane::CanBeAttached](../Topic/CBasePane::CanBeAttached.md)\).|  
|`CMFCOutlookBarPane::CanBeRestored`|Determina se il sistema è in grado di ripristinare una barra degli strumenti allo stato originale dopo la personalizzazione.  \(Override [CMFCToolBar::CanBeRestored](../Topic/CMFCToolBar::CanBeRestored.md)\).|  
|[CMFCOutlookBarPane::ClearAll](../Topic/CMFCOutlookBarPane::ClearAll.md)|Liberare le risorse utilizzate dalle immagini nel riquadro della barra di Outlook.|  
|[CMFCOutlookBarPane::Create](../Topic/CMFCOutlookBarPane::Create.md)|Crea il riquadro della barra di Outlook.|  
|`CMFCOutlookBarPane::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|`CMFCOutlookBarPane::Dock`|Chiamato dal framework per ancorare il riquadro della barra di Outlook. \(Override `CPane::Dock`\).|  
|[CMFCOutlookBarPane::EnablePageScrollMode](../Topic/CMFCOutlookBarPane::EnablePageScrollMode.md)|Specifica se le frecce di scorrimento del riquadro della barra di Outlook anticipano l'elenco dei pulsanti nella pagina, o dal pulsante.|  
|[CMFCOutlookBarPane::GetRegularColor](../Topic/CMFCOutlookBarPane::GetRegularColor.md)|Restituisce il colore del testo \(non selezionato\) normale del riquadro della barra di Outlook.|  
|`CMFCOutlookBarPane::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCOutlookBarPane::IsBackgroundTexture](../Topic/CMFCOutlookBarPane::IsBackgroundTexture.md)|Determina se esiste un'immagine di sfondo caricata per il riquadro della barra di Outlook.|  
|`CMFCOutlookBarPane::IsChangeState`|Determina se un riquadro mobile può essere ancorato.  \(Override `CPane::IsChangeState`\).|  
|[CMFCOutlookBarPane::IsDrawShadedHighlight](../Topic/CMFCOutlookBarPane::IsDrawShadedHighlight.md)|Determina se il bordo del pulsante è protetto quando un pulsante viene evidenziato e un'immagine di sfondo viene visualizzato.|  
|`CMFCOutlookBarPane::OnBeforeFloat`|Chiamato dal framework quando un riquadro sta in float.  \(Override [CPane::OnBeforeFloat](../Topic/CPane::OnBeforeFloat.md)\).|  
|[CMFCOutlookBarPane::RemoveButton](../Topic/CMFCOutlookBarPane::RemoveButton.md)|Rimuove il pulsante con un ID di comando|  
|`CMFCOutlookBarPane::RestoreOriginalstate`|Ripristina lo stato originale di una barra degli strumenti.  \(Override [CMFCToolBar::RestoreOriginalState](../Topic/CMFCToolBar::RestoreOriginalState.md)\).|  
|[CMFCOutlookBarPane::SetBackColor](../Topic/CMFCOutlookBarPane::SetBackColor.md)|Imposta il colore di sfondo.|  
|[CMFCOutlookBarPane::SetBackImage](../Topic/CMFCOutlookBarPane::SetBackImage.md)|L'immagine di sfondo.|  
|[CMFCOutlookBarPane::SetDefaultState](../Topic/CMFCOutlookBarPane::SetDefaultState.md)|Ripristinare il riquadro della barra di Outlook all'originale insieme di pulsanti.|  
|[CMFCOutlookBarPane::SetExtraSpace](../Topic/CMFCOutlookBarPane::SetExtraSpace.md)|Imposta il numero di pixel di riempimento utilizzati sui pulsanti nel riquadro della barra di Outlook.|  
|[CMFCOutlookBarPane::SetTextColor](../Topic/CMFCOutlookBarPane::SetTextColor.md)|Imposta i colori di testo normale e evidenziata nel riquadro della barra di Outlook.|  
|[CMFCOutlookBarPane::SetTransparentColor](../Topic/CMFCOutlookBarPane::SetTransparentColor.md)|Imposta il colore completamente trasparente per il riquadro della barra di Outlook.|  
|`CMFCOutlookBarPane::SmartUpdate`|Utilizzato internamente per aggiornare la barra di Outlook.  \(Override `CMFCToolBar::SmartUpdate`\).|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCOutlookBarPane::EnableContextMenuItems](../Topic/CMFCOutlookBarPane::EnableContextMenuItems.md)|Specifica che gli elementi del menu di scelta rapida visualizzato in modalità di personalizzazione.|  
|[CMFCOutlookBarPane::RemoveAllButtons](../Topic/CMFCOutlookBarPane::RemoveAllButtons.md)|Rimuove tutti i pulsanti dal riquadro della barra di Outlook.  \(Override [CMFCToolBar::RemoveAllButtons](../Topic/CMFCToolBar::RemoveAllButtons.md)\).|  
  
## Note  
 Per informazioni su come implementare una barra di Outlook, vedere [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).  
  
 Per un esempio di una barra di Outlook, vedere progetto di esempio OutlookDemo.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCOutlookBarPane`.  L'esempio mostra come creare un riquadro della barra di Outlook, consentono la modalità scorrimento della pagina, consente l'ancoraggio e impostare il colore di sfondo della barra di Outlook.  Questo frammento di codice fa parte [Esempio a più visualizzazioni di Outlook](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_OutlookMultiViews#3](../../mfc/reference/codesnippet/CPP/cmfcoutlookbarpane-class_1.h)]  
[!code-cpp[NVC_MFC_OutlookMultiViews#4](../../mfc/reference/codesnippet/CPP/cmfcoutlookbarpane-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)  
  
## Requisiti  
 **intestazione:** afxoutlookbarpane.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)   
 [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md)