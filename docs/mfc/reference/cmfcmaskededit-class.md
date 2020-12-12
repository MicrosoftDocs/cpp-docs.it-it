---
description: 'Altre informazioni su: classe CMFCMaskedEdit'
title: Classe CMFCMaskedEdit
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
ms.openlocfilehash: 7ac61240e2941eafbbac3cbb03a4884e282cbca3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265155"
---
# <a name="cmfcmaskededit-class"></a>Classe CMFCMaskedEdit

La `CMFCMaskedEdit` classe supporta un controllo di modifica mascherato, che convalida l'input utente rispetto a una maschera e Visualizza i risultati convalidati in base a un modello.

## <a name="syntax"></a>Sintassi

```
class CMFCMaskedEdit : public CEdit
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCMaskedEdit::CMFCMaskedEdit`|Costruttore predefinito.|
|`CMFCMaskedEdit::~CMFCMaskedEdit`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCMaskedEdit::D isableMask](#disablemask)|Disabilita la convalida dell'input dell'utente.|
|[CMFCMaskedEdit:: EnableGetMaskedCharsOnly](#enablegetmaskedcharsonly)|Specifica se il `GetWindowText` metodo recupera solo i caratteri mascherati.|
|[CMFCMaskedEdit:: EnableMask](#enablemask)|Inizializza il controllo di modifica mascherato.|
|[CMFCMaskedEdit:: EnableSelectByGroup](#enableselectbygroup)|Specifica se il controllo di modifica mascherato seleziona determinati gruppi di input utente o tutti gli input utente.|
|[CMFCMaskedEdit:: EnableSetMaskedCharsOnly](#enablesetmaskedcharsonly)|Specifica se il testo viene convalidato solo per i caratteri mascherati o per l'intera maschera.|
|`CMFCMaskedEdit::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCMaskedEdit:: GetWindowText](#getwindowtext)|Recupera il testo convalidato dal controllo di modifica mascherato.|
|[CMFCMaskedEdit:: SetValidChars](#setvalidchars)|Specifica una stringa di caratteri validi che l'utente può immettere.|
|[CMFCMaskedEdit:: SetWindowText](#setwindowtext)|Visualizza una richiesta nel controllo di modifica mascherato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCMaskedEdit:: IsMaskedChar](#ismaskedchar)|Chiamato dal Framework per convalidare il carattere specificato rispetto al carattere della maschera corrispondente.|

## <a name="remarks"></a>Commenti

Per usare il `CMFCMaskedEdit` controllo nell'applicazione, seguire questa procedura:

1. Incorporare un `CMFCMaskedEdit` oggetto nella classe Window.

2. Chiamare il metodo [CMFCMaskedEdit:: EnableMask](#enablemask) per specificare la maschera.

3. Chiamare il metodo [CMFCMaskedEdit:: SetValidChars](#setvalidchars) per specificare l'elenco di caratteri validi.

4. Chiamare il metodo [CMFCMaskedEdit:: SetWindowText](#setwindowtext) per specificare il testo predefinito per il controllo di modifica mascherato.

5. Chiamare il metodo [CMFCMaskedEdit:: GetWindowText](#getwindowtext) per recuperare il testo convalidato.

Se non si chiamano uno o più metodi per inizializzare la maschera, i caratteri validi e il testo predefinito, il controllo di modifica mascherato si comporta in modo analogo al comportamento del controllo di modifica standard.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come configurare una maschera (ad esempio un numero di telefono) utilizzando il `EnableMask` metodo per creare la maschera per il controllo di modifica mascherato, il `SetValidChars` metodo per specificare una stringa di caratteri validi che l'utente può immettere e il `SetWindowText` metodo per visualizzare un prompt nel controllo di modifica mascherato. Questo esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#11](../../mfc/reference/codesnippet/cpp/cmfcmaskededit-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#12](../../mfc/reference/codesnippet/cpp/cmfcmaskededit-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

[CMFCMaskedEdit](../../mfc/reference/cmfcmaskededit-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmaskededit. h

## <a name="cmfcmaskededitdisablemask"></a><a name="disablemask"></a> CMFCMaskedEdit::D isableMask

Disabilita la convalida dell'input dell'utente.

```cpp
void DisableMask();
```

### <a name="remarks"></a>Commenti

Se la convalida dell'input dell'utente è disabilitata, il controllo di modifica mascherato si comporta come il controllo di modifica standard.

## <a name="cmfcmaskededitenablegetmaskedcharsonly"></a><a name="enablegetmaskedcharsonly"></a> CMFCMaskedEdit:: EnableGetMaskedCharsOnly

Specifica se il `GetWindowText` metodo recupera solo i caratteri mascherati.

```cpp
void EnableGetMaskedCharsOnly(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per specificare che il metodo [CMFCMaskedEdit:: GetWindowText](#getwindowtext) recupera solo i caratteri mascherati; FALSE per specificare che il metodo recupera l'intero testo. Il valore predefinito è TRUE.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per abilitare il recupero dei caratteri mascherati. Creare quindi un controllo di modifica mascherato corrispondente al numero di telefono, ad esempio (425) 555-0187. Se si chiama il `GetWindowText` metodo, viene restituito "4255550187". Se si disabilita il recupero dei caratteri mascherati, il `GetWindowText` metodo restituisce il testo visualizzato nel controllo di modifica, ad esempio "(425) 555-0187".

## <a name="cmfcmaskededitenablemask"></a><a name="enablemask"></a> CMFCMaskedEdit:: EnableMask

Inizializza il controllo di modifica mascherato.

```cpp
void EnableMask(
    LPCTSTR lpszMask,
    LPCTSTR lpszInputTemplate,
    TCHAR chMaskInputTemplate=_T('_'),
    LPCTSTR lpszValid=NULL);
```

### <a name="parameters"></a>Parametri

*lpszMask*<br/>
in Stringa maschera che specifica il tipo di carattere che può essere visualizzato in ogni posizione nell'input dell'utente. La lunghezza delle stringhe di parametro *lpszInputTemplate* e *lpszMask* deve essere la stessa. Per informazioni più dettagliate sui caratteri della maschera, vedere la sezione Osservazioni.

*lpszInputTemplate*<br/>
in Stringa modello maschera che specifica i caratteri letterali che possono essere visualizzati in ogni posizione nell'input dell'utente. Usare il carattere di sottolineatura (' _') come segnaposto carattere. La lunghezza delle stringhe di parametro *lpszInputTemplate* e *lpszMask* deve essere la stessa.

*chMaskInputTemplate*<br/>
in Carattere predefinito sostituito dal Framework per ogni carattere non valido nell'input dell'utente. Il valore predefinito di questo parametro è carattere di sottolineatura (' _').

*lpszValid*<br/>
in Stringa che contiene un set di caratteri validi. NULL indica che tutti i caratteri sono validi. Il valore predefinito di questo parametro è NULL.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per creare la maschera per il controllo di modifica mascherato. Derivare una classe dalla `CMFCMaskedEdit` classe ed eseguire l'override del metodo [CMFCMaskedEdit:: IsMaskedChar](#ismaskedchar) per usare il proprio codice per l'elaborazione personalizzata della maschera.

La tabella seguente elenca i caratteri di maschera predefiniti:

|Carattere maschera|Definizione|
|--------------------|----------------|
|D|Cifre.|
|d|Cifra o spazio.|
|+|Più ("+"), meno ('-') o spazio.|
|C|Carattere alfabetico.|
|c|Carattere alfabetico o spazio.|
|Una|Carattere alfanumerico.|
|a|Carattere alfanumerico o spazio.|
|*|Carattere stampabile.|

## <a name="cmfcmaskededitenableselectbygroup"></a><a name="enableselectbygroup"></a> CMFCMaskedEdit:: EnableSelectByGroup

Specifica se il controllo di modifica mascherato consente all'utente di selezionare determinati gruppi di input o di input.

```cpp
void EnableSelectByGroup(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per selezionare solo i gruppi; FALSE per selezionare l'intero testo. Il valore predefinito è TRUE.

### <a name="remarks"></a>Commenti

Usare questa funzione per specificare se il controllo di modifica mascherato consente a un utente di selezionare in base al gruppo o all'intero testo.

Per impostazione predefinita, la selezione per gruppo è abilitata. In questo caso l'utente può selezionare solo gruppi continui di caratteri validi.

Ad esempio, è possibile usare il controllo di modifica mascherato seguente per convalidare un numero di telefono:

```cpp
m_wndMaskEdit.EnableMask(
    _T(" ddd  ddd dddd"),  // Mask string
    _T("(___) ___-____"),  // Template string
    _T(' '));              // Default char

m_wndMaskEdit.SetValidChars(NULL); // All characters are valid.

m_wndMaskEdit.SetWindowText(_T("(425) 555-0187")); // Prompt
```

Se la selezione per gruppo è abilitata, l'utente può recuperare solo i gruppi di stringhe "425", "555" o "0187". Se la selezione del gruppo è disabilitata, l'utente può recuperare l'intero testo del numero di telefono: "(425) 555-0187".

## <a name="cmfcmaskededitenablesetmaskedcharsonly"></a><a name="enablesetmaskedcharsonly"></a> CMFCMaskedEdit:: EnableSetMaskedCharsOnly

Specifica se il testo viene convalidato solo per i caratteri mascherati o per l'intera maschera.

```cpp
void EnableSetMaskedCharsOnly(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per convalidare l'input dell'utente solo per i caratteri mascherati; FALSE per convalidare l'intera maschera. Il valore predefinito è TRUE.

## <a name="cmfcmaskededitgetwindowtext"></a><a name="getwindowtext"></a> CMFCMaskedEdit:: GetWindowText

Recupera il testo convalidato dal controllo di modifica mascherato.

```
int GetWindowText(
    LPTSTR lpszStringBuf,
    int nMaxCount) const;

void GetWindowText(CString& rstrString) const;
```

### <a name="parameters"></a>Parametri

*lpszStringBuf*<br/>
out Puntatore a un buffer che riceve il testo dal controllo di modifica.

*nMaxCount*<br/>
in Numero massimo di caratteri da ricevere.

*rstrString*<br/>
out Riferimento all'oggetto stringa che riceve il testo dal controllo di modifica.

### <a name="return-value"></a>Valore restituito

Il primo overload del metodo restituisce il numero di byte della stringa copiata nel buffer del parametro *lpszStringBuf* . 0 se il controllo di modifica mascherato non contiene testo.

### <a name="remarks"></a>Commenti

Questo metodo copia il testo dal controllo di modifica mascherato nel buffer *lpszStringBuf* o nella stringa *rstrString* .

Questo metodo ridefinisce [CWnd:: GetWindowText](../../mfc/reference/cwnd-class.md#getwindowtext).

## <a name="cmfcmaskededitismaskedchar"></a><a name="ismaskedchar"></a> CMFCMaskedEdit:: IsMaskedChar

Chiamato dal Framework per convalidare il carattere specificato rispetto al carattere della maschera corrispondente.

```
virtual BOOL IsMaskedChar(
    TCHAR chChar,
    TCHAR chMaskChar) const;
```

### <a name="parameters"></a>Parametri

*chChar*<br/>
in Carattere da convalidare.

*chMaskChar*<br/>
in Carattere corrispondente dalla stringa della maschera.

### <a name="return-value"></a>Valore restituito

TRUE se il parametro *chChar* è il tipo di carattere consentito dal parametro *chMaskChar* . in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo per convalidare i caratteri di input autonomamente. Per ulteriori informazioni sui caratteri della maschera, vedere il metodo [CMFCMaskedEdit:: EnableMask](#enablemask) .

## <a name="cmfcmaskededitsetvalidchars"></a><a name="setvalidchars"></a> CMFCMaskedEdit:: SetValidChars

Specifica una stringa di caratteri validi che l'utente può immettere.

```cpp
void SetValidChars(LPCTSTR lpszValid=NULL);
```

### <a name="parameters"></a>Parametri

*lpszValid*<br/>
in Stringa che contiene il set di caratteri di input validi. NULL indica che tutti i caratteri sono validi. Il valore predefinito di questo parametro è NULL.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per definire un elenco di caratteri validi. Se un carattere di input non è presente nell'elenco, il controllo di modifica mascherato non lo accetterà.

Nell'esempio di codice seguente vengono accettati solo numeri esadecimali.

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

## <a name="cmfcmaskededitsetwindowtext"></a><a name="setwindowtext"></a> CMFCMaskedEdit:: SetWindowText

Visualizza una richiesta nel controllo di modifica mascherato.

```cpp
void SetWindowText(LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*lpszString*<br/>
in Punta a una stringa con terminazione null che verrà utilizzata come richiesta.

### <a name="remarks"></a>Commenti

Questo metodo imposta il testo del controllo.

Questo metodo ridefinisce [CWnd:: SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)
