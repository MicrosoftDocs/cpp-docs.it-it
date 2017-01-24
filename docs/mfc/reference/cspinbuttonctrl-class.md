---
title: "CSpinButtonCtrl Class | Microsoft Docs"
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
  - "CSpinButtonCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSpinButtonCtrl class"
  - "CSpinButtonCtrl class, controlli comuni"
  - "controllo pulsante di selezione"
  - "controlli di scorrimento, controllo pulsante di selezione"
  - "Windows common controls [C++], CSpinButtonCtrl"
ms.assetid: 509bfd76-1c5a-4af6-973f-e133c0b87734
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSpinButtonCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del controllo comune pulsante di selezione di Windows.  
  
## Sintassi  
  
```  
class CSpinButtonCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSpinButtonCtrl::CSpinButtonCtrl](../Topic/CSpinButtonCtrl::CSpinButtonCtrl.md)|Costruisce un oggetto `CSpinButtonCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSpinButtonCtrl::Create](../Topic/CSpinButtonCtrl::Create.md)|Crea un controllo pulsante di selezione e lo collega a un oggetto `CSpinButtonCtrl`.|  
|[CSpinButtonCtrl::CreateEx](../Topic/CSpinButtonCtrl::CreateEx.md)|Crea un controllo pulsante di selezione con gli stili estesi Windows specificati e lo collega a un oggetto `CSpinButtonCtrl`.|  
|[CSpinButtonCtrl::GetAccel](../Topic/CSpinButtonCtrl::GetAccel.md)|Recupera le informazioni di accelerazione per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::GetBase](../Topic/CSpinButtonCtrl::GetBase.md)|Recupera la base corrente per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::GetBuddy](../Topic/CSpinButtonCtrl::GetBuddy.md)|Recupera un puntatore alla finestra corrente degli utenti.|  
|[CSpinButtonCtrl::GetPos](../Topic/CSpinButtonCtrl::GetPos.md)|Recupera la posizione corrente del controllo pulsante di selezione.|  
|[CSpinButtonCtrl::GetRange](../Topic/CSpinButtonCtrl::GetRange.md)|Recupera la i limiti superiore e inferiore \(intervallo\) per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetAccel](../Topic/CSpinButtonCtrl::SetAccel.md)|Imposta l'accelerazione per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetBase](../Topic/CSpinButtonCtrl::SetBase.md)|Impostare la base per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetBuddy](../Topic/CSpinButtonCtrl::SetBuddy.md)|Imposta la finestra degli utenti per un controllo pulsante di selezione.|  
|[CSpinButtonCtrl::SetPos](../Topic/CSpinButtonCtrl::SetPos.md)|Imposta la posizione corrente per il controllo.|  
|[CSpinButtonCtrl::SetRange](../Topic/CSpinButtonCtrl::SetRange.md)|Imposta la i limiti superiore e inferiore \(intervallo\) per un controllo pulsante di selezione.|  
  
## Note  
 "Un controllo pulsante di selezione" \(anche noto come un controllo di scorrimento\) è una coppia di frecce che l'utente può fare clic per incrementare o decrementare un valore, come una posizione di scorrimento o un numero visualizzato in un controllo correlato.  Il valore associato a un controllo pulsante di selezione tratta della posizione corrente.  Un controllo pulsante di selezione è più spesso utilizzato con un controllo correlato, denominato "una finestra degli utenti".  
  
 Questo controllo e la classe `CSpinButtonCtrl` \) è disponibile solo per i programmi in esecuzione in versioni 3,51 di Windows NT e Windows 95\/98 e successive.  
  
 All'utente, a un controllo pulsante di selezione e il relativo della finestra degli utenti spesso simile a un singolo controllo.  È possibile specificare che una stessa posizione del controllo pulsante di selezione automaticamente accanto alla finestra degli utenti e che imposta automaticamente la barra del titolo della finestra degli utenti alla posizione corrente.  È possibile utilizzare un controllo pulsante di selezione con un controllo di modifica per richiedere all'utente per l'input numerico.  
  
 Facendo clic sulla freccia in su o la posizione corrente verso il massimo e facendo clic sulla freccia GIÙ o la posizione corrente verso il basso.  Per impostazione predefinita, il minimo è 100 e il valore massimo è 0.  Qualsiasi momento interventi minimi è maggiore dell'impostazione massima \(ad esempio, quando le impostazioni predefinite vengono utilizzate\), quindi fare clic sulla freccia in su diminuire il valore della posizione e fare clic sulla freccia in giù la.  
  
 Un controllo pulsante di selezione senza funzioni di finestra buddy come un tipo di barra di scorrimento semplificata.  Ad esempio, un controllo Struttura a schede talvolta visualizzato un controllo pulsante di selezione per consentire all'utente di scorrere le schede aggiuntive nella visualizzazione.  
  
 Per ulteriori informazioni su l `CSpinButtonCtrl`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CSpinButtonCtrl](../../mfc/using-cspinbuttonctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CSpinButtonCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [MFC campione CMNCTRL2](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CSliderCtrl Class](../../mfc/reference/csliderctrl-class.md)