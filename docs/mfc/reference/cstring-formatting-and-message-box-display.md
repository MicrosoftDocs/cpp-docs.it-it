---
title: Formattazione CString e visualizzazione finestre di messaggio
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.macros.strings
helpviewer_keywords:
- CString objects [MFC], formatting and message boxes
ms.assetid: d1068cf4-9cc5-4952-b9e7-d612c53cbc28
ms.openlocfilehash: fee8ba89605e6425b511407dab62be1f32e94a9d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62323791"
---
# <a name="cstring-formatting-and-message-box-display"></a>Formattazione CString e visualizzazione finestre di messaggio

Viene fornita una serie di funzioni per formattare e analizzare `CString` oggetti. È possibile usare queste funzioni ogni volta che è necessario manipolare `CString` oggetti, ma sono particolarmente utili per la formattazione di stringhe che appariranno in formato testo finestra di messaggio.

Questo gruppo di funzioni include anche una routine globale per la visualizzazione di una finestra di messaggio.

### <a name="cstring-functions"></a>Funzioni di CString

|||
|-|-|
|[AfxExtractSubString](#afxextractsubstring)|Consente di estrarre sottostringhe separate da un singolo carattere da una stringa di origine specificato.|
|[AfxFormatString1](#afxformatstring1)|Sostituisce una stringa specificata per i caratteri di formato "%1" in una stringa contenuta nella tabella di stringhe.|
|[AfxFormatString2](#afxformatstring2)|Le stringhe di due sostituzioni per il formato di caratteri "%1" e "%2" in una stringa contenuta nella tabella di stringhe.|
|[AfxMessageBox](#afxmessagebox)|Visualizza una finestra di messaggio.|

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxextractsubstring"></a>  AfxExtractSubString

Questa funzione globale può essere utilizzata per estrarre una sottostringa da una stringa di origine specificato.

```
BOOL AFXAPI AfxExtractSubString (
    CString& rString,
    LPCTSTR lpszFullString,
    int iSubString,
    TCHAR chSep  = '\n');
```

### <a name="parameters"></a>Parametri

*rString*<br/>
Fare riferimento a un [CString](../../atl-mfc-shared/using-cstring.md) oggetto che riceverà una sottostringa singoli.

*lpszFullString*<br/>
Stringa contenente il testo completo della stringa da estrarre da.

*iSubString*<br/>
Indice in base zero della sottostringa da estrarre dal *lpszFullString*.

*chSep*<br/>
Carattere separatore usato per delimitare le sottostringhe.

### <a name="return-value"></a>Valore restituito

TRUE se la funzione è stata estratta la sottostringa in corrispondenza dell'indice specificato. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questa funzione è utile per l'estrazione più sottostringhe da una stringa di origine quando un singolo carattere noto separa ogni sottostringa. Questa funzione esegue la ricerca dall'inizio del *lpszFullString* parametro ogni volta che viene chiamato.

Questa funzione restituisce FALSE se entrambi *lpszFullString* è impostato su NULL o funzione raggiunge la fine del *lpszFullString* senza ricerca *iSubString*+ 1 occorrenze del carattere separatore specificato. Il *rString* parametro non verrà modificato dal suo valore originale se *lpszFullString* è stato impostato su NULL; in caso contrario, il *rString* parametro è impostato su una stringa vuota se Impossibile estrarre la sottostringa per l'indice specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#48](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxformatstring1"></a>  AfxFormatString1

Sostituisce la stringa a cui punta *lpsz1* per tutte le istanze dei caratteri "%1" nella risorsa di stringa di modello identificata dal *nIDS*.

```
void  AfxFormatString1(
    CString& rString,
    UINT nIDS,
    LPCTSTR lpsz1);
```

### <a name="parameters"></a>Parametri

*rString*<br/>
Viene eseguito un riferimento a un oggetto `CString` che conterrà la stringa risultante dopo la sostituzione.

*nIDS*<br/>
ID della risorsa della stringa di modello in cui verrà eseguita la sostituzione.

*lpsz1*<br/>
Stringa che sostituirà i caratteri di formato "%1" nella stringa di modello.

### <a name="remarks"></a>Note

La nuova stringa creata viene archiviata *rString*. Ad esempio, se la stringa nella tabella di stringhe è "File" %1 non trovato", e *lpsz1* è uguale a"C:\MYFILE. TXT", quindi *rString* conterrà la stringa"File C:\MYFILE. TXT non trovato". Questa funzione è utile per la formattazione di stringhe inviate alle finestre di messaggio e ad altre finestre.

Se i caratteri di formato "%1" vengono visualizzati più volte nella stringa, verranno eseguite più sostituzioni.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#25](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_2.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxformatstring2"></a>  AfxFormatString2

Sostituisce la stringa a cui punta *lpsz1* per tutte le istanze dei caratteri "%1" e la stringa a cui punta *lpsz2* per tutte le istanze dei caratteri "%2", la risorsa di stringa di modello identificato da *nIDS*.

```
void AfxFormatString2(
    CString& rString,
    UINT nIDS,
    LPCTSTR lpsz1,
    LPCTSTR lpsz2);
```

### <a name="parameters"></a>Parametri

*rString*<br/>
Un riferimento al `CString` che conterrà la stringa risultante dopo che viene eseguita la sostituzione.

*nIDS*<br/>
L'ID di tabella della stringa della stringa del modello in cui verrà eseguita la sostituzione.

*lpsz1*<br/>
Stringa che sostituirà i caratteri di formato "%1" nella stringa di modello.

*lpsz2*<br/>
Stringa che sostituirà il formato di caratteri "%2" nella stringa di modello.

### <a name="remarks"></a>Note

La nuova stringa creata viene archiviata *rString*. Se la stringa nella tabella di stringhe è "File" %1 non trovato nella directory %2", ad esempio *lpsz1* punta al"MYFILE. TXT", e *lpsz2* punta a"C:\MYDIR", quindi *rString* conterrà la stringa"File MYFILE. Non trovato nella directory C:\MYDIR TXT"

Se il formato di caratteri "%1" o "%2" è presente nella stringa di più di una volta, verranno eseguite più sostituzioni. Non è in ordine numerico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#26](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_3.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxmessagebox"></a>  AfxMessageBox

Visualizza una finestra di messaggio sullo schermo.

```
int AfxMessageBox(
    LPCTSTR lpszText,
    UINT nType = MB_OK,
    UINT nIDHelp = 0);

int AFXAPI AfxMessageBox(
    UINT nIDPrompt,
    UINT nType = MB_OK,
    UINT nIDHelp = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Punta a un `CString` oggetto o una stringa a terminazione null che contiene il messaggio da visualizzare nella finestra di messaggio.

*nType*<br/>
Lo stile della finestra di messaggio. Applicare qualsiasi il [stili message-box](../../mfc/reference/styles-used-by-mfc.md#message-box-styles) alla casella.

*nIDHelp*<br/>
L'ID del contesto della Guida per il messaggio. 0 indica che il contesto dell'applicazione predefinito della Guida verrà usato.

*nIDPrompt*<br/>
ID univoco usato per fare riferimento a una stringa nella tabella di stringhe.

### <a name="return-value"></a>Valore restituito

Zero se non vi è memoria sufficiente per visualizzare la finestra di messaggio; in caso contrario, viene restituito uno dei valori seguenti:

- IDABORT il pulsante Interrompi è stato selezionato.

- IDCANCEL il pulsante Annulla è stato selezionato.

- IDIGNORE il pulsante Ignora è stato selezionato.

- IDNO il pulsante No è stato selezionato.

- IDOK il pulsante OK è stato selezionato.

- È stato selezionato IDRETRY il pulsante Riprova.

- IDYES il pulsante Sì è stato selezionato.

Se una finestra di messaggio ha un pulsante Annulla, verrà restituito il valore IDCANCEL se viene premuto il tasto ESC o si seleziona il pulsante Annulla. Se la finestra di messaggio non dispone di alcun pulsante Annulla, premendo il tasto ESC non ha alcun effetto.

Le funzioni [AfxFormatString1](#afxformatstring1) e [AfxFormatString2](#afxformatstring2) può essere utile per la formattazione del testo visualizzato in una finestra di messaggio.

### <a name="remarks"></a>Note

Il primo form di questa funzione in overload Visualizza una stringa di testo a cui punta *lpszText* nella finestra di messaggio e utilizza *nIDHelp* per descrivere un contesto della Guida. Il contesto della Guida viene utilizzato per passare a un argomento della Guida associato quando l'utente preme il tasto della Guida (in genere F1).

La seconda forma della funzione Usa la risorsa di stringa con l'ID *nIDPrompt* per visualizzare un messaggio nella finestra di messaggio. La pagina della Guida associata è stata individuata tramite il valore di *nIDHelp*. Se il valore predefinito di *nIDHelp* viene usato (-1), l'ID di risorsa, stringa *nIDPrompt*, viene usato per il contesto della Guida. Per altre informazioni sulla definizione dei contesti della Guida, vedere [Nota tecnica 28](../../mfc/tn028-context-sensitive-help-support.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#133](../../mfc/reference/codesnippet/cpp/cstring-formatting-and-message-box-display_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md)
