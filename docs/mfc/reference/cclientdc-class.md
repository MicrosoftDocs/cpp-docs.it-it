---
title: Classe CClientDC
ms.date: 11/04/2016
f1_keywords:
- CClientDC
- AFXWIN/CClientDC
- AFXWIN/CClientDC::CClientDC
- AFXWIN/CClientDC::m_hWnd
helpviewer_keywords:
- CClientDC [MFC], CClientDC
- CClientDC [MFC], m_hWnd
ms.assetid: 8a871d6b-06f8-496e-9fa3-9a5780848369
ms.openlocfilehash: 46428740d052c70218d4443395777428cdf3c3b0
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507330"
---
# <a name="cclientdc-class"></a>Classe CClientDC

Si occupa della chiamata delle funzioni di Windows [GetDC](/windows/win32/api/winuser/nf-winuser-getdc) in fase di costruzione e [ReleaseDC](/windows/win32/api/winuser/nf-winuser-releasedc) in fase di eliminazione.

## <a name="syntax"></a>Sintassi

```
class CClientDC : public CDC
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CClientDC::CClientDC](#cclientdc)|Costruisce un `CClientDC` oggetto connesso `CWnd`a.|

### <a name="protected-data-members"></a>Membri dati protetti

|Name|Descrizione|
|----------|-----------------|
|[CClientDC::m_hWnd](#m_hwnd)|HWND della finestra per cui questo `CClientDC` oggetto è valido.|

## <a name="remarks"></a>Note

Ciò significa che il contesto di dispositivo associato a `CClientDC` un oggetto è l'area client di una finestra.

Per altre informazioni su `CClientDC`, vedere contesti di [dispositivo](../../mfc/device-contexts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CClientDC`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cclientdc"></a>CClientDC:: CClientDC

Costruisce un `CClientDC` oggetto che accede all'area client di [CWnd](../../mfc/reference/cwnd-class.md) a cui punta *pWnd*.

```
explicit CClientDC(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Finestra di cui l'oggetto di contesto del dispositivo accederà all'area client.

### <a name="remarks"></a>Note

Il costruttore chiama la funzione [GetDC](/windows/win32/api/winuser/nf-winuser-getdc)di Windows.

Se la chiamata di Windows `CResourceException` `GetDC` ha esito negativo, viene generata un'eccezione (di tipo). Un contesto di dispositivo potrebbe non essere disponibile se Windows ha già allocato tutti i contesti di dispositivo disponibili. L'applicazione compete per i cinque contesti di visualizzazione comuni disponibili in un determinato momento sotto Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#42](../../mfc/codesnippet/cpp/cclientdc-class_1.cpp)]

##  <a name="m_hwnd"></a>  CClientDC::m_hWnd

Del puntatore utilizzato per costruire l' `CClientDC` oggetto. `CWnd` `HWND`

```
HWND m_hWnd;
```

### <a name="remarks"></a>Note

*m_hWnd* è una variabile protetta.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CClientDC:: CClientDC](#cclientdc).

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)
