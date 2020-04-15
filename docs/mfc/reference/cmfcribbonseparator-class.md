---
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
ms.openlocfilehash: 41a958c78719f6aedf1cc02f8e3ff5a2dbbf0e1b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368842"
---
# <a name="cmfcribbonseparator-class"></a>Classe CMFCRibbonSeparator

Implementa il separatore della barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonSeparator : public CMFCRibbonBaseElement
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCRibbonSeparator::CMFCRibbonSeparator](#cmfcribbonseparator)|Costruisce un oggetto `CMFCRibbonSeparator`.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCRibbonSeparator::AddToListBox](#addtolistbox)|Aggiunge un separatore all'elenco **Comandi** nella finestra di dialogo **Personalizza.** (Overrides [CMFCRibbonBaseElement::AddToListBox](../../mfc/reference/cmfcribbonbaseelement-class.md#addtolistbox).)|
|`CMFCRibbonSeparator::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCRibbonSeparator::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|

### <a name="protected-methods"></a>Metodi protetti

|||
|-|-|
|Nome|Descrizione|
|[CMFCRibbonSeparator::CopyFrom](#copyfrom)|Metodo di copia che imposta le variabili membro di un separatore da un altro oggetto.|
|[CMFCRibbonSeparator::GetRegularSize](#getregularsize)|Restituisce la dimensione di un separatore.|
|[CMFCRibbonSeparator::IsSeparator](#isseparator)|Indica se si tratta di un separatore.|
|[CMFCRibbonSeparator::IsTabStop](#istabstop)|Indica se si tratta di una tabulazione.|
|[CMFCRibbonSeparator::OnDraw](#ondraw)|Chiamato dal sistema per disegnare il separatore sulla barra multifunzione o sulla barra di accesso rapido.|
|[CMFCRibbonSeparator::OnDrawOnList](#ondrawonlist)|Chiamato dal sistema per disegnare il separatore nell'elenco **Comandi.**|

## <a name="remarks"></a>Osservazioni

Un separatore della barra multifunzione è una linea verticale o orizzontale che separa logicamente gli elementi della barra multifunzione. È possibile utilizzare un separatore nel controllo della barra multifunzione, nel menu principale dell'applicazione, nella barra di stato della barra multifunzione e nella barra di accesso rapido.

Per usare un separatore nell'applicazione, costruire il nuovo oggetto e aggiungerlo al menu principale dell'applicazione come illustrato di seguito:To use a separator in your application, construct the new object and add it to the main application menu as shown here:

```
CMFCRibbonMainPanel* pMainPanel = m_wndRibbonBar.AddMainCategory(_T("Main Menu"),
    IDB_FILESMALL,
    IDB_FILELARGE);

...
pMainPanel->Add(new CMFCRibbonSeparator(TRUE));
```

Chiamare [CMFCRibbonPanel::AddSeparator](../../mfc/reference/cmfcribbonpanel-class.md#addseparator) per aggiungere separatori ai gruppi della barra multifunzione. I separatori vengono allocati `AddSeparator` e aggiunti internamente dal metodo .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)

[CMFCRibbonSeparator](../../mfc/reference/cmfcribbonseparator-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxbaseribbonelement.h

## <a name="cmfcribbonseparatoraddtolistbox"></a><a name="addtolistbox"></a>CMFCRibbonSeparator::AddToListBox

Aggiunge un separatore all'elenco **Comandi** nella finestra di dialogo **Personalizza.**

```
virtual int AddToListBox(
    CMFCRibbonCommandsListBox* pWndListBox,
    BOOL bDeep);
```

### <a name="parameters"></a>Parametri

*pWndListBox (informazioni in netto record)*<br/>
[in] Puntatore all'elenco **Comandi** in cui viene aggiunto il separatore.

*bProfondo*<br/>
[in] Ignorato.

### <a name="return-value"></a>Valore restituito

Indice in base zero alla stringa nella casella di riepilogo specificata da *pWndListBox*.

## <a name="cmfcribbonseparatorcmfcribbonseparator"></a><a name="cmfcribbonseparator"></a>CMFCRibbonSeparator::CMFCRibbonSeparator

Costruisce un oggetto `CMFCRibbonSeparator`.

```
CMFCRibbonSeparator(BOOL bIsHoriz = FALSE);
```

### <a name="parameters"></a>Parametri

*bIsHoriz*<br/>
[in] Se TRUE, il separatore è orizzontale; se FALSE, il separatore è verticale.

### <a name="remarks"></a>Osservazioni

I separatori orizzontali vengono utilizzati nei menu delle applicazioni. I separatori verticali vengono utilizzati nelle barre degli strumenti.

### <a name="example"></a>Esempio

Nell'esempio `CMFCRibbonSeparator` seguente viene illustrato come costruire un oggetto della classe.

[!code-cpp[NVC_MFC_RibbonApp#19](../../mfc/reference/codesnippet/cpp/cmfcribbonseparator-class_1.cpp)]

## <a name="cmfcribbonseparatorcopyfrom"></a><a name="copyfrom"></a>CMFCRibbonSeparator::CopyFrom

Metodo di copia che imposta le variabili membro di un separatore da un altro oggetto.

```
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```

### <a name="parameters"></a>Parametri

*Src*<br/>
[in] Elemento della barra multifunzione di origine da cui copiare.

## <a name="cmfcribbonseparatorgetregularsize"></a><a name="getregularsize"></a>CMFCRibbonSeparator::GetRegularSize

Restituisce la dimensione di un separatore.

```
virtual CSize GetRegularSize(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore al contenuto di un dispositivo.

### <a name="return-value"></a>Valore restituito

Dimensione del separatore nel contesto di periferica specificato.

## <a name="cmfcribbonseparatorisseparator"></a><a name="isseparator"></a>CMFCRibbonSeparator::IsSeparator

Indica se si tratta di un separatore.

```
virtual BOOL IsSeparator() const;
```

### <a name="return-value"></a>Valore restituito

Sempre TRUE per questa classe.

## <a name="cmfcribbonseparatoristabstop"></a><a name="istabstop"></a>CMFCRibbonSeparator::IsTabStop

Indica se si tratta di una tabulazione.

```
virtual BOOL IsTabStop() const;
```

### <a name="return-value"></a>Valore restituito

SEMPRE FALSE per questa classe.

### <a name="remarks"></a>Osservazioni

Un separatore della barra multifunzione non è una tabulazione.

## <a name="cmfcribbonseparatorondraw"></a><a name="ondraw"></a>CMFCRibbonSeparator::OnDraw

Chiamato dal sistema per disegnare il separatore sulla barra multifunzione o sulla barra di accesso rapido.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

## <a name="cmfcribbonseparatorondrawonlist"></a><a name="ondrawonlist"></a>CMFCRibbonSeparator::OnDrawOnList

Chiamato dal sistema per disegnare il separatore nell'elenco **Comandi.**

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

|||
|-|-|
|Parametro|Descrizione|
|*pDC*|[in] Puntatore a un contesto di dispositivo.|
|*strText (testo str)*|[in] Testo visualizzato nell'elenco.|
|*nTextOffset (Offset testo)*|[in] Spaziatura tra il testo e il lato sinistro del rettangolo di delimitazione.|
|*Rect*|[in] Specifica il rettangolo di delimitazione.|
|*bIsSelezionato*|[in] Ignorato.|
|*bEvidenziato*|[in] Ignorato.|

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
