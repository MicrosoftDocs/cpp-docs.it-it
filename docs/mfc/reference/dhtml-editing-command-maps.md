---
title: Mappe comandi di modifica DHTML
ms.date: 11/04/2016
ms.assetid: c1b49876-039e-4a26-bb24-ea98ccf254a1
ms.openlocfilehash: 62b388eb178be018655ea2b2be00d7321da50335
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365813"
---
# <a name="dhtml-editing-command-maps"></a>Mappe comandi di modifica DHTML

Le macro seguenti possono essere utilizzate per eseguire il mapping dei comandi di modifica DHTML nelle classi derivate da CHtmlEditView.The following macros can be used to map DHTML editing commands in [CHtmlEditView-derived](../../mfc/reference/chtmleditview-class.md)classes. Per un esempio del loro utilizzo, consultate [Esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="dhtml-editing-command-map-macros"></a>Macro della mappa dei comandi di modifica DHTML

|||
|-|-|
|[DECLARE_DHTMLEDITING_CMDMAP](#declare_dhtmlediting_cmdmap)|Dichiara una mappa comandi di modifica DHTML in una classe.|
|[BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap)|Avvia la definizione di una mappa comandi di modifica DHTML all'interno di una classe.|
|[END_DHTMLEDITING_CMDMAP](#end_dhtmlediting_cmdmap)|Contrassegna la fine di una mappa dei comandi di modifica DHTML.|
|[DHTMLEDITING_CMD_ENTRY](#dhtmlediting_cmd_entry)|Esegue il mapping di un ID di comando a un comando di modifica HTML.|
|[DHTMLEDITING_CMD_ENTRY_FUNC](#dhtmlediting_cmd_entry_func)|Esegue il mapping di un ID di comando a un comando di modifica HTML e a un gestore di messaggi.|
|[DHTMLEDITING_CMD_ENTRY_TYPE](#dhtmlediting_cmd_entry_type)|Esegue il mapping di un ID di comando a un comando di modifica HTML e a un elemento dell'interfaccia utente.|
|[DHTMLEDITING_CMD_ENTRY_FUNC_TYPE](#dhtmlediting_cmd_entry_func_type)|Esegue il mapping di un ID di comando a un comando di modifica HTML, un gestore messaggi e un elemento dell'interfaccia utente.|

## <a name="declare_dhtmlediting_cmdmap"></a><a name="declare_dhtmlediting_cmdmap"></a>DECLARE_DHTMLEDITING_CMDMAP

Dichiara una mappa comandi di modifica DHTML in una classe.

```
DECLARE_DHTMLEDITING_CMDMAP(className)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
Nome della classe.

### <a name="remarks"></a>Osservazioni

Questa macro deve essere utilizzata nella definizione di [CHtmlEditView-classi](../../mfc/reference/chtmleditview-class.md)derivate.

Utilizzare [BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap) per implementare la mappa.

### <a name="example"></a>Esempio

Consultate [Esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml.h

## <a name="begin_dhtmlediting_cmdmap"></a><a name="begin_dhtmlediting_cmdmap"></a>BEGIN_DHTMLEDITING_CMDMAP

Avvia la definizione di una mappa comandi di modifica DHTML all'interno di una classe.

```
BEGIN_DHTMLEDITING_CMDMAP(className)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
Nome della classe contenente la mappa dei comandi di modifica DHTML. Questa classe deve derivare direttamente o indirettamente da [CHtmlEditView](../../mfc/reference/chtmleditview-class.md) e includere la [macro DECLARE_DHTMLEDITING_CMDMAP](#declare_dhtmlediting_cmdmap) all'interno della relativa definizione di classe.

### <a name="remarks"></a>Osservazioni

Aggiungere una mappa dei comandi di modifica DHTML alla classe per eseguire il mapping dei comandi dell'interfaccia utente ai comandi di modifica HTML.

Inserire la macro BEGIN_DHTMLEDITING_CMDMAP nel file di implementazione della classe (cpp) seguita da [DHTMLEDITING_CMD_ENTRY](#dhtmlediting_cmd_entry) macro per i comandi di cui la classe deve eseguire il mapping, ad esempio da ID_EDIT_CUT a IDM_CUT. Utilizzare la macro [END_DHTMLEDITING_CMDMAP](#end_dhtmlediting_cmdmap) per contrassegnare la fine della mappa eventi.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml.h

## <a name="end_dhtmlediting_cmdmap"></a><a name="end_dhtmlediting_cmdmap"></a>END_DHTMLEDITING_CMDMAP

Contrassegna la fine di una mappa dei comandi di modifica DHTML.

```
END_DHTMLEDITING_CMDMAP()
```

### <a name="remarks"></a>Osservazioni

Utilizzare insieme [a BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap).

### <a name="example"></a>Esempio

Consultate [Esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml.h

## <a name="dhtmlediting_cmd_entry"></a><a name="dhtmlediting_cmd_entry"></a>DHTMLEDITING_CMD_ENTRY

Esegue il mapping di un ID di comando a un comando di modifica HTML.

```
DHTMLEDITING_CMD_ENTRY(cmdID,  dhtmlcmdID)
```

### <a name="parameters"></a>Parametri

*cmdID (informazioni in stato in com*<br/>
ID di comando (come ID_EDIT_COPY).

*dhtmlcmdID (idcomando dhtml)*<br/>
Comando di modifica HTML a cui viene eseguito *il mapping cmdID* (ad esempio IDM_COPY).

### <a name="example"></a>Esempio

Consultate [Esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml.h

## <a name="dhtmlediting_cmd_entry_func"></a><a name="dhtmlediting_cmd_entry_func"></a>DHTMLEDITING_CMD_ENTRY_FUNC

Esegue il mapping di un ID di comando a un comando di modifica HTML e a un gestore di messaggi.

```
DHTMLEDITING_CMD_ENTRY_FUNC(cmdID, dhtmlcmdID,  member_func_name)
```

### <a name="parameters"></a>Parametri

*cmdID (informazioni in stato in com*<br/>
ID di comando (come ID_EDIT_COPY).

*dhtmlcmdID (idcomando dhtml)*<br/>
Comando di modifica HTML a cui viene eseguito *il mapping cmdID* (ad esempio IDM_COPY).

*member_func_name*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

### <a name="example"></a>Esempio

Consultate [Esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml.h

## <a name="dhtmlediting_cmd_entry_type"></a><a name="dhtmlediting_cmd_entry_type"></a>DHTMLEDITING_CMD_ENTRY_TYPE

Esegue il mapping di un ID di comando a un comando di modifica HTML e a un elemento dell'interfaccia utente.

```
DHTMLEDITING_CMD_ENTRY_TYPE(cmdID  ,   dhtmlcmdID  ,    elemType)
```

### <a name="parameters"></a>Parametri

*cmdID (informazioni in stato in com*<br/>
ID di comando (come ID_EDIT_COPY).

*dhtmlcmdID (idcomando dhtml)*<br/>
Comando di modifica HTML a cui viene eseguito *il mapping cmdID* (ad esempio IDM_COPY).

*elemType (tipo di oggetto elemType)*<br/>
Tipo di elemento dell'interfaccia utente; uno fra AFX_UI_ELEMTYPE_NORMAL, AFX_UI_ELEMTYPE_CHECKBOX o AFX_UI_ELEMTYPE_RADIO.

### <a name="example"></a>Esempio

Consultate [Esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml.h

## <a name="dhtmlediting_cmd_entry_func_type"></a><a name="dhtmlediting_cmd_entry_func_type"></a>DHTMLEDITING_CMD_ENTRY_FUNC_TYPE

Esegue il mapping di un ID di comando a un comando di modifica HTML, un gestore messaggi e un elemento dell'interfaccia utente.

```
DHTMLEDITING_CMD_ENTRY_FUNC_TYPE(cmdID, dhtmlcmdID, member_func_name,  elemType)
```

### <a name="parameters"></a>Parametri

*cmdID (informazioni in stato in com*<br/>
ID di comando (come ID_EDIT_COPY).

*dhtmlcmdID (idcomando dhtml)*<br/>
Comando di modifica HTML a cui viene eseguito *il mapping cmdID* (ad esempio IDM_COPY).

*member_func_name*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

*elemType (tipo di oggetto elemType)*<br/>
Tipo di elemento dell'interfaccia utente; uno fra AFX_UI_ELEMTYPE_NORMAL, AFX_UI_ELEMTYPE_CHECKBOX o AFX_UI_ELEMTYPE_RADIO.

### <a name="example"></a>Esempio

Consultate [Esempio HTMLEdit](../../overview/visual-cpp-samples.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxhtml.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
