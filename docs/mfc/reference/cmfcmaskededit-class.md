---
title: CMFCMaskedEdit (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCMaskedEdit
- AFXMASKEDEDIT/CMFCMaskedEdit
- AFXMASKEDEDIT/CMFCMaskedEdit::DisableMask
- AFXMASKEDEDIT/CMFCMaskedEdit::EnableGetMaskedCharsOnly
- AFXMASKEDEDIT/CMFCMaskedEdit::EnableMask
- AFXMASKEDEDIT/CMFCMaskedEdit::EnableSelectByGroup
- AFXMASKEDEDIT/CMFCMaskedEdit::EnableSetMaskedCharsOnly
- AFXMASKEDEDIT/CMFCMaskedEdit::GetWindowText
- AFXMASKEDEDIT/CMFCMaskedEdit::SetValidChars
- AFXMASKEDEDIT/CMFCMaskedEdit::SetWindowText
- AFXMASKEDEDIT/CMFCMaskedEdit::IsMaskedChar
helpviewer_keywords:
- CMFCMaskedEdit [MFC], DisableMask
- CMFCMaskedEdit [MFC], EnableGetMaskedCharsOnly
- CMFCMaskedEdit [MFC], EnableMask
- CMFCMaskedEdit [MFC], EnableSelectByGroup
- CMFCMaskedEdit [MFC], EnableSetMaskedCharsOnly
- CMFCMaskedEdit [MFC], GetWindowText
- CMFCMaskedEdit [MFC], SetValidChars
- CMFCMaskedEdit [MFC], SetWindowText
- CMFCMaskedEdit [MFC], IsMaskedChar
ms.assetid: 13b1a645-2d5d-4c37-8599-16d5003f23a5
ms.openlocfilehash: de28b308ec235e33e39aabd707677f4e75320b0b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365289"
---
# <a name="cmfcmaskededit-class"></a>CMFCMaskedEdit (classe)

La `CMFCMaskedEdit` classe supporta un controllo di modifica mascherato, che convalida l'input dell'utente rispetto a una maschera e visualizza i risultati convalidati in base a un modello.

## <a name="syntax"></a>Sintassi

```
class CMFCMaskedEdit : public CEdit
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCMaskedEdit::CMFCMaskedEdit`|Costruttore predefinito.|
|`CMFCMaskedEdit::~CMFCMaskedEdit`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMaskedModifica::DisableMask](#disablemask)|Disabilita la convalida dell'input dell'utente.|
|[CMFCMaskedModifica::EnableGetMaskedCharsOnly](#enablegetmaskedcharsonly)|Specifica se `GetWindowText` il metodo recupera solo i caratteri mascherati.|
|[CMFCMaskedModifica::EnableMask](#enablemask)|Inizializza il controllo di modifica mascherato.|
|[CMFCMaskedEdit::EnableSelectByGroup](#enableselectbygroup)|Specifica se il controllo di modifica mascherato seleziona particolari gruppi di input dell'utente o tutti gli input dell'utente.|
|[CMFCMaskedModifica::EnableSetMaskedCharsOnly](#enablesetmaskedcharsonly)|Specifica se il testo viene convalidato solo per i caratteri mascherati o per l'intera maschera.|
|`CMFCMaskedEdit::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCMaskedModifica::GetWindowText](#getwindowtext)|Recupera il testo convalidato dal controllo di modifica mascherato.|
|[CMFCMaskedModifica::SetValidChars](#setvalidchars)|Specifica una stringa di caratteri validi che l'utente può immettere.|
|[CMFCMaskedModifica::SetWindowText](#setwindowtext)|Visualizza un messaggio di richiesta nel controllo di modifica mascherato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCMaskedModifica::IsMaskedChar](#ismaskedchar)|Chiamato dal framework per convalidare il carattere specificato rispetto al carattere della maschera corrispondente.|

## <a name="remarks"></a>Osservazioni

Per utilizzare il `CMFCMaskedEdit` controllo nell'applicazione, eseguire la procedura seguente:

1. Incorporare `CMFCMaskedEdit` un oggetto nella classe della finestra.

2. Chiamare il [CMFCMaskedEdit::EnableMask](#enablemask) metodo per specificare la maschera.

3. Chiamare il [CMFCMaskedEdit::SetValidChars](#setvalidchars) metodo per specificare l'elenco di caratteri validi.

4. Chiamare il [CMFCMaskedEdit::SetWindowText](#setwindowtext) metodo per specificare il testo predefinito per il controllo di modifica mascherato.

5. Chiamare il [CMFCMaskedEdit::GetWindowText](#getwindowtext) metodo per recuperare il testo convalidato.

Se non si chiamano uno o più metodi per inizializzare la maschera, i caratteri validi e il testo predefinito, il controllo di modifica mascherato si comporta come il controllo di modifica standard.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come impostare una maschera (ad esempio un numero di telefono) utilizzando il `EnableMask` metodo per creare la maschera per il controllo di modifica mascherato, il `SetValidChars` metodo per specificare una stringa di caratteri validi che l'utente può immettere e `SetWindowText` il metodo per visualizzare un prompt nel controllo di modifica mascherato. Questo esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#11](../../mfc/reference/codesnippet/cpp/cmfcmaskededit-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#12](../../mfc/reference/codesnippet/cpp/cmfcmaskededit-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

[CMFCMaskedEdit](../../mfc/reference/cmfcmaskededit-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmaskededit.h

## <a name="cmfcmaskededitdisablemask"></a><a name="disablemask"></a>CMFCMaskedModifica::DisableMask

Disabilita la convalida dell'input dell'utente.

```
void DisableMask();
```

### <a name="remarks"></a>Osservazioni

Se la convalida dell'input dell'utente è disabilitata, il controllo di modifica mascherato si comporta come il controllo di modifica standard.

## <a name="cmfcmaskededitenablegetmaskedcharsonly"></a><a name="enablegetmaskedcharsonly"></a>CMFCMaskedModifica::EnableGetMaskedCharsOnly

Specifica se `GetWindowText` il metodo recupera solo i caratteri mascherati.

```
void EnableGetMaskedCharsOnly(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per specificare che il [CMFCMaskedEdit::GetWindowText](#getwindowtext) metodo recuperare solo i caratteri mascherati; FALSE per specificare che il metodo recupera l'intero testo. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per abilitare il recupero di caratteri mascherati. Creare quindi un controllo di modifica mascherato che corrisponde al numero di telefono, ad esempio (425) 555-0187. Se si `GetWindowText` chiama il metodo, restituisce "4255550187". Se si disabilita il recupero `GetWindowText` di caratteri mascherati, il metodo restituisce il testo visualizzato nel controllo di modifica, ad esempio "(425) 555-0187".

## <a name="cmfcmaskededitenablemask"></a><a name="enablemask"></a>CMFCMaskedModifica::EnableMask

Inizializza il controllo di modifica mascherato.

```
void EnableMask(
    LPCTSTR lpszMask,
    LPCTSTR lpszInputTemplate,
    TCHAR chMaskInputTemplate=_T('_'),
    LPCTSTR lpszValid=NULL);
```

### <a name="parameters"></a>Parametri

*Maschera di lpsz*<br/>
[in] Stringa maschera che specifica il tipo di carattere che può essere visualizzato in ogni posizione nell'input dell'utente. La lunghezza delle stringhe dei parametri *lpszInputTemplate* e *lpszMask* deve essere la stessa. Vedere la sezione Osservazioni per ulteriori dettagli sui caratteri maschera.

*LpszInputTemplate (modello)*<br/>
[in] Stringa modello di maschera che specifica i caratteri letterali che possono essere visualizzati in ogni posizione nell'input dell'utente. Utilizzare il carattere di sottolineatura ('_') come segnaposto del carattere. La lunghezza delle stringhe dei parametri *lpszInputTemplate* e *lpszMask* deve essere la stessa.

*ChMaskInputTemplate (modello)*<br/>
[in] Carattere predefinito che il framework sostituisce ogni carattere non valido nell'input dell'utente. Il valore predefinito di questo parametro è underscore ('_').

*lpszValido*<br/>
[in] Stringa contenente un set di caratteri validi. NULL indica che tutti i caratteri sono validi. Il valore predefinito di questo parametro è NULL.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per creare la maschera per il controllo di modifica mascherato. Derivare una `CMFCMaskedEdit` classe dalla classe ed eseguire l'override di [CMFCMaskedEdit::IsMaskedChar](#ismaskedchar) metodo per utilizzare il proprio codice per l'elaborazione maschera personalizzata.

Nella tabella seguente sono elencati i caratteri maschera predefiniti:

|Carattere maschera|Definizione|
|--------------------|----------------|
|D|Cifre.|
|d|Cifra o spazio.|
|+|più ('''), meno ('-') o spazio.|
|C|Carattere alfabetico.|
|c|Carattere alfabetico o spazio.|
|Una|Carattere alfanumerico.|
|a|Carattere alfanumerico o spazio.|
|*|Un carattere stampabile.|

## <a name="cmfcmaskededitenableselectbygroup"></a><a name="enableselectbygroup"></a>CMFCMaskedEdit::EnableSelectByGroup

Specifica se il controllo di modifica mascherato consente all'utente di selezionare l'input di gruppi specifici o tutti gli input.

```
void EnableSelectByGroup(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per selezionare solo i gruppi; FALSE per selezionare l'intero testo. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per specificare se il controllo di modifica mascherato consente all'utente di selezionare in base al gruppo o all'intero testo.

Per impostazione predefinita, la selezione per gruppo è abilitata. In questo caso l'utente può selezionare solo gruppi continui di caratteri validi.

Ad esempio, è possibile utilizzare il seguente controllo di modifica mascherato per convalidare un numero di telefono:

```cpp
m_wndMaskEdit.EnableMask(
    _T(" ddd  ddd dddd"),  // Mask string
    _T("(___) ___-____"),  // Template string
    _T(' '));              // Default char

m_wndMaskEdit.SetValidChars(NULL); // All characters are valid.

m_wndMaskEdit.SetWindowText(_T("(425) 555-0187")); // Prompt
```

Se la selezione per gruppo è abilitata, l'utente può recuperare solo i gruppi di stringhe "425", "555" o "0187". Se la selezione del gruppo è disabilitata, l'utente può recuperare l'intero testo del numero di telefono: "(425) 555-0187".

## <a name="cmfcmaskededitenablesetmaskedcharsonly"></a><a name="enablesetmaskedcharsonly"></a>CMFCMaskedModifica::EnableSetMaskedCharsOnly

Specifica se il testo viene convalidato solo per i caratteri mascherati o per l'intera maschera.

```
void EnableSetMaskedCharsOnly(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per convalidare l'input dell'utente solo con caratteri mascherati; FALSE per convalidare l'intera maschera. Il valore predefinito è TRUE.

## <a name="cmfcmaskededitgetwindowtext"></a><a name="getwindowtext"></a>CMFCMaskedModifica::GetWindowText

Recupera il testo convalidato dal controllo di modifica mascherato.

```
int GetWindowText(
    LPTSTR lpszStringBuf,
    int nMaxCount) const;

void GetWindowText(CString& rstrString) const;
```

### <a name="parameters"></a>Parametri

*lpszStringBuf (informazioni in due)*<br/>
[fuori] Puntatore a un buffer che riceve il testo dal controllo di modifica.

*nMaxCount*<br/>
[in] Numero massimo di caratteri da ricevere.

*rstrString (stringa)*<br/>
[fuori] Riferimento all'oggetto stringa che riceve il testo dal controllo di modifica.

### <a name="return-value"></a>Valore restituito

Il primo overload del metodo restituisce il numero di byte della stringa che viene copiata nel buffer del parametro *lpszStringBuf;* 0 se il controllo di modifica mascherato non ha testo.

### <a name="remarks"></a>Osservazioni

Questo metodo copia il testo dal controllo di modifica mascherato nel buffer *lpszStringBuf* o nella stringa *rstrString.*

Questo metodo ridefinisce [CWnd::GetWindowText](../../mfc/reference/cwnd-class.md#getwindowtext).

## <a name="cmfcmaskededitismaskedchar"></a><a name="ismaskedchar"></a>CMFCMaskedModifica::IsMaskedChar

Chiamato dal framework per convalidare il carattere specificato rispetto al carattere della maschera corrispondente.

```
virtual BOOL IsMaskedChar(
    TCHAR chChar,
    TCHAR chMaskChar) const;
```

### <a name="parameters"></a>Parametri

*chChar*<br/>
[in] Carattere da convalidare.

*chMaskChar (maschera inglese)*<br/>
[in] Carattere corrispondente dalla stringa della maschera.

### <a name="return-value"></a>Valore restituito

TRUESe il *chChar* parametro è il tipo di carattere consentito dal *chMaskChar* parametro; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per convalidare i caratteri di input nel proprio. Per ulteriori informazioni sui caratteri maschera, vedere il [CMFCMaskedEdit::EnableMask](#enablemask) metodo.

## <a name="cmfcmaskededitsetvalidchars"></a><a name="setvalidchars"></a>CMFCMaskedModifica::SetValidChars

Specifica una stringa di caratteri validi che l'utente può immettere.

```
void SetValidChars(LPCTSTR lpszValid=NULL);
```

### <a name="parameters"></a>Parametri

*lpszValido*<br/>
[in] Stringa che contiene il set di caratteri di input validi. NULL significa che tutti i caratteri sono validi. Il valore predefinito di questo parametro è NULL.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per definire un elenco di caratteri validi. Se un carattere di input non è presente nell'elenco, il controllo di modifica mascherato non lo accetterà.

Nell'esempio di codice riportato di seguito vengono accettati solo numeri esadecimali.

```cpp
//Mask: 0xFFFF
m_wndMaskEdit.EnableMask(
    _T(" AAAA"),                // The mask string.
    _T("0x____"),               // The literal template string.
    _T('_'));                   // The default character that
                                // replaces the backspace character.
// Valid string characters
m_wndMaskEdit.SetValidChars(_T("1234567890ABCDEFabcdef"));m_wndMaskEdit.SetWindowText(_T("0x01AF"));
```

## <a name="cmfcmaskededitsetwindowtext"></a><a name="setwindowtext"></a>CMFCMaskedModifica::SetWindowText

Visualizza un messaggio di richiesta nel controllo di modifica mascherato.

```
void SetWindowText(LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*lpszString (stringhe)*<br/>
[in] Punta a una stringa con terminazione null che verrà utilizzata come prompt.

### <a name="remarks"></a>Osservazioni

Questo metodo imposta il testo del controllo.

Questo metodo ridefinisce [CWnd::SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)
