---
title: "CMFCColorPickerCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCColorPickerCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCColorPickerCtrl class"
ms.assetid: b9bbd03c-beb0-4b55-9765-9985fd05e5dc
caps.latest.revision: 33
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 35
---
# CMFCColorPickerCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCColorPickerCtrl` fornisce la funzionalità per un controllo utilizzata per selezionare i colori.  
  
## Sintassi  
  
```  
class CMFCColorPickerCtrl : public CButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorPickerCtrl::CMFCColorPickerCtrl](../Topic/CMFCColorPickerCtrl::CMFCColorPickerCtrl.md)|Costruisce un oggetto `CMFCColorPickerCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorPickerCtrl::GetColor](../Topic/CMFCColorPickerCtrl::GetColor.md)|Recupera il colore selezionato dall'utente.|  
|[CMFCColorPickerCtrl::GetHLS](../Topic/CMFCColorPickerCtrl::GetHLS.md)|Recupera i valori di sfumatura, di luminanza e di saturazione del colore selezionato dall'utente.|  
|[CMFCColorPickerCtrl::GetHue](../Topic/CMFCColorPickerCtrl::GetHue.md)|Recupera il componente di sfumatura di colore selezionato dall'utente.|  
|[CMFCColorPickerCtrl::GetLuminance](../Topic/CMFCColorPickerCtrl::GetLuminance.md)|Recupera il componente di luminanza del colore selezionato dall'utente.|  
|[CMFCColorPickerCtrl::GetSaturation](../Topic/CMFCColorPickerCtrl::GetSaturation.md)|Recupera il componente di saturazione del colore selezionato dall'utente.|  
|[CMFCColorPickerCtrl::SelectCellHexagon](../Topic/CMFCColorPickerCtrl::SelectCellHexagon.md)|Imposta il colore corrente al colore definito dai componenti di colore specificato RGB o da esagono specificato della cella.|  
|[CMFCColorPickerCtrl::SetColor](../Topic/CMFCColorPickerCtrl::SetColor.md)|Imposta il colore corrente al valore specificato di colore RGB.|  
|[CMFCColorPickerCtrl::SetHLS](../Topic/CMFCColorPickerCtrl::SetHLS.md)|Imposta il colore corrente al valore del colore specificato di HLS.|  
|[CMFCColorPickerCtrl::SetHue](../Topic/CMFCColorPickerCtrl::SetHue.md)|Modifica il componente di sfumatura di colore selezionato.|  
|[CMFCColorPickerCtrl::SetLuminance](../Topic/CMFCColorPickerCtrl::SetLuminance.md)|Modifica il componente di luminanza del colore selezionato.|  
|[CMFCColorPickerCtrl::SetLuminanceBarWidth](../Topic/CMFCColorPickerCtrl::SetLuminanceBarWidth.md)|Impostare la larghezza della barra di luminanza nel controllo di selezione colori.|  
|[CMFCColorPickerCtrl::SetOriginalColor](../Topic/CMFCColorPickerCtrl::SetOriginalColor.md)|Imposta il colore selezionato iniziale.|  
|[CMFCColorPickerCtrl::SetPalette](../Topic/CMFCColorPickerCtrl::SetPalette.md)|Imposta la tavolozza di colori corrente.|  
|[CMFCColorPickerCtrl::SetSaturation](../Topic/CMFCColorPickerCtrl::SetSaturation.md)|Modifica il componente di saturazione del colore selezionato.|  
|[CMFCColorPickerCtrl::SetType](../Topic/CMFCColorPickerCtrl::SetType.md)|Imposta il tipo di controllo di selezione colori da visualizzare.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorPickerCtrl::DrawCursor](../Topic/CMFCColorPickerCtrl::DrawCursor.md)|Chiamato dal framework prima di un cursore che indica che il colore selezionato.|  
  
## Note  
 I colori standard vengono selezionati da una tavolozza di colori esagonale e i colori personalizzati sono selezionati da una barra di luminanza in cui i colori specificati utilizzando rosso\/verde e blu notazione o la notazione di sfumatura\/\/satuaration luminanza.  
  
 Nella figura seguente vengono illustrate diversi oggetti `CMFCColorPickerCtrl`.  
  
 ![Finestra di dialogo di CMFCColorPickerCtrl](../../mfc/reference/media/colorpicker.png "ColorPicker")  
  
 `CMFCColorPickerCtrl` supporta due coppie degli stili.  Gli stili di HEX\_GREYSCALE e di SFORTUNA appropriati per la selezione di colori standard.  Gli stili di LUMINANZA e di RACCOGLITRICE appropriati per la selezione di colori personalizzata.  
  
 Eseguire i passaggi seguenti per includere il controllo `CMFCColorPickerCtrl` nella finestra di dialogo:  
  
1.  Se si utilizza **ClassWizard**, inserire un nuovo pulsante nel modello di finestra di dialogo \(dalla classe `CMFCColorPickerCtrl` viene ereditata dalla classe `CButton` \).  
  
2.  Inserire una variabile membro associato al nuovo pulsante nella classe della finestra di dialogo.  Modificare il tipo di variabile da `CButton` a `CMFCColorPickerCtrl`.  
  
3.  Inserire il gestore messaggi `WM_INITDIALOG` per la classe della finestra di dialogo.  Nel gestore, impostare il tipo, la tavolozza e l'elemento iniziale colore selezionato del controllo `CMFCColorPickerCtrl`.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare un oggetto `CMFCColorPickerCtrl` utilizzando i diversi metodi nella classe `CMFCColorPickerCtrl`.  Nell'esempio viene illustrato come impostare il tipo di controllo selezione e come impostare il colore, sfumatura, luminanza e saturazione.  l'esempio fa parte [Nuovo esempio di controlli](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#4](../../mfc/reference/codesnippet/CPP/cmfccolorpickerctrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#5](../../mfc/reference/codesnippet/CPP/cmfccolorpickerctrl-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md)  
  
## Requisiti  
 **intestazione:** afxcolorpickerctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md)