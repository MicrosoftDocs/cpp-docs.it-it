---
title: "Stili utilizzati da MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.styles"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pulsanti, barre degli strumenti MFC"
  - "caselle combinate, stili"
  - "stili di modifica [MFC]"
  - "stili della finestra estesi"
  - "finestre cornice, stili"
  - "caselle di riepilogo, stili"
  - "stili finestra di messaggio"
  - "stili barra di scorrimento [MFC]"
  - "stili statici"
  - "stili"
  - "stili, MFC"
  - "stili finestra, in MFC"
ms.assetid: d3b9af37-31b5-4c97-a8ad-189fd724b04c
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Stili utilizzati da MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzare i seguenti stili quando si crea l'oggetto corrispondente MFC.  Nella maggior parte dei casi, gli stili vengono impostati nel parametro di `dwStyle` della funzione di **Crea** della classe.  
  
### Stili di MFC  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|[Stili del pulsante](../../mfc/reference/button-styles.md)|Applicato a [Classe di CButton](../../mfc/reference/cbutton-class.md) gli oggetti, ad esempio pulsanti di opzione, caselle di controllo e pulsanti.  Specificare una combinazione di stili nel parametro di `dwStyle` di [CButton::Create](../Topic/CButton::Create.md).|  
|[Stili della casella combinata](../../mfc/reference/combo-box-styles.md)|Applicato a [Classe CComboBox](../../mfc/reference/ccombobox-class.md) gli oggetti.  Specificare una combinazione di stili nel parametro di `dwStyle` di [CComboBox::Create](../Topic/CComboBox::Create.md).|  
|[Modificare gli stili](../../mfc/reference/edit-styles.md)|Applicato a [Classe di CEdit](../../mfc/reference/cedit-class.md) gli oggetti.  Specificare una combinazione di stili nel parametro di `dwStyle` di [CEdit::Create](../Topic/CEdit::Create.md).|  
|[Stili finestra cornice](../../mfc/reference/frame-window-styles-mfc.md)|Applicato a [Classe CFrameWnd](../../mfc/reference/cframewnd-class.md) gli oggetti.  Specificare una combinazione di stili nel parametro di `dwStyle` di [CFrameWnd::Create](../Topic/CFrameWnd::Create.md).|  
|[Stili della casella di riepilogo](../../mfc/reference/list-box-styles.md)|Applicato a [Classe di CListBox](../../mfc/reference/clistbox-class.md) gli oggetti.  Specificare una combinazione di stili nel parametro di `dwStyle` di [CListBox::Create](../Topic/CListBox::Create.md).|  
|[Stili finestra di messaggio](../../mfc/reference/message-box-styles.md)|Applicato a [AfxMessageBox](../Topic/AfxMessageBox.md) gli elementi.  Specificare una combinazione di stili nel parametro di `nType` di `AfxMessageBox`.|  
|[Stili scrollbar](../../mfc/reference/scroll-bar-styles.md)|Applicato a [Classe di CScrollBar](../../mfc/reference/cscrollbar-class.md) gli oggetti.  Specificare una combinazione di stili nel parametro di `dwStyle` di [CScrollBar::Create](../Topic/CScrollBar::Create.md).|  
|[Stili statici](../../mfc/reference/static-styles.md)|Applicato a [Classe di CStatic](../../mfc/reference/cstatic-class.md) gli oggetti.  Specificare una combinazione di stili nel parametro di `dwStyle` di [CStatic::Create](../Topic/CStatic::Create.md).|  
|[Stili della finestra](../../mfc/reference/window-styles.md)|Applicato a [Classe CWnd](../../mfc/reference/cwnd-class.md) gli oggetti.  Specificare una combinazione di stili nel parametro di `dwStyle` di [CWnd::Create](../Topic/CWnd::Create.md) o di [CWnd::CreateEx](../Topic/CWnd::CreateEx.md).|  
|[Stili estesi della finestra](../../mfc/reference/extended-window-styles.md)|Applicato a [Classe CWnd](../../mfc/reference/cwnd-class.md) gli oggetti.  Specificare una combinazione di stili nel parametro di `dwExStyle` di [CWnd::CreateEx](../Topic/CWnd::CreateEx.md).|  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../../mfc/class-library-overview.md)