---
title: Struttura WINDOWPLACEMENT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- WINDOWPLACEMENT
dev_langs:
- C++
helpviewer_keywords:
- WINDOWPLACEMENT structure [MFC]
ms.assetid: ea7d61f6-eb57-478e-9b08-7c1d07091aa8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b163d93de22d313d72ca5dbfd384788077ae1b01
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46447277"
---
# <a name="windowplacement-structure"></a>Struttura WINDOWPLACEMENT

Il `WINDOWPLACEMENT` struttura contiene informazioni sulla posizione di una finestra sullo schermo.

## <a name="syntax"></a>Sintassi

```
typedef struct tagWINDOWPLACEMENT {     /* wndpl */
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
} WINDOWPLACEMENT;
```

#### <a name="parameters"></a>Parametri

*length*<br/>
Specifica la lunghezza, espressa in byte, della struttura.

*flags*<br/>
Specifica i flag che controllano la posizione della finestra ridotta a icona e il metodo mediante il quale la finestra è ripristinata. Questo membro può essere uno o entrambi i flag seguenti:

- WPF_SETMINPOSITION specifica che è possibile specificare le posizioni x e y della finestra ridotta a icona. Questo flag deve essere specificato se le coordinate vengono specificate nella `ptMinPosition` membro.

- WPF_RESTORETOMAXIMIZED specifica che la finestra ripristinata verrà ingrandita, indipendentemente dal fatto indica se è stato ingrandito prima è stata ridotta a icona. Questa impostazione è valida solo la volta successiva che la finestra è ripristinata. Il comportamento di ripristino predefinito rimane invariata. Questo flag è valido solo quando il valore SW_SHOWMINIMIZED viene specificato per il `showCmd` membro.

*showCmd.*<br/>
Specifica lo stato di visualizzazione corrente della finestra. Questo membro può essere uno dei valori seguenti:

- SW_HIDE nasconde la finestra e passa l'attivazione a un'altra finestra.

- SW_MINIMIZE riduce al minimo dell'intervallo specificato e attiva la finestra di primo livello nell'elenco del sistema.

- SW_RESTORE attiva e visualizza una finestra. Se la finestra è ridotta a icona o ingrandita, Windows lo ripristina le dimensioni e posizione (uguale a SW_SHOWNORMAL) originale.

- SW_SHOW attiva una finestra e visualizzarlo nelle dimensioni correnti e la posizione.

- SW_SHOWMAXIMIZED attiva una finestra che viene visualizzata come una finestra ingrandita.

- SW_SHOWMINIMIZED attiva una finestra e lo visualizza come icona.

- SW_SHOWMINNOACTIVE Visualizza una finestra ridotta a icona. La finestra attualmente attiva rimane attiva.

- SW_SHOWNA Visualizza una finestra nello stato corrente. La finestra attualmente attiva rimane attiva.

- SW_SHOWNOACTIVATE Visualizza una finestra nelle dimensioni e la posizione più recente. La finestra attualmente attiva rimane attiva.

- SW_SHOWNORMAL attiva e visualizza una finestra. Se la finestra è ridotta a icona o ingrandita, Windows lo ripristina le dimensioni e posizione (uguale a SW_RESTORE) originale.

*ptMinPosition*<br/>
Specifica la posizione dell'angolo superiore sinistro della finestra quando la finestra è ridotta a icona.

*ptMaxPosition*<br/>
Specifica la posizione dell'angolo superiore sinistro della finestra quando la finestra è ingrandita.

*rcNormalPosition*<br/>
Specifica le coordinate della finestra quando la finestra è nella posizione normale (ripristinata).

## <a name="requirements"></a>Requisiti

**Intestazione:** winuser.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::SetWindowPlacement](../../mfc/reference/cwnd-class.md#setwindowplacement)

