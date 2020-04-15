---
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
ms.openlocfilehash: 1ef4e390d88f81d738d2ee18be6ba02843633011
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374399"
---
# <a name="cmfclinkctrl-class"></a>Classe CMFCLinkCtrl

La `CMFCLinkCtrl` classe visualizza un pulsante come collegamento ipertestuale e richiama la destinazione del collegamento quando si fa clic sul pulsante.

## <a name="syntax"></a>Sintassi

```
class CMFCLinkCtrl : public CMFCButton
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCLinkCtrl::SetURL](#seturl)|Visualizza un URL specificato come testo del pulsante.|
|[CMFCLinkCtrl::SetURLPrefix](#seturlprefix)|Imposta il protocollo implicito (ad esempio, "http:") dell'URL.|
|[CMFCLinkCtrl::SizeToContent](#sizetocontent)|Ridimensiona il pulsante per contenere il testo o la bitmap del pulsante.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCLinkCtrl::OnDrawFocusRect](#ondrawfocusrect)|Chiamato dal framework prima che venga disegnato il rettangolo di attivazione del pulsante.|

## <a name="remarks"></a>Osservazioni

Quando si fa clic su `CMFCLinkCtrl` un pulsante derivato dalla classe , il `ShellExecute` framework passa l'URL del pulsante come parametro al metodo. Quindi `ShellExecute` il metodo apre la destinazione dell'URL.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCLinkCtrl` impostare le dimensioni di un oggetto `CMFCLinkCtrl` e come impostare un URL e una descrizione comando in un oggetto. Questo esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

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

**Intestazione:** afxlinkctrl.h

## <a name="cmfclinkctrlondrawfocusrect"></a><a name="ondrawfocusrect"></a>CMFCLinkCtrl::OnDrawFocusRect

Chiamato dal framework prima che venga disegnato il rettangolo di attivazione del pulsante.

```
virtual void OnDrawFocusRect(
    CDC* pDC,
    const CRect& rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*RectClient (client)*<br/>
[in] Rettangolo che delimita il controllo di collegamento.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo quando si desidera utilizzare il proprio codice per disegnare il rettangolo di attivazione del pulsante.

## <a name="cmfclinkctrlseturl"></a><a name="seturl"></a>CMFCLinkCtrl::SetURL

Visualizza un URL specificato come testo del pulsante.

```
void SetURL(LPCTSTR lpszURL);
```

### <a name="parameters"></a>Parametri

*URL lpsz*<br/>
[in] Testo del pulsante da visualizzare.

### <a name="remarks"></a>Osservazioni

## <a name="cmfclinkctrlseturlprefix"></a><a name="seturlprefix"></a>CMFCLinkCtrl::SetURLPrefix

Imposta il protocollo implicito (ad esempio, "http:") dell'URL.

```
void SetURLPrefix(LPCTSTR lpszPrefix);
```

### <a name="parameters"></a>Parametri

*LpszPrefix (Prefisso)*<br/>
[in] Prefisso del protocollo URL.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per impostare il prefisso URL. Il prefisso non viene visualizzato sul volto del pulsante, ma è possibile utilizzarlo per individuare la destinazione dell'URL.

## <a name="cmfclinkctrlsizetocontent"></a><a name="sizetocontent"></a>CMFCLinkCtrl::SizeToContent

Ridimensiona il pulsante per contenere il testo o la bitmap del pulsante.

```
virtual CSize SizeToContent(
    BOOL bVCenter=FALSE,
    BOOL bHCenter=FALSE);
```

### <a name="parameters"></a>Parametri

*bVCentro*<br/>
[in] TRUE per centrare il testo del pulsante e bitmap verticalmente tra la parte superiore e inferiore del controllo di collegamento; in caso contrario, FALSE. Il valore predefinito è FALSE.

*bHCentro*<br/>
[in] TRUE per centrare il testo del pulsante e la bitmap orizzontalmente tra i lati sinistro e destro del controllo collegamento; in caso contrario, FALSE. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene le nuove dimensioni del controllo di collegamento.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CLinkCtrl](../../mfc/reference/clinkctrl-class.md)<br/>
[CMFCButton (classe)](../../mfc/reference/cmfcbutton-class.md)
