---
title: Interfaccia IView
ms.date: 11/04/2016
f1_keywords:
- IView
- AFXWINFORMS/IView
- AFXWINFORMS/IView::OnActivateView
- AFXWINFORMS/IView::OnInitialUpdate
- AFXWINFORMS/IView::OnUpdate
helpviewer_keywords:
- views [MFC]
- IView class [MFC]
- views [MFC], classes
ms.assetid: 9321f299-486e-4551-bee9-d2c4a7b91548
ms.openlocfilehash: e8afa7a5f5a7692f88ace4da08209b80f902b603
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79445673"
---
# <a name="iview-interface"></a>Interfaccia IView

Implementa diversi metodi utilizzati da [CWinFormsView](../../mfc/reference/cwinformsview-class.md) per inviare notifiche di visualizzazione a un controllo gestito.

## <a name="syntax"></a>Sintassi

```
interface class IView
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IView:: OnActivateView](#onactivateview)|Chiamato da MFC quando una visualizzazione viene attivata o disattivata.|
|[IView:: OnInitialUpdate](#oninitialupdate)|Chiamata eseguita dal Framework dopo che la vista è stata associata per la prima volta al documento, ma prima che venga visualizzata inizialmente la visualizzazione.|
|[IView:: OnUpdate](#onupdate)|Chiamato da MFC dopo che il documento della vista è stato modificato. Questa funzione consente alla visualizzazione di aggiornare la relativa visualizzazione in modo da riflettere le modifiche.|

## <a name="remarks"></a>Osservazioni

`IView` implementa diversi metodi che `CWinFormsView` utilizza per inviare notifiche di visualizzazione comuni a un controllo gestito ospitato. Si tratta di [OnInitialUpdate](#oninitialupdate), [OnUpdate](#onupdate) e [OnActivateView](#onactivateview).

`IView` è simile a [CView](../../mfc/reference/cview-class.md), ma viene usato solo con le viste e i controlli gestiti.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="requirements"></a>Requisiti

Intestazione: afxwinforms.h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)

## <a name="onactivateview"></a>IView:: OnActivateView

Chiamato da MFC quando una visualizzazione viene attivata o disattivata.

```
void OnActivateView(bool activate);
```

## <a name="parameters"></a>Parametri

*activate*<br/>
Indica se la visualizzazione viene attivata o disattivata.

## <a name="oninitialupdate"></a>IView:: OnInitialUpdate

Chiamata eseguita dal Framework dopo che la vista è stata associata per la prima volta al documento, ma prima che venga visualizzata inizialmente la visualizzazione.

```
void OnInitialUpdate();
```

## <a name="onupdate"></a>IView:: OnUpdate

Chiamato da MFC dopo che il documento della vista è stato modificato.

```
void OnUpdate();
```

## <a name="remarks"></a>Osservazioni

Questa funzione consente alla visualizzazione di aggiornare la relativa visualizzazione in modo da riflettere le modifiche.

## <a name="see-also"></a>Vedere anche

[Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)
