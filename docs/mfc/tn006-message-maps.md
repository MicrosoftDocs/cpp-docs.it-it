---
title: "TN006: mappe messaggi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.messages.maps"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mappe messaggi [C++], messaggistica Windows"
  - "ON_COMMAND (macro)"
  - "ON_COMMAND_EX (macro)"
  - "ON_COMMAND_RANGE (macro)"
  - "ON_COMMAND_RANGE_EX (macro)"
  - "ON_CONTROL (macro)"
  - "ON_CONTROL_RANGE (macro)"
  - "ON_MESSAGE (macro)"
  - "ON_NOTIFY (messaggio)"
  - "ON_NOTIFY_RANGE (macro)"
  - "ON_REGISTERED_MESSAGE (macro)"
  - "ON_UPDATE_COMMAND_UI (macro)"
  - "TN006"
  - "messaggi Windows [C++], mappe messaggi"
ms.assetid: af4b6794-4b40-4f1e-ad41-603c3b7409bb
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# TN006: mappe messaggi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota viene descritta la funzionalità della mappa messaggi MFC.  
  
## Il problema  
 Microsoft Windows implementa le funzioni virtuali nelle classi di finestre che utilizzano la funzionalità di messaggistica.  A causa del numero di messaggi in questione, fornendo a una funzione virtuale separata per ogni messaggio di windows creerebbe un puntatore vtable proibitivamente grande.  
  
 Poiché il numero di messaggi definiti dal sistema di windows modifiche nel corso del tempo e poiché le applicazioni possono definire propri messaggi di windows, le mappe messaggi fornisce un livello di riferimento indiretto che impedisce le modifiche dell'interfaccia da interrompere il codice esistente.  
  
## Panoramica  
 MFC offre un'alternativa all'istruzione switch utilizzata nei programmi basati su Windows tradizionali per gestire i messaggi inviati a una finestra.  Un mapping dai messaggi ai metodi può essere definito in modo che quando un messaggio viene ricevuta da una finestra, chiamare il metodo appropriato automaticamente.  Questa funzionalità della mappa messaggi è progettata per essere simile alle funzioni virtuali ma può assegnare di base non possibili per le funzioni virtuali C\+\+.  
  
## Definizione della mappa messaggi  
 La macro di [DECLARE\_MESSAGE\_MAP](../Topic/DECLARE_MESSAGE_MAP.md) dichiara tre membri per una classe.  
  
-   Una matrice privata delle voci di `AFX_MSGMAP_ENTRY` denominato `_messageEntries`.  
  
-   Una struttura protetta di `AFX_MSGMAP` denominato `messageMap` che indica `_messageEntries` la matrice.  
  
-   Una funzione virtuale protetto denominato `GetMessageMap` che restituisce l'indirizzo di `messageMap`.  
  
 Questa macro deve essere immessa nella dichiarazione di una classe utilizzando le mappe messaggi.  Per convenzione, si trova alla fine della dichiarazione di classe.  Di seguito è riportato un esempio.  
  
```  
class CMyWnd : public CMyParentWndClass  
{  
    // my stuff...  
  
protected:  
    //{{AFX_MSG(CMyWnd)  
    afx_msg void OnPaint();  
    //}}AFX_MSG  
  
    DECLARE_MESSAGE_MAP()  
};  
```  
  
 Rappresenta il formato generato da AppWizard e ClassWizard quando creano nuove classi.  Le parentesi \/\/e {{di \/\/}} necessari per ClassWizard.  
  
 La tabella della mappa messaggi è definita utilizzando un insieme di macro che si espandono le voci della mappa messaggi.  Una tabella inizia con una chiamata di macro di [BEGIN\_MESSAGE\_MAP](../Topic/BEGIN_MESSAGE_MAP.md), che definisce la classe gestita da questa mappa messaggi e dalla classe padre a cui i messaggi non gestiti vengono passati.  La tabella termina con la chiamata di macro di [END\_MESSAGE\_MAP](../Topic/END_MESSAGE_MAP.md).  
  
 Tra queste due macro chiamate è una voce per ogni messaggio venga gestita da questa mappa messaggi.  Ogni messaggio standard di windows in una macro del form ON\_WM\_*MESSAGE\_NAME* che genera una voce per il messaggio.  
  
 Firma della funzione standard è stata definita per decomprimere i parametri di ogni messaggio di windows e la creazione di indipendenza dai tipi.  Le firme sono disponibili nel file Afxwin.h nella dichiarazione di [CWnd](../mfc/reference/cwnd-class.md).  Ognuno è contrassegnato con la parola chiave `afx_msg` da colori diversi.  
  
> [!NOTE]
>  ClassWizard è necessario utilizzare la parola chiave di `afx_msg` nelle dichiarazioni del gestore della mappa messaggi.  
  
 Le firme della funzione sono state derivate utilizzando una convenzione semplice.  Il nome della funzione inizia sempre con `"On`".  Seguita dal nome del messaggio di windows con il "WM\_" rimosso e la prima lettera di ogni parola scritta in maiuscolo.  L'ordine dei parametri è `wParam` seguito da `LOWORD`\(`lParam`\) quindi `HIWORD`\(`lParam`\).  I parametri inutilizzati non vengono passati.  Tutti gli handle che viene eseguito il wrapping dalle classi MFC vengono convertite in puntatori agli oggetti appropriati MFC.  Nell'esempio seguente viene illustrato come gestire il messaggio di `WM_PAINT` e che la funzione di `CMyWnd::OnPaint` a essere chiamato:  
  
```  
BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass)  
    //{{AFX_MSG_MAP(CMyWnd)  
    ON_WM_PAINT()  
    //}}AFX_MSG_MAP  
END_MESSAGE_MAP()  
```  
  
 La tabella della mappa messaggi deve essere definita nell'ambito di una funzione o una definizione di classe.  Non deve essere immessa in un blocco extern "C".  
  
> [!NOTE]
>  ClassWizard modificherà le voci della mappa messaggi che si verificano tra la parentesi di commento \/\/e {{di \/\/}}.  
  
## Messaggi definiti dall'utente di windows  
 I messaggi definiti dall'utente possono essere inclusi in una mappa messaggi utilizzando la macro di [ON\_MESSAGE](../Topic/ON_MESSAGE.md).  Questa macro accetta un numero di messaggio e un metodo del form:  
  
```  
    // inside the class declaration  
    afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);  
  
    #define WM_MYMESSAGE (WM_USER + 100)  
  
BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass)  
    ON_MESSAGE(WM_MYMESSAGE, OnMyMessage)  
END_MESSAGE_MAP()  
```  
  
 In questo esempio, stabiliamo un gestore per un messaggio personalizzato con un messaggio ID delle finestre derivato da base standard di `WM_USER` per i messaggi definiti dall'utente.  Nell'esempio seguente viene illustrato come chiamare il gestore:  
  
```  
CWnd* pWnd = ...;  
pWnd->SendMessage(WM_MYMESSAGE);  
```  
  
 L'intervallo dei messaggi definiti dall'utente utilizzano questo approccio deve trovarsi nell'intervallo `WM_USER` a 0x7fff.  
  
> [!NOTE]
>  ClassWizard non supporta fornire routine di gestione di `ON_MESSAGE` dall'interfaccia utente di ClassWizard.  È necessario immetterli dall'editor di Visual C\+\+.  ClassWizard ricopre queste voci e consentono di esplorarli come tutte le altre voci della mappa messaggi.  
  
## Registrati i messaggi di windows  
 La funzione di [RegisterWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms644947) viene utilizzata per definire un messaggio della nuova finestra che è univoco in tutto il sistema.  La macro `ON_REGISTERED_MESSAGE` viene utilizzata per gestire questi messaggi.  Questa macro accetta un nome di una variabile di `UINT NEAR` contenente l'id di messaggio registrata windows  Esempio:  
  
```  
class CMyWnd : public CMyParentWndClass  
{  
public:  
    CMyWnd();  
  
    //{{AFX_MSG(CMyWnd)  
    afx_msg LRESULT OnFind(WPARAM wParam, LPARAM lParam);  
    //}}AFX_MSG  
  
    DECLARE_MESSAGE_MAP()  
};  
  
static UINT NEAR WM_FIND = RegisterWindowMessage("COMMDLG_FIND");  
  
BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass)  
    //{{AFX_MSG_MAP(CMyWnd)  
    ON_REGISTERED_MESSAGE(WM_FIND, OnFind)  
    //}}AFX_MSG_MAP  
END_MESSAGE_MAP()  
```  
  
 La variabile registrata message ID delle finestre \(WM\_FIND in questo esempio\) deve essere una variabile di `NEAR` a causa della modalità con cui `ON_REGISTERED_MESSAGE` viene implementato.  
  
 L'intervallo dei messaggi definiti dall'utente utilizzano questo approccio verrà nell'intervallo 0xC000 a 0xFFFF.  
  
> [!NOTE]
>  ClassWizard non supporta fornire routine di gestione di `ON_REGISTERED_MESSAGE` dall'interfaccia utente di ClassWizard.  È necessario immetterli dall'editor di testo.  ClassWizard ricopre queste voci e consentono di esplorarli come tutte le altre voci della mappa messaggi.  
  
## Messaggi di comando  
 I messaggi di comando dai menu e da come sono gestiti in mappe messaggi con la macro di `ON_COMMAND`.  Questa macro accetta un ID comando e un metodo.  Solo il messaggio specifico di `WM_COMMAND` con `wParam` uguale all'ID di comando specificato è gestito dal metodo specificato nella voce della mappa messaggi.  Le funzioni membro del gestore comando non accettano parametri e `void`restituita.  La macro presenta il formato seguente:  
  
```  
ON_COMMAND(id, memberFxn)  
```  
  
 I messaggi di aggiornamento dei comandi sono indirizzati attraverso lo stesso meccanismo, ma utilizzano la macro di `ON_UPDATE_COMMAND_UI` invece.  Le funzioni membro gestore aggiornamento del comando accetta un singolo parametro, un puntatore a un oggetto di [CCmdUI](../mfc/reference/ccmdui-class.md) e `void`restituita.  La macro è stata il form  
  
```  
ON_UPDATE_COMMAND_UI(id, memberFxn)  
```  
  
 Gli utenti avanzati possono utilizzare la macro di `ON_COMMAND_EX`, un form esteso dei gestori di messaggio di comando.  La macro fornisce un superset della funzionalità di `ON_COMMAND`.  Le funzioni membro estese del gestore comando accetta un singolo parametro, `UINT` contenente l'id di comando e restituiscono `BOOL`.  Il valore restituito deve essere `TRUE` per indicare che il comando è stato gestito.  In caso contrario il routing continuerà ad altri oggetti di destinazione comando.  
  
 Esempi di questi form:  
  
-   Resource.h interno \(solitamente generato da Visual C\+\+\)  
  
    ```  
    #define    ID_MYCMD      100  
    #define    ID_COMPLEX    101  
    ```  
  
-   Nella dichiarazione di classe  
  
    ```  
    afx_msg void OnMyCommand();  
    afx_msg void OnUpdateMyCommand(CCmdUI* pCmdUI);  
    afx_msg BOOL OnComplexCommand(UINT nID);  
    ```  
  
-   Nella definizione della mappa messaggi  
  
    ```  
    ON_COMMAND(ID_MYCMD, OnMyCommand)  
    ON_UPDATE_COMMAND_UI(ID_MYCMD, OnUpdateMyCommand)  
    ON_COMMAND_EX(ID_MYCMD, OnComplexCommand)  
    ```  
  
-   Nel file di implementazione  
  
    ```  
    void CMyClass::OnMyCommand()  
    {  
        // handle the command  
    }  
  
    void CMyClass::OnUpdateMyCommand(CCmdUI* pCmdUI)  
    {  
        // set the UI state with pCmdUI  
    }  
  
    BOOL CMyClass::OnComplexCommand(UINT nID)  
    {  
        // handle the command  
        return TRUE;  
    }  
    ```  
  
 Gli utenti avanzati possono gestire un intervallo dei comandi utilizzando un unico gestore comando: [ON\_COMMAND\_RANGE](../Topic/ON_COMMAND_RANGE.md) o `ON_COMMAND_RANGE_EX`.  Vedere la documentazione del prodotto per ulteriori informazioni su queste macro.  
  
> [!NOTE]
>  ClassWizard supporta la creazione `ON_COMMAND` e gestori di `ON_UPDATE_COMMAND_UI`, ma non supporta la creazione `ON_COMMAND_EX` o gestori di `ON_COMMAND_RANGE`.  Tuttavia, la creazione guidata classe si analizza e let esplorare le quattro varianti del gestore comando.  
  
## Messaggi di notifica di controllo  
 I messaggi inviati dai controlli figlio di una finestra con un bit aggiuntivo di informazioni nella rispettiva voce della mappa messaggi: l'id del controllo  Il gestore messaggi specificato in una voce della mappa messaggi viene chiamato solo se le condizioni seguenti sono vere:  
  
-   Il codice di notifica di controllo \(word alto di `lParam`\), come BN\_CLICKED, corrisponde al codice della notifica specificato nella voce della mappa messaggi.  
  
-   L'id del controllo \(`wParam`\) corrisponde all'ID del controllo specificato nella voce della mappa messaggi.  
  
 I messaggi di notifica di controllo personalizzati possono utilizzare la macro di [ON\_CONTROL](../Topic/ON_CONTROL.md) per definire una voce della mappa messaggi con il codice di notifica personalizzato.  Questa macro nel formato  
  
```  
ON_CONTROL(wNotificationCode, id, memberFxn)  
```  
  
 Per un utilizzo avanzato [ON\_CONTROL\_RANGE](../Topic/ON_CONTROL_RANGE.md) può essere utilizzato per mantenere una notifica di controllo specifici da una serie di controlli con lo stesso gestore.  
  
> [!NOTE]
>  ClassWizard non supporta creare un gestore di `ON_CONTROL_RANGE` o di `ON_CONTROL` nell'interfaccia utente.  È necessario immetterli con editor di testo.  ClassWizard ricopre queste voci e consentono di esplorarli come tutte le altre voci della mappa messaggi.  
  
 I controlli comuni di Windows utilizzano [WM\_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) più efficace per le notifiche di controllo complesse.  Questa versione di MFC offre supporto diretto al nuovo messaggio utilizzando le macro di `ON_NOTIFY_RANGE` e di `ON_NOTIFY`.  Vedere la documentazione del prodotto per ulteriori informazioni su queste macro.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)