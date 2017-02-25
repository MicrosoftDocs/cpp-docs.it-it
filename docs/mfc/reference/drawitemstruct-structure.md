---
title: "Struttura DRAWITEMSTRUCT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DRAWITEMSTRUCT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DRAWITEMSTRUCT (struttura)"
ms.assetid: ba9ef1d4-aebb-45e9-b956-4b81a02e50f7
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Struttura DRAWITEMSTRUCT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `DRAWITEMSTRUCT` fornisce informazioni necessarie alla finestra proprietaria per determinare come disegnare una voce di menu o un controllo creato dal proprietario.  
  
## Sintassi  
  
```  
  
typedef struct tagDRAWITEMSTRUCT {  
   UINT   
CtlType  
;  
   UINT   
CtlID  
;  
   UINT   
itemID  
;  
   UINT   
itemAction  
;  
   UINT   
itemState  
;  
   HWND   
hwndItem  
;  
   HDC   
hDC  
;  
   RECT   
rcItem  
;  
   DWORD   
itemData  
;  
} DRAWITEMSTRUCT;  
  
```  
  
#### Parametri  
 `CtlType`  
 Tipo di controllo. I valori per i tipi di controllo sono i seguenti:  
  
-   **ODT\_BUTTON** Pulsante creato dal proprietario  
  
-   **ODT\_COMBOBOX** Casella combinata creata dal proprietario  
  
-   **ODT\_LISTBOX** Casella di riepilogo creata dal proprietario  
  
-   **ODT\_MENU** Menu creato dal proprietario  
  
-   **ODT\_LISTVIEW** Controllo di visualizzazione elenco  
  
-   **ODT\_STATIC** Controllo statico creato dal proprietario  
  
-   **ODT\_TAB** Controllo Struttura a schede  
  
 `CtlID`  
 ID di controllo per una casella combinata, una casella di riepilogo o un pulsante. Questo membro non viene usato per un menu.  
  
 `itemID`  
 L'ID della voce di un menu o l'indice dell'elemento in una casella di riepilogo o in una casella combinata. Per una casella di riepilogo o una casella combinata vuota, questo membro visualizza un valore negativo che consente all'applicazione disegnare solo il rettangolo dello stato attivo in corrispondenza delle coordinate specificate dal membro **rcItem**, anche se non esistono elementi nel controllo. In questo modo l'utente può visualizzare se la casella di riepilogo o la casella combinata è in stato attivo per l'input. L'impostazione dei bit nel membro **itemAction** determina se il rettangolo debba essere disegnato come se la casella di riepilogo o la casella combinata avesse lo stato attivo per l'input.  
  
 `itemAction`  
 Definisce l'azione di disegno necessaria. Può trattarsi di uno o più dei bit seguenti:  
  
-   **ODA\_DRAWENTIRE** Questo bit viene impostato quando deve essere disegnato l'intero controllo.  
  
-   **ODA\_FOCUS** Questo bit viene impostato quando il controllo acquisisce o perde lo stato attivo per l'input. Il membro **itemState** deve essere controllato per determinare se il controllo ha lo stato attivo.  
  
-   **ODA\_SELECT** Questo bit viene impostato quando viene modificato solo lo stato di selezione. Il membro **itemState** deve essere controllato per determinare il nuovo stato di selezione.  
  
 *itemState*  
 Specifica lo stato di visualizzazione dell'elemento dopo l'esecuzione dell'operazione di disegno corrente. In altre parole, se una voce di menu deve essere visualizzata in grigio, viene impostato il flag di stato **ODS\_GRAYED**. I flag di stato sono i seguenti:  
  
-   **ODS\_CHECKED** Questo bit viene impostato se la voce di menu è da controllare. Questo bit viene usato solo in un menu.  
  
-   **ODS\_DISABLED** Questo bit viene impostato se l'elemento deve essere disegnato come disabilitato.  
  
-   **ODS\_FOCUS** Questo bit viene impostato se l'elemento è in stato attivo per l'input.  
  
-   **ODS\_GRAYED** Questo bit viene impostato se l'elemento deve essere visualizzato in grigio. Questo bit viene usato solo in un menu.  
  
-   **ODS\_SELECTED** Questo bit viene impostato se lo stato dell'elemento è selezionato.  
  
-   **ODS\_COMBOBOXEDIT** Il disegno viene eseguito nel campo di selezione \(controllo di modifica\) di una casella combinata creata dal proprietario.  
  
-   **ODS\_DEFAULT** L'elemento è l'elemento predefinito.  
  
 `hwndItem`  
 Specifica l'handle della finestra per il controllo di pulsanti, caselle di riepilogo e caselle combinate. Specifica l'handle del menu \(`HMENU`\) che contiene l'elemento per i menu.  
  
 `hDC`  
 Identifica un contesto di dispositivo. Questo contesto di dispositivo deve essere usato durante l'esecuzione di operazioni di disegno del controllo.  
  
 *rcItem*  
 Rettangolo nel contesto di dispositivo specificato dal membro `hDC` che definisce i limiti del controllo da disegnare. Windows ritaglia automaticamente qualsiasi elemento disegnato dal proprietario nel contesto di dispositivo per pulsanti, caselle di riepilogo e caselle combinate, ma non ritaglia le voci di menu. Quando si disegnano le voci di menu, il proprietario non deve disegnare al di fuori dei limiti del rettangolo definito dal membro **rcItem**.  
  
 `itemData`  
 Per una casella combinata o una casella di riepilogo, questo membro contiene il valore passato alla casella di riepilogo per uno degli elementi seguenti:  
  
-   [CComboBox::AddString](../Topic/CComboBox::AddString.md)  
  
-   [CComboBox::InsertString](../Topic/CComboBox::InsertString.md)  
  
-   [CListBox::AddString](../Topic/CListBox::AddString.md)  
  
-   [CListBox::InsertString](../Topic/CListBox::InsertString.md)  
  
 Per un menu, questo membro contiene il valore passato al menu da uno degli elementi seguenti:  
  
-   [CMenu::AppendMenu](../Topic/CMenu::AppendMenu.md)  
  
-   [CMenu::InsertMenu](../Topic/CMenu::InsertMenu.md)  
  
-   [CMenu::ModifyMenu](../Topic/CMenu::ModifyMenu.md)  
  
## Note  
 La finestra proprietaria della voce di menu o del controllo creato dal proprietario riceve un puntatore alla struttura come parametro `lParam` del messaggio `WM_DRAWITEM`.  
  
## Requisiti  
 **Intestazione:** winuser.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnDrawItem](../Topic/CWnd::OnDrawItem.md)