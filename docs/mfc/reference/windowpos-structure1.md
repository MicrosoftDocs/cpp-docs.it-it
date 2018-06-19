---
title: WINDOWPOS Structure1 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- WINDOWPOS
dev_langs:
- C++
helpviewer_keywords:
- WINDOWPOS structure [MFC]
ms.assetid: a4ea7cd9-c4c2-4480-9c55-cbbff72195e1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d4abd236998f37f0d719f41827d05a17fde56fde
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33379294"
---
# <a name="windowpos-structure1"></a>WINDOWPOS Structure1
Il `WINDOWPOS` struttura contiene informazioni sulle dimensioni e posizione di una finestra.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tagWINDOWPOS { /* wp */  
    HWND hwnd;  
    HWND hwndInsertAfter;  
    int x;  
    int y;  
    int cx;  
    int cy;  
    UINT flags;  
} WINDOWPOS;  
```  
  
#### <a name="parameters"></a>Parametri  
 *HWND*  
 Identifica la finestra.  
  
 *hwndInsertAfter*  
 Identifica la finestra sotto la quale viene inserita in questa finestra.  
  
 *x*  
 Specifica la posizione del bordo sinistro della finestra.  
  
 *y*  
 Specifica la posizione del bordo destro della finestra.  
  
 `cx`  
 Specifica la larghezza della finestra, in pixel.  
  
 `cy`  
 Specifica l'altezza della finestra, in pixel.  
  
 `flags`  
 Specifica le opzioni di posizionamento di finestra. Questo membro può essere uno dei valori seguenti:  
  
- **SWP_DRAWFRAME** Disegna un frame (definito nella descrizione della classe per la finestra) intorno alla finestra. La finestra riceve un `WM_NCCALCSIZE` messaggio.  
  
- **SWP_FRAMECHANGED** invia un `WM_NCCALCSIZE` messaggio alla finestra, anche se le dimensioni della finestra non viene modificata. Se questo flag non è specificato, `WM_NCCALCSIZE` viene inviato solo quando le dimensioni della finestra viene modificata.  
  
- **SWP_HIDEWINDOW** nasconde la finestra.  
  
- `SWP_NOACTIVATE` La finestra non è attivata.  
  
- **SWP_NOCOPYBITS** Elimina l'intero contenuto dell'area client. Se questo flag non è specificato, il contenuto valido dell'area client venga salvato e copiato indietro nell'area client, dopo che la finestra viene ridimensionata o riposizionata.  
  
- `SWP_NOMOVE` Mantiene la posizione corrente (ignora le **x** e **y** membri).  
  
- **SWP_NOOWNERZORDER** non modifica la posizione della finestra proprietaria nell'ordine Z.  
  
- `SWP_NOSIZE` Consente di mantenere dimensioni correnti (ignora le **cx** e **cy** membri).  
  
- **SWP_NOREDRAW** non vengono aggiornate le modifiche.  
  
- **SWP_NOREPOSITION** come **SWP_NOOWNERZORDER**.  
  
- **SWP_NOSENDCHANGING** impedisce la finestra di ricezione il `WM_WINDOWPOSCHANGING` messaggio.  
  
- `SWP_NOZORDER` Mantiene l'ordinamento corrente (ignora le **hwndInsertAfter** membro).  
  
- **SWP_SHOWWINDOW** Visualizza la finestra.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnWindowPosChanging](../../mfc/reference/cwnd-class.md#onwindowposchanging)

