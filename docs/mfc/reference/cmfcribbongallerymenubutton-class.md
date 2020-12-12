---
description: 'Altre informazioni su: classe CMFCRibbonGalleryMenuButton'
title: Classe CMFCRibbonGalleryMenuButton
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonGalleryMenuButton
- AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton
- AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::CMFCRibbonGalleryMenuButton
- AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::CopyFrom
- AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::CreatePopupMenu
- AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::GetPalette
- AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::HasButton
- AFXRIBBONPALETTEGALLERY/CMFCRibbonGalleryMenuButton::IsEmptyMenuAllowed
helpviewer_keywords:
- CMFCRibbonGalleryMenuButton [MFC], CMFCRibbonGalleryMenuButton
- CMFCRibbonGalleryMenuButton [MFC], CopyFrom
- CMFCRibbonGalleryMenuButton [MFC], CreatePopupMenu
- CMFCRibbonGalleryMenuButton [MFC], GetPalette
- CMFCRibbonGalleryMenuButton [MFC], HasButton
- CMFCRibbonGalleryMenuButton [MFC], IsEmptyMenuAllowed
ms.assetid: 4d459d9b-8b1a-4371-92f6-dc4ce6cc42c8
ms.openlocfilehash: ee527178ba90b968b1968ae0c06dbd8629d8d1e9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321852"
---
# <a name="cmfcribbongallerymenubutton-class"></a>Classe CMFCRibbonGalleryMenuButton

Implementa un pulsante di menu della barra multifunzione contenente raccolte della barra multifunzione.
Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonGalleryMenuButton : public CMFCToolBarMenuButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonGalleryMenuButton::CMFCRibbonGalleryMenuButton](#cmfcribbongallerymenubutton)|Costruisce e inizializza un oggetto `CMFCRibbonGalleryMenuButton`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonGalleryMenuButton::CopyFrom](#copyfrom)|Esegue l'override di [CMFCToolBarMenuButton:: CopyFrom](../../mfc/reference/cmfctoolbarmenubutton-class.md#copyfrom).|
|[CMFCRibbonGalleryMenuButton::CreatePopupMenu](#createpopupmenu)|Esegue l'override di [CMFCToolBarMenuButton:: CreatePopupMenu](../../mfc/reference/cmfctoolbarmenubutton-class.md#createpopupmenu).|
|[CMFCRibbonGalleryMenuButton::GetPalette](#getpalette)||
|[CMFCRibbonGalleryMenuButton::HasButton](#hasbutton)|Esegue l'override di `CMFCToolBarMenuButton::HasButton`.|
|[CMFCRibbonGalleryMenuButton::IsEmptyMenuAllowed](#isemptymenuallowed)|Esegue l'override di [CMFCToolBarMenuButton:: IsEmptyMenuAllowed](../../mfc/reference/cmfctoolbarmenubutton-class.md#isemptymenuallowed).|

### <a name="remarks"></a>Commenti

Il pulsante di menu della raccolta viene visualizzato come un menu a comparsa con una freccia. Quando l'utente fa clic su questo pulsante, viene visualizzata una raccolta di immagini. Quando si crea un pulsante di menu della raccolta, è necessario specificare un elenco di immagini che contiene le immagini.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come visualizzare una raccolta di elenchi puntati in un pulsante di menu:

```cpp
BOOL CMainFrame::OnShowPopupMenu (CMFCPopupMenu* pMenuPopup)
{
    int nBulletIndex = pMenuBar->CommandToIndex (ID_PARA_BULLETS);

    if (nBulletIndex>= 0)
    {
        CMFCToolBarButton* pExButton =
        pMenuBar->GetButton(nBulletIndex);
        ASSERT_VALID (pExButton);

        CMFCRibbonGalleryMenuButton paletteBullet (
        pExButton->m_nID,
        pExButton->GetImage (),
        pExButton->m_strText);

        InitBulletPalette (&paletteBullet.GetPalette ());

        pMenuBar->ReplaceButton (ID_PARA_BULLETS,
        paletteBullet);
    }
}
```

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)\
└ &nbsp; [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md) └\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[CMFCRibbonGalleryMenuButton](../../mfc/reference/cmfcribbongallerymenubutton-class.md) └

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonPaletteGallery. h

## <a name="cmfcribbongallerymenubuttoncopyfrom"></a><a name="copyfrom"></a> CMFCRibbonGalleryMenuButton:: CopyFrom

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

in *src*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcribbongallerymenubuttoncmfcribbongallerymenubutton"></a><a name="cmfcribbongallerymenubutton"></a> CMFCRibbonGalleryMenuButton::CMFCRibbonGalleryMenuButton

Costruisce e Inizializza un oggetto [CMFCRibbonGalleryMenuButton](../../mfc/reference/cmfcribbongallerymenubutton-class.md) .

```
CMFCRibbonGalleryMenuButton(
    UINT uiID,
    int iImage,
    LPCTSTR lpszText,
    CMFCToolBarImages& imagesPalette);

CMFCRibbonGalleryMenuButton(
    UINT uiID,
    int iImage,
    LPCTSTR lpszText,
    UINT uiImagesPaletteResID = 0,
    int cxPaletteImage = 0);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
ID di comando del pulsante. Si tratta del valore inviato nel messaggio di WM_COMMAND quando l'utente fa clic su questo pulsante.

*iImage*<br/>
Indice dell'immagine da visualizzare con il pulsante di menu della raccolta. Le immagini vengono archiviate nel parametro *imagesPalette* .

*lpszText*<br/>
Testo da visualizzare sul pulsante di menu.

*imagesPalette*<br/>
Contiene l'elenco di immagini da visualizzare nella raccolta.

*uiImagesPaletteResID*<br/>
ID risorsa dell'elenco immagini per le immagini da visualizzare nella raccolta.

*cxPaletteImage*<br/>
Specifica la larghezza in pixel dell'immagine da visualizzare nella raccolta.

### <a name="remarks"></a>Commenti

Il pulsante di menu raccolta viene visualizzato come menu a comparsa con una freccia. Quando l'utente fa clic su questo pulsante, viene visualizzata una raccolta di immagini.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il costruttore della `CMFCRibbonGalleryMenuButton` classe. Questo frammento di codice fa parte dell' [esempio Microsoft Office 2007 demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#8](../../mfc/reference/codesnippet/cpp/cmfcribbongallerymenubutton-class_1.cpp)]

## <a name="cmfcribbongallerymenubuttoncreatepopupmenu"></a><a name="createpopupmenu"></a> CMFCRibbonGalleryMenuButton:: CreatePopupMenu

```
virtual CMFCPopupMenu* CreatePopupMenu();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbongallerymenubuttongetpalette"></a><a name="getpalette"></a> CMFCRibbonGalleryMenuButton:: gettavolozza

```
CMFCRibbonGallery& GetPalette();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbongallerymenubuttonhasbutton"></a><a name="hasbutton"></a> CMFCRibbonGalleryMenuButton::HasButton

```
virtual BOOL HasButton() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbongallerymenubuttonisemptymenuallowed"></a><a name="isemptymenuallowed"></a> CMFCRibbonGalleryMenuButton::IsEmptyMenuAllowed

```
virtual BOOL IsEmptyMenuAllowed() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)<br/>
[Classe CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)
