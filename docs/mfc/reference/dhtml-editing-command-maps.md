---
title: Mappe comandi di modifica DHTML | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: c1b49876-039e-4a26-bb24-ea98ccf254a1
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7eba41005864e2389997a75855eaf955ad18b557
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dhtml-editing-command-maps"></a>Mappe comandi di modifica DHTML
Le macro seguenti possono essere utilizzate per eseguire il mapping di comandi di modifica DHTML [CHtmlEditView](../../mfc/reference/chtmleditview-class.md)-classi derivate. Per un esempio dell'utilizzo, vedere [esempio HTMLEdit](../../visual-cpp-samples.md).  
  
### <a name="dhtml-editing-command-map-macros"></a>Macro della mappa di comandi di modifica DHTML  
  
|||  
|-|-|  
|[DECLARE_DHTMLEDITING_CMDMAP](#declare_dhtmlediting_cmdmap)|Dichiara una mappa di comando di modifica DHTML in una classe.|  
|[BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap)|Inizia la definizione di una mappa di comando di modifica DHTML all'interno di una classe.|  
|[END_DHTMLEDITING_CMDMAP](#end_dhtmlediting_cmdmap)|Contrassegna la fine di una mappa comando di modifica DHTML.|  
|[DHTMLEDITING_CMD_ENTRY](#dhtmlediting_cmd_entry)|Un ID di comando viene eseguito il mapping a un comando di modifica HTML.|  
|[DHTMLEDITING_CMD_ENTRY_FUNC](#dhtmlediting_cmd_entry_func)|Un ID di comando viene eseguito il mapping a un comando di modifica HTML e il gestore di messaggi.|  
|[DHTMLEDITING_CMD_ENTRY_TYPE](#dhtmlediting_cmd_entry_type)|Un ID di comando viene eseguito il mapping a un comando di modifica HTML e di un elemento dell'interfaccia utente.|  
|[DHTMLEDITING_CMD_ENTRY_FUNC_TYPE](#dhtmlediting_cmd_entry_func_type)|Esegue il mapping di un ID di comando a un comando di modifica HTML, un gestore messaggi e un elemento dell'interfaccia utente.|  
  
##  <a name="declare_dhtmlediting_cmdmap"></a>DECLARE_DHTMLEDITING_CMDMAP  
 Dichiara una mappa di comando di modifica DHTML in una classe.  
  
```  
DECLARE_DHTMLEDITING_CMDMAP(className)   
```  
  
### <a name="parameters"></a>Parametri  
 `className`  
 Nome della classe.  
  
### <a name="remarks"></a>Note  
 Questa macro viene utilizzata nella definizione di [CHtmlEditView](../../mfc/reference/chtmleditview-class.md)-classi derivate.  
  
 Utilizzare [BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap) per implementare la mappa.  
  
### <a name="example"></a>Esempio  
 Vedere [esempio HTMLEdit](../../visual-cpp-samples.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxhtml. h  
  
##  <a name="begin_dhtmlediting_cmdmap"></a>BEGIN_DHTMLEDITING_CMDMAP  
 Inizia la definizione di una mappa di comando di modifica DHTML all'interno di una classe.  
  
```  
BEGIN_DHTMLEDITING_CMDMAP(className)   
```  
  
### <a name="parameters"></a>Parametri  
 `className`  
 Il nome della classe che contiene la mappa comando di modifica DHTML. Questa classe deve derivare direttamente o indirettamente da [CHtmlEditView](../../mfc/reference/chtmleditview-class.md) e includere il [DECLARE_DHTMLEDITING_CMDMAP](#declare_dhtmlediting_cmdmap) macro nella relativa definizione di classe.  
  
### <a name="remarks"></a>Note  
 Aggiungere un mapping dei comandi di modifica DHTML alla classe per eseguire il mapping di comandi dell'interfaccia utente per i comandi di modifica HTML.  
  
 Sul posto di `BEGIN_DHTMLEDITING_CMDMAP` macro nel file di implementazione (. cpp) della classe seguito da [DHTMLEDITING_CMD_ENTRY](#dhtmlediting_cmd_entry) macro per i comandi che è la classe per eseguire il mapping (ad esempio, da **ID_EDIT_CUT** a  **IDM_CUT**). Utilizzare il [END_DHTMLEDITING_CMDMAP](#end_dhtmlediting_cmdmap) (macro) per contrassegnare la fine della mappa eventi.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxhtml. h  
  
##  <a name="end_dhtmlediting_cmdmap"></a>END_DHTMLEDITING_CMDMAP  
 Contrassegna la fine di una mappa comando di modifica DHTML.  
  
```  
END_DHTMLEDITING_CMDMAP()   
```  
  
### <a name="remarks"></a>Note  
 Utilizzare in combinazione con [BEGIN_DHTMLEDITING_CMDMAP](#begin_dhtmlediting_cmdmap).  
  
### <a name="example"></a>Esempio  
 Vedere [esempio HTMLEdit](../../visual-cpp-samples.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxhtml. h  
  
##  <a name="dhtmlediting_cmd_entry"></a>DHTMLEDITING_CMD_ENTRY  
 Un ID di comando viene eseguito il mapping a un comando di modifica HTML.  
  
```  
DHTMLEDITING_CMD_ENTRY(cmdID,  dhtmlcmdID)   
```  
  
### <a name="parameters"></a>Parametri  
 `cmdID`  
 L'ID di comando (ad esempio **ID_EDIT_COPY**).  
  
 `dhtmlcmdID`  
 Comando a cui di modifica HTML `cmdID` esegue il mapping (ad esempio **IDM_COPY**).  
  
### <a name="example"></a>Esempio  
 Vedere [esempio HTMLEdit](../../visual-cpp-samples.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxhtml. h  
  
##  <a name="dhtmlediting_cmd_entry_func"></a>DHTMLEDITING_CMD_ENTRY_FUNC  
 Un ID di comando viene eseguito il mapping a un comando di modifica HTML e il gestore di messaggi.  
  
```  
DHTMLEDITING_CMD_ENTRY_FUNC(cmdID, dhtmlcmdID,  member_func_name)   
```  
  
### <a name="parameters"></a>Parametri  
 `cmdID`  
 L'ID di comando (ad esempio **ID_EDIT_COPY**).  
  
 `dhtmlcmdID`  
 Comando a cui di modifica HTML `cmdID` esegue il mapping (ad esempio **IDM_COPY**).  
  
 `member_func_name`  
 Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.  
  
### <a name="example"></a>Esempio  
 Vedere [esempio HTMLEdit](../../visual-cpp-samples.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxhtml. h  
  
##  <a name="dhtmlediting_cmd_entry_type"></a>DHTMLEDITING_CMD_ENTRY_TYPE  
 Un ID di comando viene eseguito il mapping a un comando di modifica HTML e di un elemento dell'interfaccia utente.  
  
```  
DHTMLEDITING_CMD_ENTRY_TYPE(cmdID  ,   dhtmlcmdID  ,    elemType)  
```  
  
### <a name="parameters"></a>Parametri  
 `cmdID`  
 L'ID di comando (ad esempio **ID_EDIT_COPY**).  
  
 `dhtmlcmdID`  
 Comando a cui di modifica HTML `cmdID` esegue il mapping (ad esempio **IDM_COPY**).  
  
 `elemType`  
 Il tipo di elemento dell'interfaccia utente; uno dei **AFX_UI_ELEMTYPE_NORMAL**, **AFX_UI_ELEMTYPE_CHECKBOX**, o **AFX_UI_ELEMTYPE_RADIO**.  
  
### <a name="example"></a>Esempio  
 Vedere [esempio HTMLEdit](../../visual-cpp-samples.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxhtml. h  
  
##  <a name="dhtmlediting_cmd_entry_func_type"></a>DHTMLEDITING_CMD_ENTRY_FUNC_TYPE  
 Esegue il mapping di un ID di comando a un comando di modifica HTML, un gestore messaggi e un elemento dell'interfaccia utente.  
  
```  
DHTMLEDITING_CMD_ENTRY_FUNC_TYPE(cmdID, dhtmlcmdID, member_func_name,  elemType)   
```  
  
### <a name="parameters"></a>Parametri  
 `cmdID`  
 L'ID di comando (ad esempio **ID_EDIT_COPY**).  
  
 `dhtmlcmdID`  
 Comando a cui di modifica HTML `cmdID` esegue il mapping (ad esempio **IDM_COPY**).  
  
 `member_func_name`  
 Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.  
  
 `elemType`  
 Il tipo di elemento dell'interfaccia utente; uno dei **AFX_UI_ELEMTYPE_NORMAL**, **AFX_UI_ELEMTYPE_CHECKBOX**, o **AFX_UI_ELEMTYPE_RADIO**.  
  
### <a name="example"></a>Esempio  
 Vedere [esempio HTMLEdit](../../visual-cpp-samples.md).  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxhtml. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
