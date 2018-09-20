---
title: 'TN026: Routine DDX e DDV | Microsoft Docs'
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
ms.openlocfilehash: 3930f08ae0708b81dde218a88fcda4dc34931390
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46389739"
---
# <a name="tn026-ddx-and-ddv-routines"></a>TN026: routine DDX e DDV

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota descrive le (DDX) dialog data exchange e architettura di finestra di dialogo dati convalida (DDV). Vengono inoltre descritte come scrivere una routine DDX _ o DDV _ e come è possibile estendere ClassWizard per usare le routine.

## <a name="overview-of-dialog-data-exchange"></a>Panoramica di DDX

Tutte le funzioni di dati di finestra di dialogo vengono eseguite con il codice C++. Non esistono risorse speciali o macro magiche. Il cuore del meccanismo è una funzione virtuale che viene sottoposto a override in ogni classe di finestra di dialogo che finestra di dialogo di scambio di dati e la convalida. Si è sempre presente in questo formato:

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

I commenti AFX formato speciale consentono ClassWizard individuare e modificare il codice all'interno di questa funzione. Il codice che non è compatibile con la creazione guidata classe debba essere posizionato all'esterno i commenti di formato speciale.

Nell'esempio precedente, \<data_exchange_function_call > è nel formato:

```cpp
DDX_Custom(pDX, nIDC, field);
```

e \<data_validation_function_call > è facoltativo e il formato è:

```cpp
DDV_Custom(pDX, field, ...);
```

Più di una coppia di DDX _ / DDV _ potrebbe essere inclusi in ogni `DoDataExchange` (funzione).

Per un elenco di tutte le routine dialog data exchange e routine di finestra di dialogo convalida i dati disponibili in MFC, vedere 'afxdd_.h'.

I dati di finestra di dialogo sono da considerarsi semplicemente: i dati dei membri nel `CMyDialog` classe. Non viene archiviato in uno struct o qualcosa di simile.

## <a name="notes"></a>Note

Anche se si chiama questa "dialog data", tutte le funzionalità sono disponibili in qualsiasi classe derivata da `CWnd` e non sono limitati al soli le finestre di dialogo.

I valori iniziali dei dati sono impostati nel costruttore C++ standard, in genere in un blocco con `//{{AFX_DATA_INIT` e `//}}AFX_DATA_INIT` commenti.

`CWnd::UpdateData` è l'operazione che esegue l'inizializzazione e gestione per le chiamate per errori `DoDataExchange`.

È possibile chiamare `CWnd::UpdateData` in qualsiasi momento per eseguire lo scambio di dati e la convalida. Per impostazione predefinita `UpdateData`(TRUE) viene chiamato nel valore predefinito `CDialog::OnOK` gestore e `UpdateData`(FALSE) viene chiamata nel predefinito `CDialog::OnInitDialog`.

La routine DDV _ deve seguire immediatamente la routine DDX _ adatto *campo*.

## <a name="how-does-it-work"></a>Come funziona

Non occorre conoscere le informazioni seguenti per usare i dati della finestra. Tuttavia, comprendere il funzionamento dietro le quinte supporto per la scrittura exchange o convalida procedure personalizzate.

Il `DoDataExchange` funzione membro è analogo a quello di `Serialize` funzione - membro è responsabile di ottenere o impostare i dati a/da un modulo esterno (in questo caso controlli in una finestra di dialogo) da/verso i dati dei membri della classe. Il *pDX* parametro è il contesto per eseguire lo scambio di dati ed è simile al `CArchive` parametro per `CObject::Serialize`. Il *pDX* (un `CDataExchange` oggetto) ha una direzione flag molto simile a `CArchive` ha un flag di direzione:

- Se `!m_bSaveAndValidate`, quindi caricare lo stato dei dati nei controlli.

- Se `m_bSaveAndValidate`, quindi impostare lo stato dei dati dai controlli.

La convalida viene eseguita solo quando `m_bSaveAndValidate` è impostata. Il valore di `m_bSaveAndValidate` è determinato dal parametro BOOL `CWnd::UpdateData`.

Esistono tre altri interessanti `CDataExchange` membri:

- `m_pDlgWnd`: La finestra (in genere una finestra di dialogo) che contiene i controlli. Si tratta per impedire che i chiamanti delle funzioni globali _ e DDV _ dover passare 'this' per ogni routine DDX/DDV.

- `PrepareCtrl`, e `PrepareEditCtrl`: Prepara un controllo di finestra di dialogo per lo scambio di dati. Archivia l'handle del controllo per impostare lo stato attivo se una convalida non riesce. `PrepareCtrl` viene usato per i controlli non di modifica e `PrepareEditCtrl` viene usato per i controlli di modifica.

- `Fail`: Viene chiamato dopo la reimpostazione di una finestra di messaggio che avverte l'utente all'errore di input. Questa routine ripristinerà lo stato attivo all'ultimo controllo (l'ultima chiamata a `PrepareCtrl` o `PrepareEditCtrl`) e genera un'eccezione. Questa funzione membro può essere chiamata da routine sia _ e DDV _.

## <a name="user-extensions"></a>Estensioni per utente

Esistono diversi modi per estendere il meccanismo DDX/DDV predefinito. È possibile:

- Aggiungere nuovi tipi di dati.

    ```cpp
    CTime
    ```

- Aggiungere le nuove procedure exchange (DDX _).

    ```cpp
    void PASCAL DDX_Time(CDataExchange* pDX, int nIDC, CTime& tm);
    ```

- Aggiungere nuove procedure di convalida (DDV _).

    ```cpp
    void PASCAL DDV_TimeFuture(CDataExchange* pDX, CTime tm, BOOL bFuture);
    // make sure time is in the future or past
    ```

- Passare le espressioni arbitrarie per le procedure di convalida.

    ```cpp
    DDV_MinMax(pDX, age, 0, m_maxAge);
    ```

    > [!NOTE]
    > Tali espressioni arbitrarie non può essere modificati da ClassWizard e pertanto devono essere spostati all'esterno i commenti di formato speciale (/ / {{AFX_DATA_MAP(CMyClass)).

Dispone il `DoDialogExchange` funzione membro includono istruzioni condizionali o qualsiasi altra istruzione C++ valida alternate exchange e la convalida delle chiamate di funzione.

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

## <a name="classwizard-support"></a>Supporto per la creazione guidata classe

ClassWizard supporta un subset delle personalizzazioni di DDX/DDV in quanto consente di integrare le proprie routine _ e DDV _ nell'interfaccia utente ClassWizard. Questa operazione è l'unico costo utile se si prevede di riutilizzare particolare routine DDX e DDV in un progetto o in molti progetti.

A tale scopo, vengono inserite voci speciale nel DDX. CLW (versioni precedenti di Visual C++ archiviate queste informazioni nel APSTUDIO. Con estensione INI) o del progetto. File CLW. Le voci speciale possono essere immesso nella sezione della [generale Info] il progetto. File CLW o nella sezione [ExtraDDX] della finestra di DDX. File CLW nella directory \Programmi\Microsoft Studio\Visual Visual C + + \bin. Potrebbe essere necessario creare il DDX. File CLW se non esiste già. Se si prevede di usare le routine DDX _ / DDV _ personalizzate solo in un determinato progetto, aggiungere le voci alla sezione [generale Info] del progetto. CLW file invece. Se si prevede di usare le routine in molti progetti, aggiungere le voci per la sezione [ExtraDDX] di DDX. CLW.

Il formato generale di queste voci speciale è:

> ExtraDDXCount =*n*

in cui *n* è il numero di ExtraDDX? le righe da seguire, nel formato

> ExtraDDX? =*chiavi*; *vb-keys*; *prompt dei comandi*; *tipo*; *initValue*; *DDX_Proc* [; *DDV_Proc*; *prompt1*; *arg1* [; *prompt2*; *fmt2*]]

dove? è un numero 1 - *n* che indica il tipo DDX nell'elenco che viene definito.

Ogni campo è delimitata da un carattere ';'. I campi e il loro scopo sono descritti di seguito.

- *Chiavi*

  Un elenco di singoli caratteri che indica per quale finestra di dialogo controlla questo tipo di variabile è consentito.

  |Carattere|Controllo consentito|
  |-|-|
  E | modifica
  C | casella di controllo di due stati
  c | casella di controllo a tre stati
  R | primo pulsante di opzione in un gruppo
  L | casella di riepilogo dare
  l | casella di controllo ordinato
  M | casella combinata (con elemento di modifica)
  N | elenco a discesa dare
  n | elenco a discesa ordinato
  1 | Se l'inserimento DDX deve essere aggiunto all'inizio dell'elenco (impostazione predefinita è aggiunge al tail) viene in genere utilizzato per le routine DDX che trasferire la proprietà 'Control'.

- *chiavi di VB*

  Questo campo viene usato solo all'interno del prodotto a 16 bit per i controlli VBX (VBX controlli non sono supportati all'interno del prodotto a 32 bit)

- *prompt*

  Stringa da inserire nella casella combinata proprietà (senza virgolette)

- *type*

  Singolo identificatore di tipo da generare nel file di intestazione. Nell'esempio riportato sopra con DDX_Time, questo potrebbe essere impostato su CTime.

- *chiavi di VB*

  Non utilizzato in questa versione e deve essere sempre vuoto

- *initValue*

  Valore iniziale, ovvero 0 o vuoto. Se è vuoto, nessuna riga di inizializzazione verrà scritto nella sezione //{{AFX_DATA_INIT del file di implementazione. Uno spazio vuoto deve essere utilizzato per gli oggetti C++ (ad esempio `CString`, `CTime`e così via) che dispongono di costruttori che garantiscono la corretta inizializzazione.

- *DDX_Proc*

  Identificatore per la routine DDX _ singolo. Il nome della funzione C++ deve iniziare con "DDX _", ma non includono "DDX _" nel \<DDX_Proc > identificatore. Nell'esempio precedente, il \<DDX_Proc > identificatore sarebbe ora. Quando ClassWizard scrive la chiamata di funzione al file di implementazione in di {{sezione AFX_DATA_MAP, verranno aggiunti il nome specificato DDX _, pertanto in arrivo presso DDX_Time.

- *comment*

  Commento da visualizzare nella finestra di dialogo per la variabile con questo DDX. Inserire un testo desiderato in questo caso e in genere rappresentano un elemento che descrive l'operazione eseguita dalla coppia DDX/DDV.

- *DDV_Proc*

  La parte DDV della voce è facoltativa. Non tutte le routine DDX hanno routine DDV corrispondente. Spesso è più pratico includere la fase di convalida come parte integrante del trasferimento. Ciò è spesso il caso quando la routine DDV non richiede alcun parametro, ClassWizard supporta le routine DDV senza parametri.

- *arg*

  Identificatore per la procedura DDV _ singolo. Il nome della funzione C++ deve iniziare con "DDV _", ma non includono "DDX _" nel \<DDX_Proc > identificatore.

  *arg* è seguita da argomenti DDV 1 o 2:

   - *promptN*

     Stringa da inserire sopra l'elemento di modifica (& Accelerator).

   - *fmtN*

     Formato carattere per il tipo di arg, uno di:

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

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
