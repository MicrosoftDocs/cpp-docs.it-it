---
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
ms.openlocfilehash: 07af26c78cc3316dbfcd33a5b28e5230a82a2e10
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50445097"
---
# <a name="cmfcribbonquickaccesstoolbardefaultstate-class"></a>Classe CMFCRibbonQuickAccessToolBarDefaultState

Una classe helper che gestisce lo stato predefinito per la barra di accesso rapido che è posizionato sulla barra multifunzione ( [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)).

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
|[CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand)|Aggiunge un comando allo stato predefinito per la barra di accesso rapido. Ciò non modifica la stessa barra degli strumenti.|
|[CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom](#copyfrom)|Copia le proprietà di una barra di accesso rapido a un altro.|
|[CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll](#removeall)|Rimuove tutti i comandi dalla barra di accesso rapido. Ciò non modifica la stessa barra degli strumenti.|

## <a name="remarks"></a>Note

Dopo aver creato la barra di accesso rapido nell'applicazione, è consigliabile impostare lo stato predefinito chiamando [CMFCRibbonBar::SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#setquickaccessdefaultstate). Questo stato predefinito viene ripristinato quando un utente fa clic il **reimpostare** pulsante il **Personalizza** pagina dell'applicazione **opzioni** nella finestra di dialogo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCRibbonQuickAccessToolbarDefaultState` classe e su come aggiungere un comando allo stato predefinito per la barra di accesso rapido.

[!code-cpp[NVC_MFC_RibbonApp#21](../../mfc/reference/codesnippet/cpp/cmfcribbonquickaccesstoolbardefaultstate-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribbonquickaccesstoolbar.h

##  <a name="addcommand"></a>  CMFCRibbonQuickAccessToolBarDefaultState::AddCommand

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

### <a name="remarks"></a>Note

Aggiunta di un comando per il CMFCRibbonQuickAccessToolBarDefaultState esegue tre risultati. In primo luogo, ogni comando aggiunto è elencato nell'elenco a discesa sul lato destro della barra di accesso rapido. In questo modo, un utente può facilmente aggiungere o rimuovere tale comando dalla barra di accesso rapido. In secondo luogo, la barra di accesso rapido viene reimpostata per mostrare come visibile solo per i comandi elencati nello stato predefinito quando l'utente fa clic il **reimpostare** pulsante il **Personalizza** nella finestra di dialogo. Terzo, se non è stato chiamato [CMFCRibbonBar::SetQuickAccessCommands](../../mfc/reference/cmfcribbonbar-class.md#setquickaccesscommands), barra di accesso rapido utilizza i comandi visibili nell'elenco dei comandi visibile predefinita la prima volta un utente esegue l'applicazione. Dopo aver aggiunto tutti i comandi che si desidera, chiamare [CMFCRibbonBar::SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#setquickaccessdefaultstate) per impostare questa istanza come lo stato predefinito per la barra di accesso rapido di tale barra multifunzione.

##  <a name="copyfrom"></a>  CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom

Copia le proprietà di una barra di accesso rapido a un altro.

```
void CopyFrom(const CMFCRibbonQuickAccessToolBarDefaultState& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] Un riferimento all'origine `CMFCRibbonQuickAccessToolBarDefaultState` da copiare dall'oggetto.

### <a name="remarks"></a>Note

Questo metodo copia ogni comando dall'origine `CMFCRibbonQuickAccessToolBarDefaultState` oggetti a questo oggetto utilizzando il [CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand) (metodo).

##  <a name="cmfcribbonquickaccesstoolbardefaultstate"></a>  CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState

Costruisce l'oggetto di stato predefinito di barra di accesso rapido.

```
CMFCRibbonQuickAccessToolBarDefaultState();
```

### <a name="remarks"></a>Note

Per impostazione predefinita, l'elenco di comandi che la nuova istanza della [CMFRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md) contiene è vuoto.

##  <a name="removeall"></a>  CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll

Cancella l'elenco di comandi predefinito nella barra di accesso rapido.

```
void RemoveAll();
```

### <a name="remarks"></a>Note

Questa funzione rimuove da questa istanza di tutti i comandi che le chiamate precedenti a [CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand) aggiunto.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)
