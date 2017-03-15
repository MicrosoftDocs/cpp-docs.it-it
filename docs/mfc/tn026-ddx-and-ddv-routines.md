---
title: "TN026: routine DDX e DDV | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DDX"
  - "DDV"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DDV (convalida dei dati delle finestre di dialogo), routine"
  - "DDX (Dialog Data Exchange), routine"
  - "TN026"
ms.assetid: c2eba87a-4b47-4083-b28b-e2fa77dfb4c4
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# TN026: routine DDX e DDV
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritta l'architettura di interchange \(DDV\) dati della finestra di dialogo \(DDX\) e di convalida dati della finestra di dialogo.  Viene descritto come scrivere una routine di DDV\_ o di DDX\_ e come è possibile estendere ClassWizard per utilizzare le routine.  
  
## Panoramica dello scambio di dati della finestra di dialogo  
 Tutte le funzioni dati della finestra di dialogo vengono apportate al codice C\+\+.  Non esistono risorse o speciali macro magiche.  Fondamentale del meccanismo è una funzione virtuale sottoposto a override in ogni classe della finestra di dialogo con lo scambio di dati e la convalida della finestra di dialogo.  Si trova sempre nel seguente formato:  
  
```  
void CMyDialog::DoDataExchange(CDataExchange* pDX)  
{  
    CDialog::DoDataExchange(pDX);    // call base class  
  
    //{{AFX_DATA_MAP(CMyDialog)  
        <data_exchange_function_call>  
        <data_validation_function_call>  
    //}}AFX_DATA_MAP  
}  
```  
  
 I commenti speciali di AFX di formato consentono di ClassWizard individuare e modificare il codice all'interno della funzione.  Il codice che non è compatibile con ClassWizard deve essere posizionato fuori dei commenti speciali di formato.  
  
 Nell'esempio precedente, \<il data\_exchange\_function\_call\> è il formato seguente:  
  
```  
DDX_Custom(pDX, nIDC, field);  
```  
  
 e \<il data\_validation\_function\_call\> è facoltativo e si trova nel form:  
  
```  
DDV_Custom(pDX, field, ...);  
```  
  
 Più di una coppia di DDX\_\/DDV\_ può essere inclusa in ogni funzione di `DoDataExchange`.  
  
 Vedere "afxdd\_.h" per un elenco di tutte le routine di scambio di dati della finestra di dialogo e delle routine di convalida dati della finestra di dialogo disponibili in MFC.  
  
 I dati della finestra di dialogo sono solo quando: dati dei membri della classe di **CMyDialog**.  Non viene archiviata in uno struct o in un comportamento simile.  
  
## Note  
 Sebbene tale "questi dati della finestra di dialogo," tutte le funzionalità disponibili in qualsiasi classe derivata da `CWnd` e non sono limitate a finestre di dialogo.  
  
 I valori iniziali dei dati sono specificati nel costruttore C\+\+ standard, in genere in un blocco con `//{{AFX_DATA_INIT` e commenti di `//}}AFX_DATA_INIT`.  
  
 `CWnd::UpdateData` è l'operazione che esegue l'inizializzazione e la gestione degli errori per racchiudere la chiamata a `DoDataExchange`.  
  
 È possibile chiamare `CWnd::UpdateData` in qualsiasi momento per eseguire lo scambio di dati e convalida.  Per impostazione predefinita `UpdateData`\(TRUE\) viene chiamato il gestore predefinito di `CDialog::OnOK` e in `UpdateData`\(FALSE\) viene chiamato in `CDialog::OnInitDialog`predefinito.  
  
 La routine di DDV\_ deve seguire immediatamente la routine di DDX\_ per tale *campo*.  
  
## Funzionamento?  
 Non è necessario comprendere le seguenti per contenere i dati della finestra di dialogo.  Tuttavia, comprendere il funzionamento in background possono consentire di scrivere una routine di convalida o di scambio.  
  
 La funzione membro di `DoDataExchange` è molto simile alla funzione membro di `Serialize` \- è responsabile di ottenere o dell'impostazione dei dati a\/da un form esterno \(in questo caso controlli in una finestra di dialogo\) da\/verso i dati dei membri della classe.  Il parametro di `pDX` è il contesto per eseguire lo scambio di dati ed è simile al parametro di `CArchive` a `CObject::Serialize`.  `pDX` \(un oggetto di `CDataExchange` \) dispone di una direzione del flag a come `CArchive` ha un flag direction:  
  
-   Se **\!m\_bSaveAndValidate**, quindi carica lo stato di dati nei controlli.  
  
-   Se `m_bSaveAndValidate`, quindi impostando lo stato di dati dai controlli.  
  
 La convalida si verifica solo quando `m_bSaveAndValidate` è impostato.  Il valore di `m_bSaveAndValidate` è determinato dal parametro di BOOL a `CWnd::UpdateData`.  
  
 Esistono altri tre membri interessanti di `CDataExchange` :  
  
-   `m_pDlgWnd`: La finestra in genere una finestra di dialogo\) che contiene i controlli.  Ciò consente di evitare i chiamanti di DDX\_ e di DDV\_ che le funzioni globali devono da questo di sessioni" a ogni routine DDX\/DDV.  
  
-   `PrepareCtrl` e `PrepareEditCtrl`: Prepara un controllo finestra di dialogo per lo scambio di dati.  Archivi tale handle di comando per impostare lo stato attivo se la convalida non riesce.  `PrepareCtrl` viene utilizzato per i comandi di nonedit e `PrepareEditCtrl` viene utilizzato per i controlli di modifica.  
  
-   **Errore**: Chiamata dopo allevato una finestra di messaggio che avverte l'utente all'errore di input.  Questa procedura ripristinerà lo stato attivo sull'ultimo controllo \(l'ultima chiamata a `PrepareCtrl`\/`PrepareEditCtrl`\) e genererà un'eccezione.  Questa funzione membro può essere chiamata sia dalle routine di DDV\_ di DDX\_.  
  
## Estensioni dell'utente  
 Esistono diversi modi per estendere il meccanismo di impostazione predefinita DDX\/DDV.  È possibile:  
  
-   Aggiungere nuovi tipi di dati.  
  
    ```  
    CTime  
    ```  
  
-   Aggiungere nuove procedure di scambio DDX\_ \(???\).  
  
    ```  
    void PASCAL DDX_Time(CDataExchange* pDX, int nIDC, CTime& tm);  
    ```  
  
-   Aggiungere nuove routine di convalida \(DDV\_???\).  
  
    ```  
    void PASCAL DDV_TimeFuture(CDataExchange* pDX, CTime tm, BOOL bFuture);  
    // make sure time is in the future or past  
    ```  
  
-   Passare le espressioni arbitrarie alle procedure di convalida.  
  
    ```  
    DDV_MinMax(pDX, age, 0, m_maxAge);  
    ```  
  
    > [!NOTE]
    >  Tali espressioni arbitrarie non possono essere modificate da ClassWizard e pertanto non devono essere spostate in uscita di commenti speciali di formato \(\/{{AFX\_DATA\_MAP \(CMyClass\).  
  
 Scegliere la funzione membro di **DoDialogExchange** includere istruzioni condizionali o qualsiasi altra istruzione valide C\+\+ con chiamate di funzione alternate di convalida e di scambio.  
  
```  
//{{AFX_DATA_MAP(CMyClass)  
DDX_Check(pDX, IDC_SEX, m_bFemale);  
DDX_Text(pDX, IDC_EDIT1, m_age);  
//}}AFX_DATA_MAP  
if (m_bFemale)  
    DDV_MinMax(pDX, age, 0, m_maxFemaleAge);  
else  
    DDV_MinMax(pDX, age, 0, m_maxMaleAge);  
```  
  
> [!NOTE]
>  Come illustrato in precedenza, tale codice non può essere modificato da ClassWizard e deve essere utilizzato solo all'esterno di commenti speciali di formato.  
  
## Supporto di ClassWizard  
 ClassWizard supporta un sottoinsieme delle personalizzazioni DDX\/DDV consentendo a integriate delle routine di DDV\_ e di DDX\_ nell'interfaccia utente di ClassWizard.  Questa operazione è costo utile solo se si intende riutilizzare le routine specifiche di DDV e DDX in un progetto o in più progetti.  
  
 A questo scopo, le voci specifiche vengono effettuate in DDX.CLW \(versioni precedenti di Visual C\+\+ archiviato queste informazioni in APSTUDIO.INI\) o nel file .CLW del progetto.  Le voci speciali possono essere inserite nella sezione \[di informazioni generali\] del file di .CLW del progetto o nella sezione \[di ExtraDDX\] del file di DDX.CLW in \\ programmi \\ Microsoft Visual Studio \\ Visual C\+\+ directory \\ bin.  Potrebbe essere necessario creare il file di DDX.CLW se non esiste già.  Se si intende utilizzare le routine personalizzate DDX\_\/DDV\_ solo in un determinato progetto, aggiungere voci alla sezione \[di informazioni generali\] del file di progetto .CLW invece.  Se si intende utilizzare le routine in molti progetti, aggiungere voci alla sezione \[a\-z\] ExtraDDX di DDX.CLW.  
  
 Il formato generale di queste voci speciali è:  
  
```  
ExtraDDXCount=n  
```  
  
 dove n è il numero di ExtraDDX? righe da utilizzare  
  
```  
ExtraDDX?=<keys>;<vb-keys>; <prompt>; <type>; <initValue>; <DDX_Proc>  
[;<DDV_Proc>; <prompt1>; <arg1>; [<prompt2>; <fmt2>]]  
```  
  
 dove? è un numero 1 \- indicazione di n quali DDX nell'elenco che viene definito.  
  
 Ogni campo è delimitato da "; " carattere.  I campi e lo scopo sono descritti di seguito.  
  
 \<chiavi\>  
 \= l'elenco dei singoli caratteri che indicano per il quale la finestra di dialogo archivia questo tipo di variabile è consentito.  
  
 E \= modifica  
  
 C \= casella di controllo a due stati  
  
 c \= casella di controllo a tre stati  
  
 R \= primo pulsante di opzione in un gruppo  
  
 I \= casella di riepilogo nonsorted  
  
 la somma \= ordinati la casella di riepilogo  
  
 M. \= casella combinata \(con l'elemento di modifica\)  
  
 N \= elenco nonsorted di trascinamento  
  
 n \= elenco ordinato di trascinamento  
  
 1 \= se inserisci DDX verrà aggiunto all'intestazione dell'elenco \(impostazione predefinita viene aggiunto a tail\) che questo viene in genere utilizzato per le routine DDX che contengono la proprietà di "check".  
  
 \<VB\- chiave\>  
 Questo campo viene utilizzato solo nel prodotto a 16 bit per i controlli di VBX \(controlli di VBX non sono supportati nel prodotto a 32 bit\)  
  
 \<richiesta\>  
 Stringa da inserire nella casella combinata la proprietà \(non selezionato\)  
  
 \<tipo\>  
 Scegliere l'identificatore di tipo per generare un'eccezione nel file di intestazione.  Nell'esempio precedente con DDX\_Time, è impostato su CTime.  
  
 \<VB\- chiave\>  
 Non utilizzato in questa versione e deve sempre essere vuoto  
  
 \<initValue\>  
 Valore iniziale \- 0 o vuoto.  Se è vuoto, nessuna riga di inizializzazione verrà scritta in \/\/{{sezione di AFX\_DATA\_INIT il file di implementazione.  Una voce vuota deve essere utilizzata per gli oggetti C\+\+ \(come `CString`, `CTime` e così via, che dispongono di costruttori che garantiscono l'inizializzazione corretta.  
  
 \<DDX\_Proc\>  
 Singolo identificatore per la routine di DDX\_.  Il nome della funzione C\+\+ inizi con "DDX\_", ma non include "DDX\_" \<dell'identificatore\> di DDX\_Proc.  Nell'esempio precedente, \<\> l'identificatore di DDX\_Proc sarebbe tempo.  Quando ClassWizard scrivere la chiamata di funzione nel file di implementazione in {{sezione di AFX\_DATA\_MAP, aggiunge questo nome a DDX\_, pertanto arrivando a DDX\_Time.  
  
 \<commento\>  
 Commenti per visualizzare nella finestra di dialogo per la variabile con questo meccanismo DDX.  Inserire tutto il testo che si desidera in genere fornire un elemento che descrive l'operazione eseguita da una coppia DDX\/DDV.  
  
 \<DDV\_Proc\>  
 La parte di DDV voce è facoltativa.  Non tutte le routine DDX hanno routine corrispondenti di DDV.  Spesso, è consigliabile includere la fase di convalida come parte integrante di trasferimento.  Questa operazione è in genere il caso in cui la routine di DDV non richiede alcuni parametri, perché ClassWizard non supporta le routine di DDV senza parametri.  
  
 \<argomento\>  
 Singolo identificatore per la routine di DDV\_.  Il nome della funzione C\+\+ inizi con "DDV\_", ma non include "DDX\_" \<dell'identificatore\> di DDX\_Proc.  
  
 seguito da 1 o 2 argomenti di DDV:  
  
 \<promptX\>  
 stringa può essere posizionato sopra l'elemento di modifica \(con & per la scelta rapida\)  
  
 \<fmtX\>  
 carattere di formato per il tipo di argomento, uno di  
  
 d \= int  
  
 u \= senza segno  
  
 D \= tempo int \(ovvero long\)  
  
 U \= tempo senza segno \(ovvero DWORD\)  
  
 f \= float  
  
 F \= doppio  
  
 s \= stringa  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)