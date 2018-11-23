---
title: Aggiungere una variabile membro
ms.date: 11/09/2018
f1_keywords:
- vc.codewiz.classes.member.variable
- vc.codewiz.variable.overview
helpviewer_keywords:
- member variables, adding
- member variables
- add member variable wizard [C++]
- dialog box controls, member variables
- dialog box controls, variable types
- variables, dialog box control member variables
ms.assetid: 437783bd-8eb4-4508-8b73-7380116e9d71
ms.openlocfilehash: 2a519c0606a7df6e0ce55997a055d78865afafbf
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51694413"
---
# <a name="add-a-member-variable"></a>Aggiungere una variabile membro

È possibile aggiungere una variabile membro a una classe usando la Visualizzazione classi. Le variabili membro possono essere per [lo scambio di dati e la convalida di dati](../mfc/dialog-data-exchange-and-validation.md) oppure possono essere generiche. L'aggiunta guidata variabile membro è progettata per ottenere le informazioni rilevanti e usarle per l'inserimento di elementi nei file di origine nei percorsi appropriati. È possibile aggiungere una variabile membro dall'[Editor di finestre](../windows/dialog-editor.md) in [Visualizzazione risorse](../windows/resource-view-window.md) o dalla [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code).

> [!NOTE]
> Quando si progetta e implementa una finestra di dialogo, può essere utile usare l'Editor di finestre per aggiungere i controlli della finestra di dialogo e quindi implementare le variabili membro dei controlli.

**Per aggiungere una variabile membro per un controllo di finestra di dialogo in Visualizzazione risorse usando l'Aggiunta guidata variabile membro:**

1. Nella Visualizzazione risorse espandere il nodo del progetto e il nodo della finestra di dialogo per visualizzare l'elenco delle finestre di dialogo del progetto.

1. Fare doppio clic sulla finestra di dialogo in cui si vuole aggiungere la variabile membro per aprirla nell'Editor di finestre.

1. Nella finestra di dialogo visualizzata nell'Editor di finestre fare clic con il pulsante destro del mouse sul controllo a cui aggiungere la variabile membro.

1. Nel menu di scelta rapida scegliere **Aggiungi variabile** per visualizzare l'[Aggiunta guidata variabile membro](#add-member-variable-wizard).

   > [!NOTE]
   > In **ID controllo** è già specificato un valore predefinito.

1. Specificare le informazioni nelle caselle appropriate della procedura guidata. Per altre informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](#dialog-box-controls-and-variable-types).

1. Fare clic su **Fine** per aggiungere la definizione e il codice di implementazione al progetto e chiudere la procedura guidata.

**Per aggiungere una variabile membro dalla Visualizzazione classi usando l'Aggiunta guidata variabile membro:**

1. Nella [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) espandere il nodo del progetto per visualizzare le classi nel progetto.

1. Fare clic con il pulsante destro del mouse sulla classe in cui si vuole aggiungere una variabile.

1. Nel menu di scelta rapida scegliere **Aggiungi** e quindi **Aggiungi variabile** per visualizzare l'Aggiunta guidata variabile membro.

1. Specificare le informazioni nelle caselle appropriate della procedura guidata. Per altre informazioni, vedere [Aggiunta guidata variabile membro](#add-member-variable-wizard).

1. Fare clic su **Fine** per aggiungere la definizione e il codice di implementazione al progetto e chiudere la procedura guidata.

## <a name="in-this-section"></a>Contenuto della sezione

- [Aggiunta guidata variabile membro](#add-member-variable-wizard)
- [Tipi di variabili e controlli di finestre di dialogo](#dialog-box-controls-and-variable-types)

## <a name="add-member-variable-wizard"></a>Aggiunta guidata variabile membro

Questa procedura guidata consente di aggiungere una dichiarazione di variabile membro al file di intestazione. A seconda delle opzioni, è possibile aggiungere codice al file con estensione cpp. Dopo aver aggiunto la variabile membro usando la procedura guidata, è possibile modificare il codice nell'ambiente di sviluppo.

- **Accesso**

  Imposta l'accesso alla variabile membro. I modificatori di accesso sono parole chiave che specificano l'accesso di altre classi alla variabile membro. Per altre informazioni sulla specifica dell'accesso, vedere [Controllo dell'accesso ai membri](../cpp/member-access-control-cpp.md). Il livello di accesso alla variabile membro è impostato su `public` per impostazione predefinita.

  - [public](../cpp/public-cpp.md)
  - [protected](../cpp/protected-cpp.md)
  - [private](../cpp/private-cpp.md)

- **Tipo variabile**

  Imposta il tipo restituito per la variabile membro da aggiungere.

  - Se si aggiunge una variabile membro che non è un controllo di finestra di dialogo, selezionare un valore dall'elenco dei tipi disponibili.

    Per altre informazioni sui tipi, vedere [Tipi fondamentali](../cpp/fundamental-types-cpp.md).

    |||
    |-|-|
    |`char`|`short`|
    |`double`|`unsigned char`|
    |`float`|`unsigned int`|
    |`int`|`unsigned long`|
    |`long`||

  - Se si aggiunge una variabile membro per un controllo di finestra di dialogo, questa casella viene compilata con il tipo di oggetto restituito per un controllo o un valore. Se si seleziona **Controllo**, **Tipo variabile** specifica la classe di base del controllo selezionato nella casella **ID controllo**. Se il controllo di finestra di dialogo può contenere un valore e se si seleziona **Valore**, **Tipo di variabile** specifica il tipo appropriato per il valore che il controllo può contenere. Per altre informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](#dialog-box-controls-and-variable-types).

    Questo valore varia a seconda del valore selezionato in **ID controllo** e non può essere modificato.

- **Nome variabile**

  Imposta il nome della variabile membro da aggiungere. Le variabili membro iniziano con la stringa di identificazione `m_` specificata automaticamente per impostazione predefinita.

- **Variabile di controllo**

  Indica che la variabile membro gestisce un controllo all'interno di una finestra di dialogo con il supporto per lo [scambio di dati e la convalida di dati](../mfc/dialog-data-exchange-and-validation.md). Per altre informazioni, vedere [DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange). Questa opzione è disponibile solo per le variabili membro aggiunte alle classi derivate da [CDialog](../mfc/reference/cdialog-class.md). Selezionare questa casella per attivare le opzioni **ID controllo** e **Tipo controllo**.

- **ID controllo**

  Imposta l'ID della variabile di controllo da aggiungere. Selezionare dall'elenco l'ID per il tipo di controllo per cui aggiungere la variabile membro. L'elenco è attivo solo quando la casella **Control variable** (Variabile di controllo) è selezionata ed è limitato agli ID per i controlli già aggiunti alla finestra di dialogo. Ad esempio, per il pulsante **OK** standard, l'ID controllo è **IDOK**.

  |Opzione|Descrizione|
  |------------|-----------------|
  |**Controllo**|Questa opzione è impostata per impostazione predefinita per il tipo di controllo. Gestisce il controllo e non lo stato o il contenuto del controllo (come è possibile fare con una casella di riepilogo, una casella combinata o una casella di modifica).|
  |**Valore**|Questa opzione è disponibile per i tipi di controllo che possono contenere un valore o visualizzare uno stato, ad esempio una casella di modifica o una casella di controllo. È anche disponibile per i tipi di controllo per i quali si può gestire un intervallo, dei contenuti o lo stato. Per altre informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](#dialog-box-controls-and-variable-types).|

- **Categoria**

  Specifica se la variabile è basata su un tipo di controllo o sul valore del controllo.

- **Tipo controllo**

  Imposta il tipo di controllo da aggiungere. Questa casella non può essere modificata. Ad esempio, il tipo di controllo di un pulsante è **BUTTON**, mentre il tipo di controllo di una casella combinata è **COMBOBOX**. Per altre informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](#dialog-box-controls-and-variable-types).

- **N. max caratteri**

  Disponibile solo quando **Tipo variabile** è impostato su [CString](../atl-mfc-shared/reference/cstringt-class.md). Indica il numero massimo di caratteri che è possibile inserire in un controllo.

- **Valore minimo**

  Disponibile solo quando il tipo di variabile è `BOOL`, `int`, `UINT`, `long`, `DWORD`, `float`, `double`, `BYTE`, `short`, [COLECurrency](../mfc/reference/colecurrency-class.md) oppure [CTime](../atl-mfc-shared/reference/ctime-class.md). Indica il valore minimo accettabile per una scala o un intervallo di date.

- **Valore massimo**

  Disponibile solo quando il tipo di variabile è `BOOL`, `int`, `UINT`, `long`, `DWORD`, `float`, `double`, `BYTE`, `short`, `COLECurrency` oppure `CTime`. Indica il valore massimo accettabile per una scala o un intervallo di date.

- **File con estensione h**

  Per i controlli ActiveX, le cui variabili membro richiedono una classe wrapper. Imposta il nome del file di intestazione per aggiungere la dichiarazione di classe.

- **File con estensione cpp**

  Per i controlli ActiveX, le cui variabili membro richiedono una classe wrapper. Imposta il nome del file di implementazione per aggiungere la definizione di classe.

- **Commentoo**

  Specifica un commento nel file di intestazione per la variabile membro.

## <a name="dialog-box-controls-and-variable-types"></a>Tipi di variabili e controlli di finestre di dialogo

È possibile usare l'[Aggiunta guidata variabile membro](#add-member-variable-wizard) per aggiungere una variabile membro a un controllo di finestra di dialogo creato con MFC. Il tipo di controllo per il quale si aggiunge la variabile membro determina le opzioni visualizzate nella finestra di dialogo.

La tabella seguente descrive tutti i tipi di controllo di finestra di dialogo supportati in MFC e nell'[Editor di finestre](../windows/dialog-editor.md). Visualizza anche i relativi valori e tipi disponibili.

|Control|Tipo di controllo|Tipo variabile controllo|Tipo variabile valore|Valori min e max (solo tipo di valore)|
|-------------|------------------|---------------------------|-------------------------|-----------------------------------------|
|Controllo Animation|SysAnimate32|[CAnimateCtrl](../mfc/reference/canimatectrl-class.md)|Nessuno; solo controllo|N/D|
|Button|BUTTON|[CButton](../mfc/reference/cbutton-class.md)|Nessuno; solo controllo|N/D|
|Casella di controllo|CHECK|[CButton](../mfc/reference/cbutton-class.md)|`BOOL`|Valore min/valore max|
|Casella combinata|COMBOBOX|[CComboBox](../mfc/reference/ccombobox-class.md)|[CString](../atl-mfc-shared/reference/cstringt-class.md)|N. max caratteri|
|Controllo selezione data e ora|SysDateTimePick32|[CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)|[CTime](../atl-mfc-shared/reference/ctime-class.md)|Valore min/valore max|
|Casella di modifica|MODIFICA|[CEdit](../mfc/reference/cedit-class.md)|`CString`, int, UINT, long, DWORD, float, double, BYTE, short, BOOL, `COleDateTime` o `COleCurrency`|Valore min/max; alcuni supportano caratteri max|
|Controllo tasto di scelta rapida|msctls_hotkey32|[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)|Nessuno; solo controllo|N/D|
|Casella di riepilogo|LISTBOX|[CListBox](../mfc/reference/clistbox-class.md)|`CString`|N. max caratteri|
|Controllo List|SysListView32|[CListCtrl](../mfc/reference/clistctrl-class.md)|Nessuno; solo controllo|N/D|
|Controllo Month Calendar|SysMonthCal32|[CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)|`CTime`|Valore min/valore max|
|Controllo Progress|msctls_progress32|[CProgressCtrl](../mfc/reference/cprogressctrl-class.md)|Nessuno; solo controllo|N/D|
|Controllo Rich Edit 2|RichEdit20A|[CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)|`CString`|N. max caratteri|
|Controllo Rich Edit|RICHEDIT|`CRichEditCtrl`|`CString`|N. max caratteri|
|Barra di scorrimento (verticale o orizzontale|SCROLLBAR|[CScrollBar](../mfc/reference/cscrollbar-class.md)|`int`|Valore min/valore max|
|Dispositivo di scorrimento|msctls_trackbar32|[CSliderCtrl](../mfc/reference/csliderctrl-class.md)|`int`|Valore min/valore max|
|Controllo Spin|msctls_updown32|[CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)|Nessuno; solo controllo|N/D|
|Controllo Tab|SysTabControl32|[CTabCtrl](../mfc/reference/ctabctrl-class.md)|Nessuno; solo controllo|N/D|
|Controllo Tree|SysTreeView32|[CTreeCtrl](../mfc/reference/ctreectrl-class.md)|Nessuno; solo controllo|N/D|
