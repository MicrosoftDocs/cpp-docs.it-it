---
description: 'Altre informazioni su: classe CMFCTabDropTarget'
title: Classe CMFCTabDropTarget
ms.date: 11/04/2016
f1_keywords:
- CMFCTabDropTarget
- AFXBASETABCTRL/CMFCTabDropTarget
- AFXBASETABCTRL/CMFCTabDropTarget::OnDragEnter
- AFXBASETABCTRL/CMFCTabDropTarget::OnDragLeave
- AFXBASETABCTRL/CMFCTabDropTarget::OnDragOver
- AFXBASETABCTRL/CMFCTabDropTarget::OnDropEx
- AFXBASETABCTRL/CMFCTabDropTarget::Register
helpviewer_keywords:
- CMFCTabDropTarget [MFC], OnDragEnter
- CMFCTabDropTarget [MFC], OnDragLeave
- CMFCTabDropTarget [MFC], OnDragOver
- CMFCTabDropTarget [MFC], OnDropEx
- CMFCTabDropTarget [MFC], Register
ms.assetid: 9777b7b6-10da-4c4b-b1d1-7ea795b0f1cb
ms.openlocfilehash: 2a12d171a934912993a61ba4ae915d9e1f3a5cf6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306781"
---
# <a name="cmfctabdroptarget-class"></a>Classe CMFCTabDropTarget

Fornisce il meccanismo di comunicazione tra un controllo struttura a schede e le librerie OLE.

## <a name="syntax"></a>Sintassi

```
class CMFCTabDropTarget : public COleDropTarget
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|-|-|
|`CMFCTabDropTarget::CMFCTabDropTarget`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|-|-|
|[CMFCTabDropTarget:: OnDragEnter](#ondragenter)|Chiamata eseguita dal framework quando l'utente trascina un oggetto in una finestra di tabulazione. Esegue l'override di [COleDropTarget:: OnDragEnter](../../mfc/reference/coledroptarget-class.md#ondragenter).|
|[CMFCTabDropTarget:: OnDragLeave](#ondragleave)|Chiamata eseguita dal framework quando l'utente trascina un oggetto all'esterno della finestra di tabulazione con lo stato attivo. Esegue l'override di [COleDropTarget:: OnDragLeave](../../mfc/reference/coledroptarget-class.md#ondragleave).|
|[CMFCTabDropTarget:: OnDragOver](#ondragover)|Chiamata eseguita dal framework quando l'utente trascina un oggetto nella finestra di tabulazione con lo stato attivo. Esegue l'override di [COleDropTarget:: OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover).|
|[CMFCTabDropTarget:: OnDropEx](#ondropex)|Chiamata eseguita dal framework quando l'utente rilascia il pulsante del mouse alla fine di un'operazione di trascinamento. Esegue l'override di [COleDropTarget:: OnDropEx](../../mfc/reference/coledroptarget-class.md#ondropex).|
|[CMFCTabDropTarget:: Register](#register)|Registra un controllo che può essere la destinazione di un'operazione di trascinamento e rilascio OLE.|

### <a name="remarks"></a>Commenti

Questa classe fornisce supporto per il trascinamento della selezione alla `CMFCBaseTabCtrl` classe. Se l'applicazione Inizializza le librerie OLE usando la funzione [AfxOleInit](ole-initialization.md#afxoleinit) , `CMFCBaseTabCtrl` gli oggetti si registrano per le operazioni di trascinamento della selezione.

La `CMFCTabDropTarget` classe estende la classe di base rendendo attiva la scheda sotto il cursore quando si verifica un'operazione di trascinamento. Per altre informazioni sulle operazioni di trascinamento della selezione, vedere [trascinamento della selezione OLE](../../mfc/drag-and-drop-ole.md).

## <a name="example"></a>Esempio

L'esempio seguente illustra come costruire un oggetto `CMFCTabDropTarget` e usare il relativo metodo `Register`.

[!code-cpp[NVC_MFC_RibbonApp#39](../../mfc/reference/codesnippet/cpp/cmfctabdroptarget-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[COleDropTarget](../../mfc/reference/coledroptarget-class.md)

[CMFCTabDropTarget](../../mfc/reference/cmfctabdroptarget-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbasetabctrl.h

## <a name="cmfctabdroptargetondragenter"></a><a name="ondragenter"></a> CMFCTabDropTarget:: OnDragEnter

Chiamata eseguita dal framework quando l'utente trascina un oggetto in una finestra di tabulazione.

```
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd*\
[in] Non utilizzato.

*pDataObject*\
in Puntatore all'oggetto trascinato dall'utente.

*dwKeyState*\
in Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti elementi: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*punto*\
in Posizione del cursore nelle coordinate del client.

### <a name="return-value"></a>Valore restituito

Effetto risultante se il trascinamento si verifica in corrispondenza della posizione specificata dal *punto*. Può essere uno o più degli elementi seguenti:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### <a name="remarks"></a>Commenti

Questo metodo restituisce DROPEFFECT_NONE se il Framework della barra degli strumenti non è in modalità di personalizzazione o se il formato dei dati degli Appunti non è disponibile. In caso contrario, restituisce il risultato della chiamata `CMFCBaseTabCtrl::OnDragEnter` a con i parametri forniti.

Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar:: IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per ulteriori informazioni sui formati di dati degli Appunti, vedere [COleDataObject:: IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

## <a name="cmfctabdroptargetondragleave"></a><a name="ondragleave"></a> CMFCTabDropTarget:: OnDragLeave

Chiamata eseguita dal framework quando l'utente trascina un oggetto all'esterno della finestra di tabulazione con lo stato attivo.

```
virtual void OnDragLeave(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*\
[in] Non utilizzato.

### <a name="remarks"></a>Commenti

Questo metodo chiama il `CMFCBaseTabCtrl::OnDragLeave` metodo per eseguire l'operazione di trascinamento.

## <a name="cmfctabdroptargetondragover"></a><a name="ondragover"></a> CMFCTabDropTarget:: OnDragOver

Chiamata eseguita dal framework quando l'utente trascina un oggetto nella finestra di tabulazione con lo stato attivo.

```
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd*\
[in] Non utilizzato.

*pDataObject*\
in Puntatore all'oggetto trascinato dall'utente.

*dwKeyState*\
in Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti elementi: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*punto*\
in Posizione del puntatore del mouse nelle coordinate del client.

### <a name="return-value"></a>Valore restituito

Effetto risultante se il trascinamento si verifica in corrispondenza della posizione specificata dal *punto*. Può essere uno o più degli elementi seguenti:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### <a name="remarks"></a>Commenti

Questo metodo rende attiva la scheda sotto il cursore quando si verifica un'operazione di trascinamento. Restituisce DROPEFFECT_NONE se il Framework della barra degli strumenti non è in modalità di personalizzazione o se il formato dei dati degli Appunti non è disponibile. In caso contrario, restituisce il risultato della chiamata `CMFCBaseTabCtrl::OnDragOver` a con i parametri forniti.

Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar:: IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per ulteriori informazioni sui formati di dati degli Appunti, vedere [COleDataObject:: IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

## <a name="cmfctabdroptargetondropex"></a><a name="ondropex"></a> CMFCTabDropTarget:: OnDropEx

Chiamata eseguita dal framework quando l'utente rilascia il pulsante del mouse alla fine di un'operazione di trascinamento.

```
virtual DROPEFFECT OnDropEx(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DROPEFFECT dropEffect,
    DROPEFFECT dropList,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pWnd*\
[in] Non utilizzato.

*pDataObject*\
in Puntatore all'oggetto trascinato dall'utente.

*dropEffect*\
in Operazione di rilascio predefinita.

*dropList*\
[in] Non utilizzato.

*punto*\
in Posizione del puntatore del mouse nelle coordinate del client.

### <a name="return-value"></a>Valore restituito

Effetto di rilascio risultante. Può essere uno o più degli elementi seguenti:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### <a name="remarks"></a>Commenti

Questo metodo chiama `CMFCBaseTabCtrl::OnDrop` se il Framework della barra degli strumenti è in modalità di personalizzazione e il formato dei dati degli Appunti è disponibile. Se la chiamata a `CMFCBaseTabCtrl::OnDrop` restituisce un valore diverso da zero, questo metodo restituisce l'effetto di rilascio predefinito specificato da *DropEffect*. In caso contrario, questo metodo restituisce DROPEFFECT_NONE. Per ulteriori informazioni sugli effetti di rilascio, vedere [COleDropTarget:: OnDropEx](../../mfc/reference/coledroptarget-class.md#ondropex).

Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar:: IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). Per ulteriori informazioni sui formati di dati degli Appunti, vedere [COleDataObject:: IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

## <a name="cmfctabdroptargetregister"></a><a name="register"></a> CMFCTabDropTarget:: Register

Registra un controllo che può essere la destinazione di un'operazione di trascinamento e rilascio OLE.

```
BOOL Register(CMFCBaseTabCtrl *pOwner);
```

### <a name="parameters"></a>Parametri

*pOwner*\
in Controllo struttura a schede da registrare come destinazione di rilascio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la registrazione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questo metodo chiama [COleDropTarget:: Register](../../mfc/reference/coledroptarget-class.md#register) per registrare il controllo per le operazioni di trascinamento della selezione.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Trascinamento della selezione OLE](../../mfc/drag-and-drop-ole.md)
