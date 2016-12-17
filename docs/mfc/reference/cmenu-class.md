---
title: "CMenu Class | Microsoft Docs"
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
  - "CMenu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMenu class"
  - "HMENU"
  - "menu, classi base"
  - "menu, classe"
  - "menu, creazione"
  - "menu, gestione"
ms.assetid: 40cacfdc-d45c-4ec7-bf28-991c72812499
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMenu Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un incapsulamento di Windows `HMENU`.  
  
## Sintassi  
  
```  
class CMenu : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMenu::CMenu](../Topic/CMenu::CMenu.md)|Costruisce un oggetto `CMenu`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMenu::AppendMenu](../Topic/CMenu::AppendMenu.md)|Viene aggiunto un nuovo elemento alla fine di questo menu.|  
|[CMenu::Attach](../Topic/CMenu::Attach.md)|Associa gli handle del menu di Windows a un oggetto `CMenu`.|  
|[CMenu::CheckMenuItem](../Topic/CMenu::CheckMenuItem.md)|Inserisce un segno di spunta accanto a o rimuove un segno di spunta da una voce del menu di scelta rapida.|  
|[CMenu::CheckMenuRadioItem](../Topic/CMenu::CheckMenuRadioItem.md)|Inserisce un pulsante di opzione accanto a una voce di menu e rimuove il pulsante di opzione da tutte le altre voci di menu nel gruppo.|  
|[CMenu::CreateMenu](../Topic/CMenu::CreateMenu.md)|Crea un menu vuoto e lo collega a un oggetto `CMenu`.|  
|[CMenu::CreatePopupMenu](../Topic/CMenu::CreatePopupMenu.md)|Crea un menu di scelta rapida vuoto e lo collega a un oggetto `CMenu`.|  
|[CMenu::DeleteMenu](../Topic/CMenu::DeleteMenu.md)|Rimuove un elemento specificato dal menu.  Se la voce di menu ha un menu di scelta rapida collegato, elimina un handle al menu di scelta rapida e libera la memoria utilizzata da.|  
|[CMenu::DeleteTempMap](../Topic/CMenu::DeleteTempMap.md)|Elimina tutti gli oggetti temporanei `CMenu` creati dalla funzione membro `FromHandle`.|  
|[CMenu::DestroyMenu](../Topic/CMenu::DestroyMenu.md)|Elimina il menu associato a un oggetto `CMenu` e libera la memoria che il menu occupato.|  
|[CMenu::Detach](../Topic/CMenu::Detach.md)|Rimuove un handle di menu di Windows da un oggetto `CMenu` e restituisce l'handle.|  
|[CMenu::DrawItem](../Topic/CMenu::DrawItem.md)|Chiamato dal framework quando un aspetto visivo delle modifiche create dal proprietario di un menu.|  
|[CMenu::EnableMenuItem](../Topic/CMenu::EnableMenuItem.md)|Abilita, disabilita, o attenuare \(ingrigisce\) una voce di menu.|  
|[CMenu::FromHandle](../Topic/CMenu::FromHandle.md)|Restituisce un puntatore a un oggetto `CMenu` fornito un handle di menu di Windows.|  
|[CMenu::GetDefaultItem](../Topic/CMenu::GetDefaultItem.md)|Determina la voce di menu predefinita nel menu specificato.|  
|[CMenu::GetMenuContextHelpId](../Topic/CMenu::GetMenuContextHelpId.md)|Recupera l'id del contesto della guida associato al menu.|  
|[CMenu::GetMenuInfo](../Topic/CMenu::GetMenuInfo.md)|Recupera le informazioni in un menu specifico.|  
|[CMenu::GetMenuItemCount](../Topic/CMenu::GetMenuItemCount.md)|Determina il numero di voci in un menu popup o di primo livello.|  
|[CMenu::GetMenuItemID](../Topic/CMenu::GetMenuItemID.md)|Ottiene l'identificatore della voce di menu per una voce di menu trova nella posizione specificata.|  
|[CMenu::GetMenuItemInfo](../Topic/CMenu::GetMenuItemInfo.md)|Recupera informazioni su una voce di menu.|  
|[CMenu::GetMenuState](../Topic/CMenu::GetMenuState.md)|Restituisce lo stato della voce di menu specificata o il numero di voci in un menu di scelta rapida.|  
|[CMenu::GetMenuString](../Topic/CMenu::GetMenuString.md)|Recupera l'etichetta della voce di menu specificata.|  
|[CMenu::GetSafeHmenu](../Topic/CMenu::GetSafeHmenu.md)|Restituisce `m_hMenu` eseguito il wrapping da questo oggetto `CMenu`.|  
|[CMenu::GetSubMenu](../Topic/CMenu::GetSubMenu.md)|Recupera un puntatore a un menu di scelta rapida.|  
|[CMenu::InsertMenu](../Topic/CMenu::InsertMenu.md)|Inserisce una nuova voce di menu nella posizione specificata, spostati su altri elementi nel menu.|  
|[CMenu::InsertMenuItem](../Topic/CMenu::InsertMenuItem.md)|Inserisce una nuova voce di menu nella posizione specificata in un menu.|  
|[CMenu::LoadMenu](../Topic/CMenu::LoadMenu.md)|Carica una risorsa menu dal file eseguibile e allegarlo a un oggetto `CMenu`.|  
|[CMenu::LoadMenuIndirect](../Topic/CMenu::LoadMenuIndirect.md)|Carica un menu da un modello di menu in memoria e lo collega a un oggetto `CMenu`.|  
|[CMenu::MeasureItem](../Topic/CMenu::MeasureItem.md)|Chiamato dal framework per determinare le dimensioni del menu quando un menu creato dal proprietario viene creato.|  
|[CMenu::ModifyMenu](../Topic/CMenu::ModifyMenu.md)|Modifica una voce di menu esistente nella posizione specificata.|  
|[CMenu::RemoveMenu](../Topic/CMenu::RemoveMenu.md)|Elimina una voce di menu a un menu di scelta rapida registrato dal menu specificato.|  
|[CMenu::SetDefaultItem](../Topic/CMenu::SetDefaultItem.md)|Imposta la voce di menu predefinito per il menu specificato.|  
|[CMenu::SetMenuContextHelpId](../Topic/CMenu::SetMenuContextHelpId.md)|Impostare l'id del contesto della guida da associare al menu.|  
|[CMenu::SetMenuInfo](../Topic/CMenu::SetMenuInfo.md)|Imposta le informazioni in un menu specifico.|  
|[CMenu::SetMenuItemBitmaps](../Topic/CMenu::SetMenuItemBitmaps.md)|Associa le bitmap specifiche del segno di spunta con una voce di menu.|  
|[CMenu::SetMenuItemInfo](../Topic/CMenu::SetMenuItemInfo.md)|Modifica informazioni su una voce di menu.|  
|[CMenu::TrackPopupMenu](../Topic/CMenu::TrackPopupMenu.md)|Visualizzare un menu di scelta rapida mobile nella posizione specificata e tenere traccia della selezione degli elementi nel menu di scelta rapida.|  
|[CMenu::TrackPopupMenuEx](../Topic/CMenu::TrackPopupMenuEx.md)|Visualizzare un menu di scelta rapida mobile nella posizione specificata e tenere traccia della selezione degli elementi nel menu di scelta rapida.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMenu::operator HMENU](../Topic/CMenu::operator%20HMENU.md)|Recupera l'handle dell'oggetto del menu.|  
|[CMenu::operator \!\=](../Topic/CMenu::operator%20!=.md)|Determina se due oggetti di menu non sono uguali.|  
|[CMenu::operator \=\=](../Topic/CMenu::operator%20==.md)|Determina se due oggetti di menu sono uguali.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMenu::m\_hMenu](../Topic/CMenu::m_hMenu.md)|Specifica un handle al menu di Windows connesso all'oggetto `CMenu`.|  
  
## Note  
 Fornisce funzioni membro per creare, gestire, aggiornare ed eliminare un menu.  
  
 Creare un oggetto `CMenu` sullo stack frame come un locale, quindi funzioni membro di `CMenu` di chiamata per modificare il nuovo menu in base alle necessità.  Successivamente, chiamare [CWnd::SetMenu](../Topic/CWnd::SetMenu.md) per impostare il menu a una finestra, seguita immediatamente da una chiamata alla funzione membro [Disconnetti](../Topic/CMenu::Detach.md) dell'oggetto `CMenu`.  La funzione membro `CWnd::SetMenu` imposta la finestra al nuovo menu, quindi la finestra a ridisegnarsi per riflettere la modifica di menu e passa anche la proprietà del menu nella finestra.  La chiamata a **Disconnetti** rimuove `HMENU` dall'oggetto `CMenu`, in modo che quando le sessioni variabili locali `CMenu` dall'ambito, il distruttore di oggetti `CMenu` non tenta di eliminare un menu non più proprietario.  Il menu stessa automaticamente eliminato quando la finestra viene distrutta.  
  
 È possibile utilizzare la funzione membro [LoadMenuIndirect](../Topic/CMenu::LoadMenuIndirect.md) per creare un menu da un modello in memoria, ma un menu creato da una risorsa da una chiamata a [LoadMenu](../Topic/CMenu::LoadMenu.md) è più semplice gestito e la risorsa menu stessa è possibile creare e modificare tramite l'editor di menu.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMenu`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Esempio CTRLTEST MFC](../../top/visual-cpp-samples.md)   
 [Esempio DYNAMENU MFC](../../top/visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)