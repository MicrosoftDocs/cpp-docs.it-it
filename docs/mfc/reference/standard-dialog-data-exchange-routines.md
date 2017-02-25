---
title: "Routine DDX (Dialog Data Exchange) standard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestra di dialogo standard, routine di scambio di dati"
ms.assetid: c6adb7f3-f9af-4cc5-a9ea-315c5b60ad1a
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Routine DDX (Dialog Data Exchange) standard
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono elencate le routine di scambio di dati della finestra di dialogo standard \(DDX\) utilizzate per i controlli comuni della finestra di dialogo MFC.  
  
> [!NOTE]
>  Le routine di scambio di dati della finestra di dialogo standard sono definite nel file di intestazione. afxdd\_.h.  Tuttavia, le applicazioni devono includere afxwin.h.  
  
### Funzioni di DDX  
  
|||  
|-|-|  
|[DDX\_CBIndex](../Topic/DDX_CBIndex.md)|Inizializza o recupera l'indice della selezione corrente di una casella combinata.|  
|[DDX\_CBString](../Topic/DDX_CBString.md)|Inizializza o recupero del contenuto corrente del campo di modifica di una casella combinata.|  
|[DDX\_CBStringExact](../Topic/DDX_CBStringExact.md)|Inizializza o recupero del contenuto corrente del campo di modifica di una casella combinata.|  
|[DDX\_Check](../Topic/DDX_Check.md)|Inizializza o recupera lo stato corrente di un controllo casella di controllo.|  
|[DDX\_Control](../Topic/DDX_Control.md)|Rappresenta un determinato controllo in una finestra di dialogo.|  
|[DDX\_DateTimeCtrl](../Topic/DDX_DateTimeCtrl.md)|Inizializza o recupera i dati di ora e\/o la data di un controllo di selezione data e ora.|  
|[DDX\_IPAddress](../Topic/DDX_IPAddress.md)|Inizializza o recuperare il valore corrente di un controllo indirizzo IP.|  
|[DDX\_LBIndex](../Topic/DDX_LBIndex.md)|Inizializza o recupera l'indice della selezione corrente di un controllo listbox.|  
|[DDX\_LBString](../Topic/DDX_LBString.md)|Inizializza o recuperare la selezione corrente in un controllo listbox.|  
|[DDX\_LBStringExact](../Topic/DDX_LBStringExact.md)|Inizializza o recuperare la selezione corrente in un controllo listbox.|  
|[DDX\_MonthCalCtrl](../Topic/DDX_MonthCalCtrl.md)|Inizializza o recuperare il valore corrente di un controllo calendario mensile.|  
|[DDX\_Radio](../Topic/DDX_Radio.md)|Inizializza o recupera i 0 indici basati su telecomando radio correntemente archiviato in un gruppo di telecomando radio.|  
|[DDX\_Scroll](../Topic/DDX_Scroll.md)|Inizializza o recuperare la posizione corrente del cursore di un controllo scroll.|  
|[DDX\_Slider](../Topic/DDX_Slider.md)|Inizializza o recuperare la posizione corrente del cursore di un dispositivo di scorrimento.|  
|[DDX\_Text](../Topic/DDX_Text.md)|Inizializza o recuperare il valore corrente di un controllo di modifica.|  
  
## Vedere anche  
 [Routine standard di convalida dati della finestra di dialogo](../../mfc/reference/standard-dialog-data-validation-routines.md)   
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)