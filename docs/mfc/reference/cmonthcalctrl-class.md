---
title: "CMonthCalCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMonthCalCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMonthCalCtrl class"
  - "controlli comuni, Internet Explorer 4.0"
  - "Internet Explorer 4.0 common controls"
  - "month calendar controls"
  - "month calendar controls, CMonthCalCtrl class"
ms.assetid: a42f6bd6-ab5c-4335-82f8-839982fc64a2
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMonthCalCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula la funzionalità di un controllo calendario mensile.  
  
## Sintassi  
  
```  
class CMonthCalCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMonthCalCtrl::CMonthCalCtrl](../Topic/CMonthCalCtrl::CMonthCalCtrl.md)|Costruisce un oggetto `CMonthCalCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMonthCalCtrl::Create](../Topic/CMonthCalCtrl::Create.md)|Crea un controllo calendario mensile e lo aggiunge all'oggetto `CMonthCalCtrl`.|  
|[CMonthCalCtrl::GetCalendarBorder](../Topic/CMonthCalCtrl::GetCalendarBorder.md)|Recupera la larghezza del bordo del controllo calendario mensile corrente.|  
|[CMonthCalCtrl::GetCalendarCount](../Topic/CMonthCalCtrl::GetCalendarCount.md)|Recupera il numero dei calendari visualizzare nel controllo calendario mensile corrente.|  
|[CMonthCalCtrl::GetCalendarGridInfo](../Topic/CMonthCalCtrl::GetCalendarGridInfo.md)|Recupera le informazioni sul controllo calendario mensile corrente.|  
|[CMonthCalCtrl::GetCalID](../Topic/CMonthCalCtrl::GetCalID.md)|Recupera l'identificatore del calendario per il controllo calendario mensile corrente.|  
|[CMonthCalCtrl::GetColor](../Topic/CMonthCalCtrl::GetColor.md)|Ottiene il colore di una determinata area di un controllo calendario mensile.|  
|[CMonthCalCtrl::GetCurrentView](../Topic/CMonthCalCtrl::GetCurrentView.md)|Recupera la visualizzazione correntemente visualizzato dal controllo calendario mensile corrente.|  
|[CMonthCalCtrl::GetCurSel](../Topic/CMonthCalCtrl::GetCurSel.md)|Recupera l'ora di sistema come indicato dalla data attualmente selezionata.|  
|[CMonthCalCtrl::GetFirstDayOfWeek](../Topic/CMonthCalCtrl::GetFirstDayOfWeek.md)|Ottiene il primo giorno della settimana da visualizzare nella colonna più a sinistra del calendario.|  
|[CMonthCalCtrl::GetMaxSelCount](../Topic/CMonthCalCtrl::GetMaxSelCount.md)|Recupera il numero massimo corrente dei giorni che possono essere selezionati in un controllo calendario mensile.|  
|[CMonthCalCtrl::GetMaxTodayWidth](../Topic/CMonthCalCtrl::GetMaxTodayWidth.md)|Recupera la larghezza massima della data odierna stringa per il controllo calendario mensile corrente.|  
|[CMonthCalCtrl::GetMinReqRect](../Topic/CMonthCalCtrl::GetMinReqRect.md)|Recupera la dimensione minima richiesta di visualizzare un mese completo in un controllo calendario mensile.|  
|[CMonthCalCtrl::GetMonthDelta](../Topic/CMonthCalCtrl::GetMonthDelta.md)|Recupera la frequenza di scorrimento per un controllo calendario mensile.|  
|[CMonthCalCtrl::GetMonthRange](../Topic/CMonthCalCtrl::GetMonthRange.md)|Recupera le informazioni relative alla data che rappresentano il livello e i limiti inferiore della visualizzazione di un controllo calendario mensile.|  
|[CMonthCalCtrl::GetRange](../Topic/CMonthCalCtrl::GetRange.md)|Recupera il minimo corrente e il massimo data impostato in un controllo calendario mensile.|  
|[CMonthCalCtrl::GetSelRange](../Topic/CMonthCalCtrl::GetSelRange.md)|Recupera le informazioni relative alla data che rappresentano la i limiti superiore e inferiore dell'intervallo di dati attualmente selezionato dall'utente.|  
|[CMonthCalCtrl::GetToday](../Topic/CMonthCalCtrl::GetToday.md)|Recupera le informazioni relative alla data per la data specificata come odierna per un controllo calendario mensile.|  
|[CMonthCalCtrl::HitTest](../Topic/CMonthCalCtrl::HitTest.md)|Determina la sezione di un controllo calendario mensile è un punto specificato sullo schermo.|  
|[CMonthCalCtrl::IsCenturyView](../Topic/CMonthCalCtrl::IsCenturyView.md)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione di quattro cifre.|  
|[CMonthCalCtrl::IsDecadeView](../Topic/CMonthCalCtrl::IsDecadeView.md)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione del decennio.|  
|[CMonthCalCtrl::IsMonthView](../Topic/CMonthCalCtrl::IsMonthView.md)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione dei mesi.|  
|[CMonthCalCtrl::IsYearView](../Topic/CMonthCalCtrl::IsYearView.md)|Indica se la visualizzazione corrente del controllo calendario mensile corrente è la visualizzazione dell'anno.|  
|[CMonthCalCtrl::SetCalendarBorder](../Topic/CMonthCalCtrl::SetCalendarBorder.md)|Impostare la larghezza del bordo del controllo calendario mensile corrente.|  
|[CMonthCalCtrl::SetCalendarBorderDefault](../Topic/CMonthCalCtrl::SetCalendarBorderDefault.md)|Imposta la larghezza predefinita del bordo del controllo calendario mensile corrente.|  
|[CMonthCalCtrl::SetCalID](../Topic/CMonthCalCtrl::SetCalID.md)|Imposta l'identificatore del calendario per il controllo calendario mensile corrente.|  
|[CMonthCalCtrl::SetCenturyView](../Topic/CMonthCalCtrl::SetCenturyView.md)|Imposta il controllo calendario mensile corrente per la visualizzazione di quattro cifre.|  
|[CMonthCalCtrl::SetColor](../Topic/CMonthCalCtrl::SetColor.md)|Imposta il colore di una determinata area di un controllo calendario mensile.|  
|[CMonthCalCtrl::SetCurrentView](../Topic/CMonthCalCtrl::SetCurrentView.md)|Imposta il controllo calendario mensile corrente per visualizzare la visualizzazione specificata.|  
|[CMonthCalCtrl::SetCurSel](../Topic/CMonthCalCtrl::SetCurSel.md)|Imposta la data selezionata per un controllo calendario mensile.|  
|[CMonthCalCtrl::SetDayState](../Topic/CMonthCalCtrl::SetDayState.md)|Imposta la visualizzazione dei giorni in un controllo calendario mensile.|  
|[CMonthCalCtrl::SetDecadeView](../Topic/CMonthCalCtrl::SetDecadeView.md)|Imposta il controllo calendario mensile corrente alla visualizzazione del decennio.|  
|[CMonthCalCtrl::SetFirstDayOfWeek](../Topic/CMonthCalCtrl::SetFirstDayOfWeek.md)|Imposta il giorno della settimana da visualizzare nella colonna più a sinistra del calendario.|  
|[CMonthCalCtrl::SetMaxSelCount](../Topic/CMonthCalCtrl::SetMaxSelCount.md)|Imposta il numero massimo di giorni che possono essere selezionati in un controllo calendario mensile.|  
|[CMonthCalCtrl::SetMonthDelta](../Topic/CMonthCalCtrl::SetMonthDelta.md)|Imposta la frequenza di scorrimento per un controllo calendario mensile.|  
|[CMonthCalCtrl::SetMonthView](../Topic/CMonthCalCtrl::SetMonthView.md)|Imposta il controllo calendario mensile corrente per la visualizzazione dei mesi.|  
|[CMonthCalCtrl::SetRange](../Topic/CMonthCalCtrl::SetRange.md)|Imposta il minime e massime di date concesse per un controllo calendario mensile.|  
|[CMonthCalCtrl::SetSelRange](../Topic/CMonthCalCtrl::SetSelRange.md)|Imposta la selezione per un controllo calendario mensile a un intervallo di date specificato.|  
|[CMonthCalCtrl::SetToday](../Topic/CMonthCalCtrl::SetToday.md)|Imposta il controllo calendar per il giorno corrente.|  
|[CMonthCalCtrl::SetYearView](../Topic/CMonthCalCtrl::SetYearView.md)|Imposta il controllo calendario mensile corrente alla visualizzazione dell'anno.|  
|[CMonthCalCtrl::SizeMinReq](../Topic/CMonthCalCtrl::SizeMinReq.md)|Aggiorna il controllo calendario mensile al minimo, le dimensioni di un mese.|  
|[CMonthCalCtrl::SizeRectToMin](../Topic/CMonthCalCtrl::SizeRectToMin.md)|Per il controllo calendario mensile corrente, calcola il più piccolo rettangolo che contenga tutti i calendari che rientrano in un rettangolo specificato.|  
  
## Note  
 Il controllo calendario mensile fornisce all'utente con un'interfaccia semplice del calendario, dal quale l'utente può selezionare una data.  L'utente può modificare la visualizzazione da:  
  
-   Scorrimento in avanti e a, da un mese all'altro.  
  
-   Facendo clic sull'attuale testo da visualizzare il giorno corrente \(se lo stile **MCS\_NOTODAY** non viene utilizzato\).  
  
-   La un mese o dell'anno da un menu di scelta rapida.  
  
 È possibile personalizzare il controllo calendario mensile applicando diversi stili all'oggetto quando viene creato.  Questi stili sono descritti in [Stili del controllo calendario mensile](http://msdn.microsoft.com/library/windows/desktop/bb760919) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Il controllo calendario mensile può visualizzare più di un mese e può indicare i giorni speciali quali giorni\) da in grassetto la data.  
  
 Per ulteriori informazioni sull'utilizzo del controllo calendario mensile, vedere [Utilizzando CMonthCalCtrl](../../mfc/using-cmonthcalctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CMonthCalCtrl`  
  
## Requisiti  
 **Header:** afxdtctl.h  
  
## Vedere anche  
 [MFC campione CMNCTRL1](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDateTimeCtrl Class](../../mfc/reference/cdatetimectrl-class.md)