---
title: "Struttura MEASUREITEMSTRUCT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MEASUREITEMSTRUCT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MEASUREITEMSTRUCT (struttura)"
ms.assetid: d141ace4-47cb-46b5-a81c-ad2c5e5a8501
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Struttura MEASUREITEMSTRUCT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `MEASUREITEMSTRUCT` notifica alle finestre delle dimensioni di un controllo o di una voce di menu creato dal proprietario.  
  
## Sintassi  
  
```  
  
      typedef struct tagMEASUREITEMSTRUCT {  
   UINT CtlType;  
   UINT CtlID;  
   UINT itemID;  
   UINT itemWidth;  
   UINT itemHeight;  
   DWORD itemData  
} MEASUREITEMSTRUCT;  
```  
  
#### Parametri  
 `CtlType`  
 Contiene il tipo di controllo.  I valori per i tipi di controllo sono le seguenti:  
  
-   Casella combinata per il disegno personalizzato di**ODT\_COMBOBOX**  
  
-   Casella di riepilogo per il disegno personalizzato di**ODT\_LISTBOX**  
  
-   Menu di disegno del proprietario di**ODT\_MENU**  
  
 `CtlID`  
 Contiene l'id del controllo per una casella combinata, una casella di riepilogo, o un pulsante.  Questo membro non viene utilizzato per visualizzare un menu.  
  
 `itemID`  
 Contiene la voce di menu ID per un menu o di elenco\-casella\- elemento ID per una casella combinata o di riepilogo di variabile\- altezza.  Questo membro non viene utilizzato per una casella combinata o di riepilogo con altezza fissa, o per un pulsante.  
  
 *itemWidth*  
 Specifica la larghezza di una voce di menu.  Il proprietario della voce di menu per il disegno personalizzato deve soddisfare questo membro prima che restituisce il messaggio.  
  
 *itemHeight*  
 Specifica l'altezza di un singolo elemento in una casella di riepilogo o in un menu.  Prima di restituire il messaggio, il proprietario della casella combinata, listbox, una voce di menu o di disegno personalizzato deve compilare il membro.  L'altezza massima di un elemento della casella di riepilogo è 255.  
  
 `itemData`  
 Per una casella combinata o di riepilogo, questo contiene il valore passato alla casella di riepilogo da una delle seguenti operazioni:  
  
-   [CComboBox::AddString](../Topic/CComboBox::AddString.md)  
  
-   [CComboBox::InsertString](../Topic/CComboBox::InsertString.md)  
  
-   [CListBox::AddString](../Topic/CListBox::AddString.md)  
  
-   [CListBox::InsertString](../Topic/CListBox::InsertString.md)  
  
 Per un menu, questo contiene il valore passato al menu da una delle operazioni seguenti:  
  
-   [CMenu::AppendMenu](../Topic/CMenu::AppendMenu.md)  
  
-   [CMenu::InsertMenu](../Topic/CMenu::InsertMenu.md)  
  
-   [CMenu::ModifyMenu](../Topic/CMenu::ModifyMenu.md)  
  
 In questo modo le finestre all'utente di un processo con il controllo correttamente.  L'omissione di compilare i membri appropriati nella struttura di `MEASUREITEMSTRUCT` determina l'utilizzo improprio del controllo.  
  
## Requisiti  
 **Intestazione:** winuser.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnMeasureItem](../Topic/CWnd::OnMeasureItem.md)