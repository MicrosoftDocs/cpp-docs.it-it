---
title: Struttura WINDOWPLACEMENT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- WINDOWPLACEMENT
dev_langs:
- C++
helpviewer_keywords:
- WINDOWPLACEMENT structure
ms.assetid: ea7d61f6-eb57-478e-9b08-7c1d07091aa8
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
ms.openlocfilehash: 62cf7003f43d50d5998dd527ae5ad7b10ab95686
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
 Specifica la lunghezza in byte, della struttura**.**  
  
 `flags`  
 Specifica i flag che controllano la posizione della finestra ridotta a icona e il metodo mediante il quale la finestra viene ripristinata. Questo membro può essere uno o entrambi i flag seguenti:  
  
- **WPF_SETMINPOSITION** specifica che è possibile specificare le posizioni x e y della finestra ridotta a icona**.** Questo flag deve essere specificato se le coordinate vengono impostate **ptMinPosition** membro.  
  
- **WPF_RESTORETOMAXIMIZED** specifica che la finestra ripristinata verrà ingrandita, indipendentemente dal fatto se è stato ingrandito prima è stato ridotto a icona. Questa impostazione è valida solo alla successiva che finestra viene ripristinata. Non viene modificato il comportamento di ripristino predefinito. Questo flag è valido solo quando il **SW_SHOWMINIMIZED** valore specificato per il **showCmd** membro.  
  
 *showCmd*  
 Specifica lo stato corrente della visualizzazione della finestra. Questo membro può essere uno dei valori seguenti:  
  
- **SW_HIDE** nasconde la finestra e passa l'attivazione di un'altra finestra.  
  
- **SW_MINIMIZE** riduce al minimo dell'intervallo specificato e attiva la finestra di primo livello nell'elenco del sistema.  
  
- **SW_RESTORE** attiva e viene visualizzata una finestra. Se la finestra viene ridotta a icona o ingrandita, Windows esegue il ripristino per le dimensioni e la posizione originale (uguale a **SW_SHOWNORMAL**).  
  
- **SW_SHOW** attiva una finestra e lo visualizza nelle dimensioni correnti e la posizione.  
  
- **SW_SHOWMAXIMIZED** attiva una finestra e lo visualizza come una finestra ingrandita.  
  
- **SW_SHOWMINIMIZED** attiva una finestra che viene visualizzata come un'icona.  
  
- **SW_SHOWMINNOACTIVE** Visualizza una finestra a icona. La finestra attualmente attiva rimane attiva.  
  
- **SW_SHOWNA** Visualizza una finestra nello stato corrente. La finestra attualmente attiva rimane attiva.  
  
- **SW_SHOWNOACTIVATE** Visualizza una finestra le dimensioni e la posizione più recente. La finestra attualmente attiva rimane attiva.  
  
- **SW_SHOWNORMAL** attiva e viene visualizzata una finestra. Se la finestra viene ridotta a icona o ingrandita, Windows esegue il ripristino per le dimensioni e la posizione originale (uguale a **SW_RESTORE**).  
  
 *ptMinPosition*  
 Specifica la posizione dell'angolo superiore sinistro della finestra quando la finestra è ridotta a icona.  
  
 `ptMaxPosition`  
 Specifica la posizione dell'angolo superiore sinistro della finestra quando la finestra viene ingrandita.  
  
 *rcNormalPosition*  
 Specifica le coordinate della finestra quando la finestra è nella posizione normale (ripristinata).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::SetWindowPlacement](../../mfc/reference/cwnd-class.md#setwindowplacement)


