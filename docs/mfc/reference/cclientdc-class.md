---
title: CClientDC (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CClientDC
- AFXWIN/CClientDC
- AFXWIN/CClientDC::CClientDC
- AFXWIN/CClientDC::m_hWnd
dev_langs:
- C++
helpviewer_keywords:
- CClientDC [MFC], CClientDC
- CClientDC [MFC], m_hWnd
ms.assetid: 8a871d6b-06f8-496e-9fa3-9a5780848369
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4c51e252157b90423b35152c10a85f972feace72
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cclientdc-class"></a>CClientDC (classe)
Si occupa di chiamare le funzioni Windows [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871) in fase di costruzione e [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920) in fase di eliminazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CClientDC : public CDC  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CClientDC::CClientDC](#cclientdc)|Costruisce un `CClientDC` oggetto connesso il `CWnd`.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CClientDC::m_hWnd](#m_hwnd)|Il `HWND` della finestra per la quale il `CClientDC` è valido.|  
  
## <a name="remarks"></a>Note  
 Ciò significa che il contesto di dispositivo associato un `CClientDC` oggetto rappresenta l'area client di una finestra.  
  
 Per ulteriori informazioni su `CClientDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CClientDC`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cclientdc"></a>  CClientDC::CClientDC  
 Costruisce un `CClientDC` oggetto a cui accede l'area client del [CWnd](../../mfc/reference/cwnd-class.md) a cui puntava `pWnd`.  
  
```  
explicit CClientDC(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Finestra cui area client accederà l'oggetto di contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
 Il costruttore chiama la funzione Windows [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871).  
  
 Un'eccezione (di tipo `CResourceException`) viene generata se Windows `GetDC` chiamata ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows è già allocato tutti i relativi contesti di dispositivo disponibile. L'applicazione in competizione per le cinque comuni contesti di visualizzazione disponibili in qualsiasi momento in Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#42](../../mfc/codesnippet/cpp/cclientdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>  CClientDC::m_hWnd  
 Il `HWND` del `CWnd` puntatore utilizzato per costruire il `CClientDC` oggetto.  
  
```  
HWND m_hWnd;  
```  
  
### <a name="remarks"></a>Note  
 `m_hWnd` è una variabile protetta.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CClientDC::CClientDC](#cclientdc).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDC](../../mfc/reference/cdc-class.md)
