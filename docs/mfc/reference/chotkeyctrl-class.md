---
title: "CHotKeyCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CHotKeyCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHotKeyCtrl class"
  - "hot key controls"
  - "Windows common controls [C++], CHotKeyCtrl"
ms.assetid: 896f9766-0718-4f58-aab2-20325e118ca6
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CHotKeyCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del controllo comune del tasto di scelta di Windows.  
  
## Sintassi  
  
```  
class CHotKeyCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHotKeyCtrl::CHotKeyCtrl](../Topic/CHotKeyCtrl::CHotKeyCtrl.md)|Costruisce un oggetto `CHotKeyCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHotKeyCtrl::Create](../Topic/CHotKeyCtrl::Create.md)|Crea un controllo del tasto di scelta e lo collega a un oggetto `CHotKeyCtrl`.|  
|[CHotKeyCtrl::CreateEx](../Topic/CHotKeyCtrl::CreateEx.md)|Crea un controllo del tasto di scelta con gli stili estesi Windows specificati e lo collega a un oggetto `CHotKeyCtrl`.|  
|[CHotKeyCtrl::GetHotKey](../Topic/CHotKeyCtrl::GetHotKey.md)|Recupera i flag virtuali di modificatori della chiave di un tasto di scelta da un controllo del tasto di scelta.|  
|[CHotKeyCtrl::GetHotKeyName](../Topic/CHotKeyCtrl::GetHotKeyName.md)|Recupera il nome della chiave, nel set di caratteri locale, assegnato a un tasto di scelta.|  
|[CHotKeyCtrl::GetKeyName](../Topic/CHotKeyCtrl::GetKeyName.md)|Recupera il nome della chiave, nel set di caratteri locale, assegnato al codice tasto virtuale specificato.|  
|[CHotKeyCtrl::SetHotKey](../Topic/CHotKeyCtrl::SetHotKey.md)|Imposta la combinazione di tasti di scelta per un controllo del tasto di scelta.|  
|[CHotKeyCtrl::SetRules](../Topic/CHotKeyCtrl::SetRules.md)|Definisce le combinazioni non valide e la combinazione predefinita del modificatore per un controllo del tasto di scelta.|  
  
## Note  
 "Un controllo del tasto di scelta" è una finestra che consente all'utente per creare un tasto di scelta.  "Un tasto di scelta" è una combinazione di tasti che l'utente può premere per eseguire rapidamente un'azione.  Ad esempio, un utente può creare un tasto di scelta che attiva una finestra specificata e la porta nella parte superiore dell'ordine Z.\) Il controllo del tasto di scelta visualizzare le scelte dell'utente e assicurarsi di selezionare una combinazione di tasti valida.  
  
 Questo controllo e la classe `CHotKeyCtrl` \) è disponibile solo per i programmi in esecuzione in versioni 3,51 di Windows NT e Windows 95\/98 e successive.  
  
 Quando l'utente ha scelto la combinazione di tasti, l'applicazione può recuperare la combinazione di tasti specificata dal controllo e utilizzare il messaggio **WM\_SETHOTKEY** per installare il tasto di scelta rapida nel sistema.  Ogni volta che si preme il tasto di scelta successivamente, da parte del sistema, la finestra specificata nel messaggio **WM\_SETHOTKEY** riceve un messaggio `WM_SYSCOMMAND` che specifica **SC\_HOTKEY**.  Questo messaggio attiva la finestra che lo riceve.  Il tasto di scelta rimane valido fino all'applicazione che ha chiamato il termine **WM\_SETHOTKEY**.  
  
 Questo meccanismo è diverso dal supporto dei tasti di scelta che dipende dal messaggio **WM\_HOTKEY** e le funzioni di Windows [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309) e [UnregisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646327).  
  
 Per ulteriori informazioni su l `CHotKeyCtrl`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CHotKeyCtrl](../../mfc/using-chotkeyctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CHotKeyCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)