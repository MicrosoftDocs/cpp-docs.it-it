---
title: 'Tn026: routine DDX e DDV | Documenti Microsoft'
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- DDX
- DDV
dev_langs:
- C++
helpviewer_keywords:
- DDX (dialog data exchange), procedures
- TN026
- DDV (dialog data validation), procedures
ms.assetid: c2eba87a-4b47-4083-b28b-e2fa77dfb4c4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 91b5d1a770dfd26db96b71179d3775003d7205c4
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122928"
---
# <a name="tn026-ddx-and-ddv-routines"></a>TN026: routine DDX e DDV

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota viene descritto il dialog data exchange (DDX) e l'architettura di finestra di dialogo dati convalida (DDV). Viene descritta anche la modalità di scrittura una routine DDX _ o DDV _ e come è possibile estendere ClassWizard per usare la routine.

## <a name="overview-of-dialog-data-exchange"></a>Panoramica di Dialog Data Exchange

Tutte le funzioni di dati di finestra di dialogo vengono eseguite con il codice C++. Non sono presenti risorse speciali o magiche macro. Il cuore del meccanismo di è una funzione virtuale sottoposta a override in ogni classe di finestra di dialogo che finestra di dialogo di scambio di dati e la convalida. Viene sempre trovato in questo formato:

```cpp
void CMyDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);   // call base class

    //{{AFX_DATA_MAP(CMyDialog)
        <data_exchange_function_call>
        <data_validation_function_call>
    //}}AFX_DATA_MAP
}
```

I commenti AFX formato speciale consentono ClassWizard individuare e modificare il codice all'interno di questa funzione. Codice che non è compatibile con ClassWizard deve essere posizionato all'esterno di commenti formato speciale.

Nell'esempio precedente, < data_exchange_function_call > è nel formato:

```cpp
DDX_Custom(pDX, nIDC, field);
```

e < data_validation_function_call > è facoltativo e il formato è:

```cpp
DDV_Custom(pDX, field, ...);
```

Più di una coppia di DDV DDX _ / _ può essere inclusi in ogni `DoDataExchange` (funzione).

Per un elenco di tutte le routine di scambio dei dati di finestra di dialogo e routine di convalida dei dati di finestra di dialogo disponibili in MFC, vedere 'afxdd_.h'.

Finestra di dialogo è esattamente questo: i dati dei membri nel `CMyDialog` classe. Non vengono memorizzate in uno struct o simili.

## <a name="notes"></a>Note

Sebbene venga definito "dati di finestra di dialogo", tutte le funzionalità sono disponibili in qualsiasi classe derivata da `CWnd` e non sono limitati alle finestre di dialogo solo.

I valori iniziali dei dati sono impostati nel costruttore standard di C++, in genere in un blocco con `//{{AFX_DATA_INIT` e `//}}AFX_DATA_INIT` commenti.

`CWnd::UpdateData` è l'operazione che esegue l'inizializzazione e l'errore gestione nella chiamata alla `DoDataExchange`.

È possibile chiamare `CWnd::UpdateData` in qualsiasi momento per eseguire lo scambio di dati e la convalida. Per impostazione predefinita `UpdateData`(TRUE) viene chiamato nel valore predefinito `CDialog::OnOK` gestore e `UpdateData`(FALSO) viene chiamato nel valore predefinito `CDialog::OnInitDialog`.

La routine DDV _ deve seguire immediatamente la routine DDX _ per tale *campo*.

## <a name="how-does-it-work"></a>Come funziona

Non è necessario conoscere le informazioni seguenti per utilizzare dati di finestra di dialogo. Tuttavia, comprendere il funzionamento dietro le quinte sarà possibile scrivere la propria routine di convalida o di exchange.

Il `DoDataExchange` funzione membro è molto simile di `Serialize` funzione membro - ed è responsabile per ottenere o impostare i dati in/da un modulo esterno (in questo caso controlli in una finestra di dialogo) da/verso i dati dei membri nella classe. Il *pDX* parametro è il contesto per eseguire lo scambio di dati ed è simile al `CArchive` parametro per `CObject::Serialize`. Il *pDX* (un `CDataExchange` oggetto) ha una direzione flag come `CArchive` dispone di un flag di direzione:

- Se `!m_bSaveAndValidate`, quindi caricare lo stato dei dati nei controlli.

- Se `m_bSaveAndValidate`, quindi impostare lo stato dei dati dai controlli.

La convalida viene eseguita solo quando `m_bSaveAndValidate` è impostata. Il valore di `m_bSaveAndValidate` è determinato dal parametro BOOL a `CWnd::UpdateData`.

Esistono tre altri interessanti `CDataExchange` membri:

- `m_pDlgWnd`: La finestra (in genere una finestra di dialogo) che contiene i controlli. Si tratta per impedire che i chiamanti delle funzioni globali _ e DDV _ dover passare 'this' per tutte le routine DDX/DDV.

- `PrepareCtrl`, e `PrepareEditCtrl`: Prepara un controllo di finestra di dialogo per lo scambio di dati. Archivia l'handle del controllo per impostare lo stato attivo se una convalida non riesce. `PrepareCtrl` viene utilizzato per i controlli di modifica non e `PrepareEditCtrl` viene utilizzato per i controlli di modifica.

- `Fail`: Viene chiamato dopo che la finestra di messaggio che avverte l'utente all'errore di input. Questa routine ripristinerà lo stato attivo per l'ultimo controllo (l'ultima chiamata a `PrepareCtrl` o `PrepareEditCtrl`) e genera un'eccezione. Questa funzione membro può essere chiamata da routine sia _ e DDV _.

## <a name="user-extensions"></a>Estensioni per utente

Esistono diversi modi per estendere il meccanismo DDX/DDV predefinito. È possibile:

- Aggiungere nuovi tipi di dati.

    ```cpp
    CTime
    ```

- Aggiungere nuove procedure exchange (DDX _).

    ```cpp
    void PASCAL DDX_Time(CDataExchange* pDX, int nIDC, CTime& tm);
    ```

- Aggiungere nuove procedure di convalida (DDV _).

    ```cpp
    void PASCAL DDV_TimeFuture(CDataExchange* pDX, CTime tm, BOOL bFuture);
    // make sure time is in the future or past
    ```

- Passare le procedure di convalida di espressioni arbitrarie.

    ```cpp
    DDV_MinMax(pDX, age, 0, m_maxAge);
    ```

    > [!NOTE]
    > Tali espressioni arbitrarie non può essere modificati da ClassWizard e pertanto devono essere spostati all'esterno di commenti formato speciale (/ / {{AFX_DATA_MAP(CMyClass)).

Dispone il `DoDialogExchange` funzione membro includono istruzioni condizionali o tutte le altre istruzioni di C++ validi con chiamate di funzione di exchange e convalida mescolate.

```cpp
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
> Come illustrato in precedenza, tale codice non può essere modificato da ClassWizard e deve essere utilizzato solo all'esterno di commenti formato speciale.

## <a name="classwizard-support"></a>Supporto di ClassWizard

ClassWizard supporta un subset delle personalizzazioni DDX/DDV consentendo di integrare le proprie routine _ e DDV _ nell'interfaccia utente ClassWizard. In questo modo è solo costo utile se si prevede di riutilizzare particolare routine DDX e DDV in un progetto o in molti progetti.

A tale scopo, le voci speciali vengono create in DDX. CLW (versioni precedenti di Visual C++ archiviate queste informazioni nel APSTUDIO. INI) o del progetto. File CLW. Le voci speciale possono essere immesso sia nella sezione [generale Info] del progetto. File CLW o nella sezione [ExtraDDX] del DDX. File CLW nella directory \Programmi\Microsoft Studio\Visual Visual C + + \bin. Si potrebbe essere necessario creare il DDX. File CLW se non esiste già. Se si prevede di utilizzare le routine DDX _ / DDV _ personalizzate solo in un determinato progetto, aggiungere le voci alla sezione [generale Info] del progetto. CLW file invece. Se si prevede di usare le routine in molti progetti, aggiungerli alla sezione [ExtraDDX] del DDX. CLW.

Il formato generale di queste voci speciale è:

> ExtraDDXCount =*n*

in cui *n* è il numero di ExtraDDX? le righe da seguire, nel formato

> ExtraDDX? =*chiavi*; *vb chiavi*; *prompt*; *tipo*; *initValue*; *DDX_Proc* [; *DDV_Proc*; *prompt1*; *arg1* [; *prompt2*; *fmt2*]]

dove? è un numero 1 - *n* che indica il tipo DDX nell'elenco che viene definito.

Ogni campo è delimitata da un carattere ';'. I campi e il loro scopo sono descritti di seguito.

- *Chiavi*

  È consentito un elenco di singoli caratteri che indica per quale finestra di dialogo controlla questo tipo di variabile.

  |Carattere|Controllo consentito|
  |-|-|
  E | modifica
  C | casella di controllo a due stati
  c | casella di controllo MenuItem a tre stati
  R | primo pulsante di opzione in un gruppo
  L | casella di riepilogo dare
  l | casella di controllo ordinato
  M | Nella casella combinata (modificare un elemento)
  N | Nell'elenco a discesa dare
  n | Nell'elenco a discesa ordinato
  1 | Se l'inserimento DDX deve essere aggiunti a elemento head dell'elenco (impostazione predefinita viene aggiunto alla parte finale) viene in genere utilizzato per le routine DDX che trasferire la proprietà 'Control'.

- *chiavi di VB*

  Questo campo viene usato solo all'interno del prodotto a 16 bit per i controlli VBX (VBX controlli non sono supportati all'interno del prodotto a 32 bit)

- *prompt*

  Stringa da inserire nella casella combinata delle proprietà (senza virgolette)

- *type*

  Singolo identificatore di tipo da creare nel file di intestazione. Nell'esempio sopra con DDX_Time, questa potrebbe essere impostata su CTime.

- *chiavi di VB*

  Non utilizzato in questa versione e deve essere sempre vuoto

- *initValue*

  Il valore iniziale, ovvero 0 o vuoto. Se è vuota, nessuna riga di inizializzazione verrà scritto nella sezione //{{AFX_DATA_INIT del file di implementazione. Uno spazio vuoto deve essere utilizzato per gli oggetti C++ (ad esempio `CString`, `CTime`e così via) che dispongono di costruttori che garantiscono l'inizializzazione corretta.

- *DDX_Proc*

  Identificatore singolo per la routine DDX _. Il nome della funzione C++ deve iniziare con "DDX _", ma non includono "DDX _" nell'identificatore di < DDX_Proc >. Nell'esempio precedente, l'identificatore di < DDX_Proc > potrebbe essere il momento. Quando ClassWizard scrive la chiamata di funzione nel file di implementazione nelle {{sezione AFX_DATA_MAP, viene aggiunto questo nome a DDX _, pertanto in arrivo presso DDX_Time.

- *comment*

  Commento da visualizzare nella finestra di dialogo per la variabile con questo DDX. Inserire il testo desiderato qui e in genere forniscono un valore che descrive l'operazione eseguita dalla coppia DDX/DDV.

- *DDV_Proc*

  La parte DDV della voce è facoltativa. Non tutte le routine DDX hanno routine DDV corrispondente. Spesso, è consigliabile includere la fase di convalida come parte integrante del trasferimento. Ciò è spesso il caso quando la routine DDV non richiede alcun parametro, ClassWizard supporta le routine DDV senza parametri.

- *arg*

  Identificatore singolo per la procedura DDV _. Il nome della funzione C++ deve iniziare con "DDV _", ma non includono "DDX _" nell'identificatore di < DDX_Proc >.

  *arg* è seguita da 1 o 2 args DDV:

   - *promptN*

     Stringa da inserire sopra la voce di modifica (& Accelerator).

   - *fmtN*

     Formato carattere per il tipo di argomento, uno di:

     |Carattere|Tipo|
     |-|-|
     d | int
     u | unsigned int
     D | long int (vale a dire, long)
     G | Long senza segno (vale a dire, DWORD)
     f | float
     F | double
     s | stringa

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)  
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)  
