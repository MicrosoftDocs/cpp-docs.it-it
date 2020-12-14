---
description: 'Altre informazioni su: classe CVSListBox'
title: Classe CVSListBox
ms.date: 11/19/2018
f1_keywords:
- CVSListBox
- AFXVSLISTBOX/CVSListBox
- AFXVSLISTBOX/CVSListBox::CVSListBox
- AFXVSLISTBOX/CVSListBox::AddItem
- AFXVSLISTBOX/CVSListBox::EditItem
- AFXVSLISTBOX/CVSListBox::GetCount
- AFXVSLISTBOX/CVSListBox::GetItemData
- AFXVSLISTBOX/CVSListBox::GetItemText
- AFXVSLISTBOX/CVSListBox::GetSelItem
- AFXVSLISTBOX/CVSListBox::RemoveItem
- AFXVSLISTBOX/CVSListBox::SelectItem
- AFXVSLISTBOX/CVSListBox::SetItemData
- AFXVSLISTBOX/CVSListBox::GetListHwnd
helpviewer_keywords:
- CVSListBox [MFC], CVSListBox
- CVSListBox [MFC], AddItem
- CVSListBox [MFC], EditItem
- CVSListBox [MFC], GetCount
- CVSListBox [MFC], GetItemData
- CVSListBox [MFC], GetItemText
- CVSListBox [MFC], GetSelItem
- CVSListBox [MFC], RemoveItem
- CVSListBox [MFC], SelectItem
- CVSListBox [MFC], SetItemData
- CVSListBox [MFC], GetListHwnd
ms.assetid: c79be7b4-46ed-4af8-a41e-68962782d8ef
ms.openlocfilehash: 6912eccd4cc8e7c78407d0cda0a0dc1305d0bde8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344978"
---
# <a name="cvslistbox-class"></a>Classe CVSListBox

La `CVSListBox` classe supporta un controllo elenco modificabile.

## <a name="syntax"></a>Sintassi

```
class CVSListBox : public CVSListBoxBase
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CVSListBox:: CVSListBox](#cvslistbox)|Costruisce un oggetto `CVSListBox`.|
|`CVSListBox::~CVSListBox`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CVSListBox:: AddItem](#additem)|Aggiunge una stringa a un controllo elenco. Esegue l'override di `CVSListBoxBase::AddItem`.|
|[CVSListBox:: EditItem](#edititem)|Avvia un'operazione di modifica sul testo di un elemento di controllo elenco. Esegue l'override di `CVSListBoxBase::EditItem`.|
|[CVSListBox:: GetCount](#getcount)|Recupera il numero di stringhe in un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetCount`.|
|[CVSListBox:: GetItemData](#getitemdata)|Recupera un valore a 32 bit specifico dell'applicazione associato a un elemento di controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetItemData`.|
|[CVSListBox:: GetItemText](#getitemtext)|Recupera il testo di un elemento di controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetItemText`.|
|[CVSListBox:: GetSelItem](#getselitem)|Recupera l'indice in base zero dell'elemento attualmente selezionato in un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetSelItem`.|
|`CVSListBox::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) . Per ulteriori informazioni e la sintassi del metodo, vedere [CWnd::P retranslatemessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override di `CVSListBoxBase::PreTranslateMessage`.|
|[CVSListBox:: RemoveItem](#removeitem)|Rimuove un elemento da un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::RemoveItem`.|
|[CVSListBox:: SelectItem](#selectitem)|Seleziona una stringa di controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::SelectItem`.|
|[CVSListBox:: SetItemData](#setitemdata)|Associa un valore a 32 bit specifico dell'applicazione con un elemento di controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::SetItemData`.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CVSListBox:: GetListHwnd](#getlisthwnd)|Restituisce l'handle per il controllo di visualizzazione elenco incorporato corrente.|

## <a name="remarks"></a>Commenti

La `CVSListBox` classe fornisce un set di pulsanti di modifica che consentono all'utente di creare, modificare, eliminare o ridisporre gli elementi in un controllo elenco.

Di seguito è riportata un'immagine del controllo elenco modificabile. La seconda voce dell'elenco, denominata "Item2", è selezionata per la modifica.

![Controllo CVSListBox](../../mfc/reference/media/cvslistbox.png "Controllo CVSListBox")

Se si usa l'editor risorse per aggiungere un controllo elenco modificabile, si noti che il riquadro **casella degli strumenti** dell'editor non fornisce un controllo elenco modificabile predefinito. Aggiungere invece un controllo statico, ad esempio il controllo **casella di gruppo** . Il Framework usa il controllo statico come segnaposto per specificare le dimensioni e la posizione del controllo elenco modificabile.

Per utilizzare un controllo elenco modificabile in un modello di finestra di dialogo, dichiarare una `CVSListBox` variabile nella classe della finestra di dialogo. Per supportare lo scambio di dati tra la variabile e il controllo, definire una `DDX_Control` voce di macro nel `DoDataExchange` metodo della finestra di dialogo. Per impostazione predefinita, il controllo elenco modificabile viene creato senza pulsanti di modifica. Usare il metodo CVSListBoxBase:: SetStandardButtons ereditato per abilitare i pulsanti di modifica.

Per ulteriori informazioni, vedere la directory Samples, l' `New Controls` esempio, i file pagina3. cpp e pagina3. h.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CStatic](../../mfc/reference/cstatic-class.md)

`CVSListBoxBase`

[CVSListBox](../../mfc/reference/cvslistbox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxvslistbox. h

## <a name="cvslistboxadditem"></a><a name="additem"></a> CVSListBox:: AddItem

Aggiunge una stringa a un controllo elenco.

```
virtual int AddItem(
    const CString& strIext,
    DWORD_PTR dwData=0,
    int iIndex=-1);
```

### <a name="parameters"></a>Parametri

*strIext*<br/>
in Riferimento a una stringa.

*dwData*<br/>
in Valore a 32 bit specifico dell'applicazione associato alla stringa. Il valore predefinito è 0.

*iIndex*<br/>
in Indice in base zero della posizione che conterrà la stringa. Se il parametro *iIndex* è-1, la stringa viene aggiunta alla fine dell'elenco. Il valore predefinito è -1.

### <a name="return-value"></a>Valore restituito

Indice in base zero della posizione della stringa nel controllo elenco.

### <a name="remarks"></a>Commenti

Usare il metodo [CVSListBox:: GetItemData](#getitemdata) per recuperare il valore specificato dal parametro *dwData* . Questo valore può essere un Integer specifico dell'applicazione o un puntatore ad altri dati.

## <a name="cvslistboxcvslistbox"></a><a name="cvslistbox"></a> CVSListBox:: CVSListBox

Costruisce un oggetto `CVSListBox`.

```
CVSListBox();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cvslistboxedititem"></a><a name="edititem"></a> CVSListBox:: EditItem

Avvia un'operazione di modifica sul testo di un elemento di controllo elenco.

```
virtual BOOL EditItem(int iIndex);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero di un elemento di controllo elenco.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione di modifica viene avviata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

L'utente avvia un'operazione di modifica facendo doppio clic sull'etichetta di un elemento oppure premendo il tasto **F2** o **barra spaziatrice** quando un elemento ha lo stato attivo.

## <a name="cvslistboxgetcount"></a><a name="getcount"></a> CVSListBox:: GetCount

Recupera il numero di stringhe in un controllo elenco modificabile.

```
virtual int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nel controllo elenco.

### <a name="remarks"></a>Commenti

Si noti che il conteggio è uno maggiore del valore di indice dell'ultimo elemento perché l'indice è in base zero.

## <a name="cvslistboxgetitemdata"></a><a name="getitemdata"></a> CVSListBox:: GetItemData

Recupera un valore a 32 bit specifico dell'applicazione associato a un elemento di controllo elenco modificabile.

```
virtual DWORD_PTR GetItemData(int iIndex) const;
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero di un elemento di controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

Valore a 32 bit associato all'elemento specificato.

### <a name="remarks"></a>Commenti

Usare il metodo [CVSListBox:: SetItemData](#setitemdata) o [CVSListBox:: AddItem](#additem) per associare il valore a 32 bit all'elemento del controllo elenco. Questo valore può essere un Integer specifico dell'applicazione o un puntatore ad altri dati.

## <a name="cvslistboxgetitemtext"></a><a name="getitemtext"></a> CVSListBox:: GetItemText

Recupera il testo di un elemento di controllo elenco modificabile.

```
virtual CString GetItemText(int iIndex) const;
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero di un elemento di controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il testo dell'elemento specificato.

### <a name="remarks"></a>Commenti

## <a name="cvslistboxgetlisthwnd"></a><a name="getlisthwnd"></a> CVSListBox:: GetListHwnd

Restituisce l'handle per il controllo di visualizzazione elenco incorporato corrente.

```
virtual HWND GetListHwnd() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il controllo di visualizzazione elenco incorporato.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per recuperare un handle per il controllo di visualizzazione elenco incorporato che supporta la `CVSListBox` classe.

## <a name="cvslistboxgetselitem"></a><a name="getselitem"></a> CVSListBox:: GetSelItem

Recupera l'indice in base zero dell'elemento attualmente selezionato in un controllo elenco modificabile.

```
virtual int GetSelItem() const;
```

### <a name="return-value"></a>Valore restituito

Se questo metodo ha esito positivo, l'indice in base zero dell'elemento attualmente selezionato; in caso contrario,-1.

### <a name="remarks"></a>Commenti

## <a name="cvslistboxremoveitem"></a><a name="removeitem"></a> CVSListBox:: RemoveItem

Rimuove un elemento da un controllo elenco modificabile.

```
virtual BOOL RemoveItem(int iIndex);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero di un elemento di controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

TRUE se l'elemento specificato è stato rimosso. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

## <a name="cvslistboxselectitem"></a><a name="selectitem"></a> CVSListBox:: SelectItem

Seleziona una stringa di controllo elenco modificabile.

```
virtual BOOL SelectItem(int iItem);
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
in Indice in base zero di un elemento di controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo metodo seleziona l'elemento specificato e, se necessario, scorre l'elemento nella visualizzazione.

## <a name="cvslistboxsetitemdata"></a><a name="setitemdata"></a> CVSListBox:: SetItemData

Associa un valore a 32 bit specifico dell'applicazione con un elemento di controllo elenco modificabile.

```
virtual void SetItemData(
    int iIndex,
    DWORD_PTR dwData);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
in Indice in base zero di un elemento di controllo elenco modificabile.

*dwData*<br/>
in Valore a 32 bit. Questo valore può essere un Integer specifico dell'applicazione o un puntatore ad altri dati.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
