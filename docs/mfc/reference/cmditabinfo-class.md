---
title: Classe CMDITabInfo
ms.date: 11/04/2016
f1_keywords:
- CMDITabInfo
- AFXMDICLIENTAREAWND/CMDITabInfo
- AFXMDICLIENTAREAWND/CMDITabInfo::Serialize
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bAutoColor
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bDocumentMenu
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bEnableTabSwap
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bFlatFrame
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bTabCloseButton
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bTabCustomTooltips
- AFXMDICLIENTAREAWND/CMDITabInfo::m_bTabIcons
- AFXMDICLIENTAREAWND/CMDITabInfo::m_nTabBorderSize
- AFXMDICLIENTAREAWND/CMDITabInfo::m_style
- AFXMDICLIENTAREAWND/CMDITabInfo::m_tabLocation
helpviewer_keywords:
- CMDITabInfo [MFC], Serialize
- CMDITabInfo [MFC], m_bAutoColor
- CMDITabInfo [MFC], m_bDocumentMenu
- CMDITabInfo [MFC], m_bEnableTabSwap
- CMDITabInfo [MFC], m_bFlatFrame
- CMDITabInfo [MFC], m_bTabCloseButton
- CMDITabInfo [MFC], m_bTabCustomTooltips
- CMDITabInfo [MFC], m_bTabIcons
- CMDITabInfo [MFC], m_nTabBorderSize
- CMDITabInfo [MFC], m_style
- CMDITabInfo [MFC], m_tabLocation
ms.assetid: 988ae1b7-4f7f-4239-b88f-7e28b3291c5e
ms.openlocfilehash: 0d230d2a3401ab556adc1183f4c4210ec6ff3c29
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370025"
---
# <a name="cmditabinfo-class"></a>Classe CMDITabInfo

La `CMDITabInfo` classe viene utilizzata per passare parametri al metodo [CMDIFrameWndEx::EnableMDITabbedGroups](../../mfc/reference/cmdiframewndex-class.md#enablemditabbedgroups) . Impostare i membri di questa classe per controllare il comportamento dei gruppi MDI a schede.

## <a name="syntax"></a>Sintassi

```
class CMDITabInfo
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMDITabInfo::CMDITabInfo`|Costruttore predefinito.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMDITabInfo::Serialize](#serialize)|Legge o scrive l'oggetto corrente da o in un archivio.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMDITabInfo::m_bActiveTabCloseButton;](#m_bactivetabclosebutton_)|Specifica se sull'etichetta della scheda attiva viene visualizzato il pulsante **Chiudi.**|
|[CMDITabInfo::m_bAutoColor](#m_bautocolor)|Specifica se colorare le schede MDI.|
|[CMDITabInfo::m_bDocumentMenu](#m_bdocumentmenu)|Specifica se il gruppo di schede visualizza un menu a comparsa che mostra un elenco di documenti aperti o visualizza i pulsanti di scorrimento.|
|[CMDITabInfo::m_bEnableTabSwap](#m_benabletabswap)|Specifica se l'utente può scambiare le posizioni delle schede mediante trascinamento.|
|[CMDITabInfo::m_bFlatFrame](#m_bflatframe)|Specifica se le schede hanno una cornice piatta.|
|[CMDITabInfo::m_bTabCloseButton](#m_btabclosebutton)|Specifica se ogni etichetta della scheda visualizza un pulsante **Chiudi.**|
|[CMDITabInfo::m_bTabCustomTooltips](#m_btabcustomtooltips)|Specifica se le descrizioni comandi personalizzate sono abilitate.|
|[CMDITabInfo::m_bTabIcons](#m_btabicons)|Specifica se visualizzare le icone nelle schede MDI.|
|[CMDITabInfo::m_nTabBorderSize](#m_ntabbordersize)|Specifica le dimensioni del bordo di ogni finestra della scheda.|
|[CMDITabInfo::m_style](#m_style)|Specifica lo stile delle etichette delle schede.|
|[CMDITabInfo::m_tabLocation](#m_tablocation)|Specifica se le etichette delle schede si trovano nella parte superiore o inferiore della pagina.|

## <a name="remarks"></a>Osservazioni

Questa classe specifica i parametri dei gruppi di schede MDI creati dal framework.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come impostare `CMDITabInfo` i valori delle varie variabili membro in classe.

[!code-cpp[NVC_MFC_MDITab#1](../../mfc/reference/codesnippet/cpp/cmditabinfo-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMDITabInfo](../../mfc/reference/cmditabinfo-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmdiclientareawnd.h

## <a name="cmditabinfom_bactivetabclosebutton"></a><a name="m_bactivetabclosebutton_"></a>CMDITabInfo::m_bActiveTabCloseButton;

Specifica se sull'etichetta della scheda attiva viene visualizzato il pulsante **Chiudi.**

```
BOOL m_bActiveTabCloseButton;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, l'etichetta della scheda attiva visualizzerà un pulsante **Chiudi.** Il pulsante **Chiudi** verrà rimosso dall'angolo superiore destro dell'area della scheda. In caso contrario, l'etichetta della scheda attiva non visualizzerà un pulsante **Chiudi.** Il pulsante **Chiudi** verrà visualizzato nell'angolo in alto a destra dell'area della scheda.

## <a name="cmditabinfom_bautocolor"></a><a name="m_bautocolor"></a>CMDITabInfo::m_bAutoColor

Specifica se ogni scheda MDI ha un proprio colore.

```
BOOL m_bAutoColor;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, ogni scheda avrà il proprio colore. Il set di colori è gestito dalla libreria MFC. In caso contrario, le schede vengono visualizzate in bianco. Il valore predefinito è FALSE.

## <a name="cmditabinfom_bdocumentmenu"></a><a name="m_bdocumentmenu"></a>CMDITabInfo::m_bDocumentMenu

Specifica se ogni scheda visualizza un menu a comparsa che mostra un elenco di documenti aperti sul bordo destro dell'area della scheda.

```
BOOL m_bDocumentMenu;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, ogni finestra di scheda visualizza un menu a comparsa che mostra un elenco di documenti aperti sul bordo destro dell'area della scheda; In caso contrario, nella finestra della scheda vengono visualizzati i pulsanti di scorrimento sul bordo destro dell'area della scheda. Il valore predefinito è FALSE.

## <a name="cmditabinfom_benabletabswap"></a><a name="m_benabletabswap"></a>CMDITabInfo::m_bEnableTabSwap

Specifica se l'utente può scambiare le posizioni delle schede mediante trascinamento.

```
BOOL m_bEnableTabSwap;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, l'utente può modificare le posizioni delle schede trascinando le schede. In caso contrario, l'utente non può modificare le posizioni delle schede. Il valore predefinito è TRUE.

## <a name="cmditabinfom_bflatframe"></a><a name="m_bflatframe"></a>CMDITabInfo::m_bFlatFrame

Specifica se ogni finestra della scheda dispone di una cornice piatta.

```
BOOL m_bFlatFrame;
```

## <a name="cmditabinfom_btabclosebutton"></a><a name="m_btabclosebutton"></a>CMDITabInfo::m_bTabCloseButton

Specifica se in ogni finestra della scheda viene visualizzato un pulsante **Chiudi.**

```
BOOL m_bTabCloseButton;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, ogni finestra della scheda visualizza il pulsante **Chiudi** sul bordo destro della scheda. **Close** Il valore predefinito è TRUE.

## <a name="cmditabinfom_btabcustomtooltips"></a><a name="m_btabcustomtooltips"></a>CMDITabInfo::m_bTabCustomTooltips

Specifica se le schede visualizzano le descrizioni comandi.

```
BOOL m_bTabCustomTooltips;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, l'applicazione invia un messaggio di AFX_WM_ON_GET_TAB_TOOLTIP al frame principale. È possibile gestire questo messaggio utilizzando la macro ON_REGISTERED_MESSAGE.

## <a name="cmditabinfom_btabicons"></a><a name="m_btabicons"></a>CMDITabInfo::m_bTabIcons

Specifica se visualizzare le icone nelle schede MDI.

```
BOOL m_bTabIcons;
```

### <a name="remarks"></a>Osservazioni

Se TRUE, le icone vengono visualizzate in ogni scheda MDI. In caso contrario, le icone non vengono visualizzate nelle schede. Il valore predefinito è FALSE.

## <a name="cmditabinfom_ntabbordersize"></a><a name="m_ntabbordersize"></a>CMDITabInfo::m_nTabBorderSize

Specifica le dimensioni del bordo, in pixel, di ogni finestra della scheda.

```
int m_nTabBorderSize;
```

### <a name="remarks"></a>Osservazioni

[CMFCVisualManager::GetMDITabsTabsSize](../../mfc/reference/cmfcvisualmanager-class.md#getmditabsborderssize) restituisce il valore predefinito.

## <a name="cmditabinfom_style"></a><a name="m_style"></a>CMDITabInfo::m_style

Specifica lo stile delle etichette delle schede.

```
CMFCTabCtrl::Style m_style
```

### <a name="remarks"></a>Osservazioni

Specificare uno dei seguenti stili per le etichette delle schede:

|||
|-|-|
|STYLE_3D|Stile 3D.  |
|STYLE_3D_ONENOTE|Stile di Microsoft OneNote.  |
|STYLE_3D_VS2005|Stile di Microsoft Visual Studio 2005.  |
|STYLE_3D_SCROLLED|Stile 3D con etichette a schede rettangolari.  |
|STYLE_FLAT_SHARED_HORZ_SCROLL|Stile piatto con barra di scorrimento orizzontale condivisa.  |
|STYLE_3D_ROUNDED_SCROLL|Stile 3D con etichette a schede rotonde.  |

## <a name="cmditabinfom_tablocation"></a><a name="m_tablocation"></a>CMDITabInfo::m_tabLocation

Specifica se le etichette delle schede si trovano nella parte superiore o inferiore della pagina.

```
CMFCTabCtrl::Location m_tabLocation;
```

### <a name="remarks"></a>Osservazioni

Applicare alle schede uno dei seguenti flag di posizione:

- LOCATION_BOTTOM: le etichette delle schede si trovano nella parte inferiore della pagina.

- LOCATION_TOP: le etichette delle schede si trovano nella parte superiore della pagina

## <a name="cmditabinfoserialize"></a><a name="serialize"></a>CMDITabInfo::Serialize

Legge o scrive questo oggetto da un archivio o in un archivio.

```
void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*Ar*<br/>
[in] Oggetto [Classe CArchive](../../mfc/reference/carchive-class.md) da serializzare.

## <a name="see-also"></a>Vedere anche

[CmDIFrameWndEx (classe)](../../mfc/reference/cmdiframewndex-class.md)<br/>
[Gruppi a schede MDI](../../mfc/mdi-tabbed-groups.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
