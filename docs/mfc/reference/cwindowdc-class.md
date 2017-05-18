---
title: Classe gli oggetti CWindowDC | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWindowDC
- No header/CWindowDC
- No header/CWindowDC::CWindowDC
- No header/CWindowDC::m_hWnd
dev_langs:
- C++
helpviewer_keywords:
- device contexts, window
- screen output classes
- CWindowDC class
ms.assetid: 876a3641-4cde-471c-b0d1-fe58b32af79c
caps.latest.revision: 22
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
ms.openlocfilehash: 8a941e1b6f8a398706498ec5d1ce1bfc9156f115
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cwindowdc-class"></a>Gli oggetti CWindowDC (classe)
Derivata da `CDC`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CWindowDC : public CDC  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWindowDC::CWindowDC](#cwindowdc)|Costruisce un oggetto `CWindowDC`.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWindowDC::m_hWnd](#m_hwnd)|Il `HWND` a cui `CWindowDC` è collegato.|  
  
## <a name="remarks"></a>Note  
 Chiama la funzione Windows [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947\(v=vs.85\).aspx)in fase di costruzione e [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920\(v=vs.85\).aspx) in fase di eliminazione. Ciò significa che un `CWindowDC` oggetto accede all'intera area dello schermo di un [CWnd](../../mfc/reference/cwnd-class.md) (entrambe aree client e).  
  
 Per ulteriori informazioni sull'utilizzo di `CWindowDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CWindowDC`  
  
## <a name="requirements"></a>Requisiti  
 Intestazione: AFXWIN. h  
  
##  <a name="cwindowdc"></a>CWindowDC::CWindowDC  
 Costruisce un `CWindowDC` oggetto a cui accede l'intera area dello schermo (client e non client) del `CWnd` oggetto a cui puntava `pWnd`.  
  
```  
explicit CWindowDC(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Finestra di cui l'area client avranno accesso all'oggetto contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
 Il costruttore chiama la funzione di Windows [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947).  
  
 Un'eccezione (di tipo `CResourceException`) viene generata se Windows `GetWindowDC` chiamata ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows è già allocato tutti i relativi contesti di periferica disponibile. L'applicazione è in competizione per le cinque comuni contesti di visualizzazione disponibili in qualsiasi momento in Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#188;](../../mfc/codesnippet/cpp/cwindowdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>CWindowDC::m_hWnd  
 Il `HWND` di `CWnd` puntatore viene utilizzato per costruire il `CWindowDC` oggetto.  
  
```  
HWND m_hWnd;  
```  
  
### <a name="remarks"></a>Note  
 `m_hWnd`è una variabile di tipo protetta `HWND`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CWindowDC::CWindowDC](#cwindowdc).  
  
## <a name="see-also"></a>Vedere anche  
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDC (classe)](../../mfc/reference/cdc-class.md)

