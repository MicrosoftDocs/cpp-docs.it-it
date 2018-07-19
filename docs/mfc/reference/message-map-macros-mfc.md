---
title: Macro della mappa (MFC) del messaggio | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- AFXWIN/DECLARE_MESSAGE_MAP
- AFXWIN/BEGIN_MESSAGE_MAP
- AFXWIN/BEGIN_TEMPLATE_MESSAGE_MAP
- AFXWIN/END_MESSAGE_MAP
- AFXWIN/ON_COMMAND
- AFXWIN/ON_COMMAND_EX
- AFXWIN/ON_CONTROL
- AFXWIN/ON_MESSAGE
- AFXWIN/ON_OLECMD
- AFXWIN/ON_REGISTERED_MESSAGE
- AFXWIN/ON_REGISTERED_THREAD_MESSAGE
- AFXWIN/ON_THREAD_MESSAGE
- AFXWIN/ON_UPDATE_COMMAND_UI
- AFXWIN/ON_COMMAND_RANGE
- AFXWIN/ON_UPDATE_COMMAND_UI_RANGE
- AFXWIN/ON_CONTROL_RANGE
dev_langs:
- C++
helpviewer_keywords:
- message map macros
- Windows messages [MFC], declaration
- demarcating Windows messages
- message maps [MFC], macros
- message maps [MFC], declaration and demarcation
- message mapping macros
- ranges, message map
- message map ranges
ms.assetid: 531b15ce-32b5-4ca0-a849-bb519616c731
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e68cdc236759776fa327b4602343ec9ac73b9bba
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37338375"
---
# <a name="message-map-macros-mfc"></a>Macro della mappa messaggi (MFC)
Per supportare le mappe messaggi, MFC fornisce le seguenti macro:  
  
### <a name="message-map-declaration-and-demarcation-macros"></a>Mappa messaggi dichiarazione e demarcazione macro  
  
|||  
|-|-|  
|[DECLARE_MESSAGE_MAP](#declare_message_map)|Dichiara una mappa messaggi verrà utilizzata in una classe per eseguire il mapping dei messaggi a funzioni (deve essere usato nella dichiarazione di classe).|  
|[BEGIN_MESSAGE_MAP](#begin_message_map)|Inizia la definizione di una mappa messaggi (deve essere usato nell'implementazione della classe).|  
|[BEGIN_TEMPLATE_MESSAGE_MAP](#begin_template_interface_map)|Inizia la definizione di una mappa messaggi per un tipo di classe che contiene un argomento singolo modello. |
|[END_MESSAGE_MAP](#end_message_map)|Termina la definizione di una mappa messaggi (deve essere usato nell'implementazione della classe).|  
  
### <a name="message-mapping-macros"></a>Macro di Mapping di messaggi  
  
|||  
|-|-|  
|[ON_COMMAND](#on_command)|Indica quale funzione gestirà un messaggio di comando specificato.|  
|[ON_COMMAND_EX](#on_command_ex)|Indica quale funzione gestirà un messaggio di comando specificato.|  
|[ON_CONTROL](#on_control)|Indica quale funzione gestirà un messaggio di notifica del controllo specificato.|  
|[ON_MESSAGE](#on_message)|Indica quale funzione gestirà un messaggio definito dall'utente.|  
|[ON_OLECMD](#on_olecmd)|Indica quale funzione gestirà un comando di menu da DocObject o il relativo contenitore.|  
|[ON_REGISTERED_MESSAGE](#on_registered_message)|Indica quale funzione gestirà un messaggio definito dall'utente registrato.|  
|[ON_REGISTERED_THREAD_MESSAGE](#on_registered_thread_message)|Indica quale funzione gestirà un messaggio definito dall'utente registrato quando si dispone di un `CWinThread` classe.|  
|[ON_THREAD_MESSAGE](#on_thread_message)|Indica quale funzione gestirà un messaggio definito dall'utente quando si dispone di un `CWinThread` classe.|  
|[ON_UPDATE_COMMAND_UI](#on_update_command_ui)|Indica quale funzione gestirà un messaggio di comando di aggiornamento dell'interfaccia utente specificato.|  
  
### <a name="message-map-range-macros"></a>Macro della mappa messaggi intervallo  
  
|||  
|-|-|  
|[ON_COMMAND_RANGE](#on_command_range)|Indica quale funzione gestirà l'intervallo di ID di comando specificati nei primi due parametri alla macro.|  
|[ON_UPDATE_COMMAND_UI_RANGE](#on_update_command_ui_range)|Indica il gestore di aggiornamento consente di gestire l'intervallo di ID di comando specificati nei primi due pa] Tri alla macro.|  
|[ON_CONTROL_RANGE](#on_control_range)|Indica quale funzione gestirà le notifiche dall'intervallo ID specificati nei parametri di secondo e terzi alla macro di controllo. Il primo parametro è un messaggio di notifica del controllo, ad esempio BN_CLICKED.|  
  
 Per altre informazioni su mappe messaggi, la dichiarazione della mappa messaggi e le macro di demarcazione e le macro di mapping di messaggi, vedere [mappe messaggi](../../mfc/reference/message-maps-mfc.md) e [gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md). Per altre informazioni sugli intervalli della mappa messaggi, vedere [gestori per intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).  


## <a name="begin_message_map"></a> BEGIN_MESSAGE_MAP
Inizia la definizione della mappa messaggi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
BEGIN_MESSAGE_MAP( theClass, baseClass )  
```  
  
### <a name="parameters"></a>Parametri  
 *theClass*  
 Specifica il nome della classe messaggio di cui eseguire il mapping.  
  
 *baseClass*  
 Specifica il nome della classe di base *theClass*.  
  
### <a name="remarks"></a>Note  
 Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa dei messaggi con BEGIN_MESSAGE_MAP (macro), quindi aggiungere le voci di macro per ognuna delle funzioni gestore messaggi e completare la mappa dei messaggi con la END_MESSAGE_MAP macro.  
  
 Per altre informazioni sulle mappe di messaggio, vedere [mappe messaggi](message-maps-mfc.md)  
  
### <a name="example"></a>Esempio  
```cpp  
BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
   ON_WM_CREATE()
END_MESSAGE_MAP()
```
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h 

##  <a name="begin_template_message_map"></a>BEGIN_TEMPLATE_MESSAGE_MAP
Inizia la definizione di una mappa messaggi per un tipo di classe che contiene un argomento singolo modello.  
   
### <a name="syntax"></a>Sintassi  
  ```
BEGIN_TEMPLATE_MESSAGE_MAP( theClass, type_name, baseClass )  
```
### <a name="parameters"></a>Parametri  
 *theClass*  
 Specifica il nome della classe messaggio di cui eseguire il mapping.    
 *type_name*  
 Il nome del parametro di modello specificato per la classe.    
 *baseClass*  
 Specifica il nome della classe di base *theClass*.  
   
### <a name="remarks"></a>Note  
 Questa macro è simile al [BEGIN_MESSAGE_MAP](message-map-macros-mfc.md#begin_message_map) macro; tuttavia, questa macro è destinata alle classi che contiene un argomento singolo modello.  
  
 Nella sezione di implementazione del metodo della classe, avviare la mappa dei messaggi con la macro BEGIN_TEMPLATE_MESSAGE_MAP; aggiungere le voci di macro per ognuno dei metodi gestore di messaggi come si farebbe per una mappa di messaggio standard. Come con BEGIN_MESSAGE_MAP (macro), completare la mappa dei messaggi di modello con il [END_MESSAGE_MAP](message-map-macros-mfc.md#end_message_map) macro.  
  
 Per altre informazioni sull'implementazione di mappe messaggi per le classi modello, fare riferimento a [procedura: creare una mappa messaggi per una classe modello](../how-to-create-a-message-map-for-a-template-class.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
 
## <a name="declare_message_map"></a>  DECLARE_MESSAGE_MAP
 Dichiara che la classe definisce una mappa messaggi. Ogni `CCmdTarget`-classe derivata nel programma deve fornire una mappa messaggi per gestire i messaggi.  
  
### <a name="syntax"></a>Sintassi  
  
```    
DECLARE_MESSAGE_MAP( )  
```  
  
### <a name="remarks"></a>Note  
 Usare il DECLARE_MESSAGE_MAP (macro) alla fine della dichiarazione di classe. Quindi, nel file con estensione cpp che definisce le funzioni membro della classe, usare il BEGIN_MESSAGE_MAP (macro), le voci di macro per ognuna delle funzioni del gestore di messaggi ed END_MESSAGE_MAP (macro).  
  
> [!NOTE]
>  Se si dichiara alcun membro dopo DECLARE_MESSAGE_MAP, è necessario specificare un nuovo tipo di accesso (**pubbliche**, **privato**, o **protetti**) per loro.  
  
 Per altre informazioni su mappe messaggi e DECLARE_MESSAGE_MAP (macro), vedere [la gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md).  
  
### <a name="example"></a>Esempio  
```cpp  
class CMainFrame : public CMDIFrameWnd
{
   DECLARE_MESSAGE_MAP()

   // Remainder of class declaration omitted.
``` 
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  


## <a name="end_message_map"></a>  END_MESSAGE_MAP
Termina la definizione della mappa del messaggio.  
  
### <a name="syntax"></a>Sintassi  
  
```   
END_MESSAGE_MAP( )  
```  
  
### <a name="remarks"></a>Note  
 Per altre informazioni su mappe e messaggi END_MESSAGE_MAP (macro), vedere [la gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  

## <a name="on_command"></a>  ON_COMMAND
Questa macro viene mappato un messaggio di comando a una funzione membro.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_COMMAND( id, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 *ID*  
 ID di comando.  
  
 *memberFxn*  
 Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.  
  
### <a name="remarks"></a>Note  
 Indica quale funzione gestirà un messaggio di comando da un oggetto di interfaccia utente di comando, ad esempio un pulsante di menu barra degli strumenti o elemento.  
  
 Quando un oggetto destinazione comando riceve un messaggio WM_COMMAND Windows con l'ID specificato, ON_COMMAND chiamerà la funzione membro `memberFxn` per gestire il messaggio.  
  
 Usare ON_COMMAND per eseguire il mapping di un singolo comando a una funzione membro. Uso [ON_COMMAND_RANGE](#on_command_range) per eseguire il mapping di un intervallo di ID di comando alla funzione membro di uno. Solo una voce della mappa messaggi può corrispondere a un id di comando specificato. Vale a dire, è possibile mappare un comando per più di un gestore. Per altre informazioni ed esempi, vedere [la gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md).  
  
### <a name="example"></a>Esempio  
```cpp  
BEGIN_MESSAGE_MAP(CMFCListViewDoc, CDocument)
   ON_COMMAND(ID_MYCOMMAND, &CMFCListViewDoc::OnMycommand)
END_MESSAGE_MAP()
``` 
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  

 ## <a name="on_command_ex"></a>  ON_COMMAND_EX
Funzione membro di gestore comando estesa.  
   
### <a name="syntax"></a>Sintassi  
  ```  
ON_COMMAND_EX(id, memberFxn);  
```
### <a name="parameters"></a>Parametri  
 *ID*  
 ID di comando.  
  
 *memberFxn*  
 Il nome della funzione di gestore di messaggi a cui il comando viene eseguito il mapping.  
   
### <a name="remarks"></a>Note 
Forma estesa di gestori di messaggi di comando è disponibile per utilizzi avanzati. ON_COMMAND_EX (macro) viene usato per tali gestori di messaggi e fornisce un superset della funzionalità [ON_COMMAND] (#on_command).  Funzioni membro esteso di gestori di comandi accettano un solo parametro, UINT contenente l'ID di comando e restituiscono un valore booleano. Il valore restituito deve essere TRUE per 

Questa macro esegue il mapping di un messaggio di comando a una funzione membro di gestore comando esteso.  
   
### <a name="syntax"></a>Sintassi  
```  
ON_COMMAND_EX(id,  memberFxn);  
```
### <a name="parameters"></a>Parametri  
 *ID*  
 ID di comando.  
  
 *memberFxn*  
 Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.  
   
### <a name="remarks"></a>Note  
 Forma estesa di gestori di messaggi di comando è disponibile per utilizzi avanzati. ON_COMMAND_EX (macro) viene usato per tali gestori di messaggi e fornisce un superset del [ON_COMMAND](message-map-macros-mfc.md#on_command) funzionalità. Funzioni membro esteso di gestori di comandi accettano un solo parametro, UINT contenente l'ID di comando e restituiscono un valore booleano. Il valore restituito deve essere TRUE per indicare che il comando è stato gestito; in caso contrario, il routing continuerà ad altri oggetti destinazione comando.  
Per altre informazioni, vedere la nota tecnica [TN006: mappe messaggi] tm006-messaggio-maps.md).  
   
### <a name="requirements"></a>Requisiti  
 File di intestazione: afxmsg_.h  
   
### <a name="see-also"></a>Vedere anche  
 [ON_COMMAND](message-map-macros-mfc.md#on_command)   
 [TN006: mappe messaggi] tm006-messaggio-maps.md)

  
## <a name="on_control"></a>  ON_CONTROL
Indica quale funzione gestirà un messaggio di notifica di controlli personalizzati.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_CONTROL( wNotifyCode, id, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 *wNotifyCode*  
 Il codice di notifica del controllo.  
  
 *ID*  
 ID di comando.  
  
 *memberFxn*  
 Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.  
  
### <a name="remarks"></a>Note  
 I messaggi di notifica di controllo sono quelle inviate da un controllo alla finestra padre.  
  
 Deve esserci esattamente una istruzione di macro ON_CONTROL nella mappa messaggi per ogni messaggio di notifica di controllo che deve essere mappato a una funzione di gestore di messaggi.  
  
 Per altre informazioni ed esempi, vedere [la gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  
  

## <a name="on_message"></a>  ON_MESSAGE  
Indica quale funzione gestirà un messaggio definito dall'utente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_MESSAGE( message, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 *message*  
 ID del messaggio.  
  
 *memberFxn*  
 Il nome della funzione di gestore di messaggi a cui viene eseguito il mapping di messaggi.  
  
 Il tipo della funzione deve essere `afx_msg LRESULT (CWnd::*)(WPARAM, LPARAM)`.  
  
### <a name="remarks"></a>Note  
 I messaggi definiti dall'utente sono i messaggi che non sono messaggi WM_MESSAGE Windows standard. Quando si seleziona un ID messaggio, è necessario utilizzare valori entro l'intervallo di WM_USER (0x0400) 0x7FFF o WM_APP (0x8000) a 0xBFFF. Per altre informazioni sull'ID messaggio, vedere [WM_APP](http://msdn.microsoft.com/library/windows/desktop/ms644930).  
  
 Deve esserci esattamente una istruzione di macro ON_MESSAGE nella mappa messaggi per ogni messaggio definito dall'utente che deve essere mappato a una funzione di gestore di messaggi.  
  
> [!NOTE]
>  Oltre ai messaggi definiti dall'utente, ON_MESSAGE gestisce i messaggi di Windows meno comuni. Per altre informazioni, vedere l'articolo della Knowledge Base [99848: INFO: utilizzo di Macro ON_MESSAGE() ai messaggi meno comuni della mappa](http://go.microsoft.com/fwlink/p/?linkid=192022).  
  
 Per altre informazioni ed esempi, vedere [la gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md) e [gestori definiti dall'utente](user-defined-handlers.md)  
  
### <a name="example"></a>Esempio  
```cpp  
#define WM_MYMESSAGE (WM_USER + 100)

BEGIN_MESSAGE_MAP(CMyWnd2, CWnd)
   ON_MESSAGE(WM_MYMESSAGE, OnMyMessage)
END_MESSAGE_MAP()

// inside the class declaration
 afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);

 LRESULT CMyWnd2::OnMyMessage(WPARAM wParam, LPARAM lParam)
{
   UNREFERENCED_PARAMETER(wParam);
   UNREFERENCED_PARAMETER(lParam);

   // Handle message here. 

   return 0;
}
```   
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  

## <a name="on_olecmd"></a>  ON_OLECMD  
Consente di indirizzare i comandi tramite l'interfaccia di dispatch comando `IOleCommandTarget`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_OLECMD( pguid, olecmdid, id )  
```  
  
### <a name="parameters"></a>Parametri  
 *pguid*  
 Identificatore del gruppo di comandi a cui appartiene il comando. Utilizzare NULL per il gruppo standard.  
  
 *olecmdid*  
 L'identificatore del comando OLE.  
  
 *ID*  
 L'ID del menu, barra degli strumenti ID, ID del pulsante o altri ID della risorsa o oggetto eseguito il comando.  
  
### <a name="remarks"></a>Note  
 `IOleCommandTarget` consente a un contenitore ricevere comandi che hanno origine nell'interfaccia utente del DocObject e consente al contenitore inviare gli stessi comandi (ad esempio New, aprire, Salva con nome e stampa dal menu File; e copiare, incollare, annullare, e così via dal menu Modifica) per DocObject.  
  
 `IOleCommandTarget` è più semplice che OLE Automation `IDispatch`. `IOleCommandTarget` si basa interamente su un set standard di comandi che raramente sono argomenti ed non è coinvolta alcuna informazione sul tipo (indipendenza dai tipi viene ridotto per anche gli argomenti di comando). Se è necessario inviare i comandi con argomenti, usare [COleServerDoc::OnExecOleCmd](coleserverdoc-class.md#onexecolecmd).  
  
 Il `IOleCommandTarget` i comandi di menu standard sono stati implementati da MFC nelle macro seguenti:  
  
 **ON_OLECMD_CLEARSELECTION)**  
  
 Invia il comando Modifica Clear. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_CLEARSELECTION, ID_EDIT_CLEAR)`  
  
 **ON_OLECMD_COPY)**  
  
 Invia il comando Copy di modifica. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_COPY, ID_EDIT_COPY)`  
  
 **ON_OLECMD_CUT)**  
  
 Invia il comando Modifica Taglia. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_CUT, ID_EDIT_CUT)`  
  
 **ON_OLECMD_NEW)**  
  
 Invia il comando File nuovo. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_NEW, ID_FILE_NEW)`  
  
 **ON_OLECMD_OPEN)**  
  
 Invia il comando Apri File. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_OPEN, ID_FILE_OPEN)`  
  
 **ON_OLECMD_PAGESETUP)**  
  
 Invia il comando Imposta pagina File. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_PAGESETUP, ID_FILE_PAGE_SETUP)`  
  
 **ON_OLECMD_PASTE)**  
  
 Invia il comando Incolla modifica. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_PASTE, ID_EDIT_PASTE)`  
  
 **ON_OLECMD_PASTESPECIAL)**  
  
 Invia il comando Modifica Incolla speciale. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_PASTESPECIAL, ID_EDIT_PASTE_SPECIAL)`  
  
 **ON_OLECMD_PRINT)**  
  
 Invia il comando di stampa di File. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_PRINT, ID_FILE_PRINT)`  
  
 **ON_OLECMD_PRINTPREVIEW)**  
  
 Invia il comando Anteprima di stampa di File. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_PRINTPREVIEW, ID_FILE_PRINT_PREVIEW)`  
  
 **ON_OLECMD_REDO)**  
  
 Invia il comando Modifica fase di rollforward. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_REDO, ID_EDIT_REDO)`  
  
 **ON_OLECMD_SAVE)**  
  
 Invia il comando di salvataggio File. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_SAVE, ID_FILE_SAVE)`  
  
 **ON_OLECMD_SAVE_AS)**  
  
 Invia il comando Salva con nome File. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_SAVEAS, ID_FILE_SAVE_AS)`  
  
 **ON_OLECMD_SAVE_COPY_AS)**  
  
 Invia il comando File Salva copia con nome. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_SAVECOPYAS, ID_FILE_SAVE_COPY_AS)`  
  
 **ON_OLECMD_SELECTALL)**  
  
 Invia il comando Modifica Seleziona tutto. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_SELECTALL, ID_EDIT_SELECT_ALL)`  
  
 **ON_OLECMD_UNDO)**  
  
 Invia il comando Annulla modifica. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_UNDO, ID_EDIT_UNDO)`  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AfxDocOb. h  
  
### <a name="see-also"></a>Vedere anche  
 [Classe COleCmdUI](colecmdui-class.md)   
 [COleServerDoc::OnExecOleCmd](coleserverdoc-class.md#onexecolecmd)

## <a name="on_registered_message"></a>  ON_REGISTERED_MESSAGE
Il Windows `RegisterWindowMessage` funzione viene utilizzata per definire un nuovo messaggio della finestra che viene garantito l'univocità in tutto il sistema.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_REGISTERED_MESSAGE( nMessageVariable, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 *nMessageVariable*  
 La variabile dell'ID registrati-finestra di messaggio.  
  
 *memberFxn*  
 Il nome della funzione di gestore di messaggi a cui viene eseguito il mapping di messaggi.  
  
### <a name="remarks"></a>Note  
 Questa macro indica quale funzione gestisce il messaggio registrato.  
  
 Per altre informazioni ed esempi, vedere [la gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md).  
  
### <a name="example"></a>Esempio  
```cpp  
static UINT NEAR WM_FIND = RegisterWindowMessage(_T("COMMDLG_FIND"));


BEGIN_MESSAGE_MAP(CMyWnd3, CWnd)
   ON_REGISTERED_MESSAGE(WM_FIND, OnFind)
END_MESSAGE_MAP()
```  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  
  
### <a name="see-also"></a>Vedere anche  
 [RegisterWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms644947)   
 [Gestori definiti dall'utente](user-defined-handlers.md)

## <a name="on_registered_thread_message"></a>  ON_REGISTERED_THREAD_MESSAGE    
Indica quale funzione gestisce il messaggio registrato dalla funzione RegisterWindowMessage Windows.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_REGISTERED_THREAD_MESSAGE(nMessageVariable, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 *nMessageVariable*  
 La variabile dell'ID registrati-finestra di messaggio.  
  
 *memberFxn*  
 Il nome della funzione di gestore di messaggi CWinThread al quale viene mappato il messaggio.  
  
### <a name="remarks"></a>Note  
 Consente di definire un nuovo messaggio della finestra che viene garantito l'univocità in tutto il sistema RegisterWindowMessage. Quando si dispone di una classe CWinThread, è necessario utilizzare invece ON_REGISTERED_MESSAGE ON_REGISTERED_THREAD_MESSAGE. 
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  

## <a name="on_thread_message"></a>  ON_THREAD_MESSAGE  
Indica quale funzione gestirà un messaggio definito dall'utente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_THREAD_MESSAGE( message, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 *message*  
 ID del messaggio.  
  
 *memberFxn*  
 Il nome del `CWinThread`-messaggio-funzione a cui il messaggio viene eseguito il mapping del gestore.  
  
### <a name="remarks"></a>Note  
 ON_THREAD_MESSAGE deve essere usato invece ON_MESSAGE quando si dispone di un `CWinThread` classe. I messaggi definiti dall'utente sono i messaggi che non sono messaggi WM_MESSAGE Windows standard. Deve esserci esattamente una istruzione di macro ON_THREAD_MESSAGE nella mappa messaggi per ogni messaggio definito dall'utente che deve essere mappato a una funzione di gestore di messaggi.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  

## <a name="on_update_command_ui"></a>  ON_UPDATE_COMMAND_UI    
Questa macro indica quale funzione gestirà un messaggio di comando di aggiornamento dell'interfaccia utente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_UPDATE_COMMAND_UI( id, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 *ID*  
 ID del messaggio.  
  
 *memberFxn*  
 Il nome della funzione di gestore di messaggi a cui viene eseguito il mapping di messaggi.  
  
### <a name="remarks"></a>Note  
 Deve esserci esattamente una istruzione di macro ON_UPDATE_COMMAND_UI nella mappa messaggi per ogni comando di aggiornamento dell'interfaccia utente che deve essere mappato a una funzione di gestore di messaggi.  
  
 Per altre informazioni ed esempi, vedere [la gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
### <a name="see-also"></a>Vedere anche  
 [Classe CCmdUI](ccmdui-class.md)

## <a name="on_command_range"></a>  ON_COMMAND_RANGE  
Usare questa macro per eseguire il mapping di un intervallo contiguo di ID di comando a una funzione di gestore singolo messaggio.  
  
### <a name="syntax"></a>Sintassi
  
```  
ON_COMMAND_RANGE( id1, id2, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 *ID1*  
 ID del comando all'inizio di un intervallo contiguo di ID di comando.  
  
 *ID2*  
 ID comando alla fine di un intervallo contiguo di ID di comando.  
  
 *memberFxn*  
 Il nome della funzione di gestore di messaggi a cui vengono eseguito il mapping di comandi.  
  
### <a name="remarks"></a>Note  
 L'intervallo di ID inizia con *id1* e termina con *id2*.  
  
 Usare ON_COMMAND_RANGE per eseguire il mapping di un intervallo di ID di comando alla funzione membro di uno. Uso [ON_COMMAND](#on_command) per eseguire il mapping un singolo comando a una funzione membro. Solo una voce della mappa messaggi può corrispondere a un ID di comando specificato. Vale a dire, è possibile mappare un comando per più di un gestore. Per altre informazioni sugli intervalli di messaggio di mapping, vedere [gestori per intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).  
  
 Non è alcun supporto automatico per intervalli della mappa messaggi, pertanto è necessario inserire la macro autonomamente.  
  
### <a name="example"></a>Esempio  
```cpp  
// The code fragment below shows how to use ON_COMMAND_RANGE macro 
// to map a contiguous range of command IDs to a single message  
// handler function (i.e. OnRangeCmds() in the sample below). In  
// addition, it also shows how to use CheckMenuRadioItem() to check a  
// selected menu item and makes it a radio item.

BEGIN_MESSAGE_MAP(CChildFrame, CMDIChildWnd)
   ON_COMMAND_RANGE(ID_COMMAND_RANGECMD1, ID_COMMAND_RANGECMD3, &CChildFrame::OnRangeCmds)
END_MESSAGE_MAP()

void CChildFrame::OnRangeCmds(UINT nID)
{
   CMenu* mmenu = AfxGetMainWnd()->GetMenu();
   CMenu* submenu = mmenu->GetSubMenu(5);
   submenu->CheckMenuRadioItem(ID_COMMAND_RANGECMD1, ID_COMMAND_RANGECMD3, 
      nID, MF_BYCOMMAND);
}
```
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  

## <a name="on_update_command_ui_range"></a>  ON_UPDATE_COMMAND_UI_RANGE    
Un intervallo contiguo di ID di comando viene eseguito il mapping a una funzione del gestore messaggi singolo aggiornamento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_UPDATE_COMMAND_UI_RANGE( id1, id2, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 *ID1*  
 ID del comando all'inizio di un intervallo contiguo di ID di comando.  
  
 *ID2*  
 ID comando alla fine di un intervallo contiguo di ID di comando.  
  
 *memberFxn*  
 Il nome della funzione di gestore di messaggi di aggiornamento a cui vengono eseguito il mapping di comandi.  
  
### <a name="remarks"></a>Note  
 Gestori di messaggi aggiornamento aggiornare lo stato delle voci di menu e pulsanti della barra degli strumenti associati al comando. L'intervallo di ID inizia con *id1* e termina con *id2*.  
  
 Non è alcun supporto automatico per intervalli della mappa messaggi, pertanto è necessario inserire la macro autonomamente.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  

## <a name="on_control_range"></a>  ON_CONTROL_RANGE     
Usare questa macro per eseguire il mapping di un intervallo contiguo di ID di controllo per una funzione del gestore singolo messaggio per un messaggio di notifica Windows specificato, ad esempio BN_CLICKED.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_CONTROL_RANGE( wNotifyCode, id1, id2, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 *wNotifyCode*  
 Il codice di notifica a cui risponde il gestore.  
  
 *ID1*  
 ID del comando all'inizio di un intervallo contiguo di ID di controllo.  
  
 *ID2*  
 ID comando alla fine di un intervallo contiguo di ID di controllo.  
  
 *memberFxn*  
 Il nome della funzione di gestore di messaggi a cui vengono eseguito il mapping ai controlli.  
  
### <a name="remarks"></a>Note  
 L'intervallo di ID inizia con *id1* e termina con *id2*. Il gestore viene chiamato per la notifica specificata provenienti da uno dei controlli mappati.  
  
 Non è alcun supporto automatico per intervalli della mappa messaggi, pertanto è necessario inserire la macro autonomamente.  
  
 Per altre informazioni sull'implementazione delle funzioni del gestore per un intervallo ID di controllo, consultare [gestori per intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  
  