---
title: "TN014: controlli personalizzati | Microsoft Docs"
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
  - "vc.controls"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli personalizzati [MFC]"
  - "TN014"
ms.assetid: 1917a498-f643-457c-b570-9a0af7dbf7bb
caps.latest.revision: 21
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN014: controlli personalizzati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota descrive il supporto MFC per i controlli di disegno automatico e personalizzati.  Vengono inoltre descritte la creazione di una sottoclasse dinamica e viene descritta la relazione tra gli oggetti [CWnd](../mfc/reference/cwnd-class.md) e `HWND`.  
  
 L'applicazione MFC di esempio CTRLTEST illustra come utilizzare molti controlli personalizzati.  Vedere il codice sorgente per l'esempio generale [CTRLTEST](../top/visual-cpp-samples.md) MFC e la guida online.  
  
## Controlli per il disegno personalizzato\/Menu  
 Windows fornisce il supporto per i controlli e i menu del disegno personalizzato utilizzando i messaggi di Windows.  La finestra padre del controllo o del menu riceve i messaggi e chiama le funzioni in risposta.  È possibile eseguire l'override di queste funzioni per personalizzare l'aspetto e il comportamento del controllo o del menu per il disegno personalizzato.  
  
 MFC supporta direttamente il disegno personalizzato con le seguenti funzioni:  
  
-   [CWnd::OnDrawItem](../Topic/CWnd::OnDrawItem.md)  
  
-   [CWnd::OnMeasureItem](../Topic/CWnd::OnMeasureItem.md)  
  
-   [CWnd::OnCompareItem](../Topic/CWnd::OnCompareItem.md)  
  
-   [CWnd::OnDeleteItem](../Topic/CWnd::OnDeleteItem.md)  
  
 È possibile eseguire l'override di queste funzioni nella classe derivata `CWnd` per implementare il comportamento di disegno personalizzato.  
  
 Questo approccio non porta ad avere codice riutilizzabile.  Se si dispone di due controlli simili in due classi diverse `CWnd`, è necessario implementare il comportamento del controllo personalizzato in due posizioni.  L'architettura supportata da MFC del controllo di disegno automatico risolve il problema.  
  
## Comandi e menu di disegno automatico  
 MFC fornisce un'implementazione predefinita \(nelle classi [CMenu](../mfc/reference/cmenu-class.md) e `CWnd` \) per i messaggi standard per il disegno personalizzato.  Questa implementazione predefinita decodificherà i parametri per il disegno personalizzato e delegherà i messaggi per il disegno personalizzato ai controlli o al menu.  Si tratta di disegno automatico perché il codice di disegno è nella classe del controllo o del menu, non nella finestra proprietaria.  
  
 Tramite i comandi di disegno automatico è possibile compilare le classi di controlli riutilizzabili che utilizzano la semantica di disegno personalizzato per visualizzare il controllo.  Il codice per disegnare il controllo è nella classe di controllo, non nel padre.  Si tratta di un approccio orientato agli oggetti per la programmazione dei controlli personalizzati.  Aggiungere il seguente elenco di funzioni alle classi di disegno automatico:  
  
-   Per i pulsanti di disegno automatico:  
  
    ```  
    CButton:DrawItem(LPDRAWITEMSTRUCT);  
            // insert code to draw this button  
    ```  
  
-   Per i menu di disegno automatico:  
  
    ```  
    CMenu:MeasureItem(LPMEASUREITEMSTRUCT);  
            // insert code to measure the size of an item in this menu  
    CMenu:DrawItem(LPDRAWITEMSTRUCT);  
            // insert code to draw an item in this menu  
    ```  
  
-   Per le caselle di riepilogo di disegno automatico:  
  
    ```  
    CListBox:MeasureItem(LPMEASUREITEMSTRUCT);  
            // insert code to measure the size of an item in this list box  
    CListBox:DrawItem(LPDRAWITEMSTRUCT);  
            // insert code to draw an item in this list box  
  
    CListBox:CompareItem(LPCOMPAREITEMSTRUCT);  
            // insert code to compare two items in this list box if LBS_SORT  
    CListBox:DeleteItem(LPDELETEITEMSTRUCT);  
            // insert code to delete an item from this list box  
    ```  
  
-   Per le caselle combinate di disegno automatico:  
  
    ```  
    CComboBox:MeasureItem(LPMEASUREITEMSTRUCT);  
            // insert code to measure the size of an item in this combo box  
    CComboBox:DrawItem(LPDRAWITEMSTRUCT);  
            // insert code to draw an item in this combo box  
  
    CComboBox:CompareItem(LPCOMPAREITEMSTRUCT);  
            // insert code to compare two items in this combo box if CBS_SORT  
    CComboBox:DeleteItem(LPDELETEITEMSTRUCT);  
            // insert code to delete an item from this combo box  
    ```  
  
 Per informazioni dettagliate sulle strutture di disegno personalizzato \([DRAWITEMSTRUCT](../mfc/reference/drawitemstruct-structure.md), [MEASUREITEMSTRUCT](../mfc/reference/measureitemstruct-structure.md), [COMPAREITEMSTRUCT](../mfc/reference/compareitemstruct-structure.md) e [DELETEITEMSTRUCT](../mfc/reference/deleteitemstruct-structure.md)\) vedere la documentazione MFC per `CWnd::OnDrawItem`, `CWnd::OnMeasureItem`, `CWnd::OnCompareItem` e `CWnd::OnDeleteItem` rispettivamente.  
  
## Utilizzo dei controlli e dei menu di disegno automatico  
 Per i menu di disegno automatico, è necessario eseguire l'override dei metodi `OnDrawItem` e `OnMeasureItem`.  
  
 Per le caselle di riepilogo e caselle combinate di disegno automatico, è necessario eseguire l'override di `OnMeasureItem` e `OnDrawItem`.  È necessario specificare lo stile `LBS_OWNERDRAWVARIABLE` per le caselle di riepilogo o lo stile `CBS_OWNERDRAWVARIABLE` per le caselle combinate in un modello di finestra di dialogo.  Lo stile `OWNERDRAWFIXED` non funzionerà con gli elementi di disegno automatico poiché l'altezza fissa dell'elemento viene determinata prima che i controlli di disegno automatico siano allegati alla casella di riepilogo. \(È possibile utilizzare i metodi [CListBox::SetItemHeight](../Topic/CListBox::SetItemHeight.md) e [CComboBox::SetItemHeight](../Topic/CComboBox::SetItemHeight.md) per ovviare a questa limitazione.\)  
  
 La commutazione a uno stile `OWNERDRAWVARIABLE` impone al sistema di applicare lo stile `NOINTEGRALHEIGHT` al controllo.  Poiché il controllo non potrà calcolare un'altezza integrale con gli elementi di dimensioni variabili, lo stile predefinito di `INTEGRALHEIGHT` viene ignorato e il controllo è sempre `NOINTEGRALHEIGHT`.  Se gli elementi hanno l'altezza fissata, è possibile evitare che gli elementi parziali vengano disegnati specificando la dimensione di controllo ad essere un moltiplicatore intero della dimensione dell'elemento.  
  
 Per le caselle di riepilogo e caselle combinate di disegno automatico con lo stile `CBS_SORT` o `LBS_SORT`, è necessario eseguire l'override del metodo `OnCompareItem`.  
  
 Per le caselle di riepilogo e caselle combinate di disegno automatico, di `OnDeleteItem` non viene in genere eseguito l'override.  È possibile eseguire l'override di `OnDeleteItem` se si desidera eseguire dell'elaborazione speciale.  Un caso in cui è applicabile è quando la memoria aggiuntiva o altre risorse vengono archiviate con ogni elemento casella di riepilogo o casella combinata.  
  
## Esempi di controlli e di menu di disegno automatico  
 L'esempio generale [CTRLTEST](../top/visual-cpp-samples.md) MFC fornisce esempi di un menu di disegno automatico e una casella di riepilogo di disegno automatico.  
  
 L'esempio più comune di un pulsante di disegno automatico è un pulsante bitmap.  Un pulsante bitmap è un pulsante che mostra una, due o tre immagini bitmap per i diversi stati.  Un esempio è dato nella classe MFC [CBitmapButton](../mfc/reference/cbitmapbutton-class.md).  
  
## Creazione di una sottoclasse dinamica  
 Talvolta è preferibile modificare la funzionalità di un oggetto già esistente.  Negli esempi precedenti è necessario personalizzare i controlli prima che vengano creati.  La creazione di una sottoclasse dinamica consente di personalizzare un controllo che è già stato creato.  
  
 La creazione di una sottoclasse è il termine di Windows per la sostituzione di [WndProc](http://msdn.microsoft.com/it-it/94ba8ffa-3c36-46d4-ac74-9bd10b1ffd26) di una finestra con `WndProc` personalizzato e la chiamata di `WndProc` precedente per funzionalità predefinite.  
  
 Questa operazione non deve essere confusa con la derivazione di classi di C\+\+.  Per chiarimento, i termini C\+\+ *classe base* e *classe derivata* sono analoghi a *superclasse* e *sottoclasse* del modello a oggetti di Windows.  La derivazione di C\+\+ con MFC e la creazione di una sottoclasse di Windows sono simili a livello funzionale, ad eccezione che C\+\+ non supporta la creazione di una sottoclasse dinamica.  
  
 La classe `CWnd` fornisce la connessione tra l'oggetto C\+\+ \(derivato da `CWnd`\) e un oggetto finestra di Windows \(noto come `HWND`\).  
  
 Esistono tre modi comuni in cui questi sono correlati:  
  
-   `CWnd` crea `HWND`.  È possibile modificare il comportamento in una classe derivata creando una classe derivata da `CWnd`.  `HWND` viene creato quando l'applicazione chiama [CWnd::Create](../Topic/CWnd::Create.md).  
  
-   L'applicazione associa un `CWnd` a un `HWND` esistente.  Il comportamento della finestra esistente non viene modificato.  Si tratta di un caso di delega e viene resa possibile chiamando [CWnd::Attach](../Topic/CWnd::Attach.md) per creare l'alias di un `HWND` esistente a un oggetto `CWnd`.  
  
-   `CWnd` è collegato a un `HWND` esistente ed è possibile modificare il comportamento in una classe derivata.  Si tratta di creazione di una sottoclasse dinamica poiché viene modificato il comportamento e la classe, di un oggetto Windows in fase di esecuzione.  
  
 È possibile ottenere la creazione di una sottoclasse dinamica utilizzando i metodi [CWnd::SubclassWindow](../Topic/CWnd::SubclassWindow.md) e `` [CWnd::SubclassDlgItem](../Topic/CWnd::SubclassDlgItem.md).  
  
 Entrambe le routine associano un oggetto `CWnd` a un `HWND` esistente.  `SubclassWindow` passa direttamente `HWND`.  `SubclassDlgItem` è una funzione di supporto che accetta un ID del controllo e la finestra padre.  `SubclassDlgItem` è progettato per connettere gli oggetti C\+\+ ai controlli finestra di dialogo creati da un modello di finestra di dialogo.  
  
 Vedere l'esempio [CTRLTEST](../top/visual-cpp-samples.md) per alcuni esempi di utilizzo di `SubclassWindow` e `SubclassDlgItem`.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)