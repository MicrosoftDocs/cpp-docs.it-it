---
title: Mappe comandi di modifica DHTML
ms.date: 11/04/2016
ms.assetid: c1b49876-039e-4a26-bb24-ea98ccf254a1
ms.openlocfilehash: 7f420619983283c225ca8fca23c5ea349def1d1b
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58776154"
---
# <a name="dhtml-editing-command-maps"></a>Mappe comandi di modifica DHTML

Le macro seguenti possono essere utilizzate per eseguire il mapping di comandi di modifica DHTML [CHtmlEditView](../../mfc/reference/chtmleditview-class.md)-le classi derivate. Per un esempio di utilizzo, vedere [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="dhtml-editing-command-map-macros"></a>Macro della mappa di comando di modifica DHTML

|||
|-|-|
|[DECLARE_DHTMLEDITING_CMDMAP](#declare_dhtmlediting_cmdmap)|Dichiara una mappa di comando di modifica DHTML in una classe.|
|[BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap)|Inizia la definizione di una mappa di comando di modifica DHTML all'interno di una classe.|
|[END_DHTMLEDITING_CMDMAP](#end_dhtmlediting_cmdmap)|Contrassegna la fine di un mapping dei comandi di modifica DHTML.|
|[DHTMLEDITING_CMD_ENTRY](#dhtmlediting_cmd_entry)|Un ID di comando viene eseguito il mapping a un comando di modifica HTML.|
|[DHTMLEDITING_CMD_ENTRY_FUNC](#dhtmlediting_cmd_entry_func)|Un ID di comando viene eseguito il mapping a un comando di modifica HTML e il gestore di messaggi.|
|[DHTMLEDITING_CMD_ENTRY_TYPE](#dhtmlediting_cmd_entry_type)|Un ID di comando viene eseguito il mapping a un comando di modifica HTML e un elemento dell'interfaccia utente.|
|[DHTMLEDITING_CMD_ENTRY_FUNC_TYPE](#dhtmlediting_cmd_entry_func_type)|Esegue il mapping di un ID di comando a un comando di modifica HTML, un gestore messaggi e un elemento dell'interfaccia utente.|

##  <a name="declare_dhtmlediting_cmdmap"></a>  DECLARE_DHTMLEDITING_CMDMAP

Dichiara una mappa di comando di modifica DHTML in una classe.

```
DECLARE_DHTMLEDITING_CMDMAP(className)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe.

### <a name="remarks"></a>Note

Deve essere utilizzato nella definizione di questa macro [CHtmlEditView](../../mfc/reference/chtmleditview-class.md)-le classi derivate.

Uso [BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap) per implementare la mappa.

### <a name="example"></a>Esempio

Visualizzare [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

##  <a name="begin_dhtmlediting_cmdmap"></a>  BEGIN_DHTMLEDITING_CMDMAP

Inizia la definizione di una mappa di comando di modifica DHTML all'interno di una classe.

```
BEGIN_DHTMLEDITING_CMDMAP(className)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Il nome della classe contenente il mapping dei comandi di modifica DHTML. Questa classe deve derivare direttamente o indirettamente da [CHtmlEditView](../../mfc/reference/chtmleditview-class.md) e includere le [DECLARE_DHTMLEDITING_CMDMAP](#declare_dhtmlediting_cmdmap) macro nella relativa definizione di classe.

### <a name="remarks"></a>Note

Aggiungere un mapping dei comandi di modifica DHTML alla classe per eseguire il mapping di comandi dell'interfaccia utente per i comandi di modifica HTML.

Posizionare il begin_dhtmlediting_cmdmap (macro) nel file di implementazione (. cpp) della classe seguito da [DHTMLEDITING_CMD_ENTRY](#dhtmlediting_cmd_entry) macro per i comandi della classe è per eseguire il mapping (ad esempio, da ID_EDIT_CUT a IDM_CUT). Usare la [END_DHTMLEDITING_CMDMAP](#end_dhtmlediting_cmdmap) macro per contrassegnare la fine della mappa eventi.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

##  <a name="end_dhtmlediting_cmdmap"></a>  END_DHTMLEDITING_CMDMAP

Contrassegna la fine di un mapping dei comandi di modifica DHTML.

```
END_DHTMLEDITING_CMDMAP()
```

### <a name="remarks"></a>Note

Utilizzare in combinazione con [BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap).

### <a name="example"></a>Esempio

Visualizzare [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

##  <a name="dhtmlediting_cmd_entry"></a>  DHTMLEDITING_CMD_ENTRY

Un ID di comando viene eseguito il mapping a un comando di modifica HTML.

```
DHTMLEDITING_CMD_ENTRY(cmdID,  dhtmlcmdID)
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
L'ID di comando (ad esempio ID_EDIT_COPY).

*dhtmlcmdID*<br/>
Comando a cui di modifica HTML *cmdID* viene eseguito il mapping (ad esempio IDM_COPY).

### <a name="example"></a>Esempio

Visualizzare [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

##  <a name="dhtmlediting_cmd_entry_func"></a>  DHTMLEDITING_CMD_ENTRY_FUNC

Un ID di comando viene eseguito il mapping a un comando di modifica HTML e il gestore di messaggi.

```
DHTMLEDITING_CMD_ENTRY_FUNC(cmdID, dhtmlcmdID,  member_func_name)
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
L'ID di comando (ad esempio ID_EDIT_COPY).

*dhtmlcmdID*<br/>
Comando a cui di modifica HTML *cmdID* viene eseguito il mapping (ad esempio IDM_COPY).

*member_func_name*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

### <a name="example"></a>Esempio

Visualizzare [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

##  <a name="dhtmlediting_cmd_entry_type"></a>  DHTMLEDITING_CMD_ENTRY_TYPE

Un ID di comando viene eseguito il mapping a un comando di modifica HTML e un elemento dell'interfaccia utente.

```
DHTMLEDITING_CMD_ENTRY_TYPE(cmdID  ,   dhtmlcmdID  ,    elemType)
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
L'ID di comando (ad esempio ID_EDIT_COPY).

*dhtmlcmdID*<br/>
Comando a cui di modifica HTML *cmdID* viene eseguito il mapping (ad esempio IDM_COPY).

*elemType*<br/>
Il tipo di elemento dell'interfaccia utente; uno dei AFX_UI_ELEMTYPE_NORMAL, AFX_UI_ELEMTYPE_CHECKBOX o AFX_UI_ELEMTYPE_RADIO.

### <a name="example"></a>Esempio

Visualizzare [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

##  <a name="dhtmlediting_cmd_entry_func_type"></a>  DHTMLEDITING_CMD_ENTRY_FUNC_TYPE

Esegue il mapping di un ID di comando a un comando di modifica HTML, un gestore messaggi e un elemento dell'interfaccia utente.

```
DHTMLEDITING_CMD_ENTRY_FUNC_TYPE(cmdID, dhtmlcmdID, member_func_name,  elemType)
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
L'ID di comando (ad esempio ID_EDIT_COPY).

*dhtmlcmdID*<br/>
Comando a cui di modifica HTML *cmdID* viene eseguito il mapping (ad esempio IDM_COPY).

*member_func_name*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

*elemType*<br/>
Il tipo di elemento dell'interfaccia utente; uno dei AFX_UI_ELEMTYPE_NORMAL, AFX_UI_ELEMTYPE_CHECKBOX o AFX_UI_ELEMTYPE_RADIO.

### <a name="example"></a>Esempio

Visualizzare [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
