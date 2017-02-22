---
title: "Struttura DEVNAMES | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DEVNAMES"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DEVNAMES"
ms.assetid: aac97f60-2169-471a-ba5d-c0baed9eed9a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Struttura DEVNAMES
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `DEVNAMES` contiene le stringhe che identificano il driver, il dispositivo e i nomi dell'output porta per una stampante.  
  
## Sintassi  
  
```  
  
      typedef struct tagDEVNAMES { /* dvnm */  
    WORD wDriverOffset;  
    WORD wDeviceOffset;  
    WORD wOutputOffset;  
    WORD wDefault;  
    /* driver, device, and port-name strings follow wDefault */  
} DEVNAMES;  
```  
  
#### Parametri  
 *wDriverOffset*  
 \(Attività\) specifica l'offset di caratteri in una stringa con terminazione null che contiene il nome del file \(senza l'estensione\) dei driver di periferica.  In input, questa stringa viene utilizzata per determinare la stampante per visualizzare inizialmente nella finestra di dialogo.  
  
 *wDeviceOffset*  
 \(Attività\) specifica l'offset i caratteri nella stringa con terminazione null \(un massimo di 32 byte inclusi null\) contenente il nome del dispositivo.  Questa stringa deve essere identici al membro di **dmDeviceName** della struttura di [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565).  
  
 *wOutputOffset*  
 \(Attività\) specifica l'offset i caratteri nella stringa con terminazione null che contiene il nome di dispositivo di DOS per il supporto di output fisico \(porta restituita\).  
  
 *wDefault*  
 Specifica se le stringhe contenute nella struttura di `DEVNAMES` identificano la stampante predefinita.  Questa stringa viene utilizzata per verificare che la stampante predefinita non è stato modificato dall'ultima operazione di stampa.  In input, se il flag di **DN\_DEFAULTPRN** è impostato, gli altri valori nella struttura di `DEVNAMES` vengono archiviati sulla stampante predefinita corrente.  Se una qualsiasi delle stringhe non corrispondono, verrà visualizzato un messaggio di avviso vengono visualizzate che informa l'utente che il documento può avere l'esigenza di essere riformattati.  In output, il membro di **wDefault** viene modificato solo se la finestra di dialogo installazione di stampa visualizzare e l'utente ha scelto il pulsante OK.  Il flag di **DN\_DEFAULTPRN** viene impostato se la stampante predefinita è selezionata.  Se la stampante specifica è selezionata, il flag non è impostato.  Tutti gli altri bit in questo membro sono riservati per utilizzo interno della routine della finestra di dialogo stampa.  
  
## Note  
 La funzione di **PrintDlg** utilizza queste stringhe per inizializzare i membri nella finestra di dialogo definita dal sistema di stampa.  Quando l'utente chiude la finestra di dialogo, le informazioni sulla stampante selezionata vengono restituite in questa struttura.  
  
## Requisiti  
 **Intestazione:** commdlg.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPrintDialog::CreatePrinterDC](../Topic/CPrintDialog::CreatePrinterDC.md)