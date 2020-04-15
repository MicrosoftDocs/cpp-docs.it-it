---
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
ms.openlocfilehash: 36fd469b182d5f3e0d3449112d04c1a8623d7526
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373834"
---
# <a name="cfont-class"></a>Classe CFont

Incapsula un tipo di carattere GDI (Graphics Device Interface) di Windows e fornisce funzioni membro per la modifica del tipo di carattere.

## <a name="syntax"></a>Sintassi

```
class CFont : public CGdiObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFont::CFont](#cfont)|Costruisce un oggetto `CFont`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Tipodicomando::CreateFont](#createfont)|Inizializza un `CFont` con le caratteristiche specificate.|
|[CFont::CreateFontIndiretto](#createfontindirect)|Inizializza un `CFont` oggetto con le `LOGFONT` caratteristiche fornite in una struttura.|
|[Tipodicomando::CreatePointFont](#createpointfont)|Inizializza un `CFont` con l'altezza specificata, misurata in decimi di un punto e del carattere tipografico.|
|[CFont::CreatePointFontIndiretto](#createpointfontindirect)|Uguale `CreateFontIndirect` ad eccezione del fatto che l'altezza del carattere viene misurata in decimi di punto anziché in unità logiche.|
|[CFont::FromHandle](#fromhandle)|Restituisce un `CFont` puntatore a un oggetto quando viene specificato un HFONT di Windows.|
|[CFont::GetLogFont](#getlogfont)|Riempie `LOGFONT` a con informazioni sul tipo `CFont` di carattere logico associato all'oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFont::operatorHFONT](#operator_hfont)|Restituisce l'handle del tipo `CFont` di carattere GDI di Windows associato all'oggetto.|

## <a name="remarks"></a>Osservazioni

Per utilizzare `CFont` un oggetto, `CFont` costruire un oggetto e associarvi un tipo di carattere Windows con [CreateFont](#createfont), [CreateFontIndirect](#createfontindirect), [CreatePointFont](#createpointfont)o [CreatePointFontIndirect](#createpointfontindirect), quindi utilizzare le funzioni membro dell'oggetto per modificare il tipo di carattere.

Le `CreatePointFont` `CreatePointFontIndirect` funzioni e sono spesso `CreateFont` `CreateFontIndirect` più facili da usare o poiché eseguono automaticamente la conversione per l'altezza del carattere da una dimensione in punti a unità logiche.

Per ulteriori `CFont`informazioni su , vedere [Oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CFont`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cfontcfont"></a><a name="cfont"></a>CFont::CFont

Costruisce un oggetto `CFont`.

```
CFont();
```

### <a name="remarks"></a>Osservazioni

L'oggetto risultante deve `CreateFont` `CreateFontIndirect`essere `CreatePointFont`inizializzato con , , , o `CreatePointFontIndirect` prima di poter essere utilizzato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#70](../../mfc/codesnippet/cpp/cfont-class_1.cpp)]

## <a name="cfontcreatefont"></a><a name="createfont"></a>Tipodicomando::CreateFont

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

*nAltezza*<br/>
Specifica l'altezza desiderata (in unità logiche) del tipo di carattere. Per `lfHeight` una descrizione, vedere il membro della struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw)in Windows SDK. Il valore assoluto di *nHeight* non deve superare le 16.384 unità di dispositivo dopo la conversione. Per tutti i confronti di altezza, il mapping dei tipi di carattere cerca il tipo di carattere più grande che non supera la dimensione richiesta o il tipo di carattere più piccolo se tutti i font superano la dimensione richiesta.

*nLarghezza*<br/>
Specifica la larghezza media (in unità logiche) dei caratteri nel tipo di carattere. Se *nWidth* è 0, le proporzioni del dispositivo verranno confrontate con le proporzioni di digitalizzazione dei font disponibili per trovare la corrispondenza più vicina, determinata dal valore assoluto della differenza.

*nEscapement (Escapement)*<br/>
Specifica l'angolo (in unità di 0,1 gradi) tra il vettore di escape e l'asse x della superficie di visualizzazione. Il vettore di escape è la riga che attraversa le origini del primo e dell'ultimo carattere di una riga. L'angolo viene misurato in senso antiorario rispetto all'asse x. Per `lfEscapement` ulteriori informazioni, vedere il membro nella `LOGFONT` struttura in Windows SDK.

*nOrientamento*<br/>
Specifica l'angolo (in unità di 0,1 gradi) tra la linea di base di un carattere e l'asse x. L'angolo viene misurato in senso antiorario dall'asse x per i sistemi di coordinate in cui la direzione y è verso il basso e in senso orario dall'asse x per i sistemi di coordinate in cui la direzione y è verso l'alto.

*nPeso*<br/>
Specifica lo spessore del carattere (in pixel con inchiostro per 1000). Per ulteriori informazioni, vedere `LOGFONT` il membro *lfWeight* nella struttura in Windows SDK. I valori descritti sono approssimativi; l'aspetto effettivo dipende dal tipo di carattere. Alcuni font hanno solo FW_NORMAL, FW_REGULAR e FW_BOLD. Se si specifica FW_DONTCARE, viene utilizzato un peso predefinito.

*bCorsivo*<br/>
Specifica se il tipo di carattere è in corsivo.

*bSottolineato*<br/>
Specifica se il tipo di carattere è sottolineato.

*cStrikeOut (in stato di cStrikeOut)*<br/>
Specifica se i caratteri nel tipo di carattere vengono evidenziati. Specifica un tipo di carattere barrato se impostato su un valore diverso da zero.

*nCharSet (insieme)*<br/>
Specifica il set di caratteri `lfCharSet` del tipo `LOGFONT` di carattereVedere il membro nella struttura in Windows SDK per un elenco di valori.

Il set di caratteri OEM dipende dal sistema.

I font con altri set di caratteri possono esistere nel sistema. Un'applicazione che utilizza un tipo di carattere con un set di caratteri sconosciuto non deve tentare di tradurre o interpretare le stringhe di cui deve essere eseguito il rendering con tale tipo di carattere. Al contrario, le stringhe devono essere passate direttamente al driver di periferica di output.

Il mapping dei tipi di carattere non utilizza il valore DEFAULT_CHARSET. Un'applicazione può utilizzare questo valore per consentire al nome e alla dimensione di un tipo di carattere di descrivere completamente il tipo di carattere logico. Se non esiste un tipo di carattere con il nome specificato, è possibile sostituire il tipo di carattere specificato con un tipo di carattere di qualsiasi set di caratteri. Per evitare risultati imprevisti, le applicazioni devono utilizzare il valore di DEFAULT_CHARSET con parsimonia.

*nOutPrecision*<br/>
Specifica la precisione di output desiderata. La precisione di output definisce quanto l'output deve corrispondere all'altezza, alla larghezza, all'orientamento del carattere, all'escape e all'altezza del carattere richiesto. Vedere `lfOutPrecision` il membro `LOGFONT` nella struttura in Windows SDK per un elenco di valori e ulteriori informazioni.

*nClipPrecision*<br/>
Specifica la precisione di ritaglio desiderata. La precisione di ritaglio definisce come ritagliare i caratteri che si trovano parzialmente all'esterno dell'area di ritaglio. Vedere `lfClipPrecision` il membro `LOGFONT` nella struttura in Windows SDK per un elenco di valori.

Per utilizzare un tipo di carattere di sola lettura incorporato, un'applicazione deve specificare CLIP_ENCAPSULATE.

Per ottenere una rotazione coerente dei tipi di carattere dispositivo, TrueType e vettoriali, un'applicazione può usare l'operatore OR per combinare il valore CLIP_LH_ANGLES con uno qualsiasi degli altri valori *nClipPrecision.* Se il bit CLIP_LH_ANGLES è impostato, la rotazione di tutti i tipi di carattere dipende dal fatto che l'orientamento del sistema di coordinate sia mancino o destrorso. Per ulteriori informazioni sull'orientamento dei sistemi di coordinate, vedere la descrizione del parametro *nOrientation.* Se CLIP_LH_ANGLES non è impostata, i font del dispositivo ruotano sempre in senso antiorario, ma la rotazione degli altri font dipende dall'orientamento del sistema di coordinate.

*nQualità*<br/>
Specifica la qualità di output del tipo di carattere, che definisce la precisione con cui GDI deve tentare di associare gli attributi del tipo di carattere logico a quelli di un tipo di carattere fisico effettivo. Vedere `lfQuality` il membro `LOGFONT` nella struttura in Windows SDK per un elenco di valori.

*nPitchAndFamily (informazioni in questo gruppo)*<br/>
Specifica passo e famiglia del tipo di carattere. Vedere `lfPitchAndFamily` il membro `LOGFONT` nella struttura in Windows SDK per un elenco di valori e ulteriori informazioni.

*lpszFacename (nome da instato)*<br/>
O `CString` puntatore a una stringa con terminazione null che specifica il nome del tipo di carattere. La lunghezza di questa stringa non deve superare i 30 caratteri. La funzione [Windows EnumFontFamilies](/windows/win32/api/wingdi/nf-wingdi-enumfontfamiliesw) può essere utilizzata per enumerare tutti i tipi di carattere attualmente disponibili. Se *lpszFacename* è NULL, GDI utilizza un carattere tipografico indipendente dal dispositivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il tipo di carattere può essere successivamente selezionato come tipo di carattere per qualsiasi contesto di dispositivo.

La `CreateFont` funzione non crea un nuovo tipo di carattere GDI di Windows. Seleziona semplicemente la corrispondenza più vicina tra i tipi di carattere fisici disponibili per GDI.

Le applicazioni possono utilizzare le impostazioni predefinite per la maggior parte dei parametri durante la creazione di un tipo di carattere logico. I parametri a cui devono sempre essere assegnati valori specifici sono *nHeight* e *lpszFacename*. Se *nHeight* e *lpszFacename* non sono impostati dall'applicazione, il tipo di carattere logico creato dipende dal dispositivo.

Quando si termina `CFont` con l'oggetto creato dalla `CreateFont` funzione, utilizzare `CDC::SelectObject` per selezionare `CFont` un tipo di carattere diverso nel contesto di periferica, quindi eliminare l'oggetto che non è più necessario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#71](../../mfc/codesnippet/cpp/cfont-class_2.cpp)]

## <a name="cfontcreatefontindirect"></a><a name="createfontindirect"></a>CFont::CreateFontIndiretto

Inizializza un `CFont` oggetto con le caratteristiche fornite in una struttura [LOGFONT.](/windows/win32/api/wingdi/ns-wingdi-logfontw)

```
BOOL CreateFontIndirect(const LOGFONT* lpLogFont);
```

### <a name="parameters"></a>Parametri

*Carattere lpLogFont*<br/>
Punta a `LOGFONT` una struttura che definisce le caratteristiche del carattere logico.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il font può essere successivamente selezionato come font corrente per qualsiasi dispositivo.

Questo tipo di carattere ha le caratteristiche specificate nella struttura [LOGFONT.](/windows/win32/api/wingdi/ns-wingdi-logfontw) Quando il tipo di carattere viene selezionato utilizzando la funzione membro [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject) , il mapping dei tipi di carattere GDI tenta di far corrispondere il tipo di carattere logico con un tipo di carattere fisico esistente. Se il mappatore dei tipi di carattere non riesce a trovare una corrispondenza esatta per il tipo di carattere logico, fornisce un tipo di carattere alternativo le cui caratteristiche corrispondono al maggior numero possibile di caratteristiche richieste.

Quando l'oggetto `CFont` creato dalla `CreateFontIndirect` funzione non `CDC::SelectObject` è più necessario, utilizzare per selezionare un tipo di carattere diverso nel contesto di periferica, quindi eliminare l'oggetto `CFont` che non è più necessario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#72](../../mfc/codesnippet/cpp/cfont-class_3.cpp)]

## <a name="cfontcreatepointfont"></a><a name="createpointfont"></a>Tipodicomando::CreatePointFont

Questa funzione fornisce un modo semplice per creare un tipo di carattere di un carattere tipografico e una dimensione in punti specificati.

```
BOOL CreatePointFont(
    int nPointSize,
    LPCTSTR lpszFaceName,
    CDC* pDC = NULL);
```

### <a name="parameters"></a>Parametri

*nPointSize (dimensioni in cui è stato sottolineato in*<br/>
Richiesta dell'altezza del carattere in decimi di un punto. (Ad esempio, passare 120 per richiedere un tipo di carattere a 12 punti.)

*lpszFaceName (nome da instamato)*<br/>
O `CString` puntatore a una stringa con terminazione null che specifica il nome del tipo di carattere. La lunghezza di questa stringa non deve superare i 30 caratteri. La funzione 'EnumFontFamilies di Windows può essere utilizzata per enumerare tutti i tipi di carattere attualmente disponibili. Se *lpszFaceName* è NULL, GDI utilizza un carattere tipografico indipendente dal dispositivo.

*pDC*<br/>
Puntatore all'oggetto [CDC](../../mfc/reference/cdc-class.md) da utilizzare per convertire l'altezza in *nPointSize* in unità logiche. Se NULL, viene utilizzato un contesto di dispositivo dello schermo per la conversione.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Converte automaticamente l'altezza in *nPointSize* in unità logiche utilizzando l'oggetto CDC a cui punta *pDC*.

Al termine dell'oggetto `CFont` creato `CreatePointFont` dalla funzione, selezionare innanzitutto il tipo `CFont` di carattere dal contesto di periferica, quindi eliminare l'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#73](../../mfc/codesnippet/cpp/cfont-class_4.cpp)]

## <a name="cfontcreatepointfontindirect"></a><a name="createpointfontindirect"></a>CFont::CreatePointFontIndiretto

Questa funzione è la stessa di [CreateFontIndirect](#createfontindirect) ad eccezione del fatto che il `lfHeight` membro di viene `LOGFONT` interpretato in decimi di un punto anziché in unità di dispositivo.

```
BOOL CreatePointFontIndirect(
    const LOGFONT* lpLogFont,
    CDC* pDC = NULL);
```

### <a name="parameters"></a>Parametri

*Carattere lpLogFont*<br/>
Punta a una struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) che definisce le caratteristiche del carattere logico. Il `lfHeight` membro `LOGFONT` della struttura viene misurato in decimi di un punto anziché in unità logiche. (Ad esempio, `lfHeight` impostare su 120 per richiedere un tipo di carattere a 12 punti.)

*pDC*<br/>
Puntatore all'oggetto [CDC](../../mfc/reference/cdc-class.md) da utilizzare `lfHeight` per convertire l'altezza in unità logiche. Se NULL, viene utilizzato un contesto di dispositivo dello schermo per la conversione.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione converte automaticamente `lfHeight` l'altezza in unità logiche utilizzando l'oggetto CDC a cui fa riferimento *pDC* prima di passare la `LOGFONT` struttura a Windows.

Al termine dell'oggetto `CFont` creato `CreatePointFontIndirect` dalla funzione, selezionare innanzitutto il tipo `CFont` di carattere dal contesto di periferica, quindi eliminare l'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#74](../../mfc/codesnippet/cpp/cfont-class_5.cpp)]

## <a name="cfontfromhandle"></a><a name="fromhandle"></a>CFont::FromHandle

Restituisce un `CFont` puntatore a un oggetto quando viene fornito un handle HFONT per un oggetto tipo di carattere GDI di Windows.

```
static CFont* PASCAL FromHandle(HFONT hFont);
```

### <a name="parameters"></a>Parametri

*hCarattere*<br/>
Un handle HFONT per un tipo di carattere Windows.

### <a name="return-value"></a>Valore restituito

Un puntatore `CFont` a un oggetto se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se `CFont` un oggetto non è già associato `CFont` alla maniglia, viene creato e associato un oggetto temporaneo. Questo `CFont` oggetto temporaneo è valido solo fino alla successiva inattività dell'applicazione nel ciclo di eventi, in cui vengono eliminati tutti gli oggetti grafici temporanei. Un altro modo per dire questo è che l'oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di finestra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#75](../../mfc/codesnippet/cpp/cfont-class_6.cpp)]

## <a name="cfontgetlogfont"></a><a name="getlogfont"></a>CFont::GetLogFont

Chiamare questa funzione per recuperare `LOGFONT` una `CFont`copia della struttura per .

```
int GetLogFont(LOGFONT* pLogFont);
```

### <a name="parameters"></a>Parametri

*PLogFont (carattere pLog)*<br/>
Puntatore alla struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) per ricevere le informazioni sul tipo di carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo, in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#76](../../mfc/codesnippet/cpp/cfont-class_7.cpp)]

## <a name="cfontoperator-hfont"></a><a name="operator_hfont"></a>CFont::operatorHFONT

Utilizzare questo operatore per ottenere l'handle GDI `CFont` di Windows del tipo di carattere associato all'oggetto.

```
operator HFONT() const;
```

### <a name="return-value"></a>Valore restituito

Handle dell'oggetto tipo di carattere `CFont` GDI di Windows a cui è associato se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Poiché questo operatore viene `CFont` utilizzato automaticamente per le `CFont` conversioni da in Tipi di [carattere e testo](/windows/win32/gdi/fonts-and-text), è possibile passare oggetti a funzioni che prevedono HFONT.

Per altre informazioni sull'uso di oggetti grafici, vedere [Oggetti grafici](/windows/win32/gdi/graphic-objects) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#77](../../mfc/codesnippet/cpp/cfont-class_8.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
