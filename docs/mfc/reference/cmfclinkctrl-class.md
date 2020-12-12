---
description: 'Altre informazioni su: classe CMFCLinkCtrl'
title: Classe CMFCLinkCtrl
ms.date: 11/04/2016
f1_keywords:
- CMFCLinkCtrl
- AFXLINKCTRL/CMFCLinkCtrl
- AFXLINKCTRL/CMFCLinkCtrl::SetURL
- AFXLINKCTRL/CMFCLinkCtrl::SetURLPrefix
- AFXLINKCTRL/CMFCLinkCtrl::SizeToContent
- AFXLINKCTRL/CMFCLinkCtrl::OnDrawFocusRect
helpviewer_keywords:
- CMFCLinkCtrl [MFC], SetURL
- CMFCLinkCtrl [MFC], SetURLPrefix
- CMFCLinkCtrl [MFC], SizeToContent
- CMFCLinkCtrl [MFC], OnDrawFocusRect
ms.assetid: 80f3874d-7cc8-410e-9ff1-62a225f5034b
ms.openlocfilehash: 6951f086ac99c4b8a8260a79ee08d54476694350
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265220"
---
# <a name="cmfclinkctrl-class"></a>Classe CMFCLinkCtrl

La `CMFCLinkCtrl` classe Visualizza un pulsante come collegamento ipertestuale e richiama la destinazione del collegamento quando si fa clic sul pulsante.

## <a name="syntax"></a>Sintassi

```
class CMFCLinkCtrl : public CMFCButton
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCLinkCtrl:: SetURL](#seturl)|Visualizza un URL specificato come testo del pulsante.|
|[CMFCLinkCtrl:: SetURLPrefix](#seturlprefix)|Imposta il protocollo implicito (ad esempio, "http:") dell'URL.|
|[CMFCLinkCtrl:: SizeToContent](#sizetocontent)|Ridimensiona il pulsante in modo che contenga il testo del pulsante o la bitmap.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCLinkCtrl:: OnDrawFocusRect](#ondrawfocusrect)|Chiamato dal Framework prima che venga disegnato il rettangolo di attivazione del pulsante.|

## <a name="remarks"></a>Commenti

Quando si fa clic su un pulsante derivato dalla `CMFCLinkCtrl` classe, il Framework passa l'URL del pulsante come parametro al `ShellExecute` metodo. Il `ShellExecute` metodo apre quindi la destinazione dell'URL.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come impostare le dimensioni di un `CMFCLinkCtrl` oggetto e come impostare un URL e una descrizione comando in un `CMFCLinkCtrl` oggetto. Questo esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#9](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#10](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCButton](../../mfc/reference/cmfcbutton-class.md)

[CMFCLinkCtrl](../../mfc/reference/cmfclinkctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxlinkctrl. h

## <a name="cmfclinkctrlondrawfocusrect"></a><a name="ondrawfocusrect"></a> CMFCLinkCtrl:: OnDrawFocusRect

Chiamato dal Framework prima che venga disegnato il rettangolo di attivazione del pulsante.

```
virtual void OnDrawFocusRect(
    CDC* pDC,
    const CRect& rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*rectClient*<br/>
in Rettangolo che delimita il controllo collegamento.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo quando si vuole usare il proprio codice per creare il rettangolo di attivazione del pulsante.

## <a name="cmfclinkctrlseturl"></a><a name="seturl"></a> CMFCLinkCtrl:: SetURL

Visualizza un URL specificato come testo del pulsante.

```cpp
void SetURL(LPCTSTR lpszURL);
```

### <a name="parameters"></a>Parametri

*lpszURL*<br/>
in Testo del pulsante da visualizzare.

### <a name="remarks"></a>Commenti

## <a name="cmfclinkctrlseturlprefix"></a><a name="seturlprefix"></a> CMFCLinkCtrl:: SetURLPrefix

Imposta il protocollo implicito (ad esempio, "http:") dell'URL.

```cpp
void SetURLPrefix(LPCTSTR lpszPrefix);
```

### <a name="parameters"></a>Parametri

*lpszPrefix*<br/>
in Prefisso del protocollo URL.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per impostare il prefisso URL. Il prefisso non viene visualizzato sulla superficie del pulsante, ma è possibile usarlo per passare alla destinazione dell'URL.

## <a name="cmfclinkctrlsizetocontent"></a><a name="sizetocontent"></a> CMFCLinkCtrl:: SizeToContent

Ridimensiona il pulsante in modo che contenga il testo del pulsante o la bitmap.

```
virtual CSize SizeToContent(
    BOOL bVCenter=FALSE,
    BOOL bHCenter=FALSE);
```

### <a name="parameters"></a>Parametri

*bVCenter*<br/>
in TRUE per allineare al centro il testo del pulsante e la bitmap verticalmente tra la parte superiore e inferiore del controllo dei collegamenti; in caso contrario, FALSE. Il valore predefinito è FALSE.

*bHCenter*<br/>
in TRUE per allineare orizzontalmente il testo del pulsante e la bitmap tra i lati sinistro e destro del controllo dei collegamenti; in caso contrario, FALSE. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) che contiene le nuove dimensioni del controllo collegamento.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CLinkCtrl](../../mfc/reference/clinkctrl-class.md)<br/>
[Classe CMFCButton](../../mfc/reference/cmfcbutton-class.md)
