---
title: Struttura DEVNAMES | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- DEVNAMES
dev_langs:
- C++
helpviewer_keywords:
- DEVNAMES
ms.assetid: aac97f60-2169-471a-ba5d-c0baed9eed9a
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 698a338c94dfa402dd51fa4f683b92a5d30cc0cd
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="devnames-structure"></a>Struttura DEVNAMES
Il `DEVNAMES` struttura contiene stringhe che identificano il driver, dispositivi e i nomi di porta di output per una stampante.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tagDEVNAMES { /* dvnm */  
    WORD wDriverOffset;  
    WORD wDeviceOffset;  
    WORD wOutputOffset;  
    WORD wDefault; */* driver,
    device,
    and port-name strings follow wDefault */  
} DEVNAMES;  
```  
  
#### <a name="parameters"></a>Parametri  
 *wDriverOffset*  
 (Input/Output) Specifica l'offset in caratteri in una stringa con terminazione null che contiene il nome del file (senza estensione) del driver di dispositivo. Per l'input, questa stringa viene utilizzata per determinare la stampante per visualizzare inizialmente nella finestra di dialogo.  
  
 *wDeviceOffset*  
 (Input/Output) Specifica l'offset in caratteri per la stringa con terminazione null (massimo 32 byte, incluso il carattere null) che contiene il nome del dispositivo. Questa stringa deve essere identico al **dmDeviceName** membro del [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) struttura.  
  
 *wOutputOffset*  
 (Input/Output) Specifica l'offset in caratteri per la stringa con terminazione null che contiene il nome del dispositivo DOS per il supporto di output fisico (porta di output).  
  
 *wDefault*  
 Specifica se le stringhe include la `DEVNAMES` struttura identificano la stampante predefinita. Questa stringa viene utilizzata per verificare che la stampante predefinita non è stato modificato dall'ultima operazione di stampa. Nell'input, se il **DN_DEFAULTPRN** flag è impostato, gli altri valori `DEVNAMES` struttura vengono confrontate con la stampante predefinita corrente. Se una delle stringhe non corrispondono, viene visualizzato un messaggio di avviso per informare l'utente che potrebbe essere necessario riformattare il documento. Nell'output di **wDefault** membro viene modificato solo se è stata visualizzata nella finestra di dialogo Impostazioni di stampa e l'utente sceglie il pulsante OK. Il **DN_DEFAULTPRN** flag è impostato se è stata selezionata la stampante predefinita. Se una stampante specifica è selezionata, non è impostato il flag. Tutti gli altri bit di questo membro sono riservati per uso interno la routine della finestra di dialogo Stampa.  
  
## <a name="remarks"></a>Note  
 Il **PrintDlg** funzione utilizza queste stringhe per inizializzare i membri definiti dal sistema nella finestra di dialogo Stampa. Quando l'utente chiude la finestra di dialogo, in questa struttura vengono restituite informazioni sulla stampante selezionata.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** commdlg.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPrintDialog::CreatePrinterDC](../../mfc/reference/cprintdialog-class.md#createprinterdc)



