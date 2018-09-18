---
title: Classe CMFCMaskedEdit | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2739b9306647b1929a0ad51aca8e0b66a65e9d2a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46018262"
---
# <a name="cmfcmaskededit-class"></a>Classe CMFCMaskedEdit
Il `CMFCMaskedEdit` classe supporta un controllo di modifica mascherato, che convalida l'input utente rispetto a una maschera e visualizza i risultati convalidati in base a un modello.  
  
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
|[CMFCMaskedEdit::DisableMask](#disablemask)|Disabilita la convalida dell'input utente.|  
|[CMFCMaskedEdit::EnableGetMaskedCharsOnly](#enablegetmaskedcharsonly)|Specifica se il `GetWindowText` metodo recupera solo i caratteri mascherati.|  
|[CMFCMaskedEdit::EnableMask](#enablemask)|Controllo di modifica consente di inizializzare il mascherato.|  
|[CMFCMaskedEdit::EnableSelectByGroup](#enableselectbygroup)|Specifica se il controllo MaskedEdit consente di selezionare determinati gruppi dell'utente di input o tutto l'input utente.|  
|[CMFCMaskedEdit::EnableSetMaskedCharsOnly](#enablesetmaskedcharsonly)|Specifica se il testo viene convalidato sulla base solo mascherato caratteri o in base alla maschera intera.|  
|`CMFCMaskedEdit::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCMaskedEdit::GetWindowText](#getwindowtext)|Recupera convalidato il testo dal controllo di modifica mascherato.|  
|[CMFCMaskedEdit::SetValidChars](#setvalidchars)|Specifica una stringa di caratteri validi che l'utente può immettere.|  
|[CMFCMaskedEdit::SetWindowText](#setwindowtext)|Visualizza un prompt nel controllo di modifica mascherato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCMaskedEdit::IsMaskedChar](#ismaskedchar)|Chiamata eseguita dal framework per convalidare il carattere specificato con il carattere della maschera corrispondente.|  
  
## <a name="remarks"></a>Note  
 Eseguire la procedura seguente per usare il `CMFCMaskedEdit` controllo nell'applicazione:  
  
 1. Incorporare un `CMFCMaskedEdit` oggetto nella classe della finestra.  
  
 2. Chiamare il [CMFCMaskedEdit::EnableMask](#enablemask) metodo per specificare il filtro.  
  
 3. Chiamare il [CMFCMaskedEdit::SetValidChars](#setvalidchars) metodo per specificare l'elenco di caratteri validi.  
  
 4. Chiamare il [CMFCMaskedEdit::SetWindowText](#setwindowtext) metodo per specificare il testo predefinito per il controllo MaskedEdit.  
  
 5. Chiamare il [CMFCMaskedEdit::GetWindowText](#getwindowtext) metodo per recuperare il testo convalidato.  
  
 Se non si chiama uno o più metodi per inizializzare la maschera di caratteri validi e il testo predefinito, il controllo di modifica mascherato si comporta esattamente come si comporta il controllo di modifica standard.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come configurare una maschera (ad esempio un numero di telefono) usando il `EnableMask` metodo per creare la maschera per il controllo, MaskedEdit di `SetValidChars` metodo per specificare una stringa di caratteri validi che l'utente può immettere e `SetWindowText` metodo per visualizzare un prompt dei comandi in mascherata il controllo di modifica. In questo esempio fa parte il [esempio di nuovi controlli](../../visual-cpp-samples.md).  
  
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
  
##  <a name="disablemask"></a>  CMFCMaskedEdit::DisableMask  
 Disabilita la convalida dell'input utente.  
  
```  
void DisableMask();
```  
  
### <a name="remarks"></a>Note  
 Se la convalida dell'input utente è disabilitato, il controllo di modifica mascherato si comporta come controllo di modifica standard.  
  
##  <a name="enablegetmaskedcharsonly"></a>  CMFCMaskedEdit::EnableGetMaskedCharsOnly  
 Specifica se il `GetWindowText` metodo recupera solo i caratteri mascherati.  
  
```  
void EnableGetMaskedCharsOnly(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*bAttivare il*<br/>
[in] TRUE per specificare che il [CMFCMaskedEdit::GetWindowText](#getwindowtext) metodo retrieve mascherato solo caratteri. FALSE per specificare che il metodo di recuperare l'intero testo. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
 Usare questo metodo per abilitare il recupero dei caratteri mascherati. Creare quindi un controllo di modifica mascherato che corrisponde al numero di telefono, ad esempio (425) 555-0187. Se si chiama il `GetWindowText` (metodo), restituisce "4255550187". Se si disabilita il recupero di caratteri mascherati, il `GetWindowText` metodo restituisce il testo che viene visualizzato nel controllo di modifica, ad esempio "(425) 555-0187".  
  
##  <a name="enablemask"></a>  CMFCMaskedEdit::EnableMask  
 Controllo di modifica consente di inizializzare il mascherato.  
  
```  
void EnableMask(
    LPCTSTR lpszMask,  
    LPCTSTR lpszInputTemplate,  
    TCHAR chMaskInputTemplate=_T('_'),  
    LPCTSTR lpszValid=NULL);
```  
  
### <a name="parameters"></a>Parametri  
*lpszMask*<br/>
[in] Una stringa della maschera che specifica il tipo di carattere che può essere visualizzati in ogni posizione nell'input dell'utente. La lunghezza del *lpszInputTemplate* e *lpszMask* stringhe dei parametri devono essere lo stesso. Vedere la sezione Osservazioni per informazioni più dettagliate sulle mascherare i caratteri.  
  
*lpszInputTemplate*<br/>
[in] Una stringa di modello di maschera che specifica che il valore letterale di caratteri che possa apparire in ogni posizione nell'input dell'utente. Usare il carattere di sottolineatura ('_') come segnaposto carattere. La lunghezza del *lpszInputTemplate* e *lpszMask* stringhe dei parametri devono essere lo stesso.  
  
*chMaskInputTemplate*<br/>
[in] Un carattere predefinito che sostituisce con il framework per ogni carattere non valido nell'input dell'utente. Il valore predefinito di questo parametro è un carattere di sottolineatura ('_').  
  
*lpszValid*<br/>
[in] Stringa che contiene un set di caratteri validi. NULL indica che tutti i caratteri sono validi. Il valore predefinito di questo parametro è NULL.  
  
### <a name="remarks"></a>Note  
 Usare questo metodo per creare la maschera per il controllo di modifica mascherato. Derivare una classe dal `CMFCMaskedEdit` classe ed eseguire l'override di [CMFCMaskedEdit::IsMaskedChar](#ismaskedchar) metodo da usare il proprio codice per l'elaborazione di maschera personalizzati.  
  
 La tabella seguente sono elencati i caratteri di maschera predefiniti:  
  
|Carattere della maschera|Definizione|  
|--------------------|----------------|  
|D|Cifra.|  
|d|Cifra o lo spazio.|  
|+|Segno più ('+ '), meno ('-'), o uno spazio.|  
|C|Carattere alfabetico.|  
|c|Carattere alfabetico o uno spazio.|  
|A|Carattere alfanumerico.|  
|a|Carattere alfanumerico o uno spazio.|  
|*|Un carattere stampabile.|  
  
##  <a name="enableselectbygroup"></a>  CMFCMaskedEdit::EnableSelectByGroup  
 Specifica se il controllo MaskedEdit consente all'utente di selezionare determinati gruppi input o di tutti gli input.  
  
```  
void EnableSelectByGroup(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*bAttivare il*<br/>
[in] TRUE per selezionare solo i gruppi; FALSE per selezionare l'intero testo. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per specificare se il controllo MaskedEdit consente all'utente di selezionare per gruppo o l'intero testo.  
  
 Per impostazione predefinita, la selezione dal gruppo è abilitata. In questo caso l'utente può selezionare solo i gruppi continuati di caratteri validi.  
  
 Ad esempio, si potrebbe usare il seguente controllo MaskedEdit per convalidare un numero di telefono:  
  
```cpp
m_wndMaskEdit.EnableMask(
    _T(" ddd  ddd dddd"),  // Mask string
    _T("(___) ___-____"),  // Template string
    _T(' '));              // Default char

m_wndMaskEdit.SetValidChars(NULL); // All characters are valid.

m_wndMaskEdit.SetWindowText(_T("(425) 555-0187")); // Prompt
```

 Se è abilitata la selezione per gruppo, l'utente può recuperare solo il "425", "555" o "0187" gruppi di stringa. Se la selezione del gruppo è disabilitata l'utente può recuperare l'intero testo del numero di telefono: "(425) 555-0187".  
  
##  <a name="enablesetmaskedcharsonly"></a>  CMFCMaskedEdit::EnableSetMaskedCharsOnly  
 Specifica se il testo viene convalidato solo i caratteri mascherati, o in base alla maschera intera.  
  
```  
void EnableSetMaskedCharsOnly(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*bAttivare il*<br/>
[in] TRUE per convalidare l'input su solo mascherato caratteri; dell'utente FALSE per la convalida l'intera maschera. Il valore predefinito è TRUE.  
  
##  <a name="getwindowtext"></a>  CMFCMaskedEdit::GetWindowText  
 Recupera convalidato il testo dal controllo di modifica mascherato.  
  
```  
int GetWindowText(
    LPTSTR lpszStringBuf,  
    int nMaxCount) const;  
  
void GetWindowText(CString& rstrString) const;  
```  
  
### <a name="parameters"></a>Parametri  
*lpszStringBuf*<br/>
[out] Puntatore a un buffer che riceve il testo dal controllo di modifica.  
  
*nMaxCount*<br/>
[in] Il numero massimo di caratteri per la ricezione.  
  
*rstrString*<br/>
[out] Un riferimento all'oggetto stringa che riceve il testo dal controllo di modifica.  
  
### <a name="return-value"></a>Valore restituito  
 Il primo overload di metodo restituisce il numero di byte della stringa che viene copiato il *lpszStringBuf* buffer del parametro; 0 se il controllo di modifica mascherato non dispone di alcun testo.  
  
### <a name="remarks"></a>Note  
 Questo metodo copia il testo del controllo di modifica mascherato dal *lpszStringBuf* buffer o la *rstrString* stringa.  
  
 Questo metodo consente di ridefinire [CWnd::GetWindowText](../../mfc/reference/cwnd-class.md#getwindowtext).  
  
##  <a name="ismaskedchar"></a>  CMFCMaskedEdit::IsMaskedChar  
 Chiamata eseguita dal framework per convalidare il carattere specificato con il carattere della maschera corrispondente.  
  
```  
virtual BOOL IsMaskedChar(
    TCHAR chChar,  
    TCHAR chMaskChar) const;  
```  
  
### <a name="parameters"></a>Parametri  
*chChar*<br/>
[in] Carattere da convalidare.  
  
*chMaskChar*<br/>
[in] Il carattere corrispondente dalla stringa della maschera.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il *chChar* parametro è il tipo di carattere consentito per il *chMaskChar* parametro; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per convalidare i caratteri di input per conto proprio. Per altre informazioni sui caratteri mask, vedere la [CMFCMaskedEdit::EnableMask](#enablemask) (metodo).  
  
##  <a name="setvalidchars"></a>  CMFCMaskedEdit::SetValidChars  
 Specifica una stringa di caratteri validi che l'utente può immettere.  
  
```  
void SetValidChars(LPCTSTR lpszValid=NULL);
```  
  
### <a name="parameters"></a>Parametri  
*lpszValid*<br/>
[in] Stringa che contiene il set di caratteri di input validi. NULL significa che tutti i caratteri sono validi. Il valore predefinito di questo parametro è NULL.  
  
### <a name="remarks"></a>Note  
 Usare questo metodo per definire un elenco di caratteri validi. Se un carattere di input non è inclusa nell'elenco, controllo di modifica mascherato non lo accetta.  
  
 Esempio di codice seguente accetta solo i numeri esadecimali.  
  
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
  
##  <a name="setwindowtext"></a>  CMFCMaskedEdit::SetWindowText  
 Visualizza un prompt nel controllo di modifica mascherato.  
  
```  
void SetWindowText(LPCTSTR lpszString);
```  
  
### <a name="parameters"></a>Parametri  
*lpszString*<br/>
[in] Punta a una stringa con terminazione null che verrà usato come un prompt dei comandi.  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta il testo del controllo.  
  
 Questo metodo consente di ridefinire [CWnd::SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CEdit](../../mfc/reference/cedit-class.md)
