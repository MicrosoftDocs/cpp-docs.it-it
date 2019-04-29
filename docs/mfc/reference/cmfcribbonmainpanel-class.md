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
ms.openlocfilehash: e4bd1ab8cffc87d5079518cf9a1d6e430ca40fd9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62403594"
---
# <a name="cmfcribbonmainpanel-class"></a>Classe CMFCRibbonMainPanel

Implementa un pannello della barra multifunzione che viene visualizzato quando si sceglie la [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md).

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
|[CMFCRibbonMainPanel::Add](#add)|Aggiunge un elemento della barra multifunzione nel riquadro a sinistra del pannello pulsante dell'applicazione. (Esegue l'override [cmfcribbonpanel:: Add](../../mfc/reference/cmfcribbonpanel-class.md#add).)|
|[CMFCRibbonMainPanel::AddRecentFilesList](#addrecentfileslist)|Aggiunge una stringa di testo al menu dell'elenco di file recenti.|
|[CMFCRibbonMainPanel::AddToBottom](#addtobottom)|Aggiunge un elemento della barra multifunzione nel riquadro inferiore del pannello dell'applicazione della barra multifunzione.|
|[CMFCRibbonMainPanel::AddToRight](#addtoright)|Aggiunge un elemento della barra multifunzione nel riquadro a destra del pannello del pulsante dell'applicazione.|
|`CMFCRibbonMainPanel::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCRibbonMainPanel::GetCommandsFrame](#getcommandsframe)|Restituisce un rettangolo che rappresenta l'area del pannello principale della barra multifunzione.|
|`CMFCRibbonMainPanel::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|

## <a name="remarks"></a>Note

Il framework Visualizza il `CMFCRibbonMainPanel` quando si apre il pannello dell'applicazione. Include tre riquadri:

- Il riquadro a sinistra contiene comandi associati a file, ad esempio **aperto**, **salvare**, **stampa**, e **chiudere**. Per aggiungere un comando in questo riquadro, chiamare [CMFCRibbonMainPanel::Add](#add).

- Il riquadro destro contiene le opzioni che modificano il comando che si fa clic nel riquadro sinistro. Ad esempio, se si sceglie **Salva con nome** nel riquadro sinistro, riquadro di destra è possibile visualizzare i tipi di file disponibili. Per aggiungere un elemento in questo riquadro, chiamare [CMFCRibbonMainPanel::AddToRight](#addtoright).

- Nel riquadro inferiore contiene pulsanti che consentono di modificare le impostazioni dell'applicazione e di uscire dal programma. Per aggiungere un elemento in questo riquadro, chiamare [CMFCRibbonMainPanel::AddToBottom](#addtobottom).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)

[CMFCRibbonMainPanel](../../mfc/reference/cmfcribbonmainpanel-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonMainPanel.h

##  <a name="add"></a>  CMFCRibbonMainPanel::Add

Aggiunge un elemento della barra multifunzione nel riquadro a sinistra del pannello pulsante dell'applicazione.

```
virtual void Add(CMFCRibbonBaseElement* pElem);
```

### <a name="parameters"></a>Parametri

*pElem*<br/>
[in, out] Un puntatore all'elemento da aggiungere al pannello principale della barra multifunzione.

### <a name="remarks"></a>Note

Aggiunge un elemento della barra multifunzione al pannello. Elementi aggiunti con questo metodo si troverà nella colonna a sinistra del pannello principale.

##  <a name="addrecentfileslist"></a>  CMFCRibbonMainPanel::AddRecentFilesList

Aggiunge una stringa di testo al menu dell'elenco di file recenti.

```
void AddRecentFilesList(
    LPCTSTR lpszLabel,
    int nWidth = 300);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
Specifica la stringa da aggiungere all'elenco dei file recenti.

*nWidth*<br/>
Specifica la larghezza, in pixel, del Pannello di elenco di file recenti.

### <a name="remarks"></a>Note

##  <a name="addtobottom"></a>  CMFCRibbonMainPanel::AddToBottom

Aggiunge un elemento della barra multifunzione nel riquadro inferiore del pannello dell'applicazione della barra multifunzione.

```
void AddToBottom(CMFCRibbonMainPanelButton* pElem);
```

### <a name="parameters"></a>Parametri

*pElem*<br/>
[in, out] Un puntatore all'elemento da aggiungere alla parte inferiore del pannello principale della barra multifunzione.

### <a name="remarks"></a>Note

##  <a name="addtoright"></a>  CMFCRibbonMainPanel::AddToRight

Aggiunge un elemento della barra multifunzione nel riquadro a destra del pannello del pulsante dell'applicazione.

```
void AddToRight(
    CMFCRibbonBaseElement* pElem,
    int nWidth = 300);
```

### <a name="parameters"></a>Parametri

*pElem*<br/>
Puntatore a un elemento della barra multifunzione da aggiungere alla destra del riquadro principale.

*nWidth*<br/>
Specifica la larghezza, in pixel, del riquadro a destra.

### <a name="remarks"></a>Note

Utilizzare questa funzione per aggiungere un elemento della barra multifunzione al pannello di destra. Il pannello di destra visualizza in genere l'elenco dei file recenti, ma è possibile aggiungere qualsiasi altro elemento della barra multifunzione qui.

##  <a name="getcommandsframe"></a>  CMFCRibbonMainPanel::GetCommandsFrame

Restituisce un rettangolo che rappresenta l'area del pannello principale della barra multifunzione.

```
CRect GetCommandsFrame() const;
```

### <a name="return-value"></a>Valore restituito

Rettangolo che rappresenta l'area del pannello principale della barra multifunzione.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)
