---
title: CMFCRibbonQuickAccessToolBarDefaultState (classe)
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
ms.openlocfilehash: 56219e8ed1833f4b448ec6ffd3c16e9db3c66ada
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368879"
---
# <a name="cmfcribbonquickaccesstoolbardefaultstate-class"></a>CMFCRibbonQuickAccessToolBarDefaultState (classe)

Classe helper che gestisce lo stato predefinito per la barra di accesso rapido posizionata sulla barra multifunzione ( [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)).

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonQuickAccessToolBarDefaultState
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState](#cmfcribbonquickaccesstoolbardefaultstate)|Costruisce un oggetto `CMFCRibbonQuickAccessToolbarDefaultState`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand)|Aggiunge un comando allo stato predefinito per la barra di accesso rapido. Questa operazione non modifica la barra degli strumenti in sé.|
|[CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom](#copyfrom)|Copia le proprietà di una barra di accesso rapido in un'altra.|
|[CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll](#removeall)|Rimuove tutti i comandi dalla barra di accesso rapido. Questa operazione non modifica la barra degli strumenti in sé.|

## <a name="remarks"></a>Osservazioni

Dopo aver creato la barra di accesso rapido nell'applicazione, è consigliabile impostarne lo stato predefinito chiamando [CMFCRibbonBar::SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#setquickaccessdefaultstate). Questo stato predefinito viene ripristinato quando un utente fa clic sul pulsante **Reimposta** nella pagina **Personalizza** della finestra di dialogo **Opzioni** dell'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCRibbonQuickAccessToolbarDefaultState` costruire un oggetto della classe e come aggiungere un comando allo stato predefinito per la barra di accesso rapido.

[!code-cpp[NVC_MFC_RibbonApp#21](../../mfc/reference/codesnippet/cpp/cmfcribbonquickaccesstoolbardefaultstate-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonquickaccesstoolbar.h

## <a name="cmfcribbonquickaccesstoolbardefaultstateaddcommand"></a><a name="addcommand"></a>CMFCRibbonQuickAccessToolBarDefaultState::AddCommand

Aggiunge un comando allo stato predefinito per la barra di accesso rapido.

```
void AddCommand(
    UINT uiCmd,
    BOOL bIsVisible=TRUE);
```

### <a name="parameters"></a>Parametri

*[in] uiCmd*<br/>
Specifica l'ID del comando.

*[in] bIsVisible*<br/>
Imposta la visibilità del comando quando la barra di accesso rapido è nello stato predefinito.

### <a name="remarks"></a>Osservazioni

L'aggiunta di un comando per il CMFCRibbonQuickAccessToolBarDefaultState consente di ottenere tre risultati. In primo luogo, ogni comando aggiunto è elencato nell'elenco a discesa sul lato destro della barra di accesso rapido. In questo modo, un utente può facilmente aggiungere o rimuovere tale comando dalla barra di accesso rapido. In secondo luogo, la barra di accesso rapido viene reimpostata per visualizzare solo i comandi elencati come visibili nello stato predefinito quando l'utente fa clic sul pulsante **Reimposta** nella finestra di dialogo **Personalizza.** In terzo luogo, se non è stato chiamato [CMFCRibbonBar::SetQuickAccessCommands](../../mfc/reference/cmfcribbonbar-class.md#setquickaccesscommands), la barra di accesso rapido utilizza i comandi visibili da questo elenco come comandi visibili predefiniti la prima volta che un utente esegue l'applicazione. Dopo aver aggiunto tutti i comandi desiderati, chiamare [CMFCRibbonBar::SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#setquickaccessdefaultstate) per impostare questa istanza come stato predefinito per la barra di accesso rapido della barra multifunzione.

## <a name="cmfcribbonquickaccesstoolbardefaultstatecopyfrom"></a><a name="copyfrom"></a>CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom

Copia le proprietà di una barra di accesso rapido in un'altra.

```
void CopyFrom(const CMFCRibbonQuickAccessToolBarDefaultState& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] Riferimento all'oggetto `CMFCRibbonQuickAccessToolBarDefaultState` di origine da cui copiare.

### <a name="remarks"></a>Osservazioni

Questo metodo copia ogni comando `CMFCRibbonQuickAccessToolBarDefaultState` dall'oggetto di origine a questo oggetto utilizzando il [CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand) metodo.

## <a name="cmfcribbonquickaccesstoolbardefaultstatecmfcribbonquickaccesstoolbardefaultstate"></a><a name="cmfcribbonquickaccesstoolbardefaultstate"></a>CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState

Costruisce l'oggetto stato predefinito della barra di accesso rapido.

```
CMFCRibbonQuickAccessToolBarDefaultState();
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, l'elenco dei comandi contenuti nella nuova istanza di [CMFRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md) è vuoto.

## <a name="cmfcribbonquickaccesstoolbardefaultstateremoveall"></a><a name="removeall"></a>CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll

Cancella l'elenco dei comandi predefiniti nella barra di accesso rapido.

```
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Questa funzione rimuove da questa istanza tutti i comandi che le chiamate precedenti a [CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand) aggiunto.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
