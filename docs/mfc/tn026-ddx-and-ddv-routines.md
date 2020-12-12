---
description: 'Altre informazioni su: TN026: DDX e le routine DDV'
title: 'TN026: routine DDX e DDV'
ms.date: 06/28/2018
f1_keywords:
- DDX
- DDV
helpviewer_keywords:
- DDX (dialog data exchange), procedures
- TN026
- DDV (dialog data validation), procedures
ms.assetid: c2eba87a-4b47-4083-b28b-e2fa77dfb4c4
ms.openlocfilehash: 1e5c8d3679b7e91ad7f356c1e6f6badc61cdd46f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215703"
---
# <a name="tn026-ddx-and-ddv-routines"></a>TN026: routine DDX e DDV

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive l'architettura DDX (Dialog Data Exchange) e la convalida dei dati della finestra di dialogo (DDV). Viene inoltre descritto come scrivere una procedura DDX_ o DDV_ e come estendere ClassWizard per l'utilizzo delle routine.

## <a name="overview-of-dialog-data-exchange"></a>Panoramica dello scambio di dati della finestra di dialogo

Tutte le funzioni di dati del dialogo vengono eseguite con il codice C++. Non sono disponibili risorse speciali o macro magiche. Il fulcro del meccanismo è una funzione virtuale sottoposta a override in ogni classe della finestra di dialogo che esegue lo scambio e la convalida dei dati della finestra di dialogo. Si trova sempre nel formato seguente:

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

I commenti AFX in formato speciale consentono a ClassWizard di individuare e modificare il codice all'interno di questa funzione. Il codice non compatibile con ClassWizard deve essere inserito all'esterno dei commenti in formato speciale.

Nell'esempio precedente il \<data_exchange_function_call> formato è:

```cpp
DDX_Custom(pDX, nIDC, field);
```

ed \<data_validation_function_call> è facoltativo ed è nel formato:

```cpp
DDV_Custom(pDX, field, ...);
```

In ogni funzione è possibile includere più di una coppia DDX_/DDV_ `DoDataExchange` .

Vedere ' afxdd_. h ' per un elenco di tutte le routine di convalida dei dati delle finestre di dialogo e della finestra di dialogo fornite con MFC.

I dati della finestra di dialogo sono solo quelli seguenti: i dati dei membri nella `CMyDialog` classe. Non viene archiviato in uno struct o in un elemento simile.

## <a name="notes"></a>Note

Sebbene venga chiamato "dati della finestra di dialogo", tutte le funzionalità sono disponibili in tutte le classi derivate da `CWnd` e non sono limitate solo alle finestre di dialogo.

I valori iniziali dei dati vengono impostati nel costruttore C++ standard, in genere in un blocco con i `//{{AFX_DATA_INIT` `//}}AFX_DATA_INIT` commenti e.

`CWnd::UpdateData` operazione che esegue l'inizializzazione e la gestione degli errori intorno alla chiamata a `DoDataExchange` .

È possibile chiamare `CWnd::UpdateData` in qualsiasi momento per eseguire lo scambio e la convalida dei dati. Per impostazione predefinita `UpdateData` (true) viene chiamato nel `CDialog::OnOK` gestore predefinito e `UpdateData` (false) viene chiamato nel valore predefinito `CDialog::OnInitDialog` .

La routine DDV_ deve seguire immediatamente la routine DDX_ per quel *campo*.

## <a name="how-does-it-work"></a>Funzionamento

Non è necessario comprendere quanto segue per poter utilizzare i dati della finestra di dialogo. Tuttavia, per comprendere il funzionamento di questo scenario, è possibile scrivere una procedura di convalida o di scambio personalizzata.

La `DoDataExchange` funzione membro è molto simile alla `Serialize` funzione membro, ma è responsabile di ottenere o impostare i dati da e verso un form esterno (in questo caso i controlli in una finestra di dialogo) da/verso i dati dei membri della classe. Il parametro *PDX* è il contesto per lo scambio di dati ed è simile al `CArchive` parametro a `CObject::Serialize` . Il *PDX* ( `CDataExchange` oggetto) ha un flag di direzione analogo a, `CArchive` con un flag di direzione:

- Se `!m_bSaveAndValidate` , caricare lo stato dei dati nei controlli.

- Se `m_bSaveAndValidate` , impostare lo stato dei dati dai controlli.

La convalida si verifica solo quando `m_bSaveAndValidate` è impostato. Il valore di `m_bSaveAndValidate` è determinato dal parametro bool a `CWnd::UpdateData` .

Sono disponibili altri tre `CDataExchange` membri interessanti:

- `m_pDlgWnd`: La finestra (in genere una finestra di dialogo) che contiene i controlli. Ciò impedisce ai chiamanti del DDX_ e DDV_ funzioni globali di dover passare ' This ' a ogni routine DDX/DDV.

- `PrepareCtrl`, e `PrepareEditCtrl` : prepara un controllo finestra di dialogo per lo scambio di dati. Archivia l'handle del controllo per impostare lo stato attivo se una convalida ha esito negativo. `PrepareCtrl` viene usato per i controlli non di modifica e `PrepareEditCtrl` viene usato per i controlli di modifica.

- `Fail`: Chiamato dopo aver inserito una finestra di messaggio che avvisa l'utente dell'errore di input. Questa routine consente di ripristinare lo stato attivo sull'ultimo controllo (l'ultima chiamata a `PrepareCtrl` o `PrepareEditCtrl` ) e generare un'eccezione. Questa funzione membro può essere chiamata sia da DDX_ che da routine DDV_.

## <a name="user-extensions"></a>Estensioni utente

Esistono diversi modi per estendere il meccanismo DDX/DDV predefinito. È possibile scegliere:

- Aggiungere nuovi tipi di dati.

    ```cpp
    CTime
    ```

- Aggiungere nuove procedure di Exchange (DDX_).

    ```cpp
    void PASCAL DDX_Time(CDataExchange* pDX, int nIDC, CTime& tm);
    ```

- Aggiungere nuove procedure di convalida (DDV_).

    ```cpp
    void PASCAL DDV_TimeFuture(CDataExchange* pDX, CTime tm, BOOL bFuture);
    // make sure time is in the future or past
    ```

- Passare le espressioni arbitrarie alle procedure di convalida.

    ```cpp
    DDV_MinMax(pDX, age, 0, m_maxAge);
    ```

    > [!NOTE]
    > Tali espressioni arbitrarie non possono essere modificate da ClassWizard e pertanto devono essere spostate all'esterno dei commenti in formato speciale (//{{AFX_DATA_MAP (CMyClass)).

Fare in modo che la `DoDialogExchange` funzione membro includa condizionali o qualsiasi altra istruzione C++ valida con chiamate di funzione di convalida e scambio intermiste.

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
> Come illustrato in precedenza, questo codice non può essere modificato da ClassWizard e deve essere utilizzato solo all'esterno dei commenti in formato speciale.

## <a name="classwizard-support"></a>Supporto di ClassWizard

ClassWizard supporta un subset di personalizzazioni DDX/DDV consentendo di integrare i propri DDX_ e DDV_ routine nell'interfaccia utente di ClassWizard. Questa operazione può risultare vantaggiosa solo se si prevede di riutilizzare determinate routine DDX e DDV in un progetto o in molti progetti.

A tale scopo, le voci speciali vengono effettuate in DDX. CLW (le versioni precedenti di Visual C++ archiviate queste informazioni in APSTUDIO.INI) o nel progetto. File CLW. Le voci speciali possono essere immesse nella sezione [informazioni generali] del progetto. File CLW o nella sezione [ExtraDDX] del file DDX. CLW nella directory \Programmi\microsoft Visual Studio\Visual C++ \bin. Potrebbe essere necessario creare il file DDX. CLW, se non esiste già. Se si prevede di usare le routine DDX_/DDV_ personalizzate solo in un determinato progetto, aggiungere le voci alla sezione [informazioni generali] del progetto. File CLW. Se si prevede di usare le routine in molti progetti, aggiungere le voci alla sezione [ExtraDDX] di DDX. CLW.

Il formato generale di queste voci speciali è il seguente:

> ExtraDDXCount =*n*

dove *n* è il numero di ExtraDDX? righe da seguire, nel formato

> ExtraDDX? =*chiavi*; *chiavi VB*; *messaggio di richiesta*; *tipo*; *initValue*; *DDX_Proc* [; *DDV_Proc*; *prompt1*; *arg1* [; *prompt2*; *fmt2*]]

in cui? è un numero 1- *n* che indica il tipo DDX nell'elenco che viene definito.

Ogni campo è delimitato da un carattere ";". I campi e il relativo scopo sono descritti di seguito.

- *chiavi*

  Elenco di singoli caratteri che indicano per quali controlli della finestra di dialogo è consentito questo tipo di variabile.

  |Carattere|Controllo consentito|
  |-|-|
  E | modifica
  C | casella di controllo a due Stati
  c | casella di controllo a tre Stati
  R | primo pulsante di opzione in un gruppo
  L | casella di riepilogo non ordinata
  l | casella di riepilogo ordinata
  M | casella combinata (con modifica elemento)
  N | elenco a eliminazione non ordinato
  n | elenco a selezione ordinato
  1 | Se l'inserimento di DDX deve essere aggiunto all'inizio dell'elenco (l'impostazione predefinita è Aggiungi alla coda), viene in genere usato per le routine DDX che trasferiscono la proprietà' Control '.

- *chiavi VB*

  Questo campo viene usato solo nel prodotto a 16 bit per i controlli VBX (i controlli VBX non sono supportati nel prodotto a 32 bit)

- *prompt*

  Stringa da inserire nella casella combinata della proprietà (senza virgolette)

- *type*

  Identificatore singolo per il tipo da creare nel file di intestazione. Nell'esempio precedente, con DDX_Time, viene impostato su CTime.

- *chiavi VB*

  Non usato in questa versione e deve essere sempre vuoto

- *initValue*

  Valore iniziale: 0 o vuoto. Se è vuoto, nessuna riga di inizializzazione verrà scritta nella sezione//{{AFX_DATA_INIT del file di implementazione. È necessario usare una voce vuota per gli oggetti C++, ad esempio `CString` , `CTime` e così via, che dispongono di costruttori che garantiscono l'inizializzazione corretta.

- *DDX_Proc*

  Identificatore singolo per la procedura DDX_. Il nome della funzione C++ deve iniziare con "DDX_", ma non includere "DDX_" nell' \<DDX_Proc> identificatore. Nell'esempio precedente, l' \<DDX_Proc> identificatore sarebbe tempo. Quando ClassWizard scrive la chiamata di funzione nel file di implementazione nella sezione {{AFX_DATA_MAP, aggiunge questo nome a DDX_, in modo che arrivi a DDX_Time.

- *Commento*

  Commento da visualizzare nella finestra di dialogo per la variabile con questo DDX. Inserire il testo desiderato e in genere fornire qualcosa che descriva l'operazione eseguita dalla coppia DDX/DDV.

- *DDV_Proc*

  La parte DDV della voce è facoltativa. Non tutte le routine DDX hanno routine DDV corrispondenti. Spesso è più comodo includere la fase di convalida come parte integrante del trasferimento. Questa situazione si verifica spesso quando la routine DDV non richiede parametri, perché ClassWizard non supporta le routine DDV senza parametri.

- *ARG*

  Identificatore singolo per la procedura DDV_. Il nome della funzione C++ deve iniziare con "DDV_", ma non includere "DDX_" nell' \<DDX_Proc> identificatore.

  *arg* è seguito da 1 o 2 argomenti DDV:

  - *messaggio di richiesta*

      Stringa da inserire sopra l'elemento di modifica (con & per acceleratore).

  - *fmtN*

      Carattere di formato per il tipo ARG, uno di:

      |Carattere|Tipo|
      |-|-|
      |d | INT|
      |u | int senza segno|
      |D | long int (ovvero Long)|
      |U | Long senza segno (ovvero DWORD)|
      |f | float|
      |F | double|
      |s | string|

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
