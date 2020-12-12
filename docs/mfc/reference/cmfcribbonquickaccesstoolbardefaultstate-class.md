---
description: 'Altre informazioni su: classe CMFCRibbonQuickAccessToolBarDefaultState'
title: Classe CMFCRibbonQuickAccessToolBarDefaultState
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonQuickAccessToolBarDefaultState
- AFXRIBBONQUICKACCESSTOOLBAR/CMFCRibbonQuickAccessToolBarDefaultState
- AFXRIBBONQUICKACCESSTOOLBAR/CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState
- AFXRIBBONQUICKACCESSTOOLBAR/CMFCRibbonQuickAccessToolBarDefaultState::AddCommand
- AFXRIBBONQUICKACCESSTOOLBAR/CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom
- AFXRIBBONQUICKACCESSTOOLBAR/CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll
helpviewer_keywords:
- CMFCRibbonQuickAccessToolBarDefaultState [MFC], CMFCRibbonQuickAccessToolBarDefaultState
- CMFCRibbonQuickAccessToolBarDefaultState [MFC], AddCommand
- CMFCRibbonQuickAccessToolBarDefaultState [MFC], CopyFrom
- CMFCRibbonQuickAccessToolBarDefaultState [MFC], RemoveAll
ms.assetid: eca99200-b87b-47ba-b2e8-2f3f2444b176
ms.openlocfilehash: d6cd0c32cd8698259de0a78a6a6a7dc42012e92f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321803"
---
# <a name="cmfcribbonquickaccesstoolbardefaultstate-class"></a>Classe CMFCRibbonQuickAccessToolBarDefaultState

Classe helper che gestisce lo stato predefinito per la barra di accesso rapido posizionata sulla barra multifunzione ( [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)).

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonQuickAccessToolBarDefaultState
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonQuickAccessToolBarDefaultState:: CMFCRibbonQuickAccessToolBarDefaultState](#cmfcribbonquickaccesstoolbardefaultstate)|Costruisce un oggetto `CMFCRibbonQuickAccessToolbarDefaultState`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCRibbonQuickAccessToolBarDefaultState:: AddCommand](#addcommand)|Aggiunge un comando allo stato predefinito per la barra di accesso rapido. Questa operazione non comporta la modifica della barra degli strumenti.|
|[CMFCRibbonQuickAccessToolBarDefaultState:: CopyFrom](#copyfrom)|Copia le proprietà di una barra di accesso rapido a un'altra.|
|[CMFCRibbonQuickAccessToolBarDefaultState:: RemoveAll](#removeall)|Rimuove tutti i comandi dalla barra di accesso rapido. Questa operazione non comporta la modifica della barra degli strumenti.|

## <a name="remarks"></a>Commenti

Dopo aver creato la barra di accesso rapido nell'applicazione, è consigliabile impostare lo stato predefinito chiamando [CMFCRibbonBar:: SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#setquickaccessdefaultstate). Questo stato predefinito viene ripristinato quando un utente fa clic sul pulsante **Reimposta** nella pagina **Personalizza** della finestra di dialogo **Opzioni** dell'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCRibbonQuickAccessToolbarDefaultState` classe e come aggiungere un comando allo stato predefinito per la barra di accesso rapido.

[!code-cpp[NVC_MFC_RibbonApp#21](../../mfc/reference/codesnippet/cpp/cmfcribbonquickaccesstoolbardefaultstate-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonquickaccesstoolbar. h

## <a name="cmfcribbonquickaccesstoolbardefaultstateaddcommand"></a><a name="addcommand"></a> CMFCRibbonQuickAccessToolBarDefaultState:: AddCommand

Aggiunge un comando allo stato predefinito per la barra di accesso rapido.

```cpp
void AddCommand(
    UINT uiCmd,
    BOOL bIsVisible=TRUE);
```

### <a name="parameters"></a>Parametri

*[in] uiCmd*<br/>
Specifica l'ID di comando.

*[in] bIsVisible*<br/>
Imposta la visibilità del comando quando la barra di accesso rapido è nello stato predefinito.

### <a name="remarks"></a>Commenti

L'aggiunta di un comando a CMFCRibbonQuickAccessToolBarDefaultState consente di ottenere tre risultati. Per prima cosa, ogni comando aggiunto viene elencato nell'elenco a discesa sul lato destro della barra di accesso rapido. In questo modo, un utente può aggiungere o rimuovere facilmente il comando dalla barra di accesso rapido. In secondo luogo, la barra di accesso rapido viene reimpostata in modo da visualizzare solo i comandi elencati come visibili nello stato predefinito quando l'utente fa clic sul pulsante **Reimposta** nella finestra di dialogo **Personalizza** . Terzo, se non è stato chiamato [CMFCRibbonBar:: SetQuickAccessCommands](../../mfc/reference/cmfcribbonbar-class.md#setquickaccesscommands), la barra di accesso rapido usa i comandi visibili da questo elenco come comandi visibili predefiniti la prima volta che un utente esegue l'applicazione. Dopo aver aggiunto tutti i comandi desiderati, chiamare [CMFCRibbonBar:: SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#setquickaccessdefaultstate) per impostare questa istanza come stato predefinito per la barra di accesso rapido della barra multifunzione.

## <a name="cmfcribbonquickaccesstoolbardefaultstatecopyfrom"></a><a name="copyfrom"></a> CMFCRibbonQuickAccessToolBarDefaultState:: CopyFrom

Copia le proprietà di una barra di accesso rapido a un'altra.

```cpp
void CopyFrom(const CMFCRibbonQuickAccessToolBarDefaultState& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
in Riferimento all' `CMFCRibbonQuickAccessToolBarDefaultState` oggetto di origine da cui eseguire la copia.

### <a name="remarks"></a>Commenti

Questo metodo copia ogni comando dall'oggetto di origine `CMFCRibbonQuickAccessToolBarDefaultState` all'oggetto usando il metodo [CMFCRibbonQuickAccessToolBarDefaultState:: AddCommand](#addcommand) .

## <a name="cmfcribbonquickaccesstoolbardefaultstatecmfcribbonquickaccesstoolbardefaultstate"></a><a name="cmfcribbonquickaccesstoolbardefaultstate"></a> CMFCRibbonQuickAccessToolBarDefaultState:: CMFCRibbonQuickAccessToolBarDefaultState

Costruisce l'oggetto di stato predefinito della barra di accesso rapido.

```
CMFCRibbonQuickAccessToolBarDefaultState();
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, l'elenco dei comandi contenuti nella nuova istanza di [CMFRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md) è vuoto.

## <a name="cmfcribbonquickaccesstoolbardefaultstateremoveall"></a><a name="removeall"></a> CMFCRibbonQuickAccessToolBarDefaultState:: RemoveAll

Cancella l'elenco dei comandi predefiniti nella barra di accesso rapido.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Commenti

Questa funzione rimuove da questa istanza tutti i comandi che le chiamate precedenti a [CMFCRibbonQuickAccessToolBarDefaultState:: AddCommand](#addcommand) hanno aggiunto.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
