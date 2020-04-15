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
ms.openlocfilehash: 4ea48a263a01133419067979ee5fa3e62105c7f5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373184"
---
# <a name="cvslistbox-class"></a>Classe CVSListBox

La `CVSListBox` classe supporta un controllo elenco modificabile.

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
|[CVSListBox::EditItem](#edititem)|Avvia un'operazione di modifica sul testo di un elemento del controllo elenco. Esegue l'override di `CVSListBoxBase::EditItem`.|
|[CVSListBox::GetCount](#getcount)|Recupera il numero di stringhe in un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetCount`.|
|[CVSListBox::GetItemData](#getitemdata)|Recupera un valore a 32 bit specifico dell'applicazione associato a un elemento di controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetItemData`.|
|[CVSListBox::GetItemText (informazioni in netto testo)](#getitemtext)|Recupera il testo di un elemento di controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetItemText`.|
|[CVSListBox::GetSelItem](#getselitem)|Recupera l'indice in base zero dell'elemento attualmente selezionato in un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::GetSelItem`.|
|`CVSListBox::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage.](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Per ulteriori informazioni e sintassi del metodo, vedere [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override di `CVSListBoxBase::PreTranslateMessage`.|
|[CVSListBox::RemoveItem](#removeitem)|Rimuove un elemento da un controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::RemoveItem`.|
|[CVSListBox::SelectItem](#selectitem)|Seleziona una stringa di controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::SelectItem`.|
|[CVSListBox::SetItemData](#setitemdata)|Associa un valore a 32 bit specifico dell'applicazione a un elemento di controllo elenco modificabile. Esegue l'override di `CVSListBoxBase::SetItemData`.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CVSListBox::GetListHwnd](#getlisthwnd)|Restituisce l'handle per il controllo visualizzazione elenco incorporato corrente.|

## <a name="remarks"></a>Osservazioni

La `CVSListBox` classe fornisce un set di pulsanti di modifica che consentono all'utente di creare, modificare, eliminare o ridisporre gli elementi in un controllo elenco.

Di seguito è riportata un'immagine del controllo elenco modificabile. La seconda voce dell'elenco, denominata "Item2", viene selezionata per la modifica.

![Controllo CVSListBox](../../mfc/reference/media/cvslistbox.png "Controllo CVSListBox")

Se si utilizza l'editor di risorse per aggiungere un controllo elenco modificabile, si noti che il riquadro **Casella degli strumenti** dell'editor non fornisce un controllo elenco modificabile predefinito. Aggiungere invece un controllo statico, ad esempio il controllo **Casella di gruppo.** Il framework utilizza il controllo statico come segnaposto per specificare le dimensioni e la posizione del controllo elenco modificabile.

Per utilizzare un controllo elenco modificabile in un `CVSListBox` modello di finestra di dialogo, dichiarare una variabile nella classe della finestra di dialogo. Per supportare lo scambio di dati `DDX_Control` tra la `DoDataExchange` variabile e il controllo, definire una voce di macro nel metodo della finestra di dialogo. Per impostazione predefinita, il controllo elenco modificabile viene creato senza pulsanti di modifica. Utilizzare il metodo ereditato CVSListBoxBase::SetStandardButtons per abilitare i pulsanti di modifica.

Per ulteriori informazioni, vedere la `New Controls` directory Samples, l'esempio, i file Page3.cpp e Page3.h.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CStatic](../../mfc/reference/cstatic-class.md)

`CVSListBoxBase`

[CVSListBox](../../mfc/reference/cvslistbox-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxvslistbox.h

## <a name="cvslistboxadditem"></a><a name="additem"></a>CVSListBox::AddItem

Aggiunge una stringa a un controllo elenco.

```
virtual int AddItem(
    const CString& strIext,
    DWORD_PTR dwData=0,
    int iIndex=-1);
```

### <a name="parameters"></a>Parametri

*strIext*<br/>
[in] Riferimento a una stringa.

*dwData (dati)*<br/>
[in] Valore a 32 bit specifico dell'applicazione associato alla stringa. Il valore predefinito è 0.

*Iindex*<br/>
[in] Indice in base zero della posizione che conterrà la stringa. Se il parametro *iIndex* è -1, la stringa viene aggiunta alla fine dell'elenco. Il valore predefinito è -1.

### <a name="return-value"></a>Valore restituito

Indice in base zero della posizione della stringa nel controllo elenco.

### <a name="remarks"></a>Osservazioni

Utilizzare il metodo [CVSListBox::GetItemData](#getitemdata) per recuperare il valore specificato dal parametro *dwData.* Questo valore può essere un numero intero specifico dell'applicazione o un puntatore ad altri dati.

## <a name="cvslistboxcvslistbox"></a><a name="cvslistbox"></a>CVSListBox::CVSListBox

Costruisce un oggetto `CVSListBox`.

```
CVSListBox();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cvslistboxedititem"></a><a name="edititem"></a>CVSListBox::EditItem

Avvia un'operazione di modifica sul testo di un elemento del controllo elenco.

```
virtual BOOL EditItem(int iIndex);
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
[in] Indice in base zero di un elemento di controllo elenco.

### <a name="return-value"></a>Valore restituito

TRUESe l'operazione di modifica viene avviata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

L'utente avvia un'operazione di modifica facendo doppio clic sull'etichetta di un elemento o premendo il **tasto F2** o **barra spaziatrice** quando un elemento ha lo stato attivo.

## <a name="cvslistboxgetcount"></a><a name="getcount"></a>CVSListBox::GetCount

Recupera il numero di stringhe in un controllo elenco modificabile.

```
virtual int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nel controllo elenco.

### <a name="remarks"></a>Osservazioni

Si noti che il conteggio è maggiore di uno rispetto al valore di indice dell'ultimo elemento perché l'indice è in base zero.

## <a name="cvslistboxgetitemdata"></a><a name="getitemdata"></a>CVSListBox::GetItemData

Recupera un valore a 32 bit specifico dell'applicazione associato a un elemento di controllo elenco modificabile.

```
virtual DWORD_PTR GetItemData(int iIndex) const;
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
[in] Indice in base zero di un elemento di controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

Valore a 32 bit associato all'elemento specificato.

### <a name="remarks"></a>Osservazioni

Utilizzare il metodo [CVSListBox::SetItemData](#setitemdata) o [CVSListBox::AddItem](#additem) per associare il valore a 32 bit all'elemento del controllo elenco. Questo valore può essere un numero intero specifico dell'applicazione o un puntatore ad altri dati.

## <a name="cvslistboxgetitemtext"></a><a name="getitemtext"></a>CVSListBox::GetItemText (informazioni in netto testo)

Recupera il testo di un elemento di controllo elenco modificabile.

```
virtual CString GetItemText(int iIndex) const;
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
[in] Indice in base zero di un elemento di controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che contiene il testo dell'elemento specificato.

### <a name="remarks"></a>Osservazioni

## <a name="cvslistboxgetlisthwnd"></a><a name="getlisthwnd"></a>CVSListBox::GetListHwnd

Restituisce l'handle per il controllo visualizzazione elenco incorporato corrente.

```
virtual HWND GetListHwnd() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il controllo visualizzazione elenco incorporato.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per recuperare un handle per il `CVSListBox` controllo visualizzazione elenco incorporato che supporta la classe .

## <a name="cvslistboxgetselitem"></a><a name="getselitem"></a>CVSListBox::GetSelItem

Recupera l'indice in base zero dell'elemento attualmente selezionato in un controllo elenco modificabile.

```
virtual int GetSelItem() const;
```

### <a name="return-value"></a>Valore restituito

Se questo metodo ha esito positivo, l'indice in base zero dell'elemento attualmente selezionato; in caso contrario, -1.

### <a name="remarks"></a>Osservazioni

## <a name="cvslistboxremoveitem"></a><a name="removeitem"></a>CVSListBox::RemoveItem

Rimuove un elemento da un controllo elenco modificabile.

```
virtual BOOL RemoveItem(int iIndex);
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
[in] Indice in base zero di un elemento di controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

TRUESe l'elemento specificato viene rimosso. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

## <a name="cvslistboxselectitem"></a><a name="selectitem"></a>CVSListBox::SelectItem

Seleziona una stringa di controllo elenco modificabile.

```
virtual BOOL SelectItem(int iItem);
```

### <a name="parameters"></a>Parametri

*iItem*<br/>
[in] Indice in base zero di un elemento di controllo elenco modificabile.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo seleziona l'elemento specificato e, se necessario, scorre l'elemento nella visualizzazione.

## <a name="cvslistboxsetitemdata"></a><a name="setitemdata"></a>CVSListBox::SetItemData

Associa un valore a 32 bit specifico dell'applicazione a un elemento di controllo elenco modificabile.

```
virtual void SetItemData(
    int iIndex,
    DWORD_PTR dwData);
```

### <a name="parameters"></a>Parametri

*Iindex*<br/>
[in] Indice in base zero di un elemento di controllo elenco modificabile.

*dwData (dati)*<br/>
[in] Valore a 32 bit. Questo valore può essere un numero intero specifico dell'applicazione o un puntatore ad altri dati.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
