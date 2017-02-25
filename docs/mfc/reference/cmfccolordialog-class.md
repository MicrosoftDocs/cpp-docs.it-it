---
title: "CMFCColorDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCColorDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCColorDialog class"
  - "CMFCColorDialog::m_bIsMyPalette data member"
  - "CMFCColorDialog::m_bPickerMode data member"
  - "CMFCColorDialog::m_btnColorSelect data member"
  - "CMFCColorDialog::m_CurrentColor data member"
  - "CMFCColorDialog::m_hcurPicker data member"
  - "CMFCColorDialog::m_NewColor data member"
  - "CMFCColorDialog::m_pColourSheetOne data member"
  - "CMFCColorDialog::m_pColourSheetTwo data member"
  - "CMFCColorDialog::m_pPalette data member"
  - "CMFCColorDialog::m_pPropSheet data member"
  - "CMFCColorDialog::m_wndColors data member"
  - "CMFCColorDialog::m_wndStaticPlaceHolder data member"
  - "CMFCColorDialog::PreTranslateMessage method"
ms.assetid: 235bbbbc-a3b1-46e0-801b-fb55093ec579
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CMFCColorDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCColorDialog` rappresenta una finestra di dialogo di selezione di colori.  
  
## Sintassi  
  
```  
class CMFCColorDialog : public CDialogEx  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorDialog::CMFCColorDialog](../Topic/CMFCColorDialog::CMFCColorDialog.md)|Costruisce un oggetto `CMFCColorDialog`.|  
|`CMFCColorDialog::~CMFCColorDialog`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorDialog::GetColor](../Topic/CMFCColorDialog::GetColor.md)|Restituisce il colore selezionato corrente.|  
|[CMFCColorDialog::GetPalette](../Topic/CMFCColorDialog::GetPalette.md)|Restituisce la tavolozza dei colori.|  
|`CMFCColorDialog::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  Per la sintassi e ulteriori informazioni, vedere [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md).  \(Override `CDialogEx::PreTranslateMessage`\).|  
|[CMFCColorDialog::RebuildPalette](../Topic/CMFCColorDialog::RebuildPalette.md)|Deriva da una tavolozza dalla tavolozza di sistema.|  
|[CMFCColorDialog::SetCurrentColor](../Topic/CMFCColorDialog::SetCurrentColor.md)|Imposta il colore selezionato corrente.|  
|[CMFCColorDialog::SetNewColor](../Topic/CMFCColorDialog::SetNewColor.md)|Imposta il colore del equivalente a un determinato valore RGB.|  
|[CMFCColorDialog::SetPageOne](../Topic/CMFCColorDialog::SetPageOne.md)|Selezionare un valore RGB per la prima pagina delle proprietà.|  
|[CMFCColorDialog::SetPageTwo](../Topic/CMFCColorDialog::SetPageTwo.md)|Selezionare un valore RGB per la seconda pagina delle proprietà.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`m_bIsMyPalette`|`TRUE` se la finestra di dialogo di selezione di colori utilizza la propria tavolozza dei colori, o `FALSE` se la finestra di dialogo utilizza una tavolozza specificata nel costruttore `CMFCColorDialog`.|  
|`m_bPickerMode`|`TRUE` mentre l'utente sta selezionando un colore dalla finestra di dialogo di selezione; in caso contrario, `FALSE`.|  
|`m_btnColorSelect`|Il pulsante di colore selezionati.|  
|`m_CurrentColor`|Il colore selezionato.|  
|`m_hcurPicker`|Il cursore utilizzato per selezionare un colore.|  
|`m_NewColor`|Il colore selezionato futuro, che può in modo permanente essere selezionato o ripristinare il colore originale.|  
|`m_pColourSheetOne`|Un puntatore alla prima pagina delle proprietà della finestra delle proprietà di selezione di colori.|  
|`m_pColourSheetTwo`|Un puntatore alla seconda pagina delle proprietà della finestra delle proprietà di selezione di colori.|  
|`m_pPalette`|La tavolozza logica corrente.|  
|`m_pPropSheet`|Un puntatore alla finestra delle proprietà della finestra di dialogo di selezione di colori.|  
|`m_wndColors`|Un oggetto controllo di selezione colori.|  
|`m_wndStaticPlaceHolder`|Un controllo statico che è un segnaposto per la finestra delle proprietà della selezione colori.|  
  
## Note  
 La finestra di dialogo di selezione di colori visualizzati come finestra delle proprietà con due pagine.  Nella prima pagina, selezionare un colore dalla tavolozza standard di sistema; nella seconda pagina, selezionare un colore personalizzato.  
  
 È possibile creare un oggetto `CMFCColorDialog` nello stack e quindi chiamare `DoModal`, passando il colore iniziale come parametro al costruttore `CMFCColorDialog`.  La finestra di dialogo di selezione di colori quindi crea diversi oggetti [CMFCColorPickerCtrl Class](../../mfc/reference/cmfccolorpickerctrl-class.md) per gestire ogni tavolozza.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
 [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare una finestra di dialogo dei colori utilizzando i diversi metodi nella classe `CMFCColorDialog`.  L'esempio mostra come impostare i colori correnti e nuovi della finestra di dialogo e come impostare le componenti rossa, verde e blu del colore selezionato alle due pagine delle proprietà della finestra di dialogo dei colori.  Questo esempio fa parte [Nuovo esempio di controlli](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#3](../../mfc/reference/codesnippet/CPP/cmfccolordialog-class_1.cpp)]  
  
## Requisiti  
 **intestazione:** afxcolordialog.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCColorPickerCtrl Class](../../mfc/reference/cmfccolorpickerctrl-class.md)