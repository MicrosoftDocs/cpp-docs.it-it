---
title: Classe CWindowDC
ms.date: 11/04/2016
f1_keywords:
- CWindowDC
- AFXWIN/CWindowDC
- AFXWIN/CWindowDC::CWindowDC
- AFXWIN/CWindowDC::m_hWnd
helpviewer_keywords:
- CWindowDC [MFC], CWindowDC
- CWindowDC [MFC], m_hWnd
ms.assetid: 876a3641-4cde-471c-b0d1-fe58b32af79c
ms.openlocfilehash: 55a9ccfc496c95c9e7410cbd5645135ee555ff26
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62323385"
---
# <a name="cwindowdc-class"></a>Classe CWindowDC

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
|[CWindowDC::m_hWnd](#m_hwnd)|L'oggetto HWND per cui questo `CWindowDC` è collegato.|

## <a name="remarks"></a>Note

Chiama la funzione di Windows [GetWindowDC](/windows/desktop/api/winuser/nf-winuser-getwindowdc)in fase di costruzione e [ReleaseDC](/windows/desktop/api/winuser/nf-winuser-releasedc) in fase di eliminazione. Ciò significa che un `CWindowDC` oggetto accede all'intera area dello schermo di un [CWnd](../../mfc/reference/cwnd-class.md) (aree client e non client).

Per altre informazioni sull'uso `CWindowDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CWindowDC`

## <a name="requirements"></a>Requisiti

Intestazione: AFXWIN. h

##  <a name="cwindowdc"></a>  CWindowDC::CWindowDC

Costruisce un `CWindowDC` oggetti cui accede l'intera area dello schermo (client e non client) del `CWnd` oggetto a cui punta *pWnd*.

```
explicit CWindowDC(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Finestra di cui l'area client accederà l'oggetto di contesto di dispositivo.

### <a name="remarks"></a>Note

Il costruttore chiama la funzione di Windows [GetWindowDC](/windows/desktop/api/winuser/nf-winuser-getwindowdc).

Un'eccezione (di tipo `CResourceException`) viene generata se la Windows `GetWindowDC` chiamata ha esito negativo. Un contesto di dispositivo potrebbe non essere disponibile se Windows è già allocato tutti i relativi contesti di dispositivo disponibili. L'applicazione è in competizione per le cinque comuni contesti di visualizzazione disponibili in qualsiasi momento in Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#188](../../mfc/codesnippet/cpp/cwindowdc-class_1.cpp)]

##  <a name="m_hwnd"></a>  CWindowDC::m_hWnd

L'oggetto HWND della `CWnd` puntatore viene usato per costruire il `CWindowDC` oggetto.

```
HWND m_hWnd;
```

### <a name="remarks"></a>Note

`m_hWnd` è una variabile di tipo HWND protetta.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CWindowDC::CWindowDC](#cwindowdc).

## <a name="see-also"></a>Vedere anche

[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)
