---
title: Struttura DEVNAMES | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- DEVNAMES
dev_langs:
- C++
helpviewer_keywords:
- DEVNAMES [MFC]
ms.assetid: aac97f60-2169-471a-ba5d-c0baed9eed9a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0c13167c42c6acbfcc5f3af500205eed6ab884d9
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121575"
---
# <a name="devnames-structure"></a>Struttura DEVNAMES
Il `DEVNAMES` struttura contiene stringhe che identificano i driver, dispositivo e i nomi di porta di output per una stampante.  
  
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
 (Input/Output) Specifica l'offset in caratteri per la stringa con terminazione null (massimo di 32 byte, incluso il carattere null) che contiene il nome del dispositivo. Questa stringa deve essere identica ai `dmDeviceName` membro del [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) struttura.  
  
 *wOutputOffset*  
 (Input/Output) Specifica l'offset in caratteri per la stringa con terminazione null che contiene il nome di dispositivo DOS per il supporto di output fisico (porta di output).  
  
 *wDefault*  
 Specifica se le stringhe di contenuti nel `DEVNAMES` struttura identificare la stampante predefinita. Questa stringa viene utilizzata per verificare che la stampante predefinita non è stato modificato dall'ultima operazione di stampa. Per l'input, se è impostato il flag DN_DEFAULTPRN, altri valori di `DEVNAMES` struttura vengono controllati rispetto alla stampante predefinita corrente. Se una delle stringhe non corrispondono, viene visualizzato un messaggio di avviso che informa l'utente che potrebbe essere necessario riformattare il documento. Nell'output, il `wDefault` membro viene modificato solo se è stata visualizzata la finestra di dialogo Impostazioni di stampa e l'utente sceglie il pulsante OK. Il flag DN_DEFAULTPRN viene impostato se è stata selezionata la stampante predefinita. Se si seleziona una stampante specifica, non è impostato il flag. Tutti gli altri bit di questo membro sono riservati per uso interno di routine di finestra di dialogo di stampa.  
  
## <a name="remarks"></a>Note  
 Il `PrintDlg` funzione queste stringhe viene utilizzato per inizializzare i membri nella finestra di dialogo di stampa definita dal sistema. Quando l'utente chiude la finestra di dialogo, vengono restituite informazioni sulla stampante selezionata in questa struttura.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** commdlg.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPrintDialog::CreatePrinterDC](../../mfc/reference/cprintdialog-class.md#createprinterdc)


