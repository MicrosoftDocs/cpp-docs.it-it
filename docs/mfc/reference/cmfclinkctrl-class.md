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
ms.openlocfilehash: 839448694cee17f5bc1a1e47f7c113026a1a4006
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64346203"
---
# <a name="cmfclinkctrl-class"></a>Classe CMFCLinkCtrl

Il `CMFCLinkCtrl` classe visualizza un pulsante come collegamento ipertestuale e richiama la destinazione del collegamento quando si fa clic sul pulsante.

## <a name="syntax"></a>Sintassi

```
class CMFCLinkCtrl : public CMFCButton
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCLinkCtrl::SetURL](#seturl)|Consente di visualizzare un URL specificato come testo del pulsante.|
|[CMFCLinkCtrl::SetURLPrefix](#seturlprefix)|Imposta il protocollo implicito (ad esempio, "http:") dell'URL.|
|[CMFCLinkCtrl::SizeToContent](#sizetocontent)|Ridimensiona il pulsante per contenere il testo del pulsante o bitmap.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCLinkCtrl::OnDrawFocusRect](#ondrawfocusrect)|Chiamato dal framework prima di disegnata il rettangolo di attivazione del pulsante.|

## <a name="remarks"></a>Note

Quando si fa clic su un pulsante che è derivato dal `CMFCLinkCtrl` (classe), il framework passa l'URL del pulsante come parametro per il `ShellExecute` (metodo). Il `ShellExecute` metodo apre la destinazione dell'URL.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come impostare le dimensioni di un `CMFCLinkCtrl` oggetto e come impostare un url e una descrizione comando in un `CMFCLinkCtrl` oggetto. In questo esempio fa parte il [esempio di nuovi controlli](../../overview/visual-cpp-samples.md).

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

##  <a name="ondrawfocusrect"></a>  CMFCLinkCtrl::OnDrawFocusRect

Chiamato dal framework prima di disegnata il rettangolo di attivazione del pulsante.

```
virtual void OnDrawFocusRect(
    CDC* pDC,
    const CRect& rectClient);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*rectClient*<br/>
[in] Un rettangolo che delimita il controllo di collegamento.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo quando si desidera usare il proprio codice per disegnare il rettangolo di attivazione del pulsante.

##  <a name="seturl"></a>  CMFCLinkCtrl::SetURL

Consente di visualizzare un URL specificato come testo del pulsante.

```
void SetURL(LPCTSTR lpszURL);
```

### <a name="parameters"></a>Parametri

*lpszURL*<br/>
[in] Il testo del pulsante da visualizzare.

### <a name="remarks"></a>Note

##  <a name="seturlprefix"></a>  CMFCLinkCtrl::SetURLPrefix

Imposta il protocollo implicito (ad esempio, "http:") dell'URL.

```
void SetURLPrefix(LPCTSTR lpszPrefix);
```

### <a name="parameters"></a>Parametri

*lpszPrefix*<br/>
[in] Il prefisso del protocollo URL.

### <a name="remarks"></a>Note

Utilizzare questo metodo per impostare il prefisso dell'URL. Il prefisso non viene visualizzato nella superficie del pulsante, ma è possibile usarlo per passare alla destinazione dell'URL.

##  <a name="sizetocontent"></a>  CMFCLinkCtrl::SizeToContent

Ridimensiona il pulsante per contenere il testo del pulsante o bitmap.

```
virtual CSize SizeToContent(
    BOOL bVCenter=FALSE,
    BOOL bHCenter=FALSE);
```

### <a name="parameters"></a>Parametri

*bVCenter*<br/>
[in] TRUE per allineare al centro il testo del pulsante e una bitmap in senso verticale tra la parte superiore e inferiore del controllo collegamento. in caso contrario, FALSE. Il valore predefinito è FALSE.

*bHCenter*<br/>
[in] TRUE per allineare al centro il testo del pulsante e bitmap orizzontalmente tra i lati sinistro e destro del controllo collegamento. in caso contrario, FALSE. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene le nuove dimensioni del controllo collegamento.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CLinkCtrl](../../mfc/reference/clinkctrl-class.md)<br/>
[Classe CMFCButton](../../mfc/reference/cmfcbutton-class.md)
