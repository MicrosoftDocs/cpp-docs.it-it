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
ms.openlocfilehash: 89a822280ddebca942016f9a3a334a7128d8456a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371986"
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
|[CWindowDC::m_hWnd](#m_hwnd)|HWND a cui `CWindowDC` è collegato.|

## <a name="remarks"></a>Osservazioni

Chiama la funzione Windows [GetWindowDC](/windows/win32/api/winuser/nf-winuser-getwindowdc)in fase di costruzione e [ReleaseDC](/windows/win32/api/winuser/nf-winuser-releasedc) in fase di distruzione. Ciò significa `CWindowDC` che un oggetto accede all'intera area dello schermo di un [CWnd](../../mfc/reference/cwnd-class.md) (aree client e non client).

Per ulteriori informazioni `CWindowDC`sull'utilizzo di , vedere [Contesti di](../../mfc/device-contexts.md)periferica .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDC](../../mfc/reference/cdc-class.md)

`CWindowDC`

## <a name="requirements"></a>Requisiti

Intestazione: afxwin.h

## <a name="cwindowdccwindowdc"></a><a name="cwindowdc"></a>CWindowDC::CWindowDC

Costruisce un `CWindowDC` oggetto che accede all'intera area dello schermo (sia client che non client) dell'oggetto `CWnd` a cui punta *pWnd*.

```
explicit CWindowDC(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Finestra a cui accederà l'area client a cui accederà l'oggetto contesto di dispositivo.

### <a name="remarks"></a>Osservazioni

Il costruttore chiama la funzione Windows [GetWindowDC](/windows/win32/api/winuser/nf-winuser-getwindowdc).

Se la chiamata `CResourceException`a Windows `GetWindowDC` ha esito negativo, viene generata un'eccezione (di tipo ). Un contesto di dispositivo potrebbe non essere disponibile se Windows ha già allocato tutti i contesti di dispositivo disponibili. L'applicazione compete per i cinque contesti di visualizzazione comuni disponibili in un determinato momento in Windows.Your application competes for the five common display contexts available at any time under Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#188](../../mfc/codesnippet/cpp/cwindowdc-class_1.cpp)]

## <a name="cwindowdcm_hwnd"></a><a name="m_hwnd"></a>CWindowDC::m_hWnd

HWND del `CWnd` puntatore viene utilizzato `CWindowDC` per costruire l'oggetto.

```
HWND m_hWnd;
```

### <a name="remarks"></a>Osservazioni

`m_hWnd`è una variabile protetta di tipo HWND.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWindowDC::CWindowDC](#cwindowdc).

## <a name="see-also"></a>Vedere anche

[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)
