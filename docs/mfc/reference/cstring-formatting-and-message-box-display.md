---
title: Formattazione CString e visualizzazione finestre di messaggio
ms.date: 11/04/2016
helpviewer_keywords:
- CString objects [MFC], formatting and message boxes
ms.assetid: d1068cf4-9cc5-4952-b9e7-d612c53cbc28
ms.openlocfilehash: d30d26ecf0e72ee33affe3df5b88c438ff83bb6b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366001"
---
# <a name="cstring-formatting-and-message-box-display"></a>Formattazione CString e visualizzazione finestre di messaggio

Vengono fornite diverse funzioni per `CString` formattare e analizzare gli oggetti. È possibile utilizzare queste funzioni `CString` ogni volta che è necessario modificare gli oggetti, ma sono particolarmente utili per la formattazione di stringhe che verranno visualizzate nel testo della finestra di messaggio.

Questo gruppo di funzioni include anche una routine globale per la visualizzazione di una finestra di messaggio.

### <a name="cstring-functions"></a>Funzioni CString

|||
|-|-|
|[AfxExtractSubString](#afxextractsubstring)|Estrae le sottostringhe separate da un singolo carattere da una determinata stringa di origine.|
|[AfxFormatString1](#afxformatstring1)|Sostituisce una stringa specificata con i caratteri di formato "%1" in una stringa contenuta nella tabella di stringhe.|
|[AfxFormatString2](#afxformatstring2)|Sostituisce due stringhe con i caratteri di formato "%1" e "%2" in una stringa contenuta nella tabella di stringhe.|
|[AfxMessageBox](#afxmessagebox)|Visualizza una finestra di messaggio.|

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxextractsubstring"></a><a name="afxextractsubstring"></a>AfxExtractSubString

Questa funzione globale può essere utilizzata per estrarre una sottostringa da una determinata stringa di origine.

```
BOOL AFXAPI AfxExtractSubString (
    CString& rString,
    LPCTSTR lpszFullString,
    int iSubString,
    TCHAR chSep  = '\n');
```

### <a name="parameters"></a>Parametri

*rStringa*<br/>
Riferimento a un [oggetto CString](../../atl-mfc-shared/using-cstring.md) che riceverà una singola sottostringa.

*lpszFullString (informazioni in due)*<br/>
Stringa contenente il testo completo della stringa da cui estrarre.

*ISubString (in modo iSubString)*<br/>
Indice in base zero della sottostringa da estrarre da *lpszFullString*.

*chSep*<br/>
Carattere separatore utilizzato per delimitare le sottostringhe.

### <a name="return-value"></a>Valore restituito

TRUESe la funzione ha estratto correttamente la sottostringa in corrispondenza dell'indice specificato. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione è utile per estrarre più sottostringhe da una stringa di origine quando un singolo carattere noto separa ogni sottostringa. Questa funzione esegue la ricerca dall'inizio del parametro *lpszFullString* ogni volta che viene chiamato.

Questa funzione restituirà FALSE se *lpszFullString* è impostato su NULL o la funzione raggiunge la fine di *lpszFullString* senza trovare le occorrenze *iSubString*1 del carattere separatore specificato. Il parametro *rString* non verrà modificato dal valore originale se *lpszFullString* è stato impostato su NULL; in caso contrario, il parametro *rString* viene impostato sulla stringa vuota se non è stato possibile estrarre la sottostringa per l'indice specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#48](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxformatstring1"></a><a name="afxformatstring1"></a>AfxFormatString1

Sostituisce la stringa a cui fa riferimento *lpsz1* per tutte le istanze dei caratteri "%1" nella risorsa stringa modello identificata da *nIDS*.

```
void  AfxFormatString1(
    CString& rString,
    UINT nIDS,
    LPCTSTR lpsz1);
```

### <a name="parameters"></a>Parametri

*rStringa*<br/>
Viene eseguito un riferimento a un oggetto `CString` che conterrà la stringa risultante dopo la sostituzione.

*Nids*<br/>
ID della risorsa della stringa di modello in cui verrà eseguita la sostituzione.

*lpsz1*<br/>
Stringa che sostituirà i caratteri di formato "%1" nella stringa di modello.

### <a name="remarks"></a>Osservazioni

La stringa appena formata viene archiviata in *rString*. Ad esempio, se la stringa nella tabella di stringhe è "File %1 non trovato" e *lpsz1* è uguale a "C:"MYFILE. TXT", *quindi rString* conterrà la stringa "File C:"MYFILE. TXT non trovato". Questa funzione è utile per la formattazione di stringhe inviate alle finestre di messaggio e ad altre finestre.

Se i caratteri di formato "%1" vengono visualizzati più volte nella stringa, verranno eseguite più sostituzioni.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#25](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_2.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxformatstring2"></a><a name="afxformatstring2"></a>AfxFormatString2

Sostituisce la stringa a cui punta *lpsz1* per tutte le istanze dei caratteri "%1" e la stringa a cui fa riferimento *lpsz2* per tutte le istanze dei caratteri "%2", nella risorsa stringa modello identificata da *nIDS*.

```
void AfxFormatString2(
    CString& rString,
    UINT nIDS,
    LPCTSTR lpsz1,
    LPCTSTR lpsz2);
```

### <a name="parameters"></a>Parametri

*rStringa*<br/>
Un riferimento `CString` all'oggetto che conterrà la stringa risultante dopo l'esecuzione della sostituzione.

*Nids*<br/>
ID della tabella di stringhe della stringa del modello in cui verrà eseguita la sostituzione.

*lpsz1*<br/>
Stringa che sostituirà i caratteri di formato "%1" nella stringa di modello.

*lpsz2*<br/>
Stringa che sostituirà i caratteri di formato "%2" nella stringa modello.

### <a name="remarks"></a>Osservazioni

La stringa appena formata viene archiviata in *rString*. Ad esempio, se la stringa nella tabella di stringhe è "File %1 non trovato nella directory %2", *lpsz1* punta a "MYFILE. TXT" e *lpsz2* punta a "C:"MYDIR", *quindi rString* conterrà la stringa "File MYFILE. TXT non trovato nella directory C:

Se i caratteri di formato "%1" o "%2" vengono visualizzati nella stringa più di una volta, verranno eseguite più sostituzioni. Non devono essere in ordine numerico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#26](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_3.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxmessagebox"></a><a name="afxmessagebox"></a>AfxMessageBox (informazioni in questo oggetto utente)

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
Punta a `CString` un oggetto o a una stringa con terminazione null contenente il messaggio da visualizzare nella finestra di messaggio.

*nType*<br/>
Stile della finestra di messaggio. Applicare uno degli stili della finestra di [messaggio](../../mfc/reference/styles-used-by-mfc.md#message-box-styles) alla casella.

*nIDGuida*<br/>
ID di contesto della Guida per il messaggio; 0 indica che verrà utilizzato il contesto della Guida predefinito dell'applicazione.

*nIDPrompt (informazioni in stato inquestoe*<br/>
ID univoco utilizzato per fare riferimento a una stringa nella tabella di stringhe.

### <a name="return-value"></a>Valore restituito

zero se non c'è memoria sufficiente per visualizzare la finestra di messaggio; in caso contrario, viene restituito uno dei seguenti valori:

- IDABORT Il pulsante Interrompi è stato selezionato.

- IDCANCEL Il pulsante Annulla è stato selezionato.

- IDIGNORE Il pulsante Ignora è stato selezionato.

- IDNO Il pulsante No è stato selezionato.

- IDOK Il pulsante OK è stato selezionato.

- IDRETRY Il pulsante Riprova è stato selezionato.

- IDYES È stato selezionato il pulsante Sì.

Se una finestra di messaggio contiene un pulsante Annulla, il valore IDCANCEL verrà restituito se viene premuto il tasto ESC o se è selezionato il pulsante Annulla. Se nella finestra di messaggio non è stato premuto il pulsante Annulla, la pressione del tasto ESC non ha alcun effetto.

Le funzioni [AfxFormatString1](#afxformatstring1) e [AfxFormatString2](#afxformatstring2) possono essere utili nella formattazione del testo visualizzato in una finestra di messaggio.

### <a name="remarks"></a>Osservazioni

La prima forma di questa funzione di overload visualizza una stringa di testo a cui punta *lpszText* nella finestra di messaggio e utilizza *nIDHelp* per descrivere un contesto della Guida. Il contesto della Guida viene utilizzato per passare a un argomento della Guida associato quando l'utente preme il tasto Guida (in genere F1).

La seconda forma della funzione utilizza la risorsa stringa con l'ID *nIDPrompt* per visualizzare un messaggio nella finestra di messaggio. La pagina della Guida associata viene trovata tramite il valore di *nIDHelp*. Se viene utilizzato il valore predefinito di *nIDHelp* (-1), l'ID risorsa stringa, *nIDPrompt*, viene utilizzato per il contesto della Guida. Per ulteriori informazioni sulla definizione dei contesti della Guida, vedere [nota tecnica 28](../../mfc/tn028-context-sensitive-help-support.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#133](../../mfc/reference/codesnippet/cpp/cstring-formatting-and-message-box-display_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[Classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md)
