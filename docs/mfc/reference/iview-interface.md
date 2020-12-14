---
description: 'Altre informazioni su: interfaccia IView'
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
ms.openlocfilehash: e0229d61d12638935d7e4d928626a4bd7f5a830a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219447"
---
# <a name="iview-interface"></a>Interfaccia IView

Implementa diversi metodi utilizzati da [CWinFormsView](../../mfc/reference/cwinformsview-class.md) per inviare notifiche di visualizzazione a un controllo gestito.

## <a name="syntax"></a>Sintassi

```
interface class IView
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IView:: OnActivateView](#onactivateview)|Chiamato da MFC quando una visualizzazione viene attivata o disattivata.|
|[IView:: OnInitialUpdate](#oninitialupdate)|Chiamata eseguita dal Framework dopo che la vista è stata associata per la prima volta al documento, ma prima che venga visualizzata inizialmente la visualizzazione.|
|[IView:: OnUpdate](#onupdate)|Chiamato da MFC dopo che il documento della vista è stato modificato. Questa funzione consente alla visualizzazione di aggiornare la relativa visualizzazione in modo da riflettere le modifiche.|

### <a name="remarks"></a>Commenti

`IView` implementa diversi metodi che `CWinFormsView` usano per inviare notifiche di visualizzazione comuni a un controllo gestito ospitato. Si tratta di [OnInitialUpdate](#oninitialupdate), [OnUpdate](#onupdate) e [OnActivateView](#onactivateview).

`IView` è simile a [CView](../../mfc/reference/cview-class.md), ma viene usato solo con le viste e i controlli gestiti.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="requirements"></a>Requisiti

Intestazione: afxwinforms.h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)

## <a name="iviewonactivateview"></a><a name="onactivateview"></a> IView:: OnActivateView

Chiamato da MFC quando una visualizzazione viene attivata o disattivata.

```cpp
void OnActivateView(bool activate);
```

## <a name="parameters"></a>Parametri

*attivare*<br/>
Indica se la visualizzazione viene attivata o disattivata.

## <a name="iviewoninitialupdate"></a><a name="oninitialupdate"></a> IView:: OnInitialUpdate

Chiamata eseguita dal Framework dopo che la vista è stata associata per la prima volta al documento, ma prima che venga visualizzata inizialmente la visualizzazione.

```cpp
void OnInitialUpdate();
```

## <a name="iviewonupdate"></a><a name="onupdate"></a> IView:: OnUpdate

Chiamato da MFC dopo che il documento della vista è stato modificato.

```cpp
void OnUpdate();
```

### <a name="remarks"></a>Commenti

Questa funzione consente alla visualizzazione di aggiornare la relativa visualizzazione in modo da riflettere le modifiche.

## <a name="see-also"></a>Vedi anche

[Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)<br/>
[CView (classe)](../../mfc/reference/cview-class.md)
