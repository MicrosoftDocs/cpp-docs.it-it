---
title: Mappe comandi di modifica DHTML
ms.date: 11/04/2016
ms.assetid: c1b49876-039e-4a26-bb24-ea98ccf254a1
ms.openlocfilehash: f4bbfb500e8de9594bbaa334b4e227caeaa845da
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88837411"
---
# <a name="dhtml-editing-command-maps"></a>Mappe comandi di modifica DHTML

È possibile usare le macro seguenti per eseguire il mapping dei comandi di modifica DHTML nelle classi derivate da [CHtmlEditView](../../mfc/reference/chtmleditview-class.md). Per un esempio di utilizzo, vedere l' [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="dhtml-editing-command-map-macros"></a>Macro mappa comandi di modifica DHTML

|Nome|Descrizione|
|-|-|
|[DECLARE_DHTMLEDITING_CMDMAP](#declare_dhtmlediting_cmdmap)|Dichiara una mappa di comandi di modifica DHTML in una classe.|
|[BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap)|Avvia la definizione di una mappa dei comandi di modifica DHTML all'interno di una classe.|
|[END_DHTMLEDITING_CMDMAP](#end_dhtmlediting_cmdmap)|Contrassegna la fine di una mappa dei comandi di modifica DHTML.|
|[DHTMLEDITING_CMD_ENTRY](#dhtmlediting_cmd_entry)|Esegue il mapping di un ID di comando a un comando di modifica HTML.|
|[DHTMLEDITING_CMD_ENTRY_FUNC](#dhtmlediting_cmd_entry_func)|Esegue il mapping di un ID di comando a un comando di modifica HTML e a un gestore di messaggi.|
|[DHTMLEDITING_CMD_ENTRY_TYPE](#dhtmlediting_cmd_entry_type)|Esegue il mapping di un ID di comando a un comando di modifica HTML e a un elemento dell'interfaccia utente.|
|[DHTMLEDITING_CMD_ENTRY_FUNC_TYPE](#dhtmlediting_cmd_entry_func_type)|Esegue il mapping di un ID di comando a un comando di modifica HTML, un gestore messaggi e un elemento dell'interfaccia utente.|

## <a name="declare_dhtmlediting_cmdmap"></a><a name="declare_dhtmlediting_cmdmap"></a> DECLARE_DHTMLEDITING_CMDMAP

Dichiara una mappa di comandi di modifica DHTML in una classe.

```
DECLARE_DHTMLEDITING_CMDMAP(className)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe.

### <a name="remarks"></a>Osservazioni

Questa macro deve essere utilizzata nella definizione di classi derivate da [CHtmlEditView](../../mfc/reference/chtmleditview-class.md).

Utilizzare [BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap) per implementare la mappa.

### <a name="example"></a>Esempio

Vedere l' [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

## <a name="begin_dhtmlediting_cmdmap"></a><a name="begin_dhtmlediting_cmdmap"></a> BEGIN_DHTMLEDITING_CMDMAP

Avvia la definizione di una mappa dei comandi di modifica DHTML all'interno di una classe.

```
BEGIN_DHTMLEDITING_CMDMAP(className)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe che contiene la mappa dei comandi di modifica DHTML. Questa classe deve derivare direttamente o indirettamente da [CHtmlEditView](../../mfc/reference/chtmleditview-class.md) e includere la macro [DECLARE_DHTMLEDITING_CMDMAP](#declare_dhtmlediting_cmdmap) all'interno della relativa definizione di classe.

### <a name="remarks"></a>Osservazioni

Aggiungere un mapping dei comandi di modifica DHTML alla classe per eseguire il mapping dei comandi dell'interfaccia utente ai comandi di modifica HTML.

Posizionare la macro BEGIN_DHTMLEDITING_CMDMAP nel file di implementazione (. cpp) della classe seguito da [DHTMLEDITING_CMD_ENTRY](#dhtmlediting_cmd_entry) macro per i comandi per i quali viene eseguito il mapping della classe (ad esempio, da ID_EDIT_CUT a IDM_CUT). Utilizzare la macro [END_DHTMLEDITING_CMDMAP](#end_dhtmlediting_cmdmap) per contrassegnare la fine della mappa eventi.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

## <a name="end_dhtmlediting_cmdmap"></a><a name="end_dhtmlediting_cmdmap"></a> END_DHTMLEDITING_CMDMAP

Contrassegna la fine di una mappa dei comandi di modifica DHTML.

```
END_DHTMLEDITING_CMDMAP()
```

### <a name="remarks"></a>Osservazioni

Usare insieme a [BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap).

### <a name="example"></a>Esempio

Vedere l' [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

## <a name="dhtmlediting_cmd_entry"></a><a name="dhtmlediting_cmd_entry"></a> DHTMLEDITING_CMD_ENTRY

Esegue il mapping di un ID di comando a un comando di modifica HTML.

```
DHTMLEDITING_CMD_ENTRY(cmdID,  dhtmlcmdID)
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando (come ID_EDIT_COPY).

*dhtmlcmdID*<br/>
Comando di modifica HTML a cui viene eseguito il mapping di *CMDID* , ad esempio IDM_COPY.

### <a name="example"></a>Esempio

Vedere l' [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

## <a name="dhtmlediting_cmd_entry_func"></a><a name="dhtmlediting_cmd_entry_func"></a> DHTMLEDITING_CMD_ENTRY_FUNC

Esegue il mapping di un ID di comando a un comando di modifica HTML e a un gestore di messaggi.

```
DHTMLEDITING_CMD_ENTRY_FUNC(cmdID, dhtmlcmdID,  member_func_name)
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando (come ID_EDIT_COPY).

*dhtmlcmdID*<br/>
Comando di modifica HTML a cui viene eseguito il mapping di *CMDID* , ad esempio IDM_COPY.

*member_func_name*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

### <a name="example"></a>Esempio

Vedere l' [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

## <a name="dhtmlediting_cmd_entry_type"></a><a name="dhtmlediting_cmd_entry_type"></a> DHTMLEDITING_CMD_ENTRY_TYPE

Esegue il mapping di un ID di comando a un comando di modifica HTML e a un elemento dell'interfaccia utente.

```
DHTMLEDITING_CMD_ENTRY_TYPE(cmdID  ,   dhtmlcmdID  ,    elemType)
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando (come ID_EDIT_COPY).

*dhtmlcmdID*<br/>
Comando di modifica HTML a cui viene eseguito il mapping di *CMDID* , ad esempio IDM_COPY.

*elemType*<br/>
Tipo di elemento dell'interfaccia utente; uno fra AFX_UI_ELEMTYPE_NORMAL, AFX_UI_ELEMTYPE_CHECKBOX o AFX_UI_ELEMTYPE_RADIO.

### <a name="example"></a>Esempio

Vedere l' [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

## <a name="dhtmlediting_cmd_entry_func_type"></a><a name="dhtmlediting_cmd_entry_func_type"></a> DHTMLEDITING_CMD_ENTRY_FUNC_TYPE

Esegue il mapping di un ID di comando a un comando di modifica HTML, un gestore messaggi e un elemento dell'interfaccia utente.

```
DHTMLEDITING_CMD_ENTRY_FUNC_TYPE(cmdID, dhtmlcmdID, member_func_name,  elemType)
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando (come ID_EDIT_COPY).

*dhtmlcmdID*<br/>
Comando di modifica HTML a cui viene eseguito il mapping di *CMDID* , ad esempio IDM_COPY.

*member_func_name*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

*elemType*<br/>
Tipo di elemento dell'interfaccia utente; uno fra AFX_UI_ELEMTYPE_NORMAL, AFX_UI_ELEMTYPE_CHECKBOX o AFX_UI_ELEMTYPE_RADIO.

### <a name="example"></a>Esempio

Vedere l' [esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
