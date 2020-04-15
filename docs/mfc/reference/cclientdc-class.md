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
ms.openlocfilehash: abe8a3220fd37a0375fcf37504c715edf4c6962e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81352301"
---
# <a name="cclientdc-class"></a>Classe CClientDC

Si occupa di chiamare le funzioni di Windows [GetDC](/windows/win32/api/winuser/nf-winuser-getdc) in fase di costruzione e [ReleaseDC](/windows/win32/api/winuser/nf-winuser-releasedc) in fase di distruzione.

## <a name="syntax"></a>Sintassi

```
class CClientDC : public CDC
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CClientDC::CClientDC](#cclientdc)|Costruisce un `CClientDC` oggetto connesso `CWnd`all'oggetto .|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CClientDC::m_hWnd](#m_hwnd)|HWND della finestra per `CClientDC` la quale è valido.|

## <a name="remarks"></a>Osservazioni

Ciò significa che il `CClientDC` contesto di dispositivo associato a un oggetto è l'area client di una finestra.

Per ulteriori `CClientDC`informazioni su , vedere [Contesti di periferica](../../mfc/device-contexts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CClientDC`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cclientdccclientdc"></a><a name="cclientdc"></a>CClientDC::CClientDC

Costruisce un `CClientDC` oggetto che accede all'area client del [CWnd](../../mfc/reference/cwnd-class.md) a cui punta *pWnd*.

```
explicit CClientDC(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Finestra a cui accederà l'area client a cui accederà l'oggetto contesto di dispositivo.

### <a name="remarks"></a>Osservazioni

Il costruttore chiama la funzione Windows [GetDC](/windows/win32/api/winuser/nf-winuser-getdc).

Se la chiamata `CResourceException`a Windows `GetDC` ha esito negativo, viene generata un'eccezione (di tipo ). Un contesto di dispositivo potrebbe non essere disponibile se Windows ha già allocato tutti i contesti di dispositivo disponibili. L'applicazione compete per i cinque contesti di visualizzazione comuni disponibili in un determinato momento in Windows.Your application competes for the five common display contexts available at any time under Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#42](../../mfc/codesnippet/cpp/cclientdc-class_1.cpp)]

## <a name="cclientdcm_hwnd"></a><a name="m_hwnd"></a>CClientDC::m_hWnd

Oggetto `HWND` del `CWnd` puntatore utilizzato `CClientDC` per costruire l'oggetto.

```
HWND m_hWnd;
```

### <a name="remarks"></a>Osservazioni

*m_hWnd* è una variabile protetta.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CClientDC::CClientDC](#cclientdc).

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)
