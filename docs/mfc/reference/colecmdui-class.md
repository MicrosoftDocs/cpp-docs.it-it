---
description: 'Altre informazioni su: classe COleCmdUI'
title: Classe COleCmdUI
ms.date: 07/24/2020
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
ms.openlocfilehash: 0fca9d4947b40077658866b6b22a595aee13481c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333446"
---
# <a name="colecmdui-class"></a>Classe COleCmdUI

Implementa un metodo per MFC per aggiornare lo stato degli oggetti dell'interfaccia utente relativi alle funzionalità dell'applicazione basate su `IOleCommandTarget`.

## <a name="syntax"></a>Sintassi

```cpp
class COleCmdUI : public CCmdUI
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleCmdUI:: COleCmdUI](#colecmdui)|Costruisce un oggetto `COleCmdUI`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleCmdUI:: Enable](#enable)|Imposta o deseleziona il flag di abilitazione del comando.|
|[COleCmdUI:: secheck](#setcheck)|Imposta lo stato di un comando di attivazione/disattivazione.|
|[COleCmdUI:: SetText](#settext)|Restituisce un nome di testo o una stringa di stato per un comando.|

## <a name="remarks"></a>Commenti

In un'applicazione che non è abilitata per DocObjects, quando l'utente visualizza un menu nell'applicazione, MFC elabora UPDATE_COMMAND_UI notifiche. A ogni notifica viene assegnato un oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) che può essere modificato in modo da riflettere lo stato di un determinato comando. Tuttavia, quando l'applicazione è abilitata per DocObjects, MFC elabora UPDATE_OLE_COMMAND_UI notifiche e assegna `COleCmdUI` oggetti.

`COleCmdUI` consente a un DocObject di ricevere i comandi che hanno origine nell'interfaccia utente del contenitore (ad esempio FileNew, Open, Print e così via) e consente a un contenitore di ricevere comandi che hanno origine nell'interfaccia utente di DocObject. Sebbene `IDispatch` possa essere usato per inviare gli stessi comandi, `IOleCommandTarget` fornisce un modo più semplice per eseguire query ed eseguire in quanto si basa su un set standard di comandi, in genere senza argomenti, e non sono necessarie informazioni sul tipo. `COleCmdUI` può essere usato per abilitare, aggiornare e impostare altre proprietà dei comandi dell'interfaccia utente di DocObject. Quando si desidera richiamare il comando, chiamare [COleServerDoc:: OnExecOleCmd](../../mfc/reference/coleserverdoc-class.md#onexecolecmd).

Per ulteriori informazioni su DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CCmdUI](../../mfc/reference/ccmdui-class.md)

`COleCmdUI`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdocob. h

## <a name="colecmduicolecmdui"></a><a name="colecmdui"></a> COleCmdUI:: COleCmdUI

Costruisce un `COleCmdUI` oggetto associato a un particolare comando dell'interfaccia utente.

```cpp
COleCmdUI(
    OLECMD* rgCmds,
    ULONG cCmds,
    const GUID* m_pGroup);
```

### <a name="parameters"></a>Parametri

*rgCmds*<br/>
Elenco di comandi supportati associati al GUID specificato. La `OLECMD` struttura associa i comandi ai flag di comando.

*cCmds*<br/>
Numero di comandi in *rgCmds*.

*pGroup*<br/>
Puntatore a un GUID che identifica un set di comandi.

### <a name="remarks"></a>Commenti

L' `COleCmdUI` oggetto fornisce un'interfaccia a livello di codice per l'aggiornamento di oggetti dell'interfaccia utente DocObject, ad esempio voci di menu o pulsanti della barra di controllo. Gli oggetti dell'interfaccia utente possono essere abilitati, disabilitati, controllati e/o cancellati tramite l' `COleCmdUI` oggetto.

## <a name="colecmduienable"></a><a name="enable"></a> COleCmdUI:: Enable

Chiamare questa funzione per impostare il flag di comando dell' `COleCmdUI` oggetto su OLECOMDF_ENABLED, che indica all'interfaccia che il comando è disponibile e abilitato oppure per cancellare il flag di comando.

```cpp
virtual void Enable(BOOL bOn);
```

### <a name="parameters"></a>Parametri

*bOn*<br/>
Indica se il comando associato all' `COleCmdUI` oggetto deve essere abilitato o disabilitato. Diverso da zero Abilita il comando; 0 Disabilita il comando.

## <a name="colecmduisetcheck"></a><a name="setcheck"></a> COleCmdUI:: secheck

Chiamare questa funzione per impostare lo stato di un comando di attivazione/disattivazione.

```cpp
virtual void SetCheck(int nCheck);
```

### <a name="parameters"></a>Parametri

*nPer*<br/>
Valore che determina lo stato per impostare un comando di attivazione/disattivazione. I valori possibili sono:

|Valore|Descrizione|
|-----------|-----------------|
|**1**|Imposta il comando su on.|
|**2**|Imposta il comando su indeterminato. non è possibile determinare lo stato perché l'attributo di questo comando è sia in stato on che off nella selezione pertinente.|
|qualsiasi altro valore|Imposta il comando su disattivato.|

## <a name="colecmduisettext"></a><a name="settext"></a> COleCmdUI:: SetText

Chiamare questa funzione per restituire un nome di testo o una stringa di stato per un comando.

```cpp
virtual void SetText(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Puntatore al testo da usare con il comando.

## <a name="see-also"></a>Vedi anche

[Classe CCmdUI](../../mfc/reference/ccmdui-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
