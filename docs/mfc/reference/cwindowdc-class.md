---
title: Classe gli oggetti CWindowDC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CWindowDC
- AFXWIN/CWindowDC
- AFXWIN/CWindowDC::CWindowDC
- AFXWIN/CWindowDC::m_hWnd
dev_langs:
- C++
helpviewer_keywords:
- CWindowDC [MFC], CWindowDC
- CWindowDC [MFC], m_hWnd
ms.assetid: 876a3641-4cde-471c-b0d1-fe58b32af79c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7867f35a66abf0f5a33ecd411b81111e84e3800f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33368482"
---
# <a name="cwindowdc-class"></a>Gli oggetti CWindowDC classe
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
  
|nome|Descrizione|  
|----------|-----------------|  
|[CWindowDC::m_hWnd](#m_hwnd)|Il `HWND` ai quali questo `CWindowDC` è collegato.|  
  
## <a name="remarks"></a>Note  
 Chiama la funzione Windows [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947\(v=vs.85\).aspx)in fase di costruzione e [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920\(v=vs.85\).aspx) in fase di eliminazione. Ciò significa che un `CWindowDC` oggetto accede all'intera area dello schermo di un [CWnd](../../mfc/reference/cwnd-class.md) (entrambe aree client e).  
  
 Per ulteriori informazioni sull'utilizzo `CWindowDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CWindowDC`  
  
## <a name="requirements"></a>Requisiti  
 Intestazione: AFXWIN. h  
  
##  <a name="cwindowdc"></a>  CWindowDC::CWindowDC  
 Costruisce un `CWindowDC` oggetto a cui accede l'intera area dello schermo (client e non client) del `CWnd` oggetto a cui puntava `pWnd`.  
  
```  
explicit CWindowDC(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Finestra cui area client avranno accesso all'oggetto contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
 Il costruttore chiama la funzione Windows [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947).  
  
 Un'eccezione (di tipo `CResourceException`) viene generata se Windows `GetWindowDC` chiamata ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows è già allocato tutti i relativi contesti di dispositivo disponibile. L'applicazione in competizione per le cinque comuni contesti di visualizzazione disponibili in qualsiasi momento in Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#188](../../mfc/codesnippet/cpp/cwindowdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>  CWindowDC::m_hWnd  
 Il `HWND` del `CWnd` puntatore viene utilizzato per costruire il `CWindowDC` oggetto.  
  
```  
HWND m_hWnd;  
```  
  
### <a name="remarks"></a>Note  
 `m_hWnd` è una variabile di tipo protetta `HWND`.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CWindowDC::CWindowDC](#cwindowdc).  
  
## <a name="see-also"></a>Vedere anche  
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDC](../../mfc/reference/cdc-class.md)
