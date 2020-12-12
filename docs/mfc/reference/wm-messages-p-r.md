---
description: 'Altre informazioni su: messaggi di WM_: P-R'
title: 'Messaggi WM_: P - R'
ms.date: 11/04/2016
f1_keywords:
- ON_WM_RBUTTONUP
- ON_WM_PALETTECHANGED
- ON_WM_RBUTTONDBLCLK
- ON_WM_QUERYENDSESSION
- ON_WM_PARENTNOTIFY
- ON_WM_PALETTEISCHANGING
- ON_WM_QUERYOPEN
- ON_WM_PAINT
- ON_WM_QUERYNEWPALETTE
- ON_WM_RBUTTONDOWN
- ON_WM_RENDERALLFORMATS
- ON_WM_PAINTCLIPBOARD
- ON_WM_RENDERFORMAT
- ON_WM_QUERYDRAGICON
helpviewer_keywords:
- ON_WM_RENDERFORMAT [MFC]
- ON_WM_QUERYOPEN [MFC]
- ON_WM_RBUTTONDOWN [MFC]
- ON_WM_PAINTCLIPBOARD [MFC]
- ON_WM_QUERYNEWPALETTE [MFC]
- ON_WM_RBUTTONUP [MFC]
- ON_WM_PARENTNOTIFY [MFC]
- ON_WM_RBUTTONDBLCLK [MFC]
- ON_WM_PALETTECHANGED [MFC]
- ON_WM_PALETTEISCHANGING [MFC]
- ON_WM_QUERYDRAGICON [MFC]
- ON_WM_PAINT [MFC]
- ON_WM_RENDERALLFORMATS [MFC]
- ON_WM_QUERYENDSESSION [MFC]
- WM_ messages
ms.assetid: f46962e5-8329-4f1f-9b4d-fdad2a5ce1f8
ms.openlocfilehash: d1e3ad4ca65bcf9f4b1b0901a6fe1dbf441595e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218303"
---
# <a name="wm_-messages-p---r"></a>Messaggi WM_: P - R

Le seguenti voci della mappa corrispondono ai prototipi di funzione:

|Voce della mappa|Prototipo di funzione|
|---------------|------------------------|
|ON_WM_PAINT ()|afx_msg void [OnPaint](../../mfc/reference/cwnd-class.md#onpaint)();|
|ON_WM_PAINTCLIPBOARD ()|afx_msg void [OnPaintClipboard](../../mfc/reference/cwnd-class.md#onpaintclipboard)(CWnd *, handle);|
|ON_WM_PALETTECHANGED ()|afx_msg void [OnPaletteChanged](../../mfc/reference/cwnd-class.md#onpalettechanged)(CWnd *);|
|ON_WM_PALETTEISCHANGING ()|afx_msg void [OnPaletteIsChanging](../../mfc/reference/cwnd-class.md#onpaletteischanging)(CWnd *);|
|ON_WM_PARENTNOTIFY ()|afx_msg void [OnParentNotify](../../mfc/reference/cwnd-class.md#onparentnotify)(uint, Long);|
|ON_WM_POWERBROADCAST ()|afx_msg UINT [OnPowerBroadcast](../../mfc/reference/cwnd-class.md#onpowerbroadcast)(UINT, uint);|
|ON_WM_QUERYDRAGICON ()|afx_msg HCURSOR [OnQueryDragIcon](../../mfc/reference/cwnd-class.md#onquerydragicon)() ();|
|ON_WM_QUERYENDSESSION ()|afx_msg BOOL [OnQueryEndSession](../../mfc/reference/cwnd-class.md#onqueryendsession)() ();|
|ON_WM_QUERYNEWPALETTE ()|afx_msg BOOL [OnQueryNewPalette](../../mfc/reference/cwnd-class.md#onquerynewpalette)() ();|
|ON_WM_QUERYOPEN ()|afx_msg BOOL [OnQueryOpen](../../mfc/reference/cwnd-class.md#onqueryopen)() ();|
|ON_WM_RBUTTONDBLCLK ()|afx_msg void [OnRButtonDblClk](../../mfc/reference/cwnd-class.md#onrbuttondblclk)(uint, CPoint);|
|ON_WM_RBUTTONDOWN ()|afx_msg void [OnRButtonDown](../../mfc/reference/cwnd-class.md#onrbuttondown)(uint, CPoint);|
|ON_WM_RBUTTONUP ()|afx_msg void [OnRButtonUp](../../mfc/reference/cwnd-class.md#onrbuttonup)(uint, CPoint);|
|ON_WM_RENDERALLFORMATS ()|afx_msg void [OnRenderAllFormats](../../mfc/reference/cwnd-class.md#onrenderallformats)();|
|ON_WM_RENDERFORMAT ()|afx_msg void [OnRenderFormat](../../mfc/reference/cwnd-class.md#onrenderformat)(uint);|

## <a name="see-also"></a>Vedi anche

[Mappe messaggi](../../mfc/reference/message-maps-mfc.md)<br/>
[Gestori per messaggi di WM_](../../mfc/reference/handlers-for-wm-messages.md)
