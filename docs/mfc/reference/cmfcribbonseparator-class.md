---
description: 'Altre informazioni su: classe CMFCRibbonSeparator'
title: Classe CMFCRibbonSeparator
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonSeparator
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::CMFCRibbonSeparator
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::AddToListBox
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::CopyFrom
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::GetRegularSize
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::IsSeparator
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::IsTabStop
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::OnDraw
- AFXBASERIBBONELEMENT/CMFCRibbonSeparator::OnDrawOnList
helpviewer_keywords:
- CMFCRibbonSeparator [MFC], CMFCRibbonSeparator
- CMFCRibbonSeparator [MFC], AddToListBox
- CMFCRibbonSeparator [MFC], CopyFrom
- CMFCRibbonSeparator [MFC], GetRegularSize
- CMFCRibbonSeparator [MFC], IsSeparator
- CMFCRibbonSeparator [MFC], IsTabStop
- CMFCRibbonSeparator [MFC], OnDraw
- CMFCRibbonSeparator [MFC], OnDrawOnList
ms.assetid: bedb1a53-cb07-4c3c-be12-698c5409e7cf
ms.openlocfilehash: db8e7f92089d1e6332fdb2ad057398c465c72f97
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321748"
---
# <a name="cmfcribbonseparator-class"></a>Classe CMFCRibbonSeparator

Implementa il separatore della barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonSeparator : public CMFCRibbonBaseElement
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|-|-|
|[CMFCRibbonSeparator::CMFCRibbonSeparator](#cmfcribbonseparator)|Costruisce un oggetto `CMFCRibbonSeparator`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|-|-|
|[CMFCRibbonSeparator::AddToListBox](#addtolistbox)|Aggiunge un separatore all'elenco dei **comandi** nella finestra di dialogo **Personalizza** . Esegue l'override di [CMFCRibbonBaseElement:: AddToListBox](../../mfc/reference/cmfcribbonbaseelement-class.md#addtolistbox).|
|`CMFCRibbonSeparator::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCRibbonSeparator::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|-|-|
|[CMFCRibbonSeparator:: CopyFrom](#copyfrom)|Metodo Copy che imposta le variabili membro di un separatore da un altro oggetto.|
|[CMFCRibbonSeparator:: GetRegularSize](#getregularsize)|Restituisce la dimensione di un separatore.|
|[CMFCRibbonSeparator:: deseparatore](#isseparator)|Indica se si tratta di un separatore.|
|[CMFCRibbonSeparator:: IsTabStop](#istabstop)|Indica se si tratta di una tabulazione.|
|[CMFCRibbonSeparator:: onpare](#ondraw)|Chiamata eseguita dal sistema per creare il separatore sulla barra multifunzione o sulla barra di accesso rapido.|
|[CMFCRibbonSeparator::OnDrawOnList](#ondrawonlist)|Chiamato dal sistema per creare il separatore nell'elenco dei **comandi** .|

## <a name="remarks"></a>Commenti

Un separatore della barra multifunzione è una linea verticale o orizzontale che separa logicamente gli elementi della barra multifunzione. È possibile disegnare un separatore sul controllo Ribbon, sul menu principale dell'applicazione, sulla barra di stato della barra di stato e sulla barra di accesso rapido.

Per usare un separatore nell'applicazione, creare il nuovo oggetto e aggiungerlo al menu principale dell'applicazione come illustrato di seguito:

```
CMFCRibbonMainPanel* pMainPanel = m_wndRibbonBar.AddMainCategory(_T("Main Menu"),
    IDB_FILESMALL,
    IDB_FILELARGE);

...
pMainPanel->Add(new CMFCRibbonSeparator(TRUE));
```

Chiamare [CMFCRibbonPanel:: AddSeparator](../../mfc/reference/cmfcribbonpanel-class.md#addseparator) per aggiungere separatori ai pannelli della barra multifunzione. I separatori vengono allocati e aggiunti internamente dal `AddSeparator` metodo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonSeparator](../../mfc/reference/cmfcribbonseparator-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbaseribbonelement.h

## <a name="cmfcribbonseparatoraddtolistbox"></a><a name="addtolistbox"></a> CMFCRibbonSeparator::AddToListBox

Aggiunge un separatore all'elenco dei **comandi** nella finestra di dialogo **Personalizza** .

```
virtual int AddToListBox(
    CMFCRibbonCommandsListBox* pWndListBox,
    BOOL bDeep);
```

### <a name="parameters"></a>Parametri

*pWndListBox*<br/>
in Puntatore all'elenco dei **comandi** in cui viene aggiunto il separatore.

*bDeep*<br/>
in Ignorato.

### <a name="return-value"></a>Valore restituito

Indice in base zero della stringa nella casella di riepilogo specificata da *pWndListBox*.

## <a name="cmfcribbonseparatorcmfcribbonseparator"></a><a name="cmfcribbonseparator"></a> CMFCRibbonSeparator::CMFCRibbonSeparator

Costruisce un oggetto `CMFCRibbonSeparator`.

```
CMFCRibbonSeparator(BOOL bIsHoriz = FALSE);
```

### <a name="parameters"></a>Parametri

*bIsHoriz*<br/>
in Se TRUE, il separatore è orizzontale; Se FALSE, il separatore è verticale.

### <a name="remarks"></a>Commenti

I separatori orizzontali vengono utilizzati nei menu applicazione. I separatori verticali vengono utilizzati nelle barre degli strumenti.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCRibbonSeparator` classe.

[!code-cpp[NVC_MFC_RibbonApp#19](../../mfc/reference/codesnippet/cpp/cmfcribbonseparator-class_1.cpp)]

## <a name="cmfcribbonseparatorcopyfrom"></a><a name="copyfrom"></a> CMFCRibbonSeparator:: CopyFrom

Metodo Copy che imposta le variabili membro di un separatore da un altro oggetto.

```
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```

### <a name="parameters"></a>Parametri

*Src*<br/>
in Elemento della barra multifunzione di origine da cui eseguire la copia.

## <a name="cmfcribbonseparatorgetregularsize"></a><a name="getregularsize"></a> CMFCRibbonSeparator:: GetRegularSize

Restituisce la dimensione di un separatore.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore al contenuto di un dispositivo.

### <a name="return-value"></a>Valore restituito

Dimensioni del separatore nel contesto di dispositivo specificato.

## <a name="cmfcribbonseparatorisseparator"></a><a name="isseparator"></a> CMFCRibbonSeparator:: deseparatore

Indica se si tratta di un separatore.

```
virtual BOOL IsSeparator() const;
```

### <a name="return-value"></a>Valore restituito

Sempre TRUE per questa classe.

## <a name="cmfcribbonseparatoristabstop"></a><a name="istabstop"></a> CMFCRibbonSeparator:: IsTabStop

Indica se si tratta di una tabulazione.

```
virtual BOOL IsTabStop() const;
```

### <a name="return-value"></a>Valore restituito

Sempre FALSE per questa classe.

### <a name="remarks"></a>Commenti

Un separatore della barra multifunzione non è una tabulazione.

## <a name="cmfcribbonseparatorondraw"></a><a name="ondraw"></a> CMFCRibbonSeparator:: onpare

Chiamata eseguita dal sistema per creare il separatore sulla barra multifunzione o sulla barra di accesso rapido.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

## <a name="cmfcribbonseparatorondrawonlist"></a><a name="ondrawonlist"></a> CMFCRibbonSeparator::OnDrawOnList

Chiamato dal sistema per creare il separatore nell'elenco dei **comandi** .

```
virtual void OnDrawOnList(
    CDC* pDC,
    CString strText,
    int nTextOffset,
    CRect rect,
    BOOL bIsSelected,
    BOOL bHighlighted);
```

### <a name="parameters"></a>Parametri

*pDC*\
in Puntatore a un contesto di dispositivo.

*strText*\
in Testo visualizzato nell'elenco.

*nTextOffset*\
in Spaziatura tra il testo e il lato sinistro del rettangolo di delimitazione.

*Rect*\
in Specifica il rettangolo di delimitazione.

*bIsSelected*\
in Ignorato.

*bHighlighted*\
in Ignorato.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
