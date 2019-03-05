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
ms.openlocfilehash: 22e08a70ff4cc742406a1489899c0ba1df7eb664
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267823"
---
# <a name="iview-interface"></a>Interfaccia IView

Implementa diversi metodi che [CWinFormsView](../../mfc/reference/cwinformsview-class.md) utilizza per inviare notifiche di visualizzazione a un controllo gestito.

## <a name="syntax"></a>Sintassi

```
interface class IView
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IView::OnActivateView](#onactivateview)|Chiamato da MFC quando una visualizzazione viene attivata o disattivata.|
|[IView::OnInitialUpdate](#oninitialupdate)|Chiamato dal framework dopo la visualizzazione prima di tutto è collegata al documento, ma prima la visualizzazione iniziale.|
|[IView::OnUpdate](#onupdate)|Chiamato da MFC dopo che il documento della vista è stato modificato. Questa funzione consente la visualizzazione di aggiornare la relativa visualizzazione in modo da riflettere le modifiche.|

## <a name="remarks"></a>Note

`IView` implementa diversi metodi che `CWinFormsView` Usa per inoltrare comune visualizzare le notifiche a un controllo ospitato gestito. Si tratta [OnInitialUpdate](#oninitialupdate), [OnUpdate](#onupdate) e [OnActivateView](#onactivateview).

`IView` è simile a [CView](../../mfc/reference/cview-class.md), ma viene usato solo con le visualizzazioni gestite e i controlli.

Per altre informazioni sull'uso di Windows Form, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="requirements"></a>Requisiti

Intestazione: afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)

## <a name="onactivateview"></a> IView::OnActivateView

Chiamato da MFC quando una visualizzazione viene attivata o disattivata.
```
void OnActivateView(bool activate);
```

## <a name="parameters"></a>Parametri

*activate*<br/>
Indica se la visualizzazione viene attivata o disattivata.

## <a name="oninitialupdate"></a> IView::OnInitialUpdate

Chiamato dal framework dopo la visualizzazione prima di tutto è collegata al documento, ma prima la visualizzazione iniziale.
```
void OnInitialUpdate();
```

## <a name="onupdate"></a> IView::OnUpdate

Chiamato da MFC dopo che il documento della visualizzazione è stato modificato.
```
void OnUpdate();
```

## <a name="remarks"></a>Note

Questa funzione consente la visualizzazione di aggiornare la relativa visualizzazione in modo da riflettere le modifiche.

## <a name="see-also"></a>Vedere anche

[Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)
