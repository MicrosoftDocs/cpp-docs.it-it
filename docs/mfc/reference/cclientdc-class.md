---
title: Classe CClientDC | Microsoft Docs
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
ms.openlocfilehash: 3aa255552156fe0bbcb671f39afdcb966e7157ea
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46422181"
---
# <a name="cclientdc-class"></a>CClientDC (classe)

Si occupa di chiamare le funzioni di Windows [GetDC](/windows/desktop/api/winuser/nf-winuser-getdc) in fase di costruzione e [ReleaseDC](/windows/desktop/api/winuser/nf-winuser-releasedc) in fase di eliminazione.

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
|[CClientDC::m_hWnd](#m_hwnd)|L'oggetto HWND della finestra per il quale il `CClientDC` è valido.|

## <a name="remarks"></a>Note

Ciò significa che il contesto di dispositivo associato un `CClientDC` oggetto rappresenta l'area client di una finestra.

Per ulteriori informazioni sul `CClientDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CClientDC`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cclientdc"></a>  CClientDC::CClientDC

Costruisce un `CClientDC` oggetti cui accede l'area client del [CWnd](../../mfc/reference/cwnd-class.md) a cui punta *pWnd*.

```
explicit CClientDC(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Finestra di cui l'area client accederà l'oggetto di contesto di dispositivo.

### <a name="remarks"></a>Note

Il costruttore chiama la funzione di Windows [GetDC](/windows/desktop/api/winuser/nf-winuser-getdc).

Un'eccezione (di tipo `CResourceException`) viene generata se la Windows `GetDC` chiamata ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows è già allocato tutti i relativi contesti di dispositivo disponibili. L'applicazione è in competizione per le cinque comuni contesti di visualizzazione disponibili in qualsiasi momento in Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#42](../../mfc/codesnippet/cpp/cclientdc-class_1.cpp)]

##  <a name="m_hwnd"></a>  CClientDC::m_hWnd

Il `HWND` del `CWnd` puntatore utilizzato per costruire il `CClientDC` oggetto.

```
HWND m_hWnd;
```

### <a name="remarks"></a>Note

*m_hWnd* è una variabile protetta.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CClientDC::CClientDC](#cclientdc).

## <a name="see-also"></a>Vedere anche

[Esempio MFC MDI](../../visual-cpp-samples.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)
