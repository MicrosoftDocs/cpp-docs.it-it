---
title: Classe CPaintDC
ms.date: 11/04/2016
f1_keywords:
- CPaintDC
- AFXWIN/CPaintDC
- AFXWIN/CPaintDC::CPaintDC
- AFXWIN/CPaintDC::m_ps
- AFXWIN/CPaintDC::m_hWnd
helpviewer_keywords:
- CPaintDC [MFC], CPaintDC
- CPaintDC [MFC], m_ps
- CPaintDC [MFC], m_hWnd
ms.assetid: 7e245baa-bf9b-403e-a637-7218adf28fab
ms.openlocfilehash: 55342b03454a6dba07bc10ea5f0464c34e0e8db3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374772"
---
# <a name="cpaintdc-class"></a>Classe CPaintDC

Una classe del contesto di dispositivo derivata da [CDC](../../mfc/reference/cdc-class.md).

## <a name="syntax"></a>Sintassi

```
class CPaintDC : public CDC
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPaintDC::CPaintDC](#cpaintdc)|Costruisce un `CPaintDC` oggetto connesso all'oggetto [CWnd](../../mfc/reference/cwnd-class.md)specificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPaintDC::m_ps](#m_ps)|Contiene il [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) utilizzato per disegnare l'area client.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CPaintDC::m_hWnd](#m_hwnd)|HWND a cui `CPaintDC` è associato questo oggetto.|

## <a name="remarks"></a>Osservazioni

Esegue un [CWnd::BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint) in fase di costruzione e [CWnd::EndPaint](../../mfc/reference/cwnd-class.md#endpaint) in fase di distruzione.

Un `CPaintDC` oggetto può essere utilizzato solo quando si `OnPaint` risponde a un messaggio [di WM_PAINT,](/windows/win32/gdi/wm-paint) in genere nella funzione membro del gestore messaggi.

Per ulteriori informazioni `CPaintDC`sull'utilizzo di , vedere [Contesti di](../../mfc/device-contexts.md)periferica .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CPaintDC`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cpaintdccpaintdc"></a><a name="cpaintdc"></a>CPaintDC::CPaintDC

Costruisce un `CPaintDC` oggetto, prepara la finestra dell'applicazione per il disegno e memorizza la struttura [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) nella variabile membro [m_ps.](#m_ps)

```
explicit CPaintDC(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Punta all'oggetto `CWnd` a `CPaintDC` cui appartiene l'oggetto.

### <a name="remarks"></a>Osservazioni

Se la chiamata `CResourceException` [GetDC](/windows/win32/api/winuser/nf-winuser-getdc) di Windows ha esito negativo, viene generata un'eccezione (di tipo ). Un contesto di dispositivo potrebbe non essere disponibile se Windows ha già allocato tutti i contesti di dispositivo disponibili. L'applicazione compete per i cinque contesti di visualizzazione comuni disponibili in un determinato momento in Windows.Your application competes for the five common display contexts available at any time under Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#97](../../mfc/codesnippet/cpp/cpaintdc-class_1.cpp)]

## <a name="cpaintdcm_hwnd"></a><a name="m_hwnd"></a>CPaintDC::m_hWnd

Oggetto `HWND` a `CPaintDC` cui è associato l'oggetto.

```
HWND m_hWnd;
```

### <a name="remarks"></a>Osservazioni

*m_hWnd* è una variabile protetta di tipo HWND.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#98](../../mfc/codesnippet/cpp/cpaintdc-class_2.cpp)]

## <a name="cpaintdcm_ps"></a><a name="m_ps"></a>CPaintDC::m_ps

`m_ps`è una variabile membro pubblica di tipo [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct).

```
PAINTSTRUCT m_ps;
```

### <a name="remarks"></a>Osservazioni

È l'oggetto `PAINTSTRUCT` che viene passato e compilato da [CWnd::BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint).

Contiene `PAINTSTRUCT` informazioni utilizzate dall'applicazione per disegnare l'area `CPaintDC` client della finestra associata a un oggetto .

Si noti che è possibile accedere `PAINTSTRUCT`all'handle del contesto di dispositivo tramite l'oggetto . Tuttavia, è possibile accedere all'handle in modo più diretto tramite la `m_hDC` variabile membro che `CPaintDC` eredita da CDC.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPaintDC::m_hWnd](#m_hwnd).

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
