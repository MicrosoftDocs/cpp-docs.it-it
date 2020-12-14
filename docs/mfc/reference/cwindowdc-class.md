---
description: 'Altre informazioni su: classe CWindowDC'
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
ms.openlocfilehash: 1fc36614f5e6ded32a47146771991c3ab06998eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344926"
---
# <a name="cwindowdc-class"></a>Classe CWindowDC

Derivata da `CDC`.

## <a name="syntax"></a>Sintassi

```
class CWindowDC : public CDC
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CWindowDC:: CWindowDC](#cwindowdc)|Costruisce un oggetto `CWindowDC`.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CWindowDC:: m_hWnd](#m_hwnd)|HWND a cui `CWindowDC` è associato questo oggetto.|

## <a name="remarks"></a>Commenti

Chiama la funzione di Windows [GetWindowDC](/windows/win32/api/winuser/nf-winuser-getwindowdc)in fase di costruzione e [ReleaseDC](/windows/win32/api/winuser/nf-winuser-releasedc) in fase di eliminazione. Ciò significa che un `CWindowDC` oggetto accede all'intera area dello schermo di un [CWnd](../../mfc/reference/cwnd-class.md) (aree client e non client).

Per altre informazioni sull'uso di `CWindowDC` , vedere [contesti di dispositivo](../../mfc/device-contexts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CWindowDC`

## <a name="requirements"></a>Requisiti

Intestazione: afxwin.h

## <a name="cwindowdccwindowdc"></a><a name="cwindowdc"></a> CWindowDC:: CWindowDC

Costruisce un `CWindowDC` oggetto che accede all'intera area dello schermo, sia client che non client, dell' `CWnd` oggetto a cui punta *pWnd*.

```
explicit CWindowDC(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Finestra la cui area client accederà all'oggetto del contesto del dispositivo.

### <a name="remarks"></a>Commenti

Il costruttore chiama la funzione [GetWindowDC](/windows/win32/api/winuser/nf-winuser-getwindowdc)di Windows.

`CResourceException`Se la chiamata di Windows ha esito negativo, viene generata un'eccezione (di tipo) `GetWindowDC` . Un contesto di dispositivo potrebbe non essere disponibile se Windows ha già allocato tutti i contesti di dispositivo disponibili. L'applicazione compete per i cinque contesti di visualizzazione comuni disponibili in un determinato momento sotto Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#188](../../mfc/codesnippet/cpp/cwindowdc-class_1.cpp)]

## <a name="cwindowdcm_hwnd"></a><a name="m_hwnd"></a> CWindowDC:: m_hWnd

L'HWND del `CWnd` puntatore viene usato per costruire l' `CWindowDC` oggetto.

```
HWND m_hWnd;
```

### <a name="remarks"></a>Commenti

`m_hWnd` è una variabile protetta di tipo HWND.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWindowDC:: CWindowDC](#cwindowdc).

## <a name="see-also"></a>Vedi anche

[CDC (classe)](../../mfc/reference/cdc-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CDC (classe)](../../mfc/reference/cdc-class.md)
