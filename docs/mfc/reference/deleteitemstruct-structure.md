---
title: "Struttura DELETEITEMSTRUCT | Microsoft Docs"
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
  - "DELETEITEMSTRUCT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DELETEITEMSTRUCT (struttura)"
ms.assetid: 48d3998c-f4a8-402a-bf90-df3770a78685
caps.latest.revision: 13
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura DELETEITEMSTRUCT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `DELETEITEMSTRUCT` descrive una casella di riepilogo o un elemento della casella combinata creata dal proprietario eliminata.  
  
## Sintassi  
  
```  
  
      typedef struct tagDELETEITEMSTRUCT { /* ditms */  
    UINT CtlType;  
    UINT CtlID;  
    UINT itemID;  
    HWND hwndItem;  
    UINT itemData;  
} DELETEITEMSTRUCT;  
```  
  
#### Parametri  
 `CtlType`  
 Specifica **ODT\_LISTBOX** \(listbox creata dal proprietario\) o **ODT\_COMBOBOX** \(una casella combinata creata dal proprietario\).  
  
 `CtlID`  
 Specifica l'identificatore della casella di riepilogo o della casella combinata.  
  
 `itemID`  
 Specifica l'indice nella casella di riepilogo o nella casella combinata che viene rimossa.  
  
 `hwndItem`  
 Identifica il controllo.  
  
 `itemData`  
 Specifica i dati definiti dall'applicazione per l'elemento.  Questo valore viene passato al controllo nel parametro di **lParam** di messaggio che aggiunge l'elemento nella casella di riepilogo o di una casella combinata.  
  
## Note  
 Quando un elemento viene rimosso dalla casella di riepilogo o dalla casella combinata o quando la casella di riepilogo o di una casella combinata viene eliminato, le finestre invia il messaggio di `WM_DELETEITEM` il prodotto per ogni elemento eliminato.  Il parametro di **lParam** di messaggio contiene un puntatore a questa struttura.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnDeleteItem](../Topic/CWnd::OnDeleteItem.md)