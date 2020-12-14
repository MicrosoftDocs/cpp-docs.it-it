---
description: 'Altre informazioni su: classe CPaintDC'
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
ms.openlocfilehash: cb8f3b81615390ab6af8e9a244a95f91a3b3f96c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345212"
---
# <a name="cpaintdc-class"></a>Classe CPaintDC

Classe del contesto di dispositivo derivata da [CDC](../../mfc/reference/cdc-class.md).

## <a name="syntax"></a>Sintassi

```
class CPaintDC : public CDC
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CPaintDC:: CPaintDC](#cpaintdc)|Costruisce un oggetto `CPaintDC` connesso all'oggetto [CWnd](../../mfc/reference/cwnd-class.md)specificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CPaintDC:: m_ps](#m_ps)|Contiene l'oggetto [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) utilizzato per disegnare l'area client.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CPaintDC:: m_hWnd](#m_hwnd)|HWND a cui `CPaintDC` è associato questo oggetto.|

## <a name="remarks"></a>Commenti

Esegue [CWnd:: BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint) in fase di costruzione e [CWnd:: EndPaint](../../mfc/reference/cwnd-class.md#endpaint) in fase di eliminazione.

Un `CPaintDC` oggetto può essere utilizzato solo quando si risponde a un messaggio di [WM_PAINT](/windows/win32/gdi/wm-paint) , in genere nella `OnPaint` funzione membro del gestore del messaggio.

Per altre informazioni sull'uso di `CPaintDC` , vedere [contesti di dispositivo](../../mfc/device-contexts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CPaintDC`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cpaintdccpaintdc"></a><a name="cpaintdc"></a> CPaintDC:: CPaintDC

Costruisce un `CPaintDC` oggetto, prepara la finestra dell'applicazione per il disegno e archivia la struttura [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) nella variabile membro [m_ps](#m_ps) .

```
explicit CPaintDC(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta all' `CWnd` oggetto a cui appartiene l' `CPaintDC` oggetto.

### <a name="remarks"></a>Commenti

Viene generata un'eccezione (di tipo `CResourceException` ) se la chiamata di Windows [GetDC](/windows/win32/api/winuser/nf-winuser-getdc) ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows ha già allocato tutti i contesti di dispositivo disponibili. L'applicazione compete per i cinque contesti di visualizzazione comuni disponibili in un determinato momento sotto Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#97](../../mfc/codesnippet/cpp/cpaintdc-class_1.cpp)]

## <a name="cpaintdcm_hwnd"></a><a name="m_hwnd"></a> CPaintDC:: m_hWnd

`HWND`Oggetto a cui `CPaintDC` è associato questo oggetto.

```
HWND m_hWnd;
```

### <a name="remarks"></a>Commenti

*m_hWnd* è una variabile protetta di tipo HWND.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#98](../../mfc/codesnippet/cpp/cpaintdc-class_2.cpp)]

## <a name="cpaintdcm_ps"></a><a name="m_ps"></a> CPaintDC:: m_ps

`m_ps` variabile membro pubblico di tipo [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct).

```
PAINTSTRUCT m_ps;
```

### <a name="remarks"></a>Commenti

Si tratta dell'oggetto `PAINTSTRUCT` che viene passato a e compilato da [CWnd:: BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint).

`PAINTSTRUCT`Contiene informazioni utilizzate dall'applicazione per disegnare l'area client della finestra associata a un `CPaintDC` oggetto.

Si noti che è possibile accedere all'handle del contesto del dispositivo tramite `PAINTSTRUCT` . Tuttavia, è possibile accedere all'handle più direttamente tramite la `m_hDC` variabile membro che `CPaintDC` eredita da CDC.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPaintDC:: m_hWnd](#m_hwnd).

## <a name="see-also"></a>Vedi anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[CDC (classe)](../../mfc/reference/cdc-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
