---
title: Classe CFont | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CFont [MFC], CFont
- CFont [MFC], CreateFont
- CFont [MFC], CreateFontIndirect
- CFont [MFC], CreatePointFont
- CFont [MFC], CreatePointFontIndirect
- CFont [MFC], FromHandle
- CFont [MFC], GetLogFont
ms.assetid: 3fad6bfe-d6ce-4ab9-967a-5ce0aa102800
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c914bab9ab7a4bb15f6fe3d2820d7ff2534c3c6e
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50053643"
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
|[CFont::](#createfont)|Inizializza un `CFont` con le caratteristiche specificate.|
|[CFont:: CreateFontIndirect](#createfontindirect)|Inizializza una `CFont` oggetto con le caratteristiche di base un `LOGFONT` struttura.|
|[Cfont](#createpointfont)|Inizializza un `CFont` con l'altezza specificata, misurato in decimi di un punto e il carattere tipografico.|
|[CFont::CreatePointFontIndirect](#createpointfontindirect)|Uguale allo `CreateFontIndirect` ad eccezione del fatto che l'altezza del tipo di carattere viene misurato in decimi di un punto invece di unità logiche.|
|[CFont::FromHandle](#fromhandle)|Restituisce un puntatore a un `CFont` dell'oggetto quando viene specificato un HFONT di Windows.|
|[CFont::GetLogFont](#getlogfont)|Riempie una `LOGFONT` con le informazioni sul tipo di carattere logico associato per il `CFont` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[HFONT CFont::operator](#operator_hfont)|Restituisce l'handle del tipo di carattere GDI di Windows associato ai `CFont` oggetto.|

## <a name="remarks"></a>Note

Usare un `CFont` dell'oggetto, creare un `CFont` dell'oggetto e associare un tipo di carattere di Windows a esso con [CreateFont](#createfont), [CreateFontIndirect](#createfontindirect), [CreatePointFont](#createpointfont), oppure [CreatePointFontIndirect](#createpointfontindirect)e quindi usare le funzioni membro dell'oggetto per modificare il tipo di carattere.

Il `CreatePointFont` e `CreatePointFontIndirect` le funzioni sono spesso più facile da usare rispetto `CreateFont` o `CreateFontIndirect` perché essi eseguono la conversione per l'altezza del tipo di carattere da un punto di dimensioni per le unità logiche automaticamente.

Per ulteriori informazioni sul `CFont`, vedere [degli oggetti grafici](../../mfc/graphic-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CFont`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cfont"></a>  CFont::CFont

Costruisce un oggetto `CFont`.

```
CFont();
```

### <a name="remarks"></a>Note

L'oggetto risultante deve essere inizializzato con `CreateFont`, `CreateFontIndirect`, `CreatePointFont`, o `CreatePointFontIndirect` prima che possa essere utilizzato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#70](../../mfc/codesnippet/cpp/cfont-class_1.cpp)]

##  <a name="createfont"></a>  CFont::

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
Specifica l'altezza desiderata (in unità logiche) del tipo di carattere. Vedere le `lfHeight` membro della [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta)struttura nel SDK di Windows per una descrizione. Il valore assoluto del *nHeight* non deve superare 16.384 unità di dispositivo dopo la conversione. Per tutti i confronti di altezza, il tipo di carattere mapper Cerca il tipo di carattere più grande che non superi le dimensioni richieste o il tipo di carattere più piccolo se tutti i tipi di carattere superano le dimensioni richieste.

*nWidth*<br/>
Specifica lo spessore medio (in unità logiche) di caratteri nel tipo di carattere. Se *nWidth* è 0, le proporzioni del dispositivo verrà confrontata con le proporzioni di digitalizzazione dei tipi di carattere disponibili per trovare la corrispondenza più vicina, che viene determinata dal valore assoluto della differenza.

*nEscapement*<br/>
Specifica l'angolo (in unità di 0,1 gradi) tra l'asse x della superficie di visualizzazione e il vettore di rotazione. Il vettore di rotazione è la riga e le origini dei caratteri e il cognome in una riga. L'angolo viene misurato in senso antiorario dall'asse x. Vedere le `lfEscapement` membro nel `LOGFONT` struttura nel SDK di Windows per altre informazioni.

*nOrientation*<br/>
Specifica l'angolo (in unità di 0,1 gradi) tra la linea di base di un carattere e l'asse x. L'angolo viene misurato in senso antiorario dall'asse x per i sistemi di coordinate in cui nella direzione y è inattivo e in senso orario dall'asse x per i sistemi di coordinate in cui è attivo nella direzione y.

*nWeight*<br/>
Specifica lo spessore del carattere (in pixel finale e per ogni 1000). Vedere le *lfWeight* membro nel `LOGFONT` struttura nel SDK di Windows per altre informazioni. I valori descritti sono approssimati. l'aspetto effettivo varia a seconda del carattere tipografico. Alcuni tipi di carattere sono soltanto i pesi FW_NORMAL FW_REGULAR e FW_BOLD. Se FW_DONTCARE viene specificato, viene utilizzato un peso predefinito.

*bItalic*<br/>
Specifica se il tipo di carattere è in corsivo.

*bUnderline*<br/>
Specifica se il tipo di carattere è sottolineato.

*cStrikeOut*<br/>
Specifica se i caratteri nel tipo di carattere sono barrati. Specifica un tipo di carattere barrato se impostato su un valore diverso da zero.

*nCharSet*<br/>
Specifica setSee carattere del tipo di carattere i `lfCharSet` membro nel `LOGFONT` struttura nel SDK di Windows per un elenco di valori.

Il set di caratteri OEM è dipendente dal sistema.

Tipi di carattere con altri set di caratteri può esistere nel sistema. Un'applicazione che utilizza un tipo di carattere con un set di caratteri sconosciuto non deve tentare di convertire o l'interpretazione di stringhe che devono essere eseguito con tale tipo di carattere. Al contrario, le stringhe devono essere passate direttamente al driver di dispositivo di output.

Il mapping del tipo di carattere non usa il valore DEFAULT_CHARSET. Un'applicazione può usare questo valore per consentire il nome e le dimensioni di un tipo di carattere per descrivere completamente il tipo di carattere logico. Se un tipo di carattere con il nome specificato non esiste, può sostituire un tipo di carattere da qualsiasi set di caratteri per il tipo di carattere specificato. Per evitare risultati imprevisti, le applicazioni devono utilizzare il valore DEFAULT_CHARSET quando strettamente necessario.

*nOutPrecision*<br/>
Specifica la precisione di output desiderato. La precisione dell'output definisce la misura deve rispettare l'output del tipo di carattere richiesto altezza, larghezza, caratteri l'orientamento, sequenza di escape e passo. Vedere le `lfOutPrecision` membro nel `LOGFONT` struttura nel SDK di Windows per un elenco di valori e altre informazioni.

*nClipPrecision*<br/>
Specifica la precisione del ritaglio desiderato. La precisione del ritaglio definisce la modalità di ritaglio caratteri che vengono parzialmente di fuori dell'area di visualizzazione. Vedere le `lfClipPrecision` membro nel `LOGFONT` struttura nel SDK di Windows per un elenco di valori.

Per usare un carattere di sola lettura incorporato, un'applicazione deve specificare CLIP_ENCAPSULATE.

Per ottenere una rotazione coerente del dispositivo TrueType e tipi di carattere vettoriali, un'applicazione può usare l'operatore OR per combinare il valore CLIP_LH_ANGLES con qualsiasi altro *nClipPrecision* valori. Se è impostato il bit CLIP_LH_ANGLES, la rotazione per tutti i tipi di carattere varia a seconda che l'orientamento del sistema di coordinate da sinistra o destra. (Per altre informazioni sull'orientamento di sistemi di coordinate, vedere la descrizione del *nOrientation* parametro.) Se CLIP_LH_ANGLES non è impostata, i tipi di carattere dispositivo sempre Ruota in senso antiorario, ma la rotazione di altri tipi di carattere è dipendente dell'orientamento del sistema di coordinate.

*nQuality*<br/>
Specifica la qualità di output del tipo di carattere, che definisce come attentamente il GDI deve tentare di eseguire corrispondono agli attributi tipo di carattere logico a quelle di un tipo di carattere fisico effettivo. Vedere le `lfQuality` membro nel `LOGFONT` struttura nel SDK di Windows per un elenco di valori.

*nPitchAndFamily*<br/>
Specifica passo e famiglia del tipo di carattere. Vedere le `lfPitchAndFamily` membro nel `LOGFONT` struttura nel SDK di Windows per un elenco di valori e altre informazioni.

*lpszFacename*<br/>
Oggetto `CString` o puntatore a una stringa con terminazione null che specifica il nome del carattere tipografico del tipo di carattere. La lunghezza di questa stringa non deve superare i 30 caratteri. Il Windows [EnumFontFamilies](/windows/desktop/api/wingdi/nf-wingdi-enumfontfamiliesa) funzione può essere utilizzata per enumerare tutti i tipi di carattere attualmente disponibili. Se *lpszFacename* è NULL, il GDI Usa un carattere tipografico indipendenti dal dispositivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Successivamente è possibile selezionare il tipo di carattere del tipo di carattere per qualsiasi contesto di dispositivo.

Il `CreateFont` funzione non crea un nuovo tipo di carattere GDI di Windows. Semplicemente seleziona la corrispondenza più vicina da tipi di carattere fisici disponibili per il programma GDI.

Le applicazioni possono usare le impostazioni predefinite per la maggior parte dei parametri durante la creazione di un tipo di carattere logico. I parametri che è sempre necessario assegnare valori specifici sono *nHeight* e *lpszFacename*. Se *nHeight* e *lpszFacename* non vengono impostate dall'applicazione, il tipo di carattere logica creata è dipendente dalla periferica.

Una volta terminato con il `CFont` oggetto creato dal `CreateFont` funzione, usare `CDC::SelectObject` per selezionare un tipo di carattere diverso nel contesto di dispositivo, quindi eliminare il `CFont` oggetto che non è più necessario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#71](../../mfc/codesnippet/cpp/cfont-class_2.cpp)]

##  <a name="createfontindirect"></a>  CFont:: CreateFontIndirect

Inizializza una `CFont` oggetto con le caratteristiche di base un [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta)struttura.

```
BOOL CreateFontIndirect(const LOGFONT* lpLogFont);
```

### <a name="parameters"></a>Parametri

*lpLogFont*<br/>
Punta a un `LOGFONT` struttura che definisce le caratteristiche del tipo di carattere logico.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Successivamente è possibile selezionare il tipo di carattere del tipo di carattere corrente per qualsiasi dispositivo.

Questo tipo di carattere presenta le caratteristiche specificate nel [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura. Quando viene selezionato il tipo di carattere utilizzando il [CDC:: SelectObject](../../mfc/reference/cdc-class.md#selectobject) funzione membro, il mapping del tipo di carattere GDI tenta di ottenere il tipo di carattere logico con un tipo di carattere fisico esistente. Se il mapping del tipo di carattere non riesce a trovare una corrispondenza esatta per il tipo di carattere logico, fornisce un tipo di carattere alternativo le cui caratteristiche corrispondono poiché molte delle caratteristiche richieste possibili.

Quando non è più necessario il `CFont` oggetto creato dal `CreateFontIndirect` funzione, usare `CDC::SelectObject` per selezionare un tipo di carattere diverso nel contesto di dispositivo, quindi eliminare il `CFont` oggetto che non è più necessario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#72](../../mfc/codesnippet/cpp/cfont-class_3.cpp)]

##  <a name="createpointfont"></a>  Cfont

Questa funzione fornisce un modo semplice per creare un tipo di carattere di un tipo di carattere specificato e la dimensione.

```
BOOL CreatePointFont(
    int nPointSize,
    LPCTSTR lpszFaceName,
    CDC* pDC = NULL);
```

### <a name="parameters"></a>Parametri

*nPointSize*<br/>
Altezza del carattere in decimi di un punto di richiesta. (Ad esempio, passare 120 per richiedere un tipo di carattere 12 punti).

*lpszFaceName*<br/>
Oggetto `CString` o puntatore a una stringa con terminazione null che specifica il nome del carattere tipografico del tipo di carattere. La lunghezza di questa stringa non deve superare i 30 caratteri. Il Windows ' EnumFontFamilies funzione può essere utilizzata per enumerare tutti i tipi di carattere attualmente disponibili. Se *lpszFaceName* è NULL, il GDI Usa un carattere tipografico indipendenti dal dispositivo.

*pDC*<br/>
Puntatore per il [CDC](../../mfc/reference/cdc-class.md) oggetto da utilizzare per convertire l'altezza in *nPointSize* alle unità logiche. Se NULL, viene utilizzato un contesto di dispositivo dello schermo per la conversione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, altrimenti 0.

### <a name="remarks"></a>Note

Converte automaticamente l'altezza in *nPointSize* alle unità logiche usando l'oggetto CDC a cui punta *pDC*.

Una volta terminato con il `CFont` oggetto creato dal `CreatePointFont` funzionare, prima di tutto scegliere il tipo di carattere esterno al contesto di dispositivo, quindi eliminare il `CFont` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#73](../../mfc/codesnippet/cpp/cfont-class_4.cpp)]

##  <a name="createpointfontindirect"></a>  CFont::CreatePointFontIndirect

Questa funzione è identico [CreateFontIndirect](#createfontindirect) ad eccezione del fatto che il `lfHeight` membro del `LOGFONT` viene interpretato in decimi di un'unità punto anziché come dispositivo.

```
BOOL CreatePointFontIndirect(
    const LOGFONT* lpLogFont,
    CDC* pDC = NULL);
```

### <a name="parameters"></a>Parametri

*lpLogFont*<br/>
Punta a un [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura che definisce le caratteristiche del tipo di carattere logico. Il `lfHeight` membro del `LOGFONT` struttura viene misurata in decimi di un punto invece di unità logiche. (Ad esempio, impostare `lfHeight` su 120 per richiedere un tipo di carattere 12 punte.)

*pDC*<br/>
Puntatore per il [CDC](../../mfc/reference/cdc-class.md) oggetto da utilizzare per convertire l'altezza in `lfHeight` alle unità logiche. Se NULL, viene utilizzato un contesto di dispositivo dello schermo per la conversione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, altrimenti 0.

### <a name="remarks"></a>Note

Questa funzione converte automaticamente l'altezza in `lfHeight` unità logiche usando l'oggetto CDC a cui fa riferimento *pDC* prima di passare il `LOGFONT` struttura a Windows.

Una volta terminato con il `CFont` oggetto creato dal `CreatePointFontIndirect` funzionare, prima di tutto scegliere il tipo di carattere esterno al contesto di dispositivo, quindi eliminare il `CFont` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#74](../../mfc/codesnippet/cpp/cfont-class_5.cpp)]

##  <a name="fromhandle"></a>  CFont::FromHandle

Restituisce un puntatore a un `CFont` dell'oggetto quando viene specificato un handle HFONT a un oggetto di tipo di carattere GDI di Windows.

```
static CFont* PASCAL FromHandle(HFONT hFont);
```

### <a name="parameters"></a>Parametri

*hFont*<br/>
HFONT un handle per un tipo di carattere di Windows.

### <a name="return-value"></a>Valore restituito

Un puntatore a un `CFont` oggetto se riesce; in caso contrario, NULL.

### <a name="remarks"></a>Note

Se un `CFont` oggetto non è ancora connesso per l'handle, una variabile temporanea `CFont` oggetto viene creato e collegato. Questo temporaneo `CFont` oggetto è valido solo fino a quando non la volta successiva che l'applicazione ha il tempo di inattività nel relativo ciclo di eventi, a cui ora l'immagine di tutti i temporanei vengono eliminati gli oggetti. In altre parole, ciò è che l'oggetto temporaneo è valido solo durante l'elaborazione di una finestra di messaggio.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#75](../../mfc/codesnippet/cpp/cfont-class_6.cpp)]

##  <a name="getlogfont"></a>  CFont::GetLogFont

Chiamare questa funzione per recuperare una copia del `LOGFONT` struttura `CFont`.

```
int GetLogFont(LOGFONT* pLogFont);
```

### <a name="parameters"></a>Parametri

*pLogFont*<br/>
Puntatore per il [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura per ricevere le informazioni di carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo, in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#76](../../mfc/codesnippet/cpp/cfont-class_7.cpp)]

##  <a name="operator_hfont"></a>  HFONT CFont::operator

Utilizzare questo operatore per ottenere l'handle GDI di Windows del tipo di carattere collegato al `CFont` oggetto.

```
operator HFONT() const;
```

### <a name="return-value"></a>Valore restituito

L'handle dell'oggetto del tipo di carattere GDI di Windows collegata a `CFont` se riesce; in caso contrario, NULL.

### <a name="remarks"></a>Note

Poiché questo operatore viene usato automaticamente per le conversioni da `CFont` al [tipi di carattere e testo](/windows/desktop/gdi/fonts-and-text), è possibile passare `CFont` oggetti alle funzioni che si aspettano HFONTs.

Per altre informazioni sull'uso di oggetti grafici, vedere [gli oggetti di grafica](/windows/desktop/gdi/graphic-objects) nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#77](../../mfc/codesnippet/cpp/cfont-class_8.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../visual-cpp-samples.md)<br/>
[Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

