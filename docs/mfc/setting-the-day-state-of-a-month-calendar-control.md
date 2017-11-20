---
title: Impostazione dello stato giorno di un mese di calendario controllo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: MCN_GETDAYSTATE
dev_langs: C++
helpviewer_keywords:
- CMonthCalCtrl class [MFC], setting day state info
- MCN_GETDAYSTATE notification [MFC]
- month calendar controls [MFC], day state info
ms.assetid: 435d1b11-ec0e-4121-9e25-aaa6af812a3c
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7b0949cd28683ff577c29ade459b89185f020377
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="setting-the-day-state-of-a-month-calendar-control"></a>Impostazione dello stato giorno di un controllo calendario mensile
Uno degli attributi di un controllo calendario mensile è la possibilità di archiviare informazioni, definite come il controllo dello stato del giorno per ogni giorno del mese. Queste informazioni viene utilizzate per evidenziare alcune date per il mese visualizzato.  
  
> [!NOTE]
>  Il `CMonthCalCtrl` oggetto deve avere il **MCS_DAYSTATE** stile per visualizzare informazioni sullo stato del giorno.  
  
 Informazioni sullo stato del giorno sono espresso come un tipo di dati a 32 bit, **MONTHDAYSTATE**. Ogni bit in un **MONTHDAYSTATE** campo di bit (da 1 a 31) rappresenta lo stato di un giorno del mese. Se un bit è attivo, il giorno corrispondente verrà visualizzato in grassetto. in caso contrario verrà visualizzato con alcuna particolare attenzione.  
  
 Esistono due metodi per l'impostazione dello stato del giorno del controllo calendario mensile: in modo esplicito con una chiamata a [SetDayState](../mfc/reference/cmonthcalctrl-class.md#setdaystate) o gestendo il **MCN_GETDAYSTATE** messaggio di notifica.  
  
## <a name="handling-the-mcngetdaystate-notification-message"></a>La gestione del messaggio di notifica MCN_GETDAYSTATE  
 Il **MCN_GETDAYSTATE** messaggio viene inviato dal controllo per determinare la modalità di visualizzazione i giorni all'interno dei mesi.  
  
> [!NOTE]
>  Poiché il controllo memorizza nella cache i mesi precedenti e successivi, rispetto al mese, si riceverà la notifica ogni volta che viene scelto un nuovo mese.  
  
 Per gestire correttamente il messaggio, è necessario determinare il numero di mesi informazioni sullo stato del giorno sono in corso richiesto per Inizializza una matrice di **MONTHDAYSTATE** strutture con i valori appropriati e inizializzare il membro della struttura correlati con le nuove informazioni. La procedura seguente, che riporta in dettaglio i passaggi necessari, si presuppone un `CMonthCalCtrl` oggetto denominato `m_monthcal` e una matrice di **MONTHDAYSTATE** oggetti `mdState`.  
  
#### <a name="to-handle-the-mcngetdaystate-notification-message"></a>Per gestire il messaggio di notifica MCN_GETDAYSTATE  
  
1.  Utilizzando la finestra Proprietà, aggiungere un gestore di notifica per il **MCN_GETDAYSTATE** messaggio per il `m_monthcal` oggetto (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).  
  
2.  Nel corpo del gestore, aggiungere il codice seguente:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#26](../mfc/codesnippet/cpp/setting-the-day-state-of-a-month-calendar-control_1.cpp)]  
  
     Nell'esempio viene convertita la `pNMHDR` puntatore al tipo corretto, quindi determina il numero di mesi di informazioni viene richiesti (`pDayState->cDayState`). Per ogni mese, il campo di bit corrente (`pDayState->prgDayState[i]`) viene inizializzata su zero e quindi necessario le date vengono impostate (in questo caso, il giorno 15 del mese).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

