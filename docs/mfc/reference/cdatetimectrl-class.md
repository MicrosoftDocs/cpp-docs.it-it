---
title: "CDateTimeCtrl Class | Microsoft Docs"
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
  - "CDateTimeCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDateTimeCtrl class"
  - "date-picking functionality"
  - "DateTimePicker control [MFC]"
  - "DateTimePicker control [MFC], CDateTimeCtrl class"
ms.assetid: 7113993b-5d37-4148-939f-500a190c5bdc
caps.latest.revision: 23
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDateTimeCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula la funzionalità di un controllo di selezione data e ora.  
  
## Sintassi  
  
```  
class CDateTimeCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDateTimeCtrl::CDateTimeCtrl](../Topic/CDateTimeCtrl::CDateTimeCtrl.md)|Costruisce un oggetto `CDateTimeCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDateTimeCtrl::CloseMonthCal](../Topic/CDateTimeCtrl::CloseMonthCal.md)|Chiude il controllo di selezione data e ora corrente.|  
|[CDateTimeCtrl::Create](../Topic/CDateTimeCtrl::Create.md)|Crea il controllo di selezione data e ora e lo aggiunge all'oggetto `CDateTimeCtrl`.|  
|[CDateTimeCtrl::GetDateTimePickerInfo](../Topic/CDateTimeCtrl::GetDateTimePickerInfo.md)|Recupera le informazioni sul controllo di selezione data e ora corrente.|  
|[CDateTimeCtrl::GetIdealSize](../Topic/CDateTimeCtrl::GetIdealSize.md)|Restituisce la dimensione ideale di controllo di selezione data e ora richiesto per visualizzare la data o l'ora corrente.|  
|[CDateTimeCtrl::GetMonthCalColor](../Topic/CDateTimeCtrl::GetMonthCalColor.md)|Recupera il colore per una parte del calendario mensile nel controllo di selezione data e ora.|  
|[CDateTimeCtrl::GetMonthCalCtrl](../Topic/CDateTimeCtrl::GetMonthCalCtrl.md)|Recupera l'oggetto `CMonthCalCtrl` associato al controllo di selezione data e ora.|  
|[CDateTimeCtrl::GetMonthCalFont](../Topic/CDateTimeCtrl::GetMonthCalFont.md)|Recupera il carattere attualmente utilizzata dal controllo calendario mensile figlio del controllo di selezione data e ora.|  
|[CDateTimeCtrl::GetMonthCalStyle](../Topic/CDateTimeCtrl::GetMonthCalStyle.md)|Ottiene lo stile del controllo di selezione data e ora corrente.|  
|[CDateTimeCtrl::GetRange](../Topic/CDateTimeCtrl::GetRange.md)|Recupera il minimo corrente e massime di ore di sistema concesse per un controllo di selezione data e ora.|  
|[CDateTimeCtrl::GetTime](../Topic/CDateTimeCtrl::GetTime.md)|Recupera il tempo attualmente selezionato da un controllo di selezione data e ora e lo inserisce in una struttura specifica `SYSTEMTIME`.|  
|[CDateTimeCtrl::SetFormat](../Topic/CDateTimeCtrl::SetFormat.md)|Imposta la visualizzazione di un controllo di selezione data e ora in base a una stringa di formato specificato.|  
|[CDateTimeCtrl::SetMonthCalColor](../Topic/CDateTimeCtrl::SetMonthCalColor.md)|Imposta il colore per una parte del calendario mensile all'interno di un controllo di selezione data e ora.|  
|[CDateTimeCtrl::SetMonthCalFont](../Topic/CDateTimeCtrl::SetMonthCalFont.md)|Imposta il tipo del controllo calendario mensile figlio del controllo di selezione data e ora utilizzata.|  
|[CDateTimeCtrl::SetMonthCalStyle](../Topic/CDateTimeCtrl::SetMonthCalStyle.md)|Imposta lo stile del controllo di selezione data e ora corrente.|  
|[CDateTimeCtrl::SetRange](../Topic/CDateTimeCtrl::SetRange.md)|Imposta il minime e massime di ore di sistema concesse per un controllo di selezione data e ora.|  
|[CDateTimeCtrl::SetTime](../Topic/CDateTimeCtrl::SetTime.md)|Imposta l'ora di un controllo di selezione data e ora.|  
  
## Note  
 Il controllo di selezione data e ora \(controllo di DTP\) fornisce un'interfaccia semplice per scambiarsi informazioni su data e ora con un utente.  Questa interfaccia contiene i campi, ciascuno visualizzare una parte delle informazioni su data e ora archiviate nel controllo.  L'utente può modificare le informazioni archiviate nel controllo modificandone il contenuto della stringa in un campo specificato.  L'utente può spostarsi dal campo nel campo utilizzando il mouse o la tastiera.  
  
 È possibile personalizzare il controllo di selezione data e ora applicando diversi stili all'oggetto quando viene creato.  Vedere [Stili del controllo di selezione data e ora](http://msdn.microsoft.com/library/windows/desktop/bb761728) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni sugli stili specifici al controllo di selezione data e ora.  È possibile impostare il formato di visualizzazione del controllo di DTP utilizzando stili di formato.  Questi stili di formato vengono descritti nel formato "disegnare" nell'argomento [Stili del controllo di selezione data e ora](http://msdn.microsoft.com/library/windows/desktop/bb761728)di [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
 Il controllo di selezione data e ora utilizza anche le notifiche e i callback, descritte in [Utilizzando CDateTimeCtrl](../../mfc/using-cdatetimectrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDateTimeCtrl`  
  
## Requisiti  
 **Header:** afxdtctl.h  
  
## Vedere anche  
 [Esempio CMNCTRL1 MFC](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CMonthCalCtrl Class](../../mfc/reference/cmonthcalctrl-class.md)