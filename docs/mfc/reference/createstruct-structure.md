---
title: Struttura CREATESTRUCT | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CREATESTRUCT
dev_langs:
- C++
helpviewer_keywords:
- CREATESTRUCT structure
ms.assetid: 028c7b5e-4fdc-48da-a550-d3e4f9e6cc85
caps.latest.revision: 14
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
ms.openlocfilehash: ec72d4725cb7e5959369b24a6ff7f0e3e9da1ca7
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="createstruct-structure"></a>Struttura CREATESTRUCT
Il `CREATESTRUCT` struttura definisce i parametri di inizializzazione passati alla routine della finestra di un'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tagCREATESTRUCT {  
    LPVOID lpCreateParams;  
    HANDLE hInstance;  
    HMENU hMenu;  
    HWND hwndParent;  
    int cy;  
    int cx;  
    int y;  
    int x;  
    LONG style;  
    LPCSTR lpszName;  
    LPCSTR lpszClass;  
    DWORD dwExStyle;  
} CREATESTRUCT;  
```  
  
#### <a name="parameters"></a>Parametri  
 `lpCreateParams`  
 Punta ai dati da utilizzare per creare la finestra.  
  
 `hInstance`  
 Identifica l'handle dell'istanza di modulo del modulo che contiene la nuova finestra.  
  
 `hMenu`  
 Identifica il menu da utilizzare per la nuova finestra. Se una finestra figlio, contiene l'ID di tipo integer.  
  
 `hwndParent`  
 Identifica la finestra proprietaria della nuova finestra. Questo membro è **NULL** se la finestra nuova finestra di primo livello.  
  
 `cy`  
 Specifica l'altezza della nuova finestra.  
  
 `cx`  
 Specifica la larghezza della nuova finestra.  
  
 `y`  
 Specifica la coordinata y dell'angolo superiore sinistro della nuova finestra. Coordinate si applicano alla finestra padre se la nuova finestra è una finestra figlio. in caso contrario coordinate sono relative all'origine schermata.  
  
 `x`  
 Specifica la coordinata x dell'angolo superiore sinistro della nuova finestra. Coordinate si applicano alla finestra padre se la nuova finestra è una finestra figlio. in caso contrario coordinate sono relative all'origine schermata.  
  
 `style`  
 Specifica la nuova finestra [stile](../../mfc/reference/styles-used-by-mfc.md).  
  
 `lpszName`  
 Punta a una stringa con terminazione null che specifica il nome della nuova finestra.  
  
 `lpszClass`  
 Punta a una stringa con terminazione null che specifica nome di classe della finestra Nuovo Windows (un [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) struttura; per ulteriori informazioni, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]).  
  
 `dwExStyle`  
 Specifica il [stile esteso](../../mfc/reference/extended-window-styles.md) per la nuova finestra.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnCreate](../../mfc/reference/cwnd-class.md#oncreate)



