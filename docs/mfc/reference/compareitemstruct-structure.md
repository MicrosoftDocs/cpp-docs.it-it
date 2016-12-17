---
title: "Struttura COMPAREITEMSTRUCT | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "COMPAREITEMSTRUCT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COMPAREITEMSTRUCT (struttura)"
ms.assetid: 4b7131a5-5c7d-4e98-aac7-e85650262b52
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura COMPAREITEMSTRUCT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `COMPAREITEMSTRUCT` sono inclusi gli identificatori e i dati esplicitamente forniti per due elementi in una casella di riepilogo o di una casella combinata ordinata e creata dal proprietario.  
  
## Sintassi  
  
```  
  
      typedef struct tagCOMPAREITEMSTRUCT {  
    UINT   CtlType;  
    UINT   CtlID;  
    HWND   hwndItem;  
    UINT   itemID1;  
    DWORD  itemData1;  
    UINT   itemID2;  
    DWORD  itemData2;  
} COMPAREITEMSTRUCT;  
```  
  
#### Parametri  
 `CtlType`  
 **ODT\_LISTBOX** \(che specifica una casella di riepilogo per il disegno personalizzato\) o **ODT\_COMBOBOX** \(che specifica una casella combinata per il disegno personalizzato\).  
  
 `CtlID`  
 ID del controllo della casella di riepilogo o di una casella combinata.  
  
 `hwndItem`  
 L'handle della finestra del controllo.  
  
 *itemID1*  
 Indice del primo elemento nella casella di riepilogo o nella casella combinata che viene confrontata.  
  
 *itemData1*  
 Dati esplicitamente forniti per il primo elemento che viene confrontato.  Questo valore passato nella chiamata che ha aggiunto l'elemento al codice misto o alla casella di riepilogo.  
  
 *itemID2*  
 Indice del secondo elemento della casella di riepilogo o nella casella combinata che viene confrontata.  
  
 *itemData2*  
 Dati esplicitamente forniti per il secondo elemento confrontato.  Questo valore passato nella chiamata che ha aggiunto l'elemento al codice misto o alla casella di riepilogo.  
  
## Note  
 Ogni volta che un'applicazione viene aggiunto un nuovo elemento a una casella di riepilogo o a una casella combinata creata dal proprietario creata con lo stile di **LBS\_SORT** o di **CBS\_SORT**, le finestre invia il proprietario un messaggio di `WM_COMPAREITEM`.  Il parametro di `lParam` di messaggio contiene un puntatore a una struttura di `COMPAREITEMSTRUCT`.  Alla ricezione del messaggio, il proprietario confronta i due elementi e restituisce un'indicazione di valore quale elemento ordina prima dell'altro.  
  
## Requisiti  
 **Intestazione:** winuser.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnCompareItem](../Topic/CWnd::OnCompareItem.md)