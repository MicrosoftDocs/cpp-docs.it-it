---
title: Classe COleCmdUI
ms.date: 09/12/2018
f1_keywords:
- COleCmdUI
- AFXDOCOBJ/COleCmdUI
- AFXDOCOBJ/COleCmdUI::COleCmdUI
- AFXDOCOBJ/COleCmdUI::Enable
- AFXDOCOBJ/COleCmdUI::SetCheck
- AFXDOCOBJ/COleCmdUI::SetText
helpviewer_keywords:
- COleCmdUI [MFC], COleCmdUI
- COleCmdUI [MFC], Enable
- COleCmdUI [MFC], SetCheck
- COleCmdUI [MFC], SetText
ms.assetid: a2d5ce08-6657-45d3-8673-2a9f32d50eec
ms.openlocfilehash: 1b7a6b21a3ad778b4a5ca345b1aaf42875810e4e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376274"
---
# <a name="colecmdui-class"></a>Classe COleCmdUI

Implementa un metodo per MFC per aggiornare lo stato degli oggetti dell'interfaccia utente relativi alle funzionalità dell'applicazione basate su `IOleCommandTarget`.

## <a name="syntax"></a>Sintassi

```
class COleCmdUI : public CCmdUI
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleCmdUI::COleCmdUI](#colecmdui)|Costruisce un oggetto `COleCmdUI`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleCmdUI::Abilitare](#enable)|Imposta o cancella il flag del comando di abilitazione.|
|[COleCmdUI::SetCheck](#setcheck)|Imposta lo stato di un comando di attivazione/disattivazione.|
|[COleCmdUI::SetText](#settext)|Restituisce un nome di testo o una stringa di stato per un comando.|

## <a name="remarks"></a>Osservazioni

In un'applicazione che non è abilitata per DocObjects, quando l'utente visualizza un menu nell'applicazione, MFC elabora UPDATE_COMMAND_UI le notifica. A ogni notifica viene assegnato un oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) che può essere modificato per riflettere lo stato di un comando specifico. Tuttavia, quando l'applicazione è abilitata per DocObjects, `COleCmdUI` MFC elabora le notifiche UPDATE_OLE_COMMAND_UI e assegna oggetti.

`COleCmdUI`consente a un oggetto DocObject di ricevere i comandi che hanno origine nell'interfaccia utente del proprio contenitore (ad esempio FileNew, Open, Print e così via) e consente a un contenitore di ricevere i comandi che hanno origine nell'interfaccia utente di DocObject. Anche `IDispatch` se potrebbe essere utilizzato `IOleCommandTarget` per inviare gli stessi comandi, fornisce un modo più semplice per eseguire query ed eseguire perché si basa su un set standard di comandi, in genere senza argomenti e non sono coinvolte informazioni sul tipo. `COleCmdUI`può essere utilizzato per abilitare, aggiornare e impostare altre proprietà dei comandi dell'interfaccia utente DocObject. Quando si desidera richiamare il comando, chiamare [COleServerDoc::OnExecOleCmd](../../mfc/reference/coleserverdoc-class.md#onexecolecmd).

Per ulteriori informazioni su DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CCmdUI](../../mfc/reference/ccmdui-class.md)

`COleCmdUI`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdocobj.h

## <a name="colecmduicolecmdui"></a><a name="colecmdui"></a>COleCmdUI::COleCmdUI

Costruisce un `COleCmdUI` oggetto associato a un particolare comando dell'interfaccia utente.

```
COleCmdUI(
    OLECMD* rgCmds,
    ULONG cCmds,
    const GUID* m_pGroup);
```

### <a name="parameters"></a>Parametri

*RgCmds (Stati Uniti)*<br/>
Elenco di comandi supportati associati al GUID specificato. La `OLECMD` struttura associa i comandi ai flag di comando.

*cCmds (Informazioni in base ai comandi c*<br/>
Numero di comandi in *rgCmds*.

*pGruppo*<br/>
Puntatore a un GUID che identifica un set di comandi.

### <a name="remarks"></a>Osservazioni

L'oggetto `COleCmdUI` fornisce un'interfaccia a livello di codice per l'aggiornamento di oggetti dell'interfaccia utente DocObject, ad esempio voci di menu o pulsanti della barra di controllo. Gli oggetti dell'interfaccia utente possono essere abilitati, disabilitati, controllati e/o cancellati tramite l'oggetto. `COleCmdUI`

## <a name="colecmduienable"></a><a name="enable"></a>COleCmdUI::Abilitare

Chiamare questa funzione per impostare `COleCmdUI` il flag di comando dell'oggetto su OLECOMDF_ENABLED, che indica l'interfaccia che il comando è disponibile e abilitato, o per cancellare il flag di comando.

```
virtual void Enable(BOOL bOn);
```

### <a name="parameters"></a>Parametri

*Bon*<br/>
Indica se il comando `COleCmdUI` associato all'oggetto deve essere abilitato o disabilitato. Diverso da zero abilita il comando; 0 disabilita il comando.

## <a name="colecmduisetcheck"></a><a name="setcheck"></a>COleCmdUI::SetCheck

Chiamare questa funzione per impostare lo stato di un comando di attivazione/disattivazione.

```
virtual void SetCheck(int nCheck);
```

### <a name="parameters"></a>Parametri

*nControllare*<br/>
Valore che determina lo stato per impostare un comando di attivazione/disattivazione. I valori possibili sono:

|valore|Descrizione|
|-----------|-----------------|
|**1**|Imposta il comando su on.|
|**2**|Imposta il comando su indeterminato; lo stato non può essere determinato perché l'attributo di questo comando è in entrambi gli stati on e off nella selezione pertinente.|
|qualsiasi altro valore|Imposta il comando su off.|

## <a name="colecmduisettext"></a><a name="settext"></a>COleCmdUI::SetText

Chiamare questa funzione per restituire un nome di testo o una stringa di stato per un comando.

```
virtual void SetText(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Puntatore al testo da utilizzare con il comando.

## <a name="see-also"></a>Vedere anche

[Classe CCmdUI](../../mfc/reference/ccmdui-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
