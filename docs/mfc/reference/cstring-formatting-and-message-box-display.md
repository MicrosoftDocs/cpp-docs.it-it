---
description: 'Altre informazioni su: formattazione di CString e visualizzazione Message-Box'
title: Formattazione CString e visualizzazione finestre di messaggio
ms.date: 11/04/2016
helpviewer_keywords:
- CString objects [MFC], formatting and message boxes
ms.assetid: d1068cf4-9cc5-4952-b9e7-d612c53cbc28
ms.openlocfilehash: a3c91a2a8a6f80235a834811433467797d5a37a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264518"
---
# <a name="cstring-formatting-and-message-box-display"></a>Formattazione CString e visualizzazione finestre di messaggio

Sono disponibili diverse funzioni per formattare e analizzare `CString` gli oggetti. È possibile utilizzare queste funzioni ogni volta che è necessario modificare `CString` gli oggetti, ma sono particolarmente utili per la formattazione di stringhe che verranno visualizzate nel testo della finestra di messaggio.

Questo gruppo di funzioni include anche una routine globale per la visualizzazione di una finestra di messaggio.

### <a name="cstring-functions"></a>Funzioni CString

|Nome|Description|
|-|-|
|[AfxExtractSubString](#afxextractsubstring)|Estrae le sottostringhe separate da un singolo carattere da una stringa di origine specificata.|
|[AfxFormatString1](#afxformatstring1)|Sostituisce una determinata stringa per i caratteri di formato "%1" in una stringa contenuta nella tabella di stringhe.|
|[AfxFormatString2](#afxformatstring2)|Sostituisce due stringhe per i caratteri di formato "%1" e "%2" in una stringa contenuta nella tabella di stringhe.|
|[AfxMessageBox](#afxmessagebox)|Visualizza una finestra di messaggio.|

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

## <a name="afxextractsubstring"></a><a name="afxextractsubstring"></a> AfxExtractSubString

Questa funzione globale può essere usata per estrarre una sottostringa da una stringa di origine specificata.

```
BOOL AFXAPI AfxExtractSubString (
    CString& rString,
    LPCTSTR lpszFullString,
    int iSubString,
    TCHAR chSep  = '\n');
```

### <a name="parameters"></a>Parametri

*rString*<br/>
Riferimento a un oggetto [CString](../../atl-mfc-shared/using-cstring.md) che riceverà una singola sottostringa.

*lpszFullString*<br/>
Stringa contenente il testo completo della stringa da cui estrarre.

*iSubString*<br/>
Indice in base zero della sottostringa da estrarre da *lpszFullString*.

*chSep*<br/>
Carattere separatore utilizzato per delimitare le sottostringhe.

### <a name="return-value"></a>Valore restituito

TRUE se la funzione ha estratto correttamente la sottostringa in corrispondenza dell'indice specificato. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questa funzione è utile per estrarre più sottostringhe da una stringa di origine quando un singolo carattere noto separa ogni sottostringa. Questa funzione esegue la ricerca dall'inizio del parametro *lpszFullString* ogni volta che viene chiamato.

Questa funzione restituirà FALSE se *lpszFullString* è impostato su null o la funzione raggiunge la fine di *lpszFullString* senza trovare le occorrenze *iSubString*+ 1 del carattere separatore specificato. Il parametro *rString* non verrà modificato dal valore originale se *lpszFullString* è stato impostato su null. in caso contrario, il parametro *rString* viene impostato sulla stringa vuota se non è stato possibile estrarre la sottostringa per l'indice specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#48](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

## <a name="afxformatstring1"></a><a name="afxformatstring1"></a> AfxFormatString1

Sostituisce la stringa a cui punta *lpsz1* per tutte le istanze dei caratteri "%1" nella risorsa della stringa di modello identificata da *nIDS*.

```cpp
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

### <a name="remarks"></a>Commenti

La stringa appena formata viene archiviata in *rString*. Ad esempio, se la stringa nella tabella di stringhe è "file %1 non trovato" e *lpsz1* è uguale a "C:\MYFILE.TXT", *rString* conterrà la stringa "file C:\MYFILE.TXT not found". Questa funzione è utile per la formattazione di stringhe inviate alle finestre di messaggio e ad altre finestre.

Se i caratteri di formato "%1" vengono visualizzati più volte nella stringa, verranno eseguite più sostituzioni.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#25](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_2.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

## <a name="afxformatstring2"></a><a name="afxformatstring2"></a> AfxFormatString2

Sostituisce la stringa a cui punta *lpsz1* per tutte le istanze dei caratteri "%1" e la stringa a cui punta *lpsz2* per tutte le istanze dei caratteri "%2", nella risorsa di stringa del modello identificata da *nIDS*.

```cpp
void AfxFormatString2(
    CString& rString,
    UINT nIDS,
    LPCTSTR lpsz1,
    LPCTSTR lpsz2);
```

### <a name="parameters"></a>Parametri

*rString*<br/>
Riferimento all'oggetto che conterrà `CString` la stringa risultante dopo l'esecuzione della sostituzione.

*nIDS*<br/>
ID della tabella di stringhe della stringa di modello in cui verrà eseguita la sostituzione.

*lpsz1*<br/>
Stringa che sostituirà i caratteri di formato "%1" nella stringa di modello.

*lpsz2*<br/>
Stringa che sostituirà i caratteri di formato "%2" nella stringa del modello.

### <a name="remarks"></a>Commenti

La stringa appena formata viene archiviata in *rString*. Ad esempio, se la stringa nella tabella di stringhe è "file %1 non trovato nella directory %2", *lpsz1* punta a "MYFILE.TXT" e *lpsz2* punta a "C:\MyDir", quindi *rString* conterrà la stringa "file MYFILE.TXT non trovato nella directory C:\MyDir"

Se i caratteri di formato "%1" o "%2" vengono visualizzati più volte nella stringa, verranno effettuate più sostituzioni. Non è necessario che siano in ordine numerico.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#26](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_3.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

## <a name="afxmessagebox"></a><a name="afxmessagebox"></a> AfxMessageBox

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
Punta a un `CString` oggetto o a una stringa con terminazione null contenente il messaggio da visualizzare nella finestra di messaggio.

*nType*<br/>
Stile della finestra di messaggio. Applicare uno degli [stili della finestra di messaggio](../../mfc/reference/styles-used-by-mfc.md#message-box-styles) alla casella.

*nIDHelp*<br/>
ID del contesto della Guida per il messaggio. 0 indica che verrà utilizzato il contesto della Guida predefinito dell'applicazione.

*nIDPrompt*<br/>
ID univoco usato per fare riferimento a una stringa nella tabella di stringhe.

### <a name="return-value"></a>Valore restituito

Zero se la memoria disponibile non è sufficiente per visualizzare la finestra di messaggio; in caso contrario, viene restituito uno dei valori seguenti:

- IDABORT è stato selezionato il pulsante Interrompi.

- IDCANCEL è stato selezionato il pulsante Annulla.

- IDIGNORE è stato selezionato il pulsante Ignora.

- IDNO è stato selezionato il pulsante No.

- IDOK è stato selezionato il pulsante OK.

- IDRETRY è stato selezionato il pulsante Riprova.

- IDYES è stato selezionato il pulsante Sì.

Se una finestra di messaggio contiene un pulsante Annulla, verrà restituito il valore IDCANCEL se il tasto ESC è premuto o se è selezionato il pulsante Annulla. Se la finestra di messaggio non dispone di un pulsante Annulla, la pressione del tasto ESC non ha alcun effetto.

Le funzioni [AfxFormatString1](#afxformatstring1) e [AfxFormatString2](#afxformatstring2) possono essere utili per la formattazione del testo visualizzato in una finestra di messaggio.

### <a name="remarks"></a>Commenti

Il primo form di questa funzione in overload Visualizza una stringa di testo a cui punta *lpszText* nella finestra di messaggio e USA *nIDHelp* per descrivere un contesto della guida. Il contesto della guida viene utilizzato per passare a un argomento della Guida associato quando l'utente preme il tasto guida (in genere F1).

Il secondo formato della funzione usa la risorsa di tipo stringa con l'ID *nIDPrompt* per visualizzare un messaggio nella finestra di messaggio. La pagina della Guida associata viene individuata tramite il valore di *nIDHelp*. Se viene usato il valore predefinito di *nIDHelp* (-1), viene usato l'ID di risorsa di stringa *nIDPrompt* per il contesto della guida. Per ulteriori informazioni sulla definizione dei contesti della guida, vedere la [Nota tecnica 28](../../mfc/tn028-context-sensitive-help-support.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#133](../../mfc/reference/codesnippet/cpp/cstring-formatting-and-message-box-display_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[CStringt (classe)](../../atl-mfc-shared/reference/cstringt-class.md)
