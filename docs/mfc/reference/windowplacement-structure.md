---
title: Struttura WINDOWPLACEMENT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: WINDOWPLACEMENT
dev_langs: C++
helpviewer_keywords: WINDOWPLACEMENT structure [MFC]
ms.assetid: ea7d61f6-eb57-478e-9b08-7c1d07091aa8
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e73065cdf20d68b1da4ba77d1ad555e2bf95e937
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="windowplacement-structure"></a>Struttura WINDOWPLACEMENT
Il `WINDOWPLACEMENT` struttura contiene informazioni sul posizionamento di una finestra sullo schermo**.**  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tagWINDOWPLACEMENT {     /* wndpl */  
    UINT length;  
    UINT flags;  
    UINT showCmd;  
    POINT ptMinPosition;  
    POINT ptMaxPosition;  
    RECT rcNormalPosition;  
} WINDOWPLACEMENT;  
```  
  
#### <a name="parameters"></a>Parametri  
 *length*  
 Specifica la lunghezza, in byte, della struttura**.**  
  
 `flags`  
 Specifica i flag che controllano la posizione della finestra ridotta a icona e il metodo mediante il quale la finestra è ripristinata. Questo membro può essere uno o entrambi i flag seguenti:  
  
- **WPF_SETMINPOSITION** specifica che è possibile specificare le posizioni x e y della finestra ridotta a icona**.** Questo flag deve essere specificato se le coordinate sono impostate nel **ptMinPosition** membro.  
  
- **WPF_RESTORETOMAXIMIZED** specifica che la finestra ripristinata verrà ingrandita, indipendentemente dal fatto è stata ingrandita prima è stata ridotta a icona. Questa impostazione è valida solo alla successiva che finestra viene ripristinata. Non viene modificato il comportamento di ripristino predefinito. Questo flag è valido solo quando il **SW_SHOWMINIMIZED** sia stato specificato per il **showCmd** membro.  
  
 *showCmd*  
 Specifica lo stato di visualizzazione corrente della finestra. Questo membro può essere uno dei valori seguenti:  
  
- **SW_HIDE** nasconde la finestra e passa l'attivazione a un'altra finestra.  
  
- **SW_MINIMIZE** riduce la finestra specificata e attiva la finestra di livello superiore nell'elenco del sistema.  
  
- **SW_RESTORE** attiva e visualizza una finestra. Se la finestra viene ridotta a icona o ingrandita, Windows lo ripristina le dimensioni e la posizione originale (uguale a **SW_SHOWNORMAL**).  
  
- **SW_SHOW** attiva una finestra e visualizzarlo nelle dimensioni correnti e la posizione.  
  
- **SW_SHOWMAXIMIZED** attiva una finestra che viene visualizzata come una finestra ingrandita.  
  
- **SW_SHOWMINIMIZED** attiva una finestra che viene visualizzata come un'icona.  
  
- **SW_SHOWMINNOACTIVE** Visualizza una finestra a icona. La finestra attualmente attiva rimane attiva.  
  
- **SW_SHOWNA** Visualizza una finestra nello stato corrente. La finestra attualmente attiva rimane attiva.  
  
- **SW_SHOWNOACTIVATE** Visualizza una finestra di dimensioni e posizione più recente. La finestra attualmente attiva rimane attiva.  
  
- **SW_SHOWNORMAL** attiva e visualizza una finestra. Se la finestra viene ridotta a icona o ingrandita, Windows lo ripristina le dimensioni e la posizione originale (uguale a **SW_RESTORE**).  
  
 *ptMinPosition*  
 Specifica la posizione dell'angolo superiore sinistro della finestra quando è ridotta a icona la finestra.  
  
 `ptMaxPosition`  
 Specifica la posizione dell'angolo superiore sinistro della finestra quando la finestra è ingrandita.  
  
 *rcNormalPosition*  
 Specifica le coordinate della finestra quando la finestra è nella posizione normale (ripristinata).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::SetWindowPlacement](../../mfc/reference/cwnd-class.md#setwindowplacement)

