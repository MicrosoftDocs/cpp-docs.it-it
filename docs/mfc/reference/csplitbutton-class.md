---
title: "CSplitButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSplitButton class"
ms.assetid: 6844d0a9-6408-4e44-9b5f-57628ed8bad6
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CSplitButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CSplitButton` rappresenta un controllo pulsante di menu combinato.  Il controllo pulsante di menu combinato esegue un comportamento predefinito quando un utente fa clic sulla parte principale del pulsante e visualizza un menu a discesa quando un utente fa clic sulla freccia a discesa del pulsante.  
  
## Sintassi  
  
```  
class CSplitButton : public CButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitButton::CSplitButton](../Topic/CSplitButton::CSplitButton.md)|Costruisce un oggetto `CSplitButton`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitButton::Create](../Topic/CSplitButton::Create.md)|Crea un controllo pulsante di menu combinato con gli stili specificati e lo aggiunge all'oggetto corrente `CSplitButton`.|  
|[CSplitButton::SetDropDownMenu](../Topic/CSplitButton::SetDropDownMenu.md)|Imposta il menu a discesa visualizzato quando un utente fa clic sulla freccia a discesa del controllo corrente pulsante di menu combinato.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitButton::OnDropDown](../Topic/CSplitButton::OnDropDown.md)|Gestire la notifica `BCN_DROPDOWN` che il sistema invia quando un utente fa clic sulla freccia a discesa del controllo corrente pulsante di menu combinato.|  
  
## Note  
 La classe `CSplitButton` è derivata dalla classe [CButton](../../mfc/reference/cbutton-class.md).  Il controllo pulsante di menu combinato è un pulsante con lo stile è `BS_SPLITBUTTON`.  Visualizza un menu personalizzato quando un utente fa clic sulla freccia a discesa.  Per ulteriori informazioni, vedere gli stili `BS_DEFSPLITBUTTON` e `BS_SPLITBUTTON` in [Stili del pulsante](http://msdn.microsoft.com/library/windows/desktop/bb775951).  
  
 Nella figura raffigura una finestra di dialogo contenente un controllo pager e un \(1\) controllo pulsante di menu combinato.  \(2\) La freccia a discesa è già stato fatto clic e \(3\) il sottomenu viene visualizzato.  
  
 ![Finestra di dialogo con SplitButton e un controllo pager](../../mfc/reference/media/splitbutton_pager.png "SplitButton\_Pager")  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 `CSplitButton`  
  
## Requisiti  
 **intestazione:** afxcmn.h  
  
 Questa classe è supportata in [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] e versioni successive.  
  
 I requisiti aggiuntivi per la classe sono descritti in [Requisiti di compilazione per i controlli comuni di Windows Vista](../../mfc/build-requirements-for-windows-vista-common-controls.md).  
  
## Vedere anche  
 [CSplitButton Class](../../mfc/reference/csplitbutton-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CButton Class](../../mfc/reference/cbutton-class.md)