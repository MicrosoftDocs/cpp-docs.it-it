---
description: 'Altre informazioni su: classe CMFCRibbonMainPanel'
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
ms.openlocfilehash: 823a1ce8a8684ca791f838346a1fb50727096a62
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321811"
---
# <a name="cmfcribbonmainpanel-class"></a>Classe CMFCRibbonMainPanel

Implementa un pannello della barra multifunzione visualizzato quando si fa clic su [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md).

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonMainPanel : public CMFCRibbonPanel
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCRibbonMainPanel::CMFCRibbonMainPanel`|Costruttore predefinito.|
|`CMFCRibbonMainPanel::~CMFCRibbonMainPanel`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonMainPanel:: Add](#add)|Aggiunge un elemento della barra multifunzione al riquadro sinistro del pannello del pulsante dell'applicazione. Esegue l'override di [CMFCRibbonPanel:: Add](../../mfc/reference/cmfcribbonpanel-class.md#add).|
|[CMFCRibbonMainPanel:: AddRecentFilesList](#addrecentfileslist)|Aggiunge una stringa di testo al menu elenco dei file recenti.|
|[CMFCRibbonMainPanel:: AddToBottom](#addtobottom)|Aggiunge un elemento della barra multifunzione al riquadro inferiore del pannello applicazione della barra multifunzione.|
|[CMFCRibbonMainPanel:: AddToRight](#addtoright)|Aggiunge un elemento della barra multifunzione al riquadro destro del pannello del pulsante dell'applicazione.|
|`CMFCRibbonMainPanel::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCRibbonMainPanel:: GetCommandsFrame](#getcommandsframe)|Restituisce un rettangolo che rappresenta l'area del pannello principale della barra multifunzione.|
|`CMFCRibbonMainPanel::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|

## <a name="remarks"></a>Commenti

Il Framework Visualizza `CMFCRibbonMainPanel` quando si apre il pannello dell'applicazione. Contiene tre riquadri:

- Il riquadro sinistro contiene i comandi associati ai file, ad esempio **Apri**, **Salva**, **stampa** e **Chiudi**. Per aggiungere un comando a questo riquadro, chiamare [CMFCRibbonMainPanel:: Add](#add).

- Il riquadro destro contiene opzioni che consentono di modificare il comando che si fa clic nel riquadro sinistro. Se, ad esempio, si fa clic su **Salva con nome** nel riquadro sinistro, il riquadro destro può visualizzare i tipi di file disponibili. Per aggiungere un elemento a questo riquadro, chiamare [CMFCRibbonMainPanel:: AddToRight](#addtoright).

- Il riquadro inferiore contiene i pulsanti che consentono di modificare le impostazioni dell'applicazione e di uscire dal programma. Per aggiungere un elemento a questo riquadro, chiamare [CMFCRibbonMainPanel:: AddToBottom](#addtobottom).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)

[CMFCRibbonMainPanel](../../mfc/reference/cmfcribbonmainpanel-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonMainPanel. h

## <a name="cmfcribbonmainpaneladd"></a><a name="add"></a> CMFCRibbonMainPanel:: Add

Aggiunge un elemento della barra multifunzione al riquadro sinistro del pannello del pulsante dell'applicazione.

```
virtual void Add(CMFCRibbonBaseElement* pElem);
```

### <a name="parameters"></a>Parametri

*pElet*<br/>
[in, out] Puntatore all'elemento della barra multifunzione da aggiungere al pannello principale.

### <a name="remarks"></a>Commenti

Aggiunge un elemento della barra multifunzione al pannello. Gli elementi aggiunti utilizzando questo metodo verranno posizionati nella colonna sinistra del pannello principale.

## <a name="cmfcribbonmainpaneladdrecentfileslist"></a><a name="addrecentfileslist"></a> CMFCRibbonMainPanel:: AddRecentFilesList

Aggiunge una stringa di testo al menu elenco dei file recenti.

```cpp
void AddRecentFilesList(
    LPCTSTR lpszLabel,
    int nWidth = 300);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
Specifica la stringa da aggiungere all'elenco dei file recenti.

*nWidth*<br/>
Specifica la larghezza, in pixel, del pannello elenco dei file recenti.

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonmainpaneladdtobottom"></a><a name="addtobottom"></a> CMFCRibbonMainPanel:: AddToBottom

Aggiunge un elemento della barra multifunzione al riquadro inferiore del pannello applicazione della barra multifunzione.

```cpp
void AddToBottom(CMFCRibbonMainPanelButton* pElem);
```

### <a name="parameters"></a>Parametri

*pElet*<br/>
[in, out] Puntatore all'elemento della barra multifunzione da aggiungere alla fine del pannello principale.

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonmainpaneladdtoright"></a><a name="addtoright"></a> CMFCRibbonMainPanel:: AddToRight

Aggiunge un elemento della barra multifunzione al riquadro destro del pannello del pulsante dell'applicazione.

```cpp
void AddToRight(
    CMFCRibbonBaseElement* pElem,
    int nWidth = 300);
```

### <a name="parameters"></a>Parametri

*pElet*<br/>
Puntatore a un elemento della barra multifunzione da aggiungere al lato destro del pannello principale.

*nWidth*<br/>
Specifica la larghezza, in pixel, del riquadro di destra.

### <a name="remarks"></a>Commenti

Usare questa funzione per aggiungere un elemento della barra multifunzione al pannello di destra. Il riquadro di destra Visualizza in genere l'elenco dei file recenti, ma è possibile aggiungere altri elementi della barra multifunzione qui.

## <a name="cmfcribbonmainpanelgetcommandsframe"></a><a name="getcommandsframe"></a> CMFCRibbonMainPanel:: GetCommandsFrame

Restituisce un rettangolo che rappresenta l'area del pannello principale della barra multifunzione.

```
CRect GetCommandsFrame() const;
```

### <a name="return-value"></a>Valore restituito

Rettangolo che rappresenta l'area del pannello principale della barra multifunzione.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)
