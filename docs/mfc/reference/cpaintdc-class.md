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
ms.openlocfilehash: d587f1cfa6ec38dd564da196da8130bffac11302
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69503144"
---
# <a name="cpaintdc-class"></a>Classe CPaintDC

Classe del contesto di dispositivo derivata da [CDC](../../mfc/reference/cdc-class.md).

## <a name="syntax"></a>Sintassi

```
class CPaintDC : public CDC
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPaintDC::CPaintDC](#cpaintdc)|Costruisce un `CPaintDC` oggetto connesso all'oggetto [CWnd](../../mfc/reference/cwnd-class.md)specificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CPaintDC::m_ps](#m_ps)|Contiene l'oggetto [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) utilizzato per disegnare l'area client.|

### <a name="protected-data-members"></a>Membri dati protetti

|Name|Descrizione|
|----------|-----------------|
|[CPaintDC::m_hWnd](#m_hwnd)|HWND a cui è associato `CPaintDC` questo oggetto.|

## <a name="remarks"></a>Note

Esegue [CWnd:: BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint) in fase di costruzione e [CWnd:: EndPaint](../../mfc/reference/cwnd-class.md#endpaint) in fase di eliminazione.

Un `CPaintDC` oggetto può essere utilizzato solo quando si risponde a un messaggio [WM_PAINT](/windows/win32/gdi/wm-paint) `OnPaint` , in genere nella funzione membro del gestore messaggi.

Per altre informazioni sull'uso `CPaintDC`di, vedere contesti di [dispositivo](../../mfc/device-contexts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CPaintDC`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cpaintdc"></a>CPaintDC:: CPaintDC

Costruisce un `CPaintDC` oggetto, prepara la finestra dell'applicazione per il disegno e archivia la struttura [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) nella variabile membro [m_ps](#m_ps) .

```
explicit CPaintDC(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Punta all' `CWnd` oggetto a cui appartiene l' `CPaintDC` oggetto.

### <a name="remarks"></a>Note

Viene generata un'eccezione ( `CResourceException`di tipo) se la chiamata di Windows [GetDC](/windows/win32/api/winuser/nf-winuser-getdc) ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows ha già allocato tutti i contesti di dispositivo disponibili. L'applicazione compete per i cinque contesti di visualizzazione comuni disponibili in un determinato momento sotto Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#97](../../mfc/codesnippet/cpp/cpaintdc-class_1.cpp)]

##  <a name="m_hwnd"></a>  CPaintDC::m_hWnd

Oggetto a cui è `CPaintDC` associato questo oggetto. `HWND`

```
HWND m_hWnd;
```

### <a name="remarks"></a>Note

*m_hWnd* è una variabile protetta di tipo HWND.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#98](../../mfc/codesnippet/cpp/cpaintdc-class_2.cpp)]

##  <a name="m_ps"></a>CPaintDC:: m_ps

`m_ps`variabile membro pubblico di tipo [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct).

```
PAINTSTRUCT m_ps;
```

### <a name="remarks"></a>Note

Si tratta dell' `PAINTSTRUCT` oggetto che viene passato a e compilato da [CWnd:: BeginPaint](../../mfc/reference/cwnd-class.md#beginpaint).

Contiene informazioni utilizzate dall'applicazione per disegnare l'area client della finestra associata a un `CPaintDC` oggetto. `PAINTSTRUCT`

Si noti che è possibile accedere all'handle del contesto del dispositivo `PAINTSTRUCT`tramite. Tuttavia, è possibile accedere all'handle più direttamente tramite la `m_hDC` variabile membro che `CPaintDC` eredita da CDC.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPaintDC:: m_hWnd](#m_hwnd).

## <a name="see-also"></a>Vedere anche

[MDI di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
