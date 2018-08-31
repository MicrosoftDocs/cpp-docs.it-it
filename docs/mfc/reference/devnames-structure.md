---
title: Struttura DEVNAMES | Microsoft Docs
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
ms.openlocfilehash: e2ba459a2ee98a89e264be452b04f116072d41e6
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43194611"
---
# <a name="devnames-structure"></a>Struttura DEVNAMES
Il `DEVNAMES` struttura contiene le stringhe che identificano il driver di dispositivo e i nomi di porta di output per una stampante.  
  
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
 (Input/Output) Specifica l'offset di caratteri in una stringa con terminazione null che contiene il nome del file (senza estensione) del driver di dispositivo. Per l'input, questa stringa viene utilizzata per determinare la stampante per visualizzare inizialmente nella finestra di dialogo.  
  
 *wDeviceOffset*  
 (Input/Output) Specifica l'offset in caratteri per la stringa con terminazione null (massimo 32 byte, incluso il carattere null) che contiene il nome del dispositivo. Questa stringa deve essere identica al `dmDeviceName` membro della [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) struttura.  
  
 *wOutputOffset*  
 (Input/Output) Specifica l'offset in caratteri per la stringa con terminazione null che contiene il nome del dispositivo DOS per il supporto di output fisico (porta di output).  
  
 *wDefault*  
 Specifica se le stringhe contenute nel `DEVNAMES` struttura identificare la stampante predefinita. Questa stringa viene utilizzata per verificare che la stampante predefinita non è stato modificato dall'ultima operazione di stampa. Per l'input, se è impostato il flag DN_DEFAULTPRN, l'altra valori nel `DEVNAMES` struttura vengono confrontate con la stampante predefinita corrente. Se una delle stringhe non corrispondono, viene visualizzato un messaggio di avviso che informa l'utente che potrebbe essere necessario riformattare il documento. Nell'output il `wDefault` membro viene modificato solo se è stata visualizzata la finestra di dialogo Impostazioni di stampa e l'utente ha scelto il pulsante OK. Il flag DN_DEFAULTPRN è impostato se è stata selezionata la stampante predefinita. Se una stampante specifica è selezionata, il flag non è impostato. Tutti gli altri bit in questo membro sono riservati per uso interno la routine di finestra di dialogo di stampa.  
  
## <a name="remarks"></a>Note  
 Il `PrintDlg` funzione vengono utilizzate queste stringhe per inizializzare i membri nella finestra di dialogo di stampa definito dal sistema. Quando l'utente chiude la finestra di dialogo, vengono restituite informazioni sulla stampante selezionata in questa struttura.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** commdlg.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPrintDialog::CreatePrinterDC](../../mfc/reference/cprintdialog-class.md#createprinterdc)


