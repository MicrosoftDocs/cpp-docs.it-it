---
title: "CVSListBox Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CVSListBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CVSListBox class"
  - "CVSListBox::PreTranslateMessage method"
ms.assetid: c79be7b4-46ed-4af8-a41e-68962782d8ef
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CVSListBox Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CVSListBox` supporta un controllo elenco modificabile.  
  
## Sintassi  
  
```  
class CVSListBox : public CVSListBoxBase  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CVSListBox::CVSListBox](../Topic/CVSListBox::CVSListBox.md)|Costruisce un oggetto `CVSListBox`.|  
|`CVSListBox::~CVSListBox`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CVSListBox::AddItem](../Topic/CVSListBox::AddItem.md)|Aggiunge una stringa a un controllo elenco.  \(Override `CVSListBoxBase::AddItem`\).|  
|[CVSListBox::EditItem](../Topic/CVSListBox::EditItem.md)|Avvia un'operazione di modifica del testo di un elemento di controllo elenco.  \(Override `CVSListBoxBase::EditItem`\).|  
|[CVSListBox::GetCount](../Topic/CVSListBox::GetCount.md)|Recupera il numero di stringhe in un controllo elenco modificabile.  \(Override `CVSListBoxBase::GetCount`\).|  
|[CVSListBox::GetItemData](../Topic/CVSListBox::GetItemData.md)|Recupera un valore a 32 bit specifico dell'applicazione associato a un elemento modificabile del controllo elenco.  \(Override `CVSListBoxBase::GetItemData`\).|  
|[CVSListBox::GetItemText](../Topic/CVSListBox::GetItemText.md)|Recupera il testo di un elemento modificabile del controllo elenco.  \(Override `CVSListBoxBase::GetItemText`\).|  
|[CVSListBox::GetSelItem](../Topic/CVSListBox::GetSelItem.md)|Recupera l'indice in base zero dell'elemento attualmente selezionato in un controllo elenco modificabile.  \(Override `CVSListBoxBase::GetSelItem`\).|  
|`CVSListBox::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  Per ulteriori sintassi del metodo e informazioni, vedere [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md).  \(Override `CVSListBoxBase::PreTranslateMessage`\).|  
|[CVSListBox::RemoveItem](../Topic/CVSListBox::RemoveItem.md)|Rimuove un elemento da un controllo elenco modificabile.  \(Override `CVSListBoxBase::RemoveItem`\).|  
|[CVSListBox::SelectItem](../Topic/CVSListBox::SelectItem.md)|Selezionare una stringa modificabile del controllo elenco.  \(Override `CVSListBoxBase::SelectItem`\).|  
|[CVSListBox::SetItemData](../Topic/CVSListBox::SetItemData.md)|Associa un valore a 32 bit specifico dell'applicazione con un elemento modificabile del controllo elenco.  \(Override `CVSListBoxBase::SetItemData`\).|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CVSListBox::GetListHwnd](../Topic/CVSListBox::GetListHwnd.md)|Restituisce un handle per il controllo visualizzazione elenco incorporate corrente.|  
  
## Note  
 La classe `CVSListBox` fornisce un insieme di pulsanti di modifica che consentono all'utente per creare, modificare, eliminare, o riordinare gli elementi in un controllo elenco.  
  
 Ecco un'immagine il controllo elenco modificabile.  La seconda voce di elenco, denominata "Item2", selezionata per modificare.  
  
 ![Controllo CVSListBox](../../mfc/reference/media/cvslistbox.png "cvslistbox")  
  
 Se si utilizza l'editor di risorse per aggiungere un controllo elenco modificabile, si noti che il riquadro **Casella degli strumenti** dell'editor non fornisce un controllo elenco modificabile predefinito.  Al contrario, aggiungere un controllo statico come il controllo **casella di gruppo**.  Il framework utilizza il controllo statico come segnaposto per specificare la dimensione e la posizione del controllo elenco modificabile.  
  
 Per utilizzare un controllo elenco modificabile nel modello di finestra di dialogo, dichiarare una variabile `CVSListBox` nella classe della finestra di dialogo.  Per supportare lo scambio di dati tra la variabile e il controllo, definire una macro voce `DDX_Control` nel metodo `DoDataExchange` la finestra di dialogo.  Per impostazione predefinita, il controllo elenco modificabile viene creato senza pulsanti di modifica.  Utilizzare il metodo ereditato [CVSListBoxBase::SetStandardButtons](http://msdn.microsoft.com/it-it/129e530f-97e9-42eb-b128-371c2a5686ba) per abilitare i pulsanti di modifica.  
  
 Per ulteriori informazioni, vedere la directory degli esempi, l'esempio `New Controls`, i file di Page3.h e di Page3.cpp.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CStatic](../../mfc/reference/cstatic-class.md)  
  
 `CVSListBoxBase`  
  
 [CVSListBox](../../mfc/reference/cvslistbox-class.md)  
  
## Requisiti  
 **intestazione:** afxvslistbox.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)