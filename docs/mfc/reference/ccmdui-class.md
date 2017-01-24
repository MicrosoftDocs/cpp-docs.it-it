---
title: "CCmdUI Class | Microsoft Docs"
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
  - "CCmdUI"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pulsanti [C++], aggiornamento come modifiche di contesto"
  - "CCmdUI class"
  - "command user interface"
  - "comandi [C++], updating UI"
  - "menus [C++], aggiornamento come modifiche di contesto"
  - "stati, updating user interface object"
  - "barre degli strumenti [C++], aggiornamento"
  - "updating user interfaces for commands"
  - "interfacce utente, aggiornamento"
ms.assetid: 04eaaaf5-f510-48ab-b425-94665ba24766
caps.latest.revision: 21
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCmdUI Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Viene utilizzato solo all'interno di un gestore in `CCmdTarget`classe derivata `ON_UPDATE_COMMAND_UI`.  
  
## Sintassi  
  
```  
class CCmdUI  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCmdUI::ContinueRouting](../Topic/CCmdUI::ContinueRouting.md)|Indica al meccanismo di routing dei comandi di continuare a utilizzare il messaggio corrente verso la catena dei gestori.|  
|[CCmdUI::Enable](../Topic/CCmdUI::Enable.md)|Abilita o disabilita l'elemento dell'interfaccia utente per questo comando.|  
|[CCmdUI::SetCheck](../Topic/CCmdUI::SetCheck.md)|Imposta lo stato di selezione dell'elemento dell'interfaccia utente per questo comando.|  
|[CCmdUI::SetRadio](../Topic/CCmdUI::SetRadio.md)|Come la funzione membro `SetCheck`, ma opera sui gruppi gruppi.|  
|[CCmdUI::SetText](../Topic/CCmdUI::SetText.md)|Imposta il testo dell'elemento dell'interfaccia utente per questo comando.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCmdUI::m\_nID](../Topic/CCmdUI::m_nID.md)|ID dell'oggetto dell'interfaccia utente.|  
|[CCmdUI::m\_nIndex](../Topic/CCmdUI::m_nIndex.md)|L'indice dell'oggetto dell'interfaccia utente.|  
|[CCmdUI::m\_pMenu](../Topic/CCmdUI::m_pMenu.md)|Punta al menu rappresentato da `CCmdUI` oggetto.|  
|[CCmdUI::m\_pOther](../Topic/CCmdUI::m_pOther.md)|Punta alla finestra dell'oggetto che inviata una notifica.|  
|[CCmdUI::m\_pSubMenu](../Topic/CCmdUI::m_pSubMenu.md)|Punta al sottomenu contenuto rappresentato da `CCmdUI` oggetto.|  
  
## Note  
 `CCmdUI` non dispone di una classe base.  
  
 Quando un utente dell'applicazione tira in un menu, ogni voce di menu deve sapere se deve essere visualizzato come abilitata o disabilitata.  La destinazione di un comando di menu fornisce queste informazioni implementazione di un gestore `ON_UPDATE_COMMAND_UI`.  Per ognuno degli oggetti dell'interfaccia utente del comando nell'applicazione, utilizzare la Finestra Proprietà per creare un prototipo di funzione e la voce della mappa messaggi per ogni gestore.  
  
 Quando il menu viene disegnato clic, il framework cerca e chiama le funzioni membro `CCmdUI` di ogni gestore `ON_UPDATE_COMMAND_UI`, di chiamate di ogni gestore come **Abilita** e **Seleziona**e il framework quindi in modo appropriato visualizzare ogni voce di menu.  
  
 Una voce di menu può essere sostituita con un pulsante o altro barra di controllo oggetto dell'interfaccia utente del comando senza modificare il codice nel gestore `ON_UPDATE_COMMAND_UI`.  
  
 Nella tabella seguente vengono riepilogate le funzioni membro di `CCmdUI` di ha effetto sui vari elementi dell'interfaccia utente del comando.  
  
|Elemento dell'interfaccia utente|Abilita|SetCheck|SetRadio|SetText|  
|--------------------------------------|-------------|--------------|--------------|-------------|  
|Voce di menu|Abilita o disabilita|I controlli \(x\) o deseleziona|Controlli utilizzando il punto \(•\)|Imposta il testo dell'elemento|  
|Pulsante della barra degli strumenti|Abilita o disabilita|Seleziona, deseleziona, o indeterminato|Equivalente a `SetCheck`|Non applicabile|  
|Riquadro della barra di stato|Restituisce il testo visibile o invisibile|Imposta lo popout o il bordo normale|Equivalente a `SetCheck`|Imposta il testo del riquadro|  
|Pulsante standard in `CDialogBar`|Abilita o disabilita|i controlli o deseleziona la casella di controllo|Equivalente a `SetCheck`|Imposta il testo del pulsante|  
|Controllo normale in `CDialogBar`|Abilita o disabilita|Non applicabile|Non applicabile|Imposta il testo della finestra|  
  
 Per ulteriori informazioni sull'utilizzo della classe, vedere [Come aggiornare gli oggetti dell'interfaccia utente](../../mfc/how-to-update-user-interface-objects.md).  
  
## Gerarchia di ereditarietà  
 `CCmdUI`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC esempi MDI](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)