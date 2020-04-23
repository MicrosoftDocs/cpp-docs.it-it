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
ms.openlocfilehash: dfe77699a51ad2670c703d02e13e9062e76debcd
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751291"
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
|[IView::OnActivateView (informazioni in stato di visualizzazione)](#onactivateview)|Chiamato da MFC quando una visualizzazione viene attivata o disattivata.|
|[IView::OnInitialUpdate](#oninitialupdate)|Chiamato dal framework dopo che la visualizzazione viene prima associata al documento, ma prima che la visualizzazione venga inizialmente visualizzata.|
|[IView::OnAggiorna](#onupdate)|Chiamato da MFC dopo che il documento della visualizzazione è stato modificato; questa funzione consente alla vista di aggiornare la visualizzazione per riflettere le modifiche.|

## <a name="remarks"></a>Osservazioni

`IView`implementa diversi `CWinFormsView` metodi che utilizza per inoltrare le notifiche di visualizzazione comuni a un controllo gestito ospitato. Si tratta di [OnInitialUpdate](#oninitialupdate), [OnUpdate](#onupdate) e [OnActivateView](#onactivateview).

`IView`è simile a [CView](../../mfc/reference/cview-class.md), ma viene utilizzato solo con controlli e visualizzazioni gestite.

Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="requirements"></a>Requisiti

Intestazione: afxwinforms.h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)

## <a name="iviewonactivateview"></a><a name="onactivateview"></a>IView::OnActivateView (informazioni in stato di visualizzazione)

Chiamato da MFC quando una visualizzazione viene attivata o disattivata.

```cpp
void OnActivateView(bool activate);
```

## <a name="parameters"></a>Parametri

*Attivare*<br/>
Indica se la vista è attivata o disattivata.

## <a name="iviewoninitialupdate"></a><a name="oninitialupdate"></a>IView::OnInitialUpdate

Chiamato dal framework dopo che la visualizzazione viene prima associata al documento, ma prima che la visualizzazione venga inizialmente visualizzata.

```cpp
void OnInitialUpdate();
```

## <a name="iviewonupdate"></a><a name="onupdate"></a>IView::OnAggiorna

Chiamato da MFC dopo la modifica del documento della visualizzazione.

```cpp
void OnUpdate();
```

## <a name="remarks"></a>Osservazioni

Questa funzione consente alla vista di aggiornare la visualizzazione per riflettere le modifiche.

## <a name="see-also"></a>Vedere anche

[Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)
