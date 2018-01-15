---
title: 'Tn026: routine DDX e DDV | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- DDX
- DDV
dev_langs: C++
helpviewer_keywords:
- DDX (dialog data exchange), procedures
- TN026
- DDV (dialog data validation), procedures
ms.assetid: c2eba87a-4b47-4083-b28b-e2fa77dfb4c4
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 15c2309e8080892bdca2753c1ea6128ce419862f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn026-ddx-and-ddv-routines"></a>TN026: routine DDX e DDV
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritto il dialog data exchange (DDX) e un architettura di finestra di dialogo dati convalida (DDV). Vengono inoltre descritte la modalità di scrittura una routine DDX _ o DDV _ e come è possibile estendere ClassWizard per l'utilizzo di routine.  
  
## <a name="overview-of-dialog-data-exchange"></a>Cenni preliminari sulla finestra di dialogo di scambio di dati  
 Tutte le funzioni di dati di finestra di dialogo vengono eseguite con il codice C++. Non esistono risorse speciali o magiche macro. Il cuore del meccanismo è una funzione virtuale sottoposta a override in ogni classe di finestra di dialogo che finestra di dialogo di scambio di dati e la convalida. Si è sempre presente in questo formato:  
  
```  
void CMyDialog::DoDataExchange(CDataExchange* pDX)  
{  
    CDialog::DoDataExchange(pDX);
*// call base class  
 *//{{AFX_DATA_MAP(CMyDialog)  
 <data_exchange_function_call>  
 <data_validation_function_call> *//}}AFX_DATA_MAP  
}  
```  
  
 I commenti AFX formato speciale consentono ClassWizard individuare e modificare il codice all'interno di questa funzione. Codice che non è compatibile con la creazione guidata classe deve essere posizionato all'esterno di commenti di formato speciale.  
  
 Nell'esempio precedente, < data_exchange_function_call > è nel formato:  
  
```  
DDX_Custom(pDX,
    nIDC,
    field);
```  
  
 e < data_validation_function_call > è facoltativo e il formato è:  
  
```  
DDV_Custom(pDX,
    field, ...);
```  
  
 Più di una coppia di DDV DDX _ / _ può essere inclusi in ogni `DoDataExchange` (funzione).  
  
 Per un elenco di tutte le routine di scambio dati della finestra di dialogo e routine di convalida dei dati finestra di dialogo disponibili in MFC, vedere 'afxdd_.h'.  
  
 Finestra di dialogo è sufficiente che: dati dei membri nel **CMyDialog** classe. Non vengono memorizzate in uno struct o simili.  
  
## <a name="notes"></a>Note  
 Anche se si chiama "dati di finestra di dialogo", tutte le funzionalità sono disponibili in qualsiasi classe derivata da `CWnd` e non sono limitate alle finestre di dialogo soli.  
  
 I valori iniziali di dati vengono impostati nel costruttore standard di C++, in genere in un blocco con `//{{AFX_DATA_INIT` e `//}}AFX_DATA_INIT` commenti.  
  
 `CWnd::UpdateData`è l'operazione che esegue l'inizializzazione e l'errore di gestione nella chiamata alla `DoDataExchange`.  
  
 È possibile chiamare `CWnd::UpdateData` in qualsiasi momento per eseguire la convalida e scambio di dati. Per impostazione predefinita `UpdateData`(TRUE) viene chiamato nel predefinito `CDialog::OnOK` gestore e `UpdateData`(FALSE) viene chiamata nel predefinito `CDialog::OnInitDialog`.  
  
 La routine DDV _ deve seguire immediatamente la routine DDX _ per tale *campo*.  
  
## <a name="how-does-it-work"></a>Come funziona  
 Non è necessario conoscere le informazioni seguenti per utilizzare dati di finestra di dialogo. Tuttavia, comprendere il funzionamento dietro le quinte consentono di scrivere la propria routine di convalida o di exchange.  
  
 Il `DoDataExchange` funzione membro è molto simile di `Serialize` funzione membro - ed è responsabile per ottenere o impostare i dati in/da un modulo esterno (in questo caso controlli in una finestra di dialogo) da/verso i dati dei membri nella classe. Il `pDX` parametro è il contesto per eseguire l'operazione di scambio di dati ed è simile al `CArchive` parametro `CObject::Serialize`. Il `pDX` (un `CDataExchange` oggetto) ha una direzione flag come `CArchive` dispone di un flag di direzione:  
  
-   Se **! m_bSaveAndValidate**, quindi caricare lo stato dei dati nei controlli.  
  
-   Se `m_bSaveAndValidate`, quindi impostare lo stato dei dati dai controlli.  
  
 La convalida viene eseguita solo quando `m_bSaveAndValidate` è impostata. Il valore di `m_bSaveAndValidate` è determinato dal parametro di BOOL a `CWnd::UpdateData`.  
  
 Esistono tre altri interessanti `CDataExchange` membri:  
  
- `m_pDlgWnd`: La finestra (in genere una finestra di dialogo) che contiene i controlli. Equivale a impedisce ai chiamanti delle funzioni globali _ e DDV _ di dover passare 'this' per tutte le routine DDX/DDV.  
  
- `PrepareCtrl`, e `PrepareEditCtrl`: Prepara un controllo di finestra di dialogo per lo scambio di dati. Archivia l'handle del controllo per impostare lo stato attivo, se una convalida non riesce. `PrepareCtrl`viene utilizzato per i controlli nonedit e `PrepareEditCtrl` viene utilizzato per i controlli di modifica.  
  
- **Esito negativo**: chiamato dopo la reimpostazione di una finestra di messaggio che avverte l'utente all'errore di input. Questa routine ripristinerà lo stato attivo all'ultimo controllo (l'ultima chiamata a `PrepareCtrl` / `PrepareEditCtrl`) e genera un'eccezione. Questa funzione membro può essere chiamata da routine sia _ e DDV _.  
  
## <a name="user-extensions"></a>Estensioni per utente  
 Esistono diversi modi per estendere il meccanismo DDX/DDV predefinito. È possibile:  
  
-   Aggiungere nuovi tipi di dati.  
  
 ```  
    CTime 
 ```  
  
-   Aggiungere nuove procedure exchange (DDX _).  
  
 ```  
    void PASCAL DDX_Time(CDataExchange* pDX,
    int nIDC,
    CTime& tm);

 ```  
  
-   Aggiungere nuove procedure di convalida (DDV _).  
  
 ```  
    void PASCAL DDV_TimeFuture(CDataExchange* pDX,
    CTime tm,
    BOOL bFuture);
*// make sure time is in the future or past  
 ```  
  
-   Passare le procedure di convalida di espressioni arbitrarie.  
  
 ```  
    DDV_MinMax(pDX,
    age,
    0,
    m_maxAge);

 ```  
  
    > [!NOTE]
    >  Tali espressioni arbitrarie ClassWizard non può essere modificati e pertanto devono essere spostati all'esterno di commenti di formato speciale (/ / {{AFX_DATA_MAP(CMyClass)).  
  
 Dispone il **DoDialogExchange** funzione membro includono istruzioni condizionali o tutte le altre istruzioni di C++ validi con chiamate di funzione e convalida misti.  
  
```  
//{{AFX_DATA_MAP(CMyClass)  
DDX_Check(pDX,
    IDC_SEX,
    m_bFemale);

DDX_Text(pDX,
    IDC_EDIT1,
    m_age);

//}}AFX_DATA_MAP  
if (m_bFemale)  
    DDV_MinMax(pDX,
    age,
    0,
    m_maxFemaleAge);

else  
    DDV_MinMax(pDX,
    age,
    0,
    m_maxMaleAge);
```  
  
> [!NOTE]
>  Come illustrato in precedenza, tale codice non può essere modificato da ClassWizard e deve essere utilizzato solo all'esterno di commenti formato speciale.  
  
## <a name="classwizard-support"></a>Supporto di ClassWizard  
 ClassWizard supporta un subset delle personalizzazioni DDX/DDV consentendo di integrare le proprie routine _ e DDV _ nell'interfaccia utente di ClassWizard. Questa operazione è utile solo costo se si prevede di riutilizzare una determinata routine DDX e DDV in un progetto o in molti progetti.  
  
 A tale scopo, le voci speciali vengono create in DDX. CLW (versioni precedenti di Visual C++ archiviate queste informazioni in APSTUDIO. INI) o del progetto. File CLW. Le voci speciale possono essere immesso sia nella sezione [generale Info] del progetto. File CLW o nella sezione [ExtraDDX] del DDX. File CLW nella directory \Programmi\Microsoft Studio\Visual Visual C + + \bin. Si potrebbe essere necessario creare il DDX. File CLW se non esiste già. Se si prevede di utilizzare le routine DDX _ / DDV _ personalizzate solo in un determinato progetto, aggiungere le voci alla sezione [generale Info] del progetto. CLW file invece. Se si prevede di utilizzare le routine in molti progetti, è possibile aggiungere le voci per la sezione [ExtraDDX] di DDX. CLW.  
  
 Il formato generale di queste voci speciale è:  
  
```  
ExtraDDXCount=n  
```  
  
 dove n è il numero di righe ExtraDDX da seguire  
  
```  
ExtraDDX=<keys>;<vb-keys>; <prompt>; <type>; <initValue>; <DDX_Proc>  
[;<DDV_Proc>; <prompt1>; <arg1>; [<prompt2>; <fmt2>]]  
```  
  
 dove è 1 - n che indica il tipo DDX nell'elenco che viene definito un numero.  
  
 Ogni campo è delimitata da un carattere ';'. I campi e il loro scopo sono descritti di seguito.  
  
 \<chiavi >  
 = elenco di singoli caratteri che indica per quali controlli di finestra di dialogo è consentito in questo tipo di variabile.  
  
 E = modifica  
  
 C = casella di controllo di due stati  
  
 c = casella di controllo MenuItem a tre stati  
  
 R = primo pulsante di opzione in un gruppo  
  
 L = casella di riepilogo restituzione  
  
 l = casella elenco ordinato  
  
 M = nella casella combinata (modificare un elemento)  
  
 N = elenco a discesa restituzione  
  
 n = elenco a discesa ordinato  
  
 1 = se l'inserimento DDX deve essere aggiunti a elemento head dell'elenco (impostazione predefinita viene aggiunto alla parte finale) viene in genere utilizzato per le routine DDX che trasferire la proprietà 'Control'.  
  
 \<le chiavi di VB >  
 Questo campo viene usato solo nel prodotto a 16 bit per i controlli VBX (VBX controlli non sono supportati all'interno del prodotto a 32 bit)  
  
 \<prompt dei comandi >  
 Stringa da inserire nella casella combinata delle proprietà (senza virgolette)  
  
 \<type>  
 Singolo identificatore di tipo da creare nel file di intestazione. Nell'esempio sopra con DDX_Time, questa potrebbe essere impostata su CTime.  
  
 \<le chiavi di VB >  
 Non utilizzato in questa versione e deve essere sempre vuoto  
  
 \<initValue >  
 Il valore iniziale, ovvero 0 o vuoto. Se è vuoto, nessuna riga di inizializzazione verrà scritto nella sezione //{{AFX_DATA_INIT del file di implementazione. Uno spazio vuoto deve essere utilizzato per gli oggetti C++ (ad esempio `CString`, `CTime`e così via) che dispongono di costruttori che garantiscono l'inizializzazione corretta.  
  
 < DDX_Proc >  
 Identificatore singolo per la routine DDX _. Il nome della funzione C++ deve iniziare con "DDX _", ma non includono "DDX _" nell'identificatore di < DDX_Proc >. Nell'esempio precedente, l'identificatore di < DDX_Proc > potrebbe essere il momento. Quando la creazione guidata classe scrive la chiamata di funzione nel file di implementazione nel {{sezione AFX_DATA_MAP aggiunge questo nome per DDX _, pertanto in arrivo presso DDX_Time.  
  
 \<commento >  
 Commento da visualizzare nella finestra di dialogo per la variabile con questo DDX. Inserire il testo desiderato in questo caso, in genere rappresentano un elemento che descrive l'operazione eseguita dalla coppia DDX/DDV.  
  
 < DDV_Proc >  
 La parte DDV della voce è facoltativa. Non tutte le routine DDX sono routine DDV corrispondente. Spesso è più conveniente includere la fase di convalida come parte integrante del trasferimento. Questo accade spesso quando la routine DDV non richiede alcun parametro, ClassWizard supporta le routine DDV senza parametri.  
  
 \<arg >  
 Identificatore singolo per la procedura DDV _. Il nome della funzione C++ deve iniziare con "DDV _", ma non includono "DDX _" nell'identificatore di < DDX_Proc >.  
  
 seguito da 1 o 2 args DDV:  
  
 \<promptX >  
 stringa da inserire sopra la voce di modifica (con e tasti di scelta rapida)  
  
 \<fmtX >  
 formato carattere per il tipo di argomento, uno di  
  
 d = int  
  
 u = senza segno  
  
 D = long int (vale a dire, long)  
  
 U = long senza segno (vale a dire, DWORD)  
  
 f = float  
  
 F = double  
  
 s = stringa  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

