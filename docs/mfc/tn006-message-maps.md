---
title: 'TN006: Mappe messaggi | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.messages.maps
dev_langs:
- C++
helpviewer_keywords:
- ON_UPDATE_COMMAND_UI macro [MFC]
- ON_NOTIFY_RANGE macro [MFC]
- ON_COMMAND macro [MFC]
- ON_CONTROL_RANGE macro [MFC]
- ON_REGISTERED_MESSAGE macro [MFC]
- ON_NOTIFY message [MFC]
- ON_COMMAND_RANGE_EX macro [MFC]
- ON_MESSAGE macro [MFC]
- Windows messages [MFC], message maps
- ON_COMMAND_RANGE macro [MFC]
- TN006
- ON_CONTROL macro [MFC]
- ON_COMMAND_EX macro [MFC]
- message maps [MFC], Windows messaging
ms.assetid: af4b6794-4b40-4f1e-ad41-603c3b7409bb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8ec424729a7bd0eb4da9ec62282ff2aafd4da133
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955557"
---
# <a name="tn006-message-maps"></a>TN006: mappe messaggi
In questa nota descrive le funzionalità di mappa dei messaggi MFC.  
  
## <a name="the-problem"></a>Il problema  
 Microsoft Windows implementa funzioni virtuali nelle classi di finestra che utilizzano la funzionalità di messaggistica. A causa dell'elevato numero di messaggi coinvolti, fornendo una funzione virtuale separata per ogni messaggio Windows creerebbe un oggetto vtable di dimensioni ridotte.  
  
 Poiché il numero di messaggi definiti dal sistema di Windows cambia nel tempo e poiché le applicazioni possono definire i propri messaggi di Windows, mappe messaggi forniscono un livello di riferimento indiretto che impedisce modifiche all'interfaccia di interruzione nel codice esistente.  
  
## <a name="overview"></a>Panoramica  
 MFC fornisce un'alternativa all'istruzione switch utilizzati nei programmi tradizionali basati su Windows per gestire i messaggi inviati a una finestra. È possibile definire un mapping dai messaggi ai metodi in modo che quando viene ricevuto un messaggio da una finestra, il metodo appropriato viene chiamato automaticamente. Questa funzionalità della mappa messaggi è progettata per sono simili alle funzioni virtuali ma offre vantaggi aggiuntivi non disponibili con funzioni virtuali C++.  
  
## <a name="defining-a-message-map"></a>Definizione di una mappa messaggi  
 Il [DECLARE_MESSAGE_MAP](reference/message-map-macros-mfc.md#declare_message_map) macro dichiara tre membri per una classe.  
  
-   Una matrice di voci AFX_MSGMAP_ENTRY privata denominata *_messageEntries*.  
  
-   Una struttura AFX_MSGMAP protetta chiamato *messageMap* che punta al *_messageEntries* matrice.  
  
-   Funzione virtuale chiamata protetta `GetMessageMap` che restituisce l'indirizzo del *messageMap*.  
  
 Questa macro deve inserire nella dichiarazione di una classe con le mappe messaggi. Per convenzione, è alla fine della dichiarazione di classe. Ad esempio:  
  
```  
class CMyWnd : public CMyParentWndClass  
{ *// my stuff...  
 
protected: *//{{AFX_MSG(CMyWnd)  
    afx_msg void OnPaint();
*//}}AFX_MSG  
 
    DECLARE_MESSAGE_MAP() 
};  
```  
  
 Questo è il formato generato da AppWizard e ClassWizard durante la creazione di nuove classi. Il / / {{e / /}} parentesi quadre sono necessari per la creazione guidata classe.  
  
 Tabella della mappa messaggi viene definita mediante un set di macro che si espandono per le voci della mappa dei messaggi. Una tabella inizia con un [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) chiamata (macro), che definisce la classe che viene gestita da questa mappa messaggi e la classe padre a cui i messaggi non gestiti vengono passati. La tabella termina con il [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map) chiamata di macro.  
  
 Tra queste due macro chiamate è una voce per ogni messaggio deve essere gestito da questa mappa messaggi. Ogni messaggio standard di Windows è una macro del form ON_WM_*MESSAGE_NAME* che genera una voce per tale messaggio.  
  
 Per decomprimere i parametri di ogni messaggio di Windows e fornisce l'indipendenza dai tipi è stata definita una firma della funzione standard. Queste firme sono disponibili nel file AFXWIN. h nella dichiarazione di [CWnd](../mfc/reference/cwnd-class.md). Ciascuna di esse è contrassegnato con la parola chiave **afx_msg** per semplificarne l'identificazione.  
  
> [!NOTE]
>  ClassWizard richiede l'utilizzo di **afx_msg** parola chiave in dichiarazioni di gestore della mappa del messaggio.  
  
 Queste firme di funzione sono state derivate utilizzando una convenzione semplice. Il nome della funzione inizia sempre con `"On`". È seguito dal nome del messaggio di Windows con "WM" rimosse e la prima lettera di ogni parola con iniziale maiuscola. L'ordine dei parametri è *wParam* aggiungendo `LOWORD`(*lParam*) quindi `HIWORD`(*lParam*). Non vengono passati i parametri inutilizzati. Tutti gli handle che sono incapsulati dalle classi MFC vengono convertiti in puntatori a oggetti MFC appropriati. Nell'esempio seguente viene illustrato come gestire il messaggio WM_PAINT e causare la `CMyWnd::OnPaint` funzione da chiamare:  
  
```  
BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass) *//{{AFX_MSG_MAP(CMyWnd)  
    ON_WM_PAINT() *//}}AFX_MSG_MAP  
END_MESSAGE_MAP()  
```  
  
 La tabella di mappa dei messaggi deve essere definito all'esterno dell'ambito di qualsiasi definizione di funzione o classe. Non devono essere inserita in un blocco di extern "C".  
  
> [!NOTE]
>  ClassWizard modificherà le voci della mappa messaggi che si verificano tra il / / {{e / /}} parentesi quadra di commento.  
  
## <a name="user-defined-windows-messages"></a>I messaggi di Windows definiti dall'utente  
 Messaggi definiti dall'utente possono essere inclusi in una mappa messaggi tramite il [ON_MESSAGE](reference/message-map-macros-mfc.md#on_message) macro. Questa macro accetta un numero di messaggio e un metodo nel formato:  
  
' ' * / / all'interno della dichiarazione di classe  
    afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);

 
 #<a name="define-wmmymessage-wmuser--100"></a>definire WM_MYMESSAGE (WM_USER + 100)  
 
BEGIN_MESSAGE_MAP (CMyWnd, CMyParentWndClass)  
    ON_MESSAGE (WM_MYMESSAGE, OnMyMessage)  
END_MESSAGE_MAP()  
```  
  
 In this example, we establish a handler for a custom message that has a Windows message ID derived from the standard WM_USER base for user-defined messages. The following example shows how to call this handler:  
  
```  
CWnd * pWnd =....  
pWnd -> SendMessage(WM_MYMESSAGE);
```  
  
 The range of user-defined messages that use this approach must be in the range WM_USER to 0x7fff.  
  
> [!NOTE]
>  ClassWizard does not support entering ON_MESSAGE handler routines from the ClassWizard user interface. You must manually enter them from the Visual C++ editor. ClassWizard will parse these entries and let you browse them just like any other message-map entries.  
  
## Registered Windows Messages  
 The [RegisterWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms644947) function is used to define a new window message that is guaranteed to be unique throughout the system. The macro ON_REGISTERED_MESSAGE is used to handle these messages. This macro accepts a name of a *UINT NEAR* variable that contains the registered windows message ID. For example  
  
```  
classe CMyWnd: CMyParentWndClass pubblico  
{  
public:  
    CMyWnd();

 *//{{AFX_MSG(CMyWnd)  
    afx_msg LRESULT OnFind(WPARAM wParam, LPARAM lParam); * //}}AFX_MSG  
 
    DECLARE_MESSAGE_MAP() 
};  
 
statico UINT quasi WM_FIND = RegisterWindowMessage("COMMDLG_FIND");

 
*//{{AFX_MSG_MAP(CMyWnd) BEGIN_MESSAGE_MAP (CMyWnd, CMyParentWndClass)  
    ON_REGISTERED_MESSAGE (WM_FIND, OnFind) * //}}AFX_MSG_MAP  
END_MESSAGE_MAP()  
```  
  
 The registered Windows message ID variable (WM_FIND in this example) must be a *NEAR* variable because of the way ON_REGISTERED_MESSAGE is implemented.  
  
 The range of user-defined messages that use this approach will be in the range 0xC000 to 0xFFFF.  
  
> [!NOTE]
>  ClassWizard does not support entering ON_REGISTERED_MESSAGE handler routines from the ClassWizard user interface. You must manually enter them from the text editor. ClassWizard will parse these entries and let you browse them just like any other message-map entries.  
  
## Command Messages  
 Command messages from menus and accelerators are handled in message maps with the ON_COMMAND macro. This macro accepts a command ID and a method. Only the specific WM_COMMAND message that has a *wParam* equal to the specified command ID is handled by the method specified in the message-map entry. Command handler member functions take no parameters and return **void**. The macro has the following form:  
  
```  
ON_COMMAND (id, memberFxn)  
```  
  
 Command update messages are routed through the same mechanism, but use the ON_UPDATE_COMMAND_UI macro instead. Command update handler member functions take a single parameter, a pointer to a [CCmdUI](../mfc/reference/ccmdui-class.md) object, and return **void**. The macro has the form  
  
```  
ON_UPDATE_COMMAND_UI (id, memberFxn)  
```  
  
 Advanced users can use the ON_COMMAND_EX macro, which is an extended form of command message handlers. The macro provides a superset of the ON_COMMAND functionality. Extended command-handler member functions take a single parameter, a **UINT** that contains the command ID, and return a **BOOL**. The return value should be **TRUE** to indicate that the command has been handled. Otherwise routing will continue to other command target objects.  
  
 Examples of these forms:  
  
-   Inside Resource.h (usually generated by Visual C++)  
  
 ```  
 #<a name="define----idmycmd------100"></a>definire ID_MYCMD 100  
 #<a name="define----idcomplex----101"></a>definire ID_COMPLEX 101  
 ```  
  
-   Inside the class declaration  
  
 ```  
    afx_msg void OnMyCommand();
afx_msg void OnUpdateMyCommand (CCmdUI * pCmdUI);

    afx_msg BOOL OnComplexCommand(UINT nID);

 ```  
  
-   Inside the message map definition  
  
 ```  
    ON_COMMAND(ID_MYCMD,
    OnMyCommand)  
    ON_UPDATE_COMMAND_UI(ID_MYCMD,
    OnUpdateMyCommand)  
    ON_COMMAND_EX(ID_MYCMD,
    OnComplexCommand)  
 ```  
  
-   In the implementation file  
  
 ```  
    void CMyClass::OnMyCommand()  
 {* / / gestire il comando  
 }  
 
    void CMyClass::OnUpdateMyCommand(CCmdUI* pCmdUI)  
 {* / / impostare lo stato dell'interfaccia utente con pCmdUI  
 }  
 
    BOOL CMyClass::OnComplexCommand(UINT nID)  
 {* / / gestire il comando  
    Restituisce TRUE;  
 }  
 ```  
  
 Advanced users can handle a range of commands by using a single command handler: [ON_COMMAND_RANGE](reference/message-map-macros-mfc.md#on_command_range) or ON_COMMAND_RANGE_EX. See the product documentation for more information about these macros.  
  
> [!NOTE]
>  ClassWizard supports creating ON_COMMAND and ON_UPDATE_COMMAND_UI handlers, but it does not support creating ON_COMMAND_EX or ON_COMMAND_RANGE handlers. However, Class Wizard will parse and let you browse all four command handler variants.  
  
## Control Notification Messages  
 Messages that are sent from child controls to a window have an extra bit of information in their message map entry: the control's ID. The message handler specified in a message map entry is called only if the following conditions are true:  
  
-   The control notification code (high word of *lParam*), such as BN_CLICKED, matches the notification code specified in the message-map entry.  
  
-   The control ID (*wParam*) matches the control ID specified in the message-map entry.  
  
 Custom control notification messages may use the [ON_CONTROL](reference/message-map-macros-mfc.md#on_control) macro to define a message map entry with a custom notification code. This macro has the form  
  
```  
ON_CONTROL (wNotificationCode, id, memberFxn)  
```  
  
 For advanced usage [ON_CONTROL_RANGE](reference/message-map-macros-mfc.md#on_control_range) can be used to handle a specific control notification from a range of controls with the same handler.  
  
> [!NOTE]
>  ClassWizard does not support creating an ON_CONTROL or ON_CONTROL_RANGE handler in the user interface. You must manually enter them with the text editor. ClassWizard will parse these entries and let you browse them just like any other message map entries.  
  
 The Windows Common Controls use the more powerful [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) for complex control notifications. This version of MFC has direct support for this new message by using the ON_NOTIFY and ON_NOTIFY_RANGE macros. See the product documentation for more information about these macros.  
  
## See Also  
 [Technical Notes by Number](../mfc/technical-notes-by-number.md)   
 [Technical Notes by Category](../mfc/technical-notes-by-category.md)

