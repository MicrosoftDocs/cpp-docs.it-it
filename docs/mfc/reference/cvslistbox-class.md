---
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
ms.openlocfilehash: 618f4f386db477dd301ada862ebd2094a6c6651f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62324432"
---
# <a name="cvslistbox-class"></a>Classe CVSListBox

Il `CVSListBox` classe supporta un controllo elenco modificabile.

## <a name="syntax"></a>Sintassi

```
class CVSListBox : public CVSListBoxBase
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CVSListBox::CVSListBox](#cvslistbox)|Costruisce un oggetto `CVSListBox`.|
|`CVSListBox::~CVSListBox`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CVSListBox::AddItem](#additem)|Aggiunge una stringa a un controllo elenco. Esegue l'override di `CVSListBoxBase::AddItem`.|
|[CVSListBox::EditItem](#edititem)|Avvia un'operazione di modifica del testo di un elemento controllo elenco. Esegue l'override di `CVSListBoxBase::EditItem`.|
|[CVSListBox::GetCount](#getcount)|Recupera il numero di stringhe in un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetCount`.|
|[CVSListBox::GetItemData](#getitemdata)|Recupera un valore a 32 bit specifiche dell'applicazione associata a un elemento controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetItemData`.|
|[CVSListBox::GetItemText](#getitemtext)|Recupera il testo di un elemento controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetItemText`.|
|[CVSListBox::GetSelItem](#getselitem)|Recupera l'indice in base zero dell'elemento attualmente selezionato in un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetSelItem`.|
|`CVSListBox::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per la [TranslateMessage](/windows/desktop/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/desktop/api/winuser/nf-winuser-dispatchmessage) funzioni di Windows. Per altre informazioni e la sintassi del metodo, vedere [CWnd:: PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override di `CVSListBoxBase::PreTranslateMessage`.|
|[CVSListBox::RemoveItem](#removeitem)|Rimuove un elemento da un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::RemoveItem`.|
|[CVSListBox::SelectItem](#selectitem)|Seleziona una stringa di controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::SelectItem`.|
|[CVSListBox::SetItemData](#setitemdata)|Associa un valore a 32 bit specifiche dell'applicazione a un elemento controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::SetItemData`.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CVSListBox::GetListHwnd](#getlisthwnd)|Restituisce l'handle per il controllo di visualizzazione elenco incorporato corrente.|

## <a name="remarks"></a>Note

Il `CVSListBox` classe fornisce un set di pulsanti di modifica che consentono all'utente di creare, modificare, eliminare o riordinare gli elementi in un controllo elenco.

Di seguito è un'immagine del controllo elenco modificabile. La seconda voce di elenco, dal titolo "Item2", viene selezionata per la modifica.

![Controllo CVSListBox](../../mfc/reference/media/cvslistbox.png "controllo CVSListBox")

Se si usa l'editor di risorse per aggiungere un controllo elenco modificabile, si noti che il **casella degli strumenti** riquadro dell'editor non è incluso un controllo elenco modificabile predefinito. Al contrario, aggiungere un controllo statico, ad esempio la **casella di gruppo** controllo. Il framework Usa il controllo statico come segnaposto per specificare le dimensioni e posizione del controllo elenco modificabile.

Per usare un controllo elenco modificabile in un modello di finestra di dialogo, dichiarare un `CVSListBox` variabile nella classe finestra di dialogo. Per supportare lo scambio di dati tra la variabile e il controllo, definire un `DDX_Control` voce di macro nel `DoDataExchange` metodo della finestra di dialogo. Per impostazione predefinita, il controllo elenco modificabile viene creato senza i pulsanti di modifica. Usare il metodo CVSListBoxBase::SetStandardButtons ereditato per abilitare i pulsanti di modifica.

Per altre informazioni, vedere la directory degli esempi, il `New Controls` di esempio, i file Page3.cpp e Page3.h.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CStatic](../../mfc/reference/cstatic-class.md)

`CVSListBoxBase`

[CVSListBox](../../mfc/reference/cvslistbox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxvslistbox.h

##  <a name="additem"></a>  CVSListBox::AddItem

Aggiunge una stringa a un controllo elenco.

```
virtual int AddItem(
    const CString& strIext,
    DWORD_PTR dwData=0,
    int iIndex=-1);
```

### <a name="parameters"></a>Parametri

*strIext*<br/>
[in] Un riferimento a una stringa.

*dwData*<br/>
[in] Un valore a 32 bit specifiche dell'applicazione associato con la stringa. Il valore predefinito è 0.

*iIndex*<br/>
[in] Indice a base zero della posizione che conterrà la stringa. Se il *iIndex* parametro è -1, la stringa viene aggiunta alla fine dell'elenco. Il valore predefinito è -1.

### <a name="return-value"></a>Valore restituito

Indice a base zero della posizione della stringa nel controllo elenco.

### <a name="remarks"></a>Note

Usare la [CVSListBox::GetItemData](#getitemdata) metodo per recuperare il valore specificato dalle *dwData* parametro. Questo valore può essere un valore integer specifico dell'applicazione o un puntatore a altri dati.

##  <a name="cvslistbox"></a>  CVSListBox::CVSListBox

Costruisce un oggetto `CVSListBox`.

```
CVSListBox();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="edititem"></a>  CVSListBox::EditItem

Avvia un'operazione di modifica del testo di un elemento controllo elenco.

```
virtual BOOL EditItem(int iIndex);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
[in] Indice in base zero di un elemento controllo elenco.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione di modifica viene avviata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

L'utente avvia un'operazione di modifica facendo doppio clic sull'etichetta di un elemento, o premendo il **F2** oppure **barra spaziatrice** chiave quando un elemento con lo stato attivo.

##  <a name="getcount"></a>  CVSListBox::GetCount

Recupera il numero di stringhe in un controllo elenco modificabile.

```
virtual int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nel controllo elenco.

### <a name="remarks"></a>Note

Si noti che il conteggio è maggiore del valore di indice dell'ultimo elemento uno in quanto l'indice in base zero.

##  <a name="getitemdata"></a>  CVSListBox::GetItemData

Recupera un valore a 32 bit specifiche dell'applicazione associata a un elemento controllo elenco modificabile.

```
virtual DWORD_PTR GetItemData(int iIndex) const;
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
[in] Indice in base zero dell'elemento controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

Il valore a 32 bit che è associato l'elemento specificato.

### <a name="remarks"></a>Note

Usare la [CVSListBox::SetItemData](#setitemdata) oppure [CVSListBox::AddItem](#additem) metodo da associare al valore a 32 bit con l'elemento controllo elenco. Questo valore può essere un valore integer specifico dell'applicazione o un puntatore a altri dati.

##  <a name="getitemtext"></a>  CVSListBox::GetItemText

Recupera il testo di un elemento controllo elenco modificabile.

```
virtual CString GetItemText(int iIndex) const;
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
[in] Indice in base zero dell'elemento controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che contiene il testo dell'elemento specificato.

### <a name="remarks"></a>Note

##  <a name="getlisthwnd"></a>  CVSListBox::GetListHwnd

Restituisce l'handle per il controllo di visualizzazione elenco incorporato corrente.

```
virtual HWND GetListHwnd() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il controllo di visualizzazione elenco incorporato.

### <a name="remarks"></a>Note

Usare questo metodo per recuperare un handle al controllo di visualizzazione elenco incorporato che supporta il `CVSListBox` classe.

##  <a name="getselitem"></a>  CVSListBox::GetSelItem

Recupera l'indice in base zero dell'elemento attualmente selezionato in un controllo elenco modificabile.

```
virtual int GetSelItem() const;
```

### <a name="return-value"></a>Valore restituito

Se questo metodo ha esito positivo, l'indice in base zero dell'elemento attualmente selezionato; in caso contrario, -1.

### <a name="remarks"></a>Note

##  <a name="removeitem"></a>  CVSListBox::RemoveItem

Rimuove un elemento da un controllo elenco modificabile.

```
virtual BOOL RemoveItem(int iIndex);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
[in] Indice in base zero dell'elemento controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

TRUE se viene rimosso l'elemento specificato. in caso contrario, FALSE.

### <a name="remarks"></a>Note

##  <a name="selectitem"></a>  CVSListBox::SelectItem

Seleziona una stringa di controllo elenco modificabile.

```
virtual BOOL SelectItem(int iItem);
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
[in] Indice in base zero dell'elemento controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo consente di selezionare l'elemento specificato e se necessario, scorre l'elemento all'interno della visualizzazione.

##  <a name="setitemdata"></a>  CVSListBox::SetItemData

Associa un valore a 32 bit specifiche dell'applicazione a un elemento controllo elenco modificabile.

```
virtual void SetItemData(
    int iIndex,
    DWORD_PTR dwData);
```

### <a name="parameters"></a>Parametri

*iIndex*<br/>
[in] Indice in base zero dell'elemento controllo elenco modificabile.

*dwData*<br/>
[in] Un valore a 32 bit. Questo valore può essere un valore integer specifico dell'applicazione o un puntatore a altri dati.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
