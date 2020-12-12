---
description: 'Altre informazioni su: classe CFont'
title: Classe CFont
ms.date: 11/04/2016
f1_keywords:
- CFont
- AFXWIN/CFont
- AFXWIN/CFont::CFont
- AFXWIN/CFont::CreateFont
- AFXWIN/CFont::CreateFontIndirect
- AFXWIN/CFont::CreatePointFont
- AFXWIN/CFont::CreatePointFontIndirect
- AFXWIN/CFont::FromHandle
- AFXWIN/CFont::GetLogFont
helpviewer_keywords:
- CFont [MFC], CFont
- CFont [MFC], CreateFont
- CFont [MFC], CreateFontIndirect
- CFont [MFC], CreatePointFont
- CFont [MFC], CreatePointFontIndirect
- CFont [MFC], FromHandle
- CFont [MFC], GetLogFont
ms.assetid: 3fad6bfe-d6ce-4ab9-967a-5ce0aa102800
ms.openlocfilehash: 4c3df138c80aeb572a4e449e7fe1065e70b5fe49
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184413"
---
# <a name="cfont-class"></a>Classe CFont

Incapsula un tipo di carattere GDI (Graphics Device Interface) di Windows e fornisce funzioni membro per la modifica del tipo di carattere.

## <a name="syntax"></a>Sintassi

```
class CFont : public CGdiObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CFont:: CFont](#cfont)|Costruisce un oggetto `CFont`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CFont:: CreateFont](#createfont)|Inizializza un oggetto `CFont` con le caratteristiche specificate.|
|[CFont:: CreateFontIndirect](#createfontindirect)|Inizializza un `CFont` oggetto con le caratteristiche fornite in una `LOGFONT` struttura.|
|[CFont:: CreatePointFont](#createpointfont)|Inizializza un oggetto `CFont` con l'altezza specificata, misurata in decimi di un punto e carattere tipografico.|
|[CFont:: CreatePointFontIndirect](#createpointfontindirect)|Uguale a `CreateFontIndirect` tranne per il fatto che l'altezza del tipo di carattere viene misurata in decimi di un punto anziché in unità logiche.|
|[CFont:: FromHandle](#fromhandle)|Restituisce un puntatore a un `CFont` oggetto quando viene fornito un HFONT Windows.|
|[CFont:: GetLogFont](#getlogfont)|Compila un `LOGFONT` oggetto con le informazioni sul tipo di carattere logico associato all' `CFont` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CFont:: operator HFONT](#operator_hfont)|Restituisce l'handle del tipo di carattere GDI di Windows collegato all' `CFont` oggetto.|

## <a name="remarks"></a>Commenti

Per utilizzare un `CFont` oggetto, costruire un `CFont` oggetto e alleghirvi un tipo di carattere Windows con [CreateFont](#createfont), [CreateFontIndirect](#createfontindirect), [CreatePointFont](#createpointfont)o [CreatePointFontIndirect](#createpointfontindirect), quindi utilizzare le funzioni membro dell'oggetto per modificare il tipo di carattere.

Le `CreatePointFont` `CreatePointFontIndirect` funzioni e sono spesso più semplici da usare rispetto a `CreateFont` o perché eseguono `CreateFontIndirect` automaticamente la conversione per l'altezza del tipo di carattere da una dimensione punto a unità logiche.

Per ulteriori informazioni su `CFont` , vedere [oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CFont`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cfontcfont"></a><a name="cfont"></a> CFont:: CFont

Costruisce un oggetto `CFont`.

```
CFont();
```

### <a name="remarks"></a>Commenti

L'oggetto risultante deve essere inizializzato con `CreateFont` , `CreateFontIndirect` , `CreatePointFont` o `CreatePointFontIndirect` prima di poter essere utilizzato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#70](../../mfc/codesnippet/cpp/cfont-class_1.cpp)]

## <a name="cfontcreatefont"></a><a name="createfont"></a> CFont:: CreateFont

Inizializza un `CFont` oggetto con le caratteristiche specificate.

```
BOOL CreateFont(
    int nHeight,
    int nWidth,
    int nEscapement,
    int nOrientation,
    int nWeight,
    BYTE bItalic,
    BYTE bUnderline,
    BYTE cStrikeOut,
    BYTE nCharSet,
    BYTE nOutPrecision,
    BYTE nClipPrecision,
    BYTE nQuality,
    BYTE nPitchAndFamily,
    LPCTSTR lpszFacename);
```

### <a name="parameters"></a>Parametri

*nHeight*<br/>
Specifica l'altezza desiderata (in unità logiche) del tipo di carattere. `lfHeight`Per una descrizione, vedere il membro della struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw)nell'Windows SDK. Il valore assoluto di *nHeight* non deve superare 16.384 unità del dispositivo dopo la conversione. Per tutti i confronti di altezza, il mapper dei tipi di carattere cerca il tipo di carattere più grande che non supera la dimensione richiesta o il tipo di carattere più piccolo se tutti i tipi di carattere superano la dimensione richiesta.

*nWidth*<br/>
Specifica la larghezza media (in unità logiche) dei caratteri nel tipo di carattere. Se *nWidth* è 0, le proporzioni del dispositivo verranno confrontate con le proporzioni di digitalizzazione dei tipi di carattere disponibili per trovare la corrispondenza più vicina, che è determinata dal valore assoluto della differenza.

*nEscapement*<br/>
Specifica l'angolo (in unità di 0,1 gradi) tra il vettore di scappamento e l'asse x della superficie di visualizzazione. Il vettore di scappamento è la riga attraverso le origini del primo e dell'ultimo carattere su una riga. L'angolo viene misurato in senso antiorario dall'asse x. `lfEscapement` `LOGFONT` Per ulteriori informazioni, vedere il membro nella struttura del Windows SDK.

*nOrientation*<br/>
Specifica l'angolo (in unità di 0,1 gradi) tra la linea di base di un carattere e l'asse x. L'angolo viene misurato in senso antiorario dall'asse x per i sistemi di coordinate in cui la direzione y è inattiva e in senso orario dall'asse x per i sistemi di coordinate in cui è attiva la direzione y.

*nWeight*<br/>
Specifica lo spessore del carattere (in pixel inchiostrati per 1000). Per ulteriori informazioni, vedere il membro *lfWeight* nella `LOGFONT` struttura del Windows SDK. I valori descritti sono approssimativi. l'aspetto effettivo dipende dal carattere tipografico. Alcuni tipi di carattere hanno solo FW_NORMAL, FW_REGULAR e FW_BOLD pesi. Se FW_DONTCARE viene specificato, viene utilizzato un peso predefinito.

*bItalic*<br/>
Specifica se il tipo di carattere è in corsivo.

*bUnderline*<br/>
Specifica se il tipo di carattere è sottolineato.

*cStrike*<br/>
Specifica se i caratteri nel tipo di carattere sono stati colpiti. Specifica un tipo di carattere di attacco se è impostato su un valore diverso da zero.

*nCharSet*<br/>
Specifica il set di caratteri del tipo di carattere del `lfCharSet` membro nella `LOGFONT` struttura nel Windows SDK per un elenco di valori.

Il set di caratteri OEM è dipendente dal sistema.

Nel sistema possono esistere tipi di carattere con altri set di caratteri. Un'applicazione che usa un tipo di carattere con un set di caratteri sconosciuti non deve tentare di tradurre o interpretare stringhe di cui eseguire il rendering con tale tipo di carattere. Al contrario, le stringhe devono essere passate direttamente al driver di dispositivo di output.

Il mapper dei tipi di carattere non utilizza il valore DEFAULT_CHARSET. Un'applicazione può usare questo valore per consentire il nome e la dimensione di un tipo di carattere per descrivere completamente il tipo di carattere logico. Se non esiste un tipo di carattere con il nome specificato, per il tipo di carattere specificato è possibile sostituire un tipo di carattere di qualsiasi set di caratteri. Per evitare risultati imprevisti, le applicazioni devono utilizzare il valore DEFAULT_CHARSET in modo sporadico.

*nOutPrecision*<br/>
Specifica la precisione di output desiderata. La precisione di output definisce il livello di corrispondenza tra l'output e l'altezza, la larghezza, l'orientamento, lo scappamento e il passo del tipo di carattere richiesto. `lfOutPrecision` `LOGFONT` Per un elenco di valori e altre informazioni, vedere il membro nella struttura del Windows SDK.

*nClipPrecision*<br/>
Specifica la precisione di ritaglio desiderata. La precisione di ritaglio definisce la modalità di ritaglio dei caratteri che sono parzialmente all'esterno dell'area di ridimensionamento. `lfClipPrecision` `LOGFONT` Per un elenco di valori, vedere il membro nella struttura del Windows SDK.

Per usare un tipo di carattere di sola lettura incorporato, un'applicazione deve specificare CLIP_ENCAPSULATE.

Per ottenere una rotazione coerente dei tipi di carattere del dispositivo, TrueType e vettoriali, un'applicazione può usare l'operatore OR per combinare il valore CLIP_LH_ANGLES con gli altri valori *nClipPrecision* . Se viene impostato il bit di CLIP_LH_ANGLES, la rotazione di tutti i tipi di carattere varia a seconda che l'orientamento del sistema di coordinate sia a sinistra o a destra. Per ulteriori informazioni sull'orientamento dei sistemi di coordinate, vedere la descrizione del parametro *nOrientation* . Se CLIP_LH_ANGLES non è impostato, i tipi di carattere del dispositivo ruotano sempre in senso antiorario, ma la rotazione di altri tipi di carattere dipende dall'orientamento del sistema di coordinate.

*nQuality*<br/>
Specifica la qualità di output del tipo di carattere, che definisce la precisione con cui GDI deve tentare di trovare la corrispondenza con gli attributi del tipo di carattere logico con quelli di un tipo di carattere fisico effettivo. `lfQuality` `LOGFONT` Per un elenco di valori, vedere il membro nella struttura del Windows SDK.

*nPitchAndFamily*<br/>
Specifica passo e famiglia del tipo di carattere. `lfPitchAndFamily` `LOGFONT` Per un elenco di valori e altre informazioni, vedere il membro nella struttura del Windows SDK.

*lpszFacename*<br/>
`CString`Puntatore o a una stringa con terminazione null che specifica il nome tipografico del tipo di carattere. La lunghezza di questa stringa non deve superare i 30 caratteri. La funzione [EnumFontFamilies](/windows/win32/api/wingdi/nf-wingdi-enumfontfamiliesw) di Windows può essere utilizzata per enumerare tutti i tipi di carattere attualmente disponibili. Se *lpszFacename* è null, GDI usa un carattere tipografico indipendente dal dispositivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Il tipo di carattere può essere selezionato successivamente come tipo di carattere per qualsiasi contesto di dispositivo.

La `CreateFont` funzione non crea un nuovo tipo di carattere Windows GDI. Seleziona semplicemente la corrispondenza più vicina dai tipi di carattere fisici disponibili per GDI.

Quando si crea un tipo di carattere logico, le applicazioni possono utilizzare le impostazioni predefinite per la maggior parte dei parametri. I parametri a cui devono essere sempre assegnati valori specifici sono *nHeight* e *lpszFacename*. Se *nHeight* e *lpszFacename* non sono impostati dall'applicazione, il tipo di carattere logico creato dipende dal dispositivo.

Al termine dell' `CFont` oggetto creato dalla `CreateFont` funzione, usare `CDC::SelectObject` per selezionare un tipo di carattere diverso nel contesto di dispositivo, quindi eliminare l' `CFont` oggetto che non è più necessario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#71](../../mfc/codesnippet/cpp/cfont-class_2.cpp)]

## <a name="cfontcreatefontindirect"></a><a name="createfontindirect"></a> CFont:: CreateFontIndirect

Inizializza un `CFont` oggetto con le caratteristiche fornite in una struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw).

```
BOOL CreateFontIndirect(const LOGFONT* lpLogFont);
```

### <a name="parameters"></a>Parametri

*lpLogFont*<br/>
Punta a una `LOGFONT` struttura che definisce le caratteristiche del tipo di carattere logico.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Il tipo di carattere può essere selezionato successivamente come tipo di carattere corrente per qualsiasi dispositivo.

Questo tipo di carattere presenta le caratteristiche specificate nella struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) . Quando si seleziona il tipo di carattere utilizzando la funzione membro [CDC:: SelezionaOggetto](../../mfc/reference/cdc-class.md#selectobject) , il mapper dei tipi di carattere GDI tenta di trovare una corrispondenza tra il tipo di carattere logico e un tipo di carattere fisico esistente. Se il mapper del tipo di carattere non riesce a trovare una corrispondenza esatta per il tipo di carattere logico, fornisce un tipo di carattere alternativo le cui caratteristiche corrispondono al numero massimo possibile di caratteristiche richieste.

Quando l' `CFont` oggetto creato dalla funzione non è più necessario `CreateFontIndirect` , usare `CDC::SelectObject` per selezionare un tipo di carattere diverso nel contesto di dispositivo, quindi eliminare l' `CFont` oggetto che non è più necessario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#72](../../mfc/codesnippet/cpp/cfont-class_3.cpp)]

## <a name="cfontcreatepointfont"></a><a name="createpointfont"></a> CFont:: CreatePointFont

Questa funzione fornisce un modo semplice per creare un tipo di carattere con un carattere tipografico e una dimensione di punti specifici.

```
BOOL CreatePointFont(
    int nPointSize,
    LPCTSTR lpszFaceName,
    CDC* pDC = NULL);
```

### <a name="parameters"></a>Parametri

*nPointSize alle*<br/>
Altezza del carattere richiesta in decimi di un punto. Ad esempio, passare 120 per richiedere un tipo di carattere a 12 punti.

*lpszFaceName*<br/>
`CString`Puntatore o a una stringa con terminazione null che specifica il nome tipografico del tipo di carattere. La lunghezza di questa stringa non deve superare i 30 caratteri. La funzione EnumFontFamilies di Windows può essere utilizzata per enumerare tutti i tipi di carattere attualmente disponibili. Se *lpszFaceName* è null, GDI usa un carattere tipografico indipendente dal dispositivo.

*pDC*<br/>
Puntatore all'oggetto [CDC](../../mfc/reference/cdc-class.md) da usare per convertire l'altezza in *nPointSize alle* in unità logiche. Se NULL, per la conversione viene usato un contesto di dispositivo per la schermata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, in caso contrario 0.

### <a name="remarks"></a>Commenti

Converte automaticamente l'altezza in *nPointSize alle* in unità logiche usando l'oggetto CDC a cui fa riferimento *PDC*.

Al termine dell' `CFont` oggetto creato dalla `CreatePointFont` funzione, selezionare innanzitutto il tipo di carattere al di fuori del contesto di dispositivo, quindi eliminare l' `CFont` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#73](../../mfc/codesnippet/cpp/cfont-class_4.cpp)]

## <a name="cfontcreatepointfontindirect"></a><a name="createpointfontindirect"></a> CFont:: CreatePointFontIndirect

Questa funzione è identica a [CreateFontIndirect](#createfontindirect) , con la differenza che il `lfHeight` membro di `LOGFONT` viene interpretato in decimi di un punto anziché in unità di dispositivo.

```
BOOL CreatePointFontIndirect(
    const LOGFONT* lpLogFont,
    CDC* pDC = NULL);
```

### <a name="parameters"></a>Parametri

*lpLogFont*<br/>
Punta a una struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) che definisce le caratteristiche del tipo di carattere logico. Il `lfHeight` membro della `LOGFONT` struttura viene misurato in decimi di un punto anziché di unità logiche. Ad esempio, impostare `lfHeight` su 120 per richiedere un tipo di carattere a 12 punti.

*pDC*<br/>
Puntatore all'oggetto [CDC](../../mfc/reference/cdc-class.md) da utilizzare per convertire l'altezza in `lfHeight` unità logiche. Se NULL, per la conversione viene usato un contesto di dispositivo per la schermata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, in caso contrario 0.

### <a name="remarks"></a>Commenti

Questa funzione converte automaticamente l'altezza in `lfHeight` unità logiche usando l'oggetto CDC a cui punta *PDC* prima di passare la `LOGFONT` struttura a Windows.

Al termine dell' `CFont` oggetto creato dalla `CreatePointFontIndirect` funzione, selezionare innanzitutto il tipo di carattere al di fuori del contesto di dispositivo, quindi eliminare l' `CFont` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#74](../../mfc/codesnippet/cpp/cfont-class_5.cpp)]

## <a name="cfontfromhandle"></a><a name="fromhandle"></a> CFont:: FromHandle

Restituisce un puntatore a un `CFont` oggetto quando viene fornito un handle HFONT a un oggetto del tipo di carattere GDI di Windows.

```
static CFont* PASCAL FromHandle(HFONT hFont);
```

### <a name="parameters"></a>Parametri

*hFont*<br/>
Handle HFONT per un tipo di carattere di Windows.

### <a name="return-value"></a>Valore restituito

Puntatore a un `CFont` oggetto in caso di esito positivo; in caso contrario null.

### <a name="remarks"></a>Commenti

Se un `CFont` oggetto non è già collegato all'handle, `CFont` viene creato e collegato un oggetto temporaneo. Questo `CFont` oggetto temporaneo è valido solo fino alla successiva esecuzione del tempo di inattività dell'applicazione nel ciclo di eventi, quindi vengono eliminati tutti gli oggetti grafici temporanei. Un altro modo per indicare che l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#75](../../mfc/codesnippet/cpp/cfont-class_6.cpp)]

## <a name="cfontgetlogfont"></a><a name="getlogfont"></a> CFont:: GetLogFont

Chiamare questa funzione per recuperare una copia della `LOGFONT` struttura per `CFont` .

```
int GetLogFont(LOGFONT* pLogFont);
```

### <a name="parameters"></a>Parametri

*pLogFont*<br/>
Puntatore alla struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) per ricevere le informazioni sul tipo di carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#76](../../mfc/codesnippet/cpp/cfont-class_7.cpp)]

## <a name="cfontoperator-hfont"></a><a name="operator_hfont"></a> CFont:: operator HFONT

Utilizzare questo operatore per ottenere l'handle GDI di Windows del tipo di carattere associato all' `CFont` oggetto.

```
operator HFONT() const;
```

### <a name="return-value"></a>Valore restituito

Handle dell'oggetto del tipo di carattere GDI Windows collegato a in `CFont` caso di esito positivo; in caso contrario, null.

### <a name="remarks"></a>Commenti

Poiché questo operatore viene usato automaticamente per le conversioni da `CFont` a [tipi di carattere e testo](/windows/win32/gdi/fonts-and-text), è possibile passare `CFont` gli oggetti alle funzioni che prevedono HFONTS.

Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere [oggetti grafici](/windows/win32/gdi/graphic-objects) nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#77](../../mfc/codesnippet/cpp/cfont-class_8.cpp)]

## <a name="see-also"></a>Vedere anche

[HIERSVR di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
