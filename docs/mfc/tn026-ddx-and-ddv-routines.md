---
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
ms.openlocfilehash: 711d433b51ca09836f372d09a11f86c28b82cce6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370342"
---
# <a name="tn026-ddx-and-ddv-routines"></a>TN026: routine DDX e DDV

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive l'architettura DDX (Dialog Data Exchange) e DDV (Dialog Data Validation). Viene inoltre descritto come scrivere un DDX_ o DDV_ routine e come è possibile estendere ClassWizard per utilizzare le routine.

## <a name="overview-of-dialog-data-exchange"></a>Panoramica dello scambio di dati delle finestre di dialogo

Tutte le funzioni dei dati della finestra di dialogo sono fatte con il codice C . Non ci sono risorse speciali o macro magiche. Il cuore del meccanismo è una funzione virtuale che viene sottoposta a override in ogni classe di finestra di dialogo che esegue lo scambio e la convalida dei dati della finestra di dialogo. Si trova sempre in questa forma:

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

Il formato speciale commenti AFX consentono a ClassWizard di individuare e modificare il codice all'interno di questa funzione. Il codice non compatibile con ClassWizard deve essere posizionato all'esterno dei commenti di formato speciale.

Nell'esempio precedente, \<data_exchange_function_call> è nel formato:

```cpp
DDX_Custom(pDX, nIDC, field);
```

e \<data_validation_function_call> è facoltativo e ha la forma seguente:

```cpp
DDV_Custom(pDX, field, ...);
```

In ogni `DoDataExchange` funzione possono essere incluse più coppie DDX_/DDV_.

Vedere 'afxdd_.h' per un elenco di tutte le routine di scambio di dati della finestra di dialogo e le routine di convalida dei dati della finestra di dialogo fornite con MFC.

I dati della finestra di `CMyDialog` dialogo sono proprio così: i dati dei membri nella classe. Non è memorizzato in una struttura o qualcosa di simile.

## <a name="notes"></a>Note

Anche se chiamiamo questo "dati della finestra di dialogo", tutte le funzionalità sono disponibili in qualsiasi classe derivata da `CWnd` e non sono limitate solo alle finestre di dialogo.

I valori iniziali dei dati sono impostati nel costruttore `//{{AFX_DATA_INIT` `//}}AFX_DATA_INIT` standard di C, in genere in un blocco con e commenti.

`CWnd::UpdateData`è l'operazione che esegue l'inizializzazione `DoDataExchange`e la gestione degli errori intorno alla chiamata a .

È possibile `CWnd::UpdateData` chiamare in qualsiasi momento per eseguire lo scambio e la convalida dei dati. Per `UpdateData`impostazione predefinita (TRUE) `CDialog::OnOK` viene `UpdateData`chiamato nel gestore `CDialog::OnInitDialog`predefinito e (FALSE) viene chiamato nel valore predefinito .

La routine di DDV_ deve seguire immediatamente la routine DDX_ per quel *campo*.

## <a name="how-does-it-work"></a>Come funziona

Non è necessario comprendere quanto segue per utilizzare i dati della finestra di dialogo. Tuttavia, comprendere come funziona dietro le quinte vi aiuterà a scrivere il proprio scambio o procedura di convalida.

La `DoDataExchange` funzione membro è `Serialize` molto simile alla funzione membro - è responsabile per ottenere o impostare i dati da/verso un form esterno (in questo caso i controlli in una finestra di dialogo) da/a dati del membro nella classe. Il parametro *pDX* è il contesto per `CArchive` lo `CObject::Serialize`scambio di dati ed è simile al parametro di . Il *pDX* `CDataExchange` (un oggetto) ha `CArchive` un flag di direzione molto simile a ha un flag di direzione:

- Se `!m_bSaveAndValidate`, caricare lo stato dei dati nei controlli.

- Se `m_bSaveAndValidate`, impostare lo stato dei dati dai controlli.

La convalida `m_bSaveAndValidate` si verifica solo quando è impostata. Il valore `m_bSaveAndValidate` di è determinato dal `CWnd::UpdateData`parametro BOOL su .

Ci sono altri `CDataExchange` tre membri interessanti:

- `m_pDlgWnd`: la finestra (in genere una finestra di dialogo) che contiene i controlli. In questo modo si impedisce ai chiamanti del DDX_ e DDV_ funzioni globali di dover passare 'this' a ogni routine DDX/DDV.

- `PrepareCtrl`, `PrepareEditCtrl`e : prepara un controllo finestra di dialogo per lo scambio di dati. Archivia l'handle del controllo per l'impostazione dello stato attivo se una convalida non riesce. `PrepareCtrl`viene utilizzato per i `PrepareEditCtrl` controlli non di modifica e viene utilizzato per i controlli di modifica.

- `Fail`: chiamato dopo la visualizzazione di una finestra di messaggio che avvisa l'utente dell'errore di input. Questa routine ripristinerà lo stato attivo `PrepareCtrl` sull'ultimo controllo (l'ultima chiamata a o `PrepareEditCtrl`) e genererà un'eccezione. Questa funzione membro può essere chiamata da routine DDX_ e DDV_.

## <a name="user-extensions"></a>Estensioni utente

Esistono diversi modi per estendere il meccanismo DDX/DDV predefinito. È possibile:

- Aggiungere nuovi tipi di dati.

    ```cpp
    CTime
    ```

- Aggiungere nuove procedure di scambio (DDX_).

    ```cpp
    void PASCAL DDX_Time(CDataExchange* pDX, int nIDC, CTime& tm);
    ```

- Aggiungere nuove procedure di convalida (DDV_).

    ```cpp
    void PASCAL DDV_TimeFuture(CDataExchange* pDX, CTime tm, BOOL bFuture);
    // make sure time is in the future or past
    ```

- Passare espressioni arbitrarie alle procedure di convalida.

    ```cpp
    DDV_MinMax(pDX, age, 0, m_maxAge);
    ```

    > [!NOTE]
    > Tali espressioni arbitrarie non possono essere modificate da ClassWizard e pertanto devono essere spostate all'esterno dei commenti di formato speciale (///AFX_DATA_MAP(CMyClass)).

Fare `DoDialogExchange` in modo che la funzione membro includa le istruzioni, o le istruzioni valide di C, con chiamate di funzione di convalida e di scambio intermixed.

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
> Come illustrato in precedenza, tale codice non può essere modificato da ClassWizard e deve essere utilizzato solo all'esterno dei commenti di formato speciale.

## <a name="classwizard-support"></a>Supporto per ClassWizard

ClassWizard supporta un sottoinsieme di personalizzazioni DDX/DDV consentendo di integrare le proprie routine di DDX_ e DDV_ nell'interfaccia utente di ClassWizard. Questa operazione è utile solo se si prevede di riutilizzare particolari routine DDX e DDV in un progetto o in molti progetti.

A tale scopo, in DDX vengono effettuate voci speciali. CLW (le versioni precedenti di Visual C. INI) o nel file . File CLW. Le voci speciali possono essere inserite nella sezione [General Info] del progetto. CLW o nella sezione [ExtraDDX] del DDX. CLW nella directory . Potrebbe essere necessario creare il DDX. CLW se non esiste già. Se si prevede di utilizzare le routine personalizzate DDX_/DDV_ solo in un determinato progetto, aggiungere le voci alla sezione [General Info] del progetto. CLW. Se si prevede di utilizzare le routine in molti progetti, aggiungere le voci alla sezione [ExtraDDX] di DDX. Il CLW.

Il formato generale di queste voci speciali è:

> ExtraDDXCount*n*

dove *n* è il numero di ExtraDDX? linee da seguire, del modulo

> ExtraDDX?*keys* *vb-keys*; *prompt*; *tipo*; *initValue*; *DDX_Proc* [; *DDV_Proc*; *prompt1*; *arg1* [; *prompt2*; *fmt2*]]

Dove? è un numero 1 - *n* che indica il tipo DDX nell'elenco che viene definito.

Ogni campo è delimitato da un carattere ';'. I campi e il loro scopo sono descritti di seguito.

- *Chiavi*

  È consentito un elenco di caratteri singoli per cui la finestra di dialogo controlla questo tipo di variabile.

  |Carattere|Controllo consentito|
  |-|-|
  E | modifica
  C | Casella di controllo a due stati
  c | casella di controllo tristato
  R | primo pulsante di opzione in un gruppo
  L | casella di riepilogo non ordinata
  l | casella di riepilogo ordinata
  M | casella combinata (con elemento di modifica)
  N | elenco a discesa non ordinato
  n | elenco a discesa ordinato
  1 | se l'inserimento DDX deve essere aggiunto alla testa dell'elenco (default è add to tail) Questo viene generalmente utilizzato per le routine DDX che trasferiscono la proprietà 'Control'.

- *vb-keys*

  Questo campo viene utilizzato solo nel prodotto a 16 bit per i controlli VBX (i controlli VBX non sono supportati nel prodotto a 32 bit)

- *prompt*

  Stringa da inserire nella casella combinata Proprietà (senza virgolette)

- *type*

  Identificatore singolo per il tipo da generare nel file di intestazione. Nel nostro esempio precedente con DDX_Time, questo sarebbe impostato su CTime.

- *vb-keys*

  Non utilizzato in questa versione e deve essere sempre vuoto

- *initValue*

  Il valore iniziale è 0 o vuoto. Se è vuoto, non verrà scritta alcuna riga di inizializzazione nella sezione // AFX_DATA_INIT del file di implementazione. È necessario utilizzare una voce vuota per `CString`gli `CTime`oggetti di C, ad esempio , e così via, che dispongono di costruttori che garantiscono la corretta inizializzazione.

- *DDX_Proc*

  Identificatore singolo per la procedura di DDX_. Il nome della funzione c'è deve iniziare con "DDX_", \<ma non includere "DDX_" nell'identificatore> DDX_Proc. Nell'esempio precedente, \<l'identificatore DDX_Proc> sarebbe Time.In the example above, the a l DDX_Proc> identifier would be Time. Quando ClassWizard scrive la chiamata di funzione nel file di implementazione nella sezione AFX_DATA_MAP, aggiunge questo nome a DDX_, arrivando così a DDX_Time.

- *Commento*

  Commento da visualizzare nella finestra di dialogo per la variabile con questo DDX. Inserire qui il testo desiderato e in genere fornire un elemento che descriva l'operazione eseguita dalla coppia DDX/DDV.

- *DDV_Proc*

  La parte DDV della voce è facoltativa. Non tutte le routine DDX dispongono di routine DDV corrispondenti. Spesso, è più conveniente includere la fase di convalida come parte integrante del trasferimento. Ciò si verifica spesso quando la routine DDV non richiede parametri, perché ClassWizard non supporta le routine DDV senza parametri.

- *Arg*

  Identificatore singolo per la procedura DDV_. Il nome della funzione c'è deve iniziare con "DDV_", \<ma non includere "DDX_" nell'identificatore> DDX_Proc.

  *arg* è seguito da 1 o 2 arg DDV:

  - *promptN (promptN)*

      Stringa da posizionare sopra l'elemento di modifica (con & per l'acceleratore).

  - *fmtN (fmtN)*

      Carattere di formato per il tipo di arg, uno dei:

      |Carattere|Type|
      |-|-|
      |d | INT|
      |u | int senza segno|
      |D | long int (cioè, lungo)|
      |U | long unsigned (ovvero DWORD)|
      |f | float|
      |F | double|
      |s | string|

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
