---
title: Macro della mappa (MFC) dei messaggi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.messages
dev_langs:
- C++
helpviewer_keywords:
- message map macros
- Windows messages [C++], declaration
- demarcating Windows messages
- message maps [C++], macros
- message maps [C++], declaration and demarcation
- message mapping macros
- ranges, message map
- message map ranges
ms.assetid: 531b15ce-32b5-4ca0-a849-bb519616c731
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: b943ef8dd652df061965fe81ecc9c08115636141
ms.openlocfilehash: 73def19ecc0577d35054a7384d57c88fd2760499
ms.lasthandoff: 04/04/2017

---
# <a name="message-map-macros-mfc"></a>Macro della mappa messaggi (MFC)
Per supportare le mappe messaggi, MFC fornisce le seguenti macro:  
  
### <a name="message-map-declaration-and-demarcation-macros"></a>Mappa messaggi dichiarazione e delimitazione della macro  
  
|||  
|-|-|  
|[DECLARE_MESSAGE_MAP](#declare_message_map)|Dichiara una mappa messaggi verrà utilizzata in una classe per eseguire il mapping di messaggi a funzioni (deve essere utilizzato nella dichiarazione di classe).|  
|[BEGIN_MESSAGE_MAP](#begin_message_map)|Inizia la definizione di una mappa messaggi (deve essere utilizzato nell'implementazione della classe).|  
|[END_MESSAGE_MAP](#end_message_map)|Termina la definizione di una mappa messaggi (deve essere utilizzato nell'implementazione della classe).|  
  
### <a name="message-mapping-macros"></a>Macro di Mapping di messaggi  
  
|||  
|-|-|  
|[ON_COMMAND](#on_command)|Indica quale funzione che gestirà un messaggio di comando specificato.|  
|[ON_COMMAND_EX](#on_command_ex)|Indica quale funzione che gestirà un messaggio di comando specificato.|  
|[ON_CONTROL](#on_control)|Indica quale funzione che gestirà un messaggio di notifica del controllo specificato.|  
|[ON_MESSAGE](#on_message)|Indica quale funzione che gestirà un messaggio definito dall'utente.|  
|[ON_OLECMD](#on_olecmd)|Indica quale funzione che gestirà un comando di menu da DocObject o il relativo contenitore.|  
|[ON_REGISTERED_MESSAGE](#on_registered_message)|Indica quale funzione che gestirà un messaggio definito dall'utente registrato.|  
|[ON_REGISTERED_THREAD_MESSAGE](#on_registered_thread_message)|Indica quale funzione che gestirà un messaggio definito dall'utente registrato quando si dispone di un `CWinThread` classe.|  
|[ON_THREAD_MESSAGE](#on_thread_message)|Indica quale funzione che gestirà un messaggio definito dall'utente quando si dispone di un `CWinThread` classe.|  
|[ON_UPDATE_COMMAND_UI](#on_update_command_ui)|Indica quale funzione che gestirà un messaggio di comando di aggiornamento dell'interfaccia utente specificato.|  
  
### <a name="message-map-range-macros"></a>Macro della mappa messaggi intervallo  
  
|||  
|-|-|  
|[ON_COMMAND_RANGE](#on_command_range)|Indica quale funzione che gestirà l'intervallo di ID di comando specificati nei primi due parametri alla macro.|  
|[ON_UPDATE_COMMAND_UI_RANGE](#on_update_command_ui_range)|Indica il gestore di aggiornamento consente di gestire l'intervallo di ID di comando specificati nei primi due pa] Tri alla macro.|  
|[ON_CONTROL_RANGE](#on_control_range)|Indica quale funzione che gestirà le notifiche dall'intervallo di ID specificati nei parametri di secondo e terzi alla macro di controllo. Il primo parametro è un messaggio di notifica dei controlli, ad esempio **BN_CLICKED**.|  
  
 Per ulteriori informazioni su mappe messaggi, la dichiarazione della mappa messaggi e delimitazione della macro e le macro di mapping di messaggi, vedere [mappe messaggi](../../mfc/reference/message-maps-mfc.md) e [la gestione dei messaggi e gli argomenti di Mapping](../../mfc/message-handling-and-mapping.md). Per ulteriori informazioni sugli intervalli della mappa messaggi, vedere [gestori per intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).  

## <a name="declare_message_map"></a>DECLARE_MESSAGE_MAP
 Dichiara che la classe definisce una mappa messaggi. Ogni `CCmdTarget`-classe derivata nel programma deve fornire una mappa messaggi per gestire i messaggi.  
  
### <a name="syntax"></a>Sintassi  
  
```    
DECLARE_MESSAGE_MAP( )  
```  
  
### <a name="remarks"></a>Note  
 Utilizzare il `DECLARE_MESSAGE_MAP` (macro) alla fine della dichiarazione di classe. Quindi, nel file. cpp che definisce le funzioni membro per la classe, utilizzare il `BEGIN_MESSAGE_MAP` (macro), per ognuna delle funzioni del gestore di messaggi, le voci di macro e `END_MESSAGE_MAP` (macro).  
  
> [!NOTE]
>  Se si dichiara un membro dopo `DECLARE_MESSAGE_MAP`, è necessario specificare un nuovo tipo di accesso (**pubblica**, `private`, o `protected`) per loro.  
  
 Per ulteriori informazioni sul messaggio di mapping e `DECLARE_MESSAGE_MAP` (macro), vedere [la gestione dei messaggi e mapping dei](../../mfc/message-handling-and-mapping.md).  
  
### <a name="example"></a>Esempio  
```cpp  
class CMainFrame : public CMDIFrameWnd
{
   DECLARE_MESSAGE_MAP()

   // Remainder of class declaration omitted.
``` 
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  

## <a name="begin_message_map"></a>BEGIN_MESSAGE_MAP
Inizia la definizione della mappa messaggi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
BEGIN_MESSAGE_MAP( theClass, baseClass )  
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 Specifica il nome della classe il cui messaggio mappa.  
  
 `baseClass`  
 Specifica il nome della classe base di `theClass`.  
  
### <a name="remarks"></a>Note  
 Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa dei messaggi con il `BEGIN_MESSAGE_MAP` (macro), quindi aggiungere le voci di macro per ognuna delle funzioni del gestore di messaggi e completare la mappa dei messaggi con il `END_MESSAGE_MAP` (macro).  
  
 Per ulteriori informazioni sulle mappe messaggi, vedere [mappe messaggi](message-maps-mfc.md)  
  
### <a name="example"></a>Esempio  
```cpp  
BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
   ON_WM_CREATE()
END_MESSAGE_MAP()
```
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h 

## <a name="end_message_map"></a>END_MESSAGE_MAP
Termina la definizione della mappa messaggi.  
  
### <a name="syntax"></a>Sintassi  
  
```   
END_MESSAGE_MAP( )  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sul messaggio di mapping e `END_MESSAGE_MAP` (macro), vedere [la gestione dei messaggi e mapping dei](../../mfc/message-handling-and-mapping.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  

## <a name="on_command"></a>ON_COMMAND
Questa macro esegue il mapping a una funzione membro di un messaggio di comando.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_COMMAND( id, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 ID di comando.  
  
 `memberFxn`  
 Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.  
  
### <a name="remarks"></a>Note  
 Indica quale funzione che gestirà un messaggio da un oggetto di interfaccia utente di comando, ad esempio un menu o il pulsante di comando.  
  
 Quando un oggetto destinazione comando riceve un Windows **WM_COMMAND** messaggio con l'ID specificato, `ON_COMMAND` chiamerà la funzione membro `memberFxn` per gestire il messaggio.  
  
 Utilizzare `ON_COMMAND` per eseguire il mapping a una funzione membro un unico comando. Utilizzare [ON_COMMAND_RANGE](#on_command_range) per eseguire il mapping di un intervallo di ID di comando a una funzione membro di uno. Una sola voce della mappa messaggi può corrispondere a un id di comando specificato. Ovvero, è possibile mappare un comando per più di un gestore. Per ulteriori informazioni ed esempi, vedere [la gestione dei messaggi e mapping dei](../../mfc/message-handling-and-mapping.md).  
  
### <a name="example"></a>Esempio  
```cpp  
BEGIN_MESSAGE_MAP(CMFCListViewDoc, CDocument)
   ON_COMMAND(ID_MYCOMMAND, &CMFCListViewDoc::OnMycommand)
END_MESSAGE_MAP()
``` 
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  

 ## <a name="on_command_ex"></a>ON_COMMAND_EX
Estendere la funzione membro di gestori di comandi.  
   
### <a name="syntax"></a>Sintassi  
  ```  
ON_COMMAND_EX(id, memberFxn);  
```
### <a name="parameters"></a>Parametri  
 `id`  
 ID di comando.  
  
 `memberFxn`  
 Il nome della funzione del gestore messaggi a cui il comando viene eseguito il mapping.  
   
### <a name="remarks"></a>Note 
Forma estesa di gestori di messaggi di comando è disponibile per utilizzi avanzati. Il `ON_COMMAND_EX` macro viene usata per tali gestori di messaggi e fornisce un superset della funzionalità [ON_COMMAND] (#on_command).  Funzioni membro di gestori di comandi estesi accettano un solo parametro, un **UINT** contenente l'ID di comando e restituire un **BOOL**. Il valore restituito deve essere TRUE per 

Questa macro esegue il mapping di un messaggio di comando a una funzione membro esteso di gestori di comandi.  
   
### <a name="syntax"></a>Sintassi  
```  
ON_COMMAND_EX(id,  memberFxn);  
```
### <a name="parameters"></a>Parametri  
 `id`  
 ID di comando.  
  
 `memberFxn`  
 Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.  
   
### <a name="remarks"></a>Note  
 Forma estesa di gestori di messaggi di comando è disponibile per utilizzi avanzati. Il `ON_COMMAND_EX` macro viene usata per tali gestori di messaggi e fornisce un superset del [ON_COMMAND](message-map-macros-mfc.md#on_command) funzionalità. Funzioni membro di gestori di comandi estesi accettano un solo parametro, un **UINT** contenente l'ID di comando e restituire un **BOOL**. Il valore restituito deve essere TRUE per indicare che il comando è stato gestito; routing in caso contrario, continueranno ad altri oggetti destinazione comando.  
Per ulteriori informazioni, vedere la nota tecnica [TN006: mappe messaggi] tm006-messaggio-maps.md).  
   
### <a name="requirements"></a>Requisiti  
 File di intestazione: afxmsg_.h  
   
### <a name="see-also"></a>Vedere anche  
 [ON_COMMAND](message-map-macros-mfc.md#on_command)   
 [TN006: mappe messaggi] tm006-messaggio-maps.md)

  
## <a name="on_control"></a>ON_CONTROL
Indica quale funzione che gestirà un messaggio di notifica di controllo personalizzato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_CONTROL( wNotifyCode, id, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 `wNotifyCode`  
 Il codice di notifica del controllo.  
  
 `id`  
 ID di comando.  
  
 `memberFxn`  
 Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.  
  
### <a name="remarks"></a>Note  
 Messaggi di notifica sono quelli inviati da un controllo alla finestra padre.  
  
 Deve essere presente esattamente un `ON_CONTROL` istruzione macro nella mappa messaggi per ogni messaggio di notifica di controllo che deve essere mappato a una funzione del gestore di messaggi.  
  
 Per ulteriori informazioni ed esempi, vedere [la gestione dei messaggi e mapping dei](../../mfc/message-handling-and-mapping.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  
  

## <a name="on_message"></a>ON_MESSAGE  
Indica quale funzione che gestirà un messaggio definito dall'utente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_MESSAGE( message, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 `message`  
 ID del messaggio.  
  
 `memberFxn`  
 Il nome della funzione del gestore messaggi a cui è mappato il messaggio.  
  
 Il tipo della funzione deve essere `afx_msg LRESULT (CWnd::*)(WPARAM, LPARAM)`.  
  
### <a name="remarks"></a>Note  
 Messaggi definiti dall'utente sono i messaggi che non sono standard di Windows `WM_MESSAGE` messaggi. Quando si seleziona un ID messaggio, è necessario utilizzare i valori all'interno dell'intervallo di `WM_USER` (0x0400) a 0x7FFF o `WM_APP` (0x8000) a 0xBFFF. Per ulteriori informazioni riguardanti gli ID dei messaggi, vedere [WM_APP](http://msdn.microsoft.com/library/windows/desktop/ms644930).  
  
 Deve essere presente esattamente un `ON_MESSAGE` istruzione macro nella mappa messaggi per ogni messaggio definito dall'utente che deve essere mappato a una funzione del gestore di messaggi.  
  
> [!NOTE]
>  Oltre ai messaggi definiti dall'utente, `ON_MESSAGE` gestisce i messaggi meno comuni di Windows. Per ulteriori informazioni, vedere l'articolo della Knowledge Base [99848: INFO: utilizzo di Macro ON_MESSAGE() ai messaggi meno comune mappa](http://go.microsoft.com/fwlink/?linkId=192022).  
  
 Per ulteriori informazioni ed esempi, vedere [la gestione dei messaggi e Mapping argomenti](../../mfc/message-handling-and-mapping.md) e [gestori definiti dall'utente](user-defined-handlers.md)  
  
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

## <a name="on_olecmd"></a>ON_OLECMD    
Invia i comandi tramite l'interfaccia dispatch comando `IOleCommandTarget`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_OLECMD( pguid, olecmdid, id )  
```  
  
### <a name="parameters"></a>Parametri  
 `pguid`  
 Identificatore del gruppo di comando a cui appartiene il comando. Utilizzare **NULL** per il gruppo standard.  
  
 *olecmdid*  
 L'identificatore del comando OLE.  
  
 `id`  
 L'ID del menu, sulla barra degli strumenti ID, ID di pulsante o altri ID della risorsa o dell'oggetto, il comando.  
  
### <a name="remarks"></a>Note  
 `IOleCommandTarget`consente a un contenitore ricevere comandi che hanno origine nell'interfaccia utente del DocObject e consente al contenitore di inviare gli stessi comandi (ad esempio nuovo, Apri, Salva con nome e stampa dal menu File; e copiare, incollare, annullare, e così via dal menu Modifica) per DocObject.  
  
 `IOleCommandTarget`è più semplice che OLE Automation `IDispatch`. `IOleCommandTarget`si basa interamente in un set standard di comandi che raramente da argomenti e informazioni sul tipo non è coinvolto (indipendenza dai tipi viene ridotto per anche gli argomenti di comando). Se è necessario inviare i comandi con gli argomenti, utilizzare [COleServerDoc::OnExecOleCmd](coleserverdoc-class.md#onexecolecmd).  
  
 Il `IOleCommandTarget` i comandi di menu standard sono stati implementati da MFC nella macro seguenti:  
  
 **ON_OLECMD_CLEARSELECTION ()**  
  
 Invia il comando Modifica Clear. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_CLEARSELECTION, ID_EDIT_CLEAR)`  
  
 **ON_OLECMD_COPY ()**  
  
 Invia il comando Edit Copy. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_COPY, ID_EDIT_COPY)`  
  
 **ON_OLECMD_CUT ()**  
  
 Invia il comando Modifica Taglia. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_CUT, ID_EDIT_CUT)`  
  
 **ON_OLECMD_NEW ()**  
  
 Invia il comando File nuovo. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_NEW, ID_FILE_NEW)`  
  
 **ON_OLECMD_OPEN ()**  
  
 Invia il comando Apri File. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_OPEN, ID_FILE_OPEN)`  
  
 **ON_OLECMD_PAGESETUP ()**  
  
 Invia il comando File Imposta pagina. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_PAGESETUP, ID_FILE_PAGE_SETUP)`  
  
 **ON_OLECMD_PASTE ()**  
  
 Invia il comando Incolla di modifica. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_PASTE, ID_EDIT_PASTE)`  
  
 **ON_OLECMD_PASTESPECIAL ()**  
  
 Invia il comando Modifica Incolla speciale. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_PASTESPECIAL, ID_EDIT_PASTE_SPECIAL)`  
  
 **ON_OLECMD_PRINT ()**  
  
 Invia il comando di stampa di File. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_PRINT, ID_FILE_PRINT)`  
  
 **ON_OLECMD_PRINTPREVIEW ()**  
  
 Invia il comando Anteprima di stampa di File. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_PRINTPREVIEW, ID_FILE_PRINT_PREVIEW)`  
  
 **ON_OLECMD_REDO ()**  
  
 Invia il comando Modifica Ripristina. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_REDO, ID_EDIT_REDO)`  
  
 **ON_OLECMD_SAVE ()**  
  
 Invia il comando Salva. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_SAVE, ID_FILE_SAVE)`  
  
 **ON_OLECMD_SAVE_AS ()**  
  
 Invia il comando Salva con nome. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_SAVEAS, ID_FILE_SAVE_AS)`  
  
 **ON_OLECMD_SAVE_COPY_AS ()**  
  
 Invia il comando Salva copia con nome. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_SAVECOPYAS, ID_FILE_SAVE_COPY_AS)`  
  
 **ON_OLECMD_SELECTALL ()**  
  
 Invia il comando Modifica Seleziona tutto. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_SELECTALL, ID_EDIT_SELECT_ALL)`  
  
 **ON_OLECMD_UNDO ()**  
  
 Invia il comando Annulla modifica. Implementato come:  
  
 `ON_OLECMD(NULL, OLECMDID_UNDO, ID_EDIT_UNDO)`  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AfxDocOb. h  
  
### <a name="see-also"></a>Vedere anche  
 [Classe COleCmdUI](colecmdui-class.md)   
 [COleServerDoc::OnExecOleCmd](coleserverdoc-class.md#onexecolecmd)

## <a name="on_registered_message"></a>ON_REGISTERED_MESSAGE
Le finestre **RegisterWindowMessage** funzione viene utilizzata per definire un nuovo messaggio della finestra che deve necessariamente essere univoco in tutto il sistema.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_REGISTERED_MESSAGE( nMessageVariable, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 `nMessageVariable`  
 La variabile di ID registrati-finestra di messaggio.  
  
 `memberFxn`  
 Il nome della funzione del gestore messaggi a cui è mappato il messaggio.  
  
### <a name="remarks"></a>Note  
 Questa macro indica quale funzione che gestirà il messaggio registrato.  
  
 Per ulteriori informazioni ed esempi, vedere [la gestione dei messaggi e mapping dei](../../mfc/message-handling-and-mapping.md).  
  
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

## <a name="on_registered_thread_message"></a>ON_REGISTERED_THREAD_MESSAGE    
Indica quale funzione che gestirà il messaggio registrato dalla funzione RegisterWindowMessage Windows.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_REGISTERED_THREAD_MESSAGE(nMessageVariable, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 `nMessageVariable`  
 La variabile di ID registrati-finestra di messaggio.  
  
 `memberFxn`  
 Il nome della funzione CWinThread gestore di messaggi a cui è mappato il messaggio.  
  
### <a name="remarks"></a>Note  
 RegisterWindowMessage viene utilizzato per definire un nuovo messaggio della finestra che deve necessariamente essere univoco in tutto il sistema. Quando si dispone di una CWinThread (classe), è necessario utilizzare invece ON_REGISTERED_MESSAGE ON_REGISTERED_THREAD_MESSAGE. 
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  

## <a name="on_thread_message"></a>ON_THREAD_MESSAGE    
Indica quale funzione che gestirà un messaggio definito dall'utente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_THREAD_MESSAGE( message, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 `message`  
 ID del messaggio.  
  
 `memberFxn`  
 Il nome del `CWinThread`-messaggio-funzione a cui il messaggio viene eseguito il mapping del gestore.  
  
### <a name="remarks"></a>Note  
 `ON_THREAD_MESSAGE`deve essere utilizzato al posto del `ON_MESSAGE` quando si dispone di un `CWinThread` classe. Messaggi definiti dall'utente sono i messaggi che non sono standard di Windows **WM_MESSAGE** messaggi. Deve essere presente esattamente un `ON_THREAD_MESSAGE` istruzione macro nella mappa messaggi per ogni messaggio definito dall'utente che deve essere mappato a una funzione del gestore di messaggi.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  

## <a name="on_update_command_ui"></a>ON_UPDATE_COMMAND_UI    
Questa macro indica quale funzione che gestirà un messaggio di comando di aggiornamento dell'interfaccia utente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_UPDATE_COMMAND_UI( id, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 `id`  
 ID del messaggio.  
  
 `memberFxn`  
 Il nome della funzione del gestore messaggi a cui è mappato il messaggio.  
  
### <a name="remarks"></a>Note  
 Deve essere presente esattamente un `ON_UPDATE_COMMAND_UI` istruzione macro nella mappa messaggi per ogni comando di aggiornamento dell'interfaccia utente che deve essere mappato a una funzione del gestore di messaggi.  
  
 Per ulteriori informazioni ed esempi, vedere [la gestione dei messaggi e mapping dei](../../mfc/message-handling-and-mapping.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
### <a name="see-also"></a>Vedere anche  
 [Classe CCmdUI](ccmdui-class.md)

## <a name="on_command_range"></a>ON_COMMAND_RANGE  
Utilizzare questa macro, eseguire il mapping di un intervallo contiguo di ID di comando a una funzione del gestore singolo messaggio.  
  
### <a name="syntax"></a>Sintassi
  
```  
ON_COMMAND_RANGE( id1, id2, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 `id1`  
 ID di comando all'inizio di un intervallo contiguo di ID di comando.  
  
 `id2`  
 ID di comando alla fine di un intervallo contiguo di ID di comando.  
  
 `memberFxn`  
 Il nome della funzione del gestore messaggi a cui vengono eseguito il mapping di comandi.  
  
### <a name="remarks"></a>Note  
 L'intervallo di ID inizia con `id1` e finisce con `id2`.  
  
 Utilizzare `ON_COMMAND_RANGE` per eseguire il mapping di un intervallo di ID di comando a una funzione membro di uno. Utilizzare [ON_COMMAND](#on_command) per eseguire il mapping a una funzione membro un unico comando. Una sola voce della mappa messaggi può corrispondere a un ID di comando specificato. Ovvero, è possibile mappare un comando per più di un gestore. Per ulteriori informazioni sugli intervalli di messaggi di mapping, vedere [gestori per intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).  
  
 Non è previsto alcun supporto automatico per intervalli della mappa messaggi, è necessario inserire la macro manualmente.  
  
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

## <a name="on_update_command_ui_range"></a>ON_UPDATE_COMMAND_UI_RANGE    
Un intervallo contiguo di ID di comando viene eseguito il mapping a una funzione del gestore di aggiornamento singolo messaggio.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_UPDATE_COMMAND_UI_RANGE( id1, id2, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 `id1`  
 ID di comando all'inizio di un intervallo contiguo di ID di comando.  
  
 `id2`  
 ID di comando alla fine di un intervallo contiguo di ID di comando.  
  
 `memberFxn`  
 Il nome della funzione update gestore messaggi a cui vengono eseguito il mapping di comandi.  
  
### <a name="remarks"></a>Note  
 Gestori messaggi aggiornamento aggiornare lo stato di voci di menu e pulsanti della barra degli strumenti associati al comando. L'intervallo di ID inizia con `id1` e finisce con `id2`.  
  
 Non è previsto alcun supporto automatico per intervalli della mappa messaggi, è necessario inserire la macro manualmente.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  

## <a name="on_control_range"></a>ON_CONTROL_RANGE     
Utilizzare questa macro per eseguire il mapping di un intervallo contiguo di ID di controllo per una funzione del gestore singolo messaggio per un messaggio di notifica di Windows specificato, ad esempio **BN_CLICKED**.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ON_CONTROL_RANGE( wNotifyCode, id1, id2, memberFxn )  
```  
  
### <a name="parameters"></a>Parametri  
 `wNotifyCode`  
 Il codice di notifica a cui risponde il gestore.  
  
 `id1`  
 ID di comando all'inizio di un intervallo contiguo di ID di controllo.  
  
 `id2`  
 ID di comando alla fine di un intervallo contiguo di ID di controllo.  
  
 `memberFxn`  
 Il nome della funzione del gestore messaggi a cui vengono eseguito il mapping dei controlli.  
  
### <a name="remarks"></a>Note  
 L'intervallo di ID inizia con `id1` e finisce con `id2`. Il gestore viene chiamato per la notifica specificata provenienti da uno dei controlli mappati.  
  
 Non è previsto alcun supporto automatico per intervalli della mappa messaggi, è necessario inserire la macro manualmente.  
  
 Per ulteriori informazioni sull'implementazione di funzioni del gestore per un intervallo di ID di controllo, fare riferimento a [gestori per intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmsg_.h  
  



