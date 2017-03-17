---
title: CClientDC (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CClientDC
- AFXWIN/CClientDC
- AFXWIN/CClientDC::CClientDC
- AFXWIN/CClientDC::m_hWnd
dev_langs:
- C++
helpviewer_keywords:
- CClientDC class
- device contexts, client area
- client-area device context
- CDC class, device contexts for client areas
ms.assetid: 8a871d6b-06f8-496e-9fa3-9a5780848369
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
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 619bed4d31994bde8464ad710e9f050d6ba0696a
ms.lasthandoff: 02/24/2017

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
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CClientDC::m_hWnd](#m_hwnd)|Il `HWND` della finestra per la quale il `CClientDC` è valido.|  
  
## <a name="remarks"></a>Note  
 Ciò significa che il contesto di dispositivo associato a un `CClientDC` oggetto rappresenta l'area client di una finestra.  
  
 Per ulteriori informazioni su `CClientDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CClientDC`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cclientdc"></a>CClientDC::CClientDC  
 Costruisce un `CClientDC` oggetto a cui accede l'area client del [CWnd](../../mfc/reference/cwnd-class.md) a cui puntava `pWnd`.  
  
```  
explicit CClientDC(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Finestra di cui l'oggetto di contesto di dispositivo accederà l'area client.  
  
### <a name="remarks"></a>Note  
 Il costruttore chiama la funzione di Windows [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871).  
  
 Un'eccezione (di tipo `CResourceException`) viene generata se Windows `GetDC` chiamata ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows è già allocato tutti i relativi contesti di periferica disponibile. L'applicazione è in competizione per le cinque comuni contesti di visualizzazione disponibili in qualsiasi momento in Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#42;](../../mfc/codesnippet/cpp/cclientdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>CClientDC::m_hWnd  
 Il `HWND` di `CWnd` puntatore utilizzato per costruire il `CClientDC` oggetto.  
  
```  
HWND m_hWnd;  
```  
  
### <a name="remarks"></a>Note  
 `m_hWnd`è una variabile protetta.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CClientDC::CClientDC](#cclientdc).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDC (classe)](../../mfc/reference/cdc-class.md)

