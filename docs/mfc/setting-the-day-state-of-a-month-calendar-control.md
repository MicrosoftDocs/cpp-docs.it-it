---
title: "Impostazione dello stato giorno di un controllo calendario mensile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MCN_GETDAYSTATE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMonthCalCtrl (classe), impostazione delle informazioni sullo stato del giorno"
  - "MCN_GETDAYSTATE (notifica)"
  - "controlli calendario mensile, informazioni sullo stato del giorno"
ms.assetid: 435d1b11-ec0e-4121-9e25-aaa6af812a3c
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Impostazione dello stato giorno di un controllo calendario mensile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Uno degli attributi di un controllo calendario mensile consente di archiviare le informazioni, definite lo stato del giorno del controllo, per ciascun giorno del mese.  Queste informazioni sono utilizzate per evidenziare determinate date per il mese correntemente visualizzato.  
  
> [!NOTE]
>  L'oggetto di `CMonthCalCtrl` deve disporre dello stile di **MCS\_DAYSTATE** per visualizzare le informazioni sullo stato del giorno.  
  
 Le informazioni sullo stato del giorno sono espresse come tipo di dati a 32 bit, **MONTHDAYSTATE**.  Ogni frammento in un campo di bit di **MONTHDAYSTATE** \(da 1 a 31\) rappresenta lo stato di un giorno in un mese.  Se un bit è attivata, il giorno corrispondente viene visualizzato in grassetto; in caso contrario viene visualizzato senza enfasi.  
  
 Esistono due metodi per impostare lo stato del giorno del controllo calendario mensile: in modo esplicito con una chiamata a [CMonthCalCtrl::SetDayState](../Topic/CMonthCalCtrl::SetDayState.md) o gestendo il messaggio di notifica di **MCN\_GETDAYSTATE**.  
  
## Gestire il messaggio di notifica di MCN\_GETDAYSTATE  
 Il messaggio di **MCN\_GETDAYSTATE** viene inviato dal controllo per determinare come i giorni i mesi visibili da visualizzare.  
  
> [!NOTE]
>  Poiché il controllo memorizza nella cache il precedente e mesi seguenti, per quanto riguarda il mese visibile, verrà generata questa notifica ogni volta che un altro mese viene scelto.  
  
 Per gestire correttamente questo messaggio, è necessario determinare le informazioni sullo stato del giorno del mese vengono richiedende, per inizializzare una matrice di strutture **MONTHDAYSTATE** con i valori appropriati e inizializzare il membro della struttura correlato con nuove informazioni.  La procedura riportata di seguito, fornendo in dettaglio i passaggi necessari, si presuppone che esista un oggetto di `CMonthCalCtrl` chiamato `m_monthcal` e una matrice di oggetti di **MONTHDAYSTATE**, `mdState`.  
  
#### Per gestire il messaggio di notifica di MCN\_GETDAYSTATE  
  
1.  Utilizzando la Finestra Proprietà, aggiungere un gestore di notifica del messaggio di **MCN\_GETDAYSTATE** all'oggetto di `m_monthcal` \(vedere [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md)\).  
  
2.  Nel corpo del gestore, aggiungere il codice seguente:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#26](../mfc/codesnippet/CPP/setting-the-day-state-of-a-month-calendar-control_1.cpp)]  
  
     L'esempio converte il puntatore di `pNMHDR` nel tipo appropriato, quindi determina il numero di mesi di informazioni vengono richiedendi \(`pDayState->cDayState`\).  Per ogni mese, il campo di bit corrente \(`pDayState->prgDayState[i]`\) viene inizializzata su zero e quindi le date necessarie sono impostate in questo caso, il quindicesimo di ogni mese\).  
  
## Vedere anche  
 [Utilizzo di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)   
 [Controlli](../mfc/controls-mfc.md)