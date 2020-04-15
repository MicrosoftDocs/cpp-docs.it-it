---
title: Classe CMFCRibbonMainPanel
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonMainPanel
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel::Add
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel::AddRecentFilesList
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel::AddToBottom
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel::AddToRight
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel::GetCommandsFrame
helpviewer_keywords:
- CMFCRibbonMainPanel [MFC], Add
- CMFCRibbonMainPanel [MFC], AddRecentFilesList
- CMFCRibbonMainPanel [MFC], AddToBottom
- CMFCRibbonMainPanel [MFC], AddToRight
- CMFCRibbonMainPanel [MFC], GetCommandsFrame
ms.assetid: 1af78798-5e75-4365-9c81-a54aa5679602
ms.openlocfilehash: 1458039c25f2379b3c3db553b2010e9391df28db
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375101"
---
# <a name="cmfcribbonmainpanel-class"></a>Classe CMFCRibbonMainPanel

Implementa un gruppo della barra multifunzione che viene visualizzato quando si fa clic su [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md).

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonMainPanel : public CMFCRibbonPanel
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCRibbonMainPanel::CMFCRibbonMainPanel`|Costruttore predefinito.|
|`CMFCRibbonMainPanel::~CMFCRibbonMainPanel`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonMainPanel::Add](#add)|Aggiunge un elemento della barra multifunzione al riquadro sinistro del gruppo di pulsanti dell'applicazione. (Esegue l'override [di CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).)|
|[CMFCRibbonMainPanel::AddRecentFilesList](#addrecentfileslist)|Aggiunge una stringa di testo al menu dell'elenco dei file recenti.|
|[CMFCRibbonMainPanel::AddToBottom](#addtobottom)|Aggiunge un elemento della barra multifunzione nel riquadro inferiore del gruppo di applicazioni della barra multifunzione.|
|[CMFCRibbonMainPanel::AddToRight](#addtoright)|Aggiunge un elemento della barra multifunzione al riquadro destro del gruppo di pulsanti dell'applicazione.|
|`CMFCRibbonMainPanel::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCRibbonMainPanel::GetCommandsFrame](#getcommandsframe)|Restituisce un rettangolo che rappresenta l'area del gruppo principale della barra multifunzione.|
|`CMFCRibbonMainPanel::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|

## <a name="remarks"></a>Osservazioni

Il framework `CMFCRibbonMainPanel` visualizza l'oggetto quando si apre il pannello dell'applicazione. Contiene tre riquadri:

- Il riquadro sinistro contiene i comandi associati ai file, ad esempio **Apri**, **Salva**, **Stampa**e **Chiudi**. Per aggiungere un comando a questo riquadro, chiamare [CMFCRibbonMainPanel::Add](#add).

- Il riquadro di destra contiene le opzioni che modificano il comando su cui si fa clic nel riquadro sinistro. Ad esempio, se si fa clic su **Salva con nome** nel riquadro sinistro, nel riquadro destro è possibile visualizzare i tipi di file disponibili. Per aggiungere un elemento a questo riquadro, chiamare [CMFCRibbonMainPanel::AddToRight](#addtoright).

- Il riquadro inferiore contiene pulsanti che consentono di modificare le impostazioni dell'applicazione e di uscire dal programma. Per aggiungere un elemento a questo riquadro, chiamare [CMFCRibbonMainPanel::AddToBottom](#addtobottom).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)

[CMFCRibbonMainPanel](../../mfc/reference/cmfcribbonmainpanel-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonMainPanel.h

## <a name="cmfcribbonmainpaneladd"></a><a name="add"></a>CMFCRibbonMainPanel::Add

Aggiunge un elemento della barra multifunzione al riquadro sinistro del gruppo di pulsanti dell'applicazione.

```
virtual void Add(CMFCRibbonBaseElement* pElem);
```

### <a name="parameters"></a>Parametri

*pElem*<br/>
[in, out] Puntatore all'elemento della barra multifunzione da aggiungere al gruppo principale.

### <a name="remarks"></a>Osservazioni

Aggiunge un elemento della barra multifunzione al gruppo. Gli elementi aggiunti utilizzando questo metodo si troveranno nella colonna sinistra del pannello principale.

## <a name="cmfcribbonmainpaneladdrecentfileslist"></a><a name="addrecentfileslist"></a>CMFCRibbonMainPanel::AddRecentFilesList

Aggiunge una stringa di testo al menu dell'elenco dei file recenti.

```
void AddRecentFilesList(
    LPCTSTR lpszLabel,
    int nWidth = 300);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
Specifica la stringa da aggiungere all'elenco dei file recenti.

*nLarghezza*<br/>
Specifica la larghezza, in pixel, del pannello dell'elenco dei file recenti.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonmainpaneladdtobottom"></a><a name="addtobottom"></a>CMFCRibbonMainPanel::AddToBottom

Aggiunge un elemento della barra multifunzione nel riquadro inferiore del gruppo di applicazioni della barra multifunzione.

```
void AddToBottom(CMFCRibbonMainPanelButton* pElem);
```

### <a name="parameters"></a>Parametri

*pElem*<br/>
[in, out] Puntatore all'elemento della barra multifunzione da aggiungere alla parte inferiore del gruppo principale.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonmainpaneladdtoright"></a><a name="addtoright"></a>CMFCRibbonMainPanel::AddToRight

Aggiunge un elemento della barra multifunzione al riquadro destro del gruppo di pulsanti dell'applicazione.

```
void AddToRight(
    CMFCRibbonBaseElement* pElem,
    int nWidth = 300);
```

### <a name="parameters"></a>Parametri

*pElem*<br/>
Puntatore a un elemento della barra multifunzione da aggiungere al lato destro del gruppo principale.

*nLarghezza*<br/>
Specifica la larghezza, in pixel, del pannello di destra.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per aggiungere un elemento della barra multifunzione al gruppo di destra. Il gruppo a destra in genere visualizza l'elenco dei file recenti, ma è possibile aggiungere qualsiasi altro elemento della barra multifunzione.

## <a name="cmfcribbonmainpanelgetcommandsframe"></a><a name="getcommandsframe"></a>CMFCRibbonMainPanel::GetCommandsFrame

Restituisce un rettangolo che rappresenta l'area del gruppo principale della barra multifunzione.

```
CRect GetCommandsFrame() const;
```

### <a name="return-value"></a>Valore restituito

Rettangolo che rappresenta l'area del gruppo principale della barra multifunzione.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonPanel (classe)](../../mfc/reference/cmfcribbonpanel-class.md)
