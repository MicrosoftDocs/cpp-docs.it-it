---
title: Formattazione CString e visualizzazione della finestra di messaggio | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.strings
dev_langs:
- C++
helpviewer_keywords:
- CString objects, formatting and message boxes
ms.assetid: d1068cf4-9cc5-4952-b9e7-d612c53cbc28
caps.latest.revision: 14
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 48fc79f74bda10e43807d57fbcd7ed85fbb5d78b
ms.lasthandoff: 02/24/2017

---
# <a name="cstring-formatting-and-message-box-display"></a>Formattazione CString e visualizzazione finestre di messaggio
Viene fornita una serie di funzioni per formattare e analizzare `CString` oggetti. È possibile utilizzare queste funzioni ogni volta che è necessario modificare `CString` oggetti, ma sono particolarmente utili per la formattazione di stringhe che verranno visualizzato nel testo della finestra di messaggio.  
  
 Questo gruppo di funzioni include anche una routine globale per la visualizzazione di una finestra di messaggio.  
  
### <a name="cstring-functions"></a>Funzioni di CString  
  
|||  
|-|-|  
|[AfxExtractSubString](#afxextractsubstring)|Consente di estrarre sottostringhe separate da un singolo carattere da una stringa di origine specificato.|  
|[AfxFormatString1](#afxformatstring1)|Sostituisce una stringa specificata per i caratteri di formato "%1" in una stringa contenuta nella tabella di stringhe.|  
|[AfxFormatString2](#afxformatstring2)|Stringhe di due sostituzioni per il formato di caratteri "%1" e "%2" in una stringa contenuta nella tabella di stringhe.|  
|[AfxMessageBox](#afxmessagebox)|Visualizza una finestra di messaggio.|  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxextractsubstringa--afxextractsubstring"></a><a name="afxextractsubstring"></a>AfxExtractSubString  
 Questa funzione globale può essere utilizzata per estrarre una sottostringa da una stringa di origine specificato.  
  
```   
BOOL AFXAPI AfxExtractSubString (
    CString& rString,  
    LPCTSTR lpszFullString,  
    int iSubString,  
    TCHAR chSep  = '\n'); 
```  
  
### <a name="parameters"></a>Parametri  
 *rString*  
 -   Fare riferimento a un [CString](../../atl-mfc-shared/using-cstring.md) oggetto che riceverà una sottostringa singoli.  
  
 *lpszFullString*  
 -   Stringa contenente il testo completo della stringa da estrarre da.  
  
 *iSubString*  
 -   Indice in base zero della sottostringa da estrarre da *lpszFullString*.  
  
 *chSep*  
 -   Carattere separatore utilizzato per delimitare le sottostringhe.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la funzione è stata estratta la sottostringa in corrispondenza dell'indice specificato; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Questa funzione è utile per l'estrazione più sottostringhe da una stringa di origine quando un singolo carattere noto separa ogni sottostringa. Questa funzione esegue la ricerca dall'inizio del `lpszFullString` parametro ogni volta che viene chiamato.  
  
 Questa funzione restituirà FALSE se entrambi `lpszFullString` è impostato su **NULL** o la funzione raggiunge la fine di `lpszFullString` senza trovare `iSubString`+&1; occorrenze del carattere separatore specificato. Il `rString` parametro non verrà modificato rispetto al valore originale se `lpszFullString` è stata impostata su **NULL**; in caso contrario, il `rString` parametro è impostato su una stringa vuota se Impossibile estrarre la sottostringa per l'indice specificato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities n.&48;](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_1.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxformatstring1a--afxformatstring1"></a><a name="afxformatstring1"></a>AfxFormatString1  
 Sostituisce la stringa indicata da `lpsz1` per tutte le istanze di caratteri "%1" nella risorsa della stringa di modello identificata da `nIDS`.  
  
```  
void  AfxFormatString1(
    CString& rString,  
    UINT nIDS,  
    LPCTSTR lpsz1); 
```  
  
### <a name="parameters"></a>Parametri  
 `rString`  
 Viene eseguito un riferimento a un oggetto `CString` che conterrà la stringa risultante dopo la sostituzione.  
  
 `nIDS`  
 ID della risorsa della stringa di modello in cui verrà eseguita la sostituzione.  
  
 `lpsz1`  
 Stringa che sostituirà i caratteri di formato "%1" nella stringa di modello.  
  
### <a name="remarks"></a>Note  
 La nuova stringa creata viene archiviata in `rString`. Ad esempio, se la stringa nella tabella di stringhe è "File %1 non trovato" e `lpsz1` è uguale a "C:\MYFILE.TXT", `rString` conterrà la stringa "File C:\MYFILE.TXT non trovato". Questa funzione è utile per la formattazione di stringhe inviate alle finestre di messaggio e ad altre finestre.  
  
 Se i caratteri di formato "%1" vengono visualizzati più volte nella stringa, verranno eseguite più sostituzioni.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities&#25;](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_2.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxformatstring2a--afxformatstring2"></a><a name="afxformatstring2"></a>AfxFormatString2  
 Sostituisce la stringa a cui puntata `lpsz1` per tutte le istanze di caratteri "%1" e la stringa a cui puntava `lpsz2` per tutte le istanze dei caratteri "%2", la risorsa di stringa di modello identificata da `nIDS`.  
  
```   
void AfxFormatString2(
    CString& rString,  
    UINT nIDS,  
    LPCTSTR lpsz1,  
    LPCTSTR lpsz2); 
```  
  
### <a name="parameters"></a>Parametri  
 `rString`  
 Un riferimento di `CString` che conterrà la stringa risultante dopo che viene eseguita la sostituzione.  
  
 `nIDS`  
 L'ID di tabella della stringa della stringa del modello in cui verrà eseguita la sostituzione.  
  
 `lpsz1`  
 Stringa che sostituirà i caratteri di formato "%1" nella stringa di modello.  
  
 `lpsz2`  
 Stringa che sostituisce il formato di caratteri "%2" nella stringa di modello.  
  
### <a name="remarks"></a>Note  
 La nuova stringa creata viene archiviata in `rString`. Ad esempio, se la stringa nella tabella di stringhe è "File %1 non trovato nella directory %2", `lpsz1` fa riferimento a "MYFILE. TXT", e `lpsz2` fa riferimento a"C:\MYDIR", quindi `rString` conterrà la stringa"File MYFILE. TXT non trovato nella directory C:\MYDIR"  
  
 Se il formato di caratteri "%1" o "%2" vengono visualizzati più volte nella stringa, verranno eseguite più sostituzioni. Non devono essere in ordine numerico.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#26; NVC_MFC_Utilities](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_3.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxmessageboxa--afxmessagebox"></a><a name="afxmessagebox"></a>AfxMessageBox  
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
 `lpszText`  
 Punta a un `CString` oggetto o una stringa con terminazione null contenente il messaggio da visualizzare nella finestra di messaggio.  
  
 `nType`  
 Lo stile della finestra di messaggio. Applicare qualsiasi il [gli stili di finestra di messaggio](../../mfc/reference/message-box-styles.md) alla casella.  
  
 `nIDHelp`  
 L'ID del contesto del messaggio; 0 indica che verrà utilizzato il contesto dell'applicazione predefinito della Guida in linea.  
  
 `nIDPrompt`  
 ID univoco utilizzato per fare riferimento a una stringa nella tabella di stringhe.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se non vi è memoria sufficiente per visualizzare la finestra di messaggio; in caso contrario, viene restituito uno dei valori seguenti:  
  
- **IDABORT** interrompere il pulsante è stato selezionato.  
  
- **IDCANCEL** Annulla il pulsante è stato selezionato.  
  
- **IDIGNORE** ignorare il pulsante è stato selezionato.  
  
- **IDNO** n il pulsante è stato selezionato.  
  
- **IDOK** OK il pulsante è stato selezionato.  
  
- **IDRETRY** ripetere il pulsante è stato selezionato.  
  
- **IDYES** è stato selezionato Sì il pulsante.  
  
 Se una finestra di messaggio presenta un pulsante Annulla il **IDCANCEL** verrà restituito il valore se viene premuto il tasto ESC o se si seleziona il pulsante Annulla. Se la finestra di messaggio non dispone di alcun pulsante Annulla, premendo il tasto ESC ha effetto.  
  
 Le funzioni [AfxFormatString1](#afxformatstring1) e [AfxFormatString2](#afxformatstring2) può essere utile per la formattazione del testo visualizzato in una finestra di messaggio.  
  
### <a name="remarks"></a>Note  
 Il primo form di questo overload di funzione consente di visualizzare una stringa di testo a cui fa riferimento `lpszText` nella finestra di messaggio e utilizza `nIDHelp` per descrivere un contesto della Guida. Il contesto della Guida viene utilizzato per passare un argomento della Guida associata quando l'utente preme il tasto Guida (F1 in genere).  
  
 La seconda forma della funzione viene utilizzata la risorsa di stringa con l'ID `nIDPrompt` per visualizzare un messaggio nella finestra di messaggio. La pagina della Guida associata viene trovata tramite il valore di `nIDHelp`. Se il valore predefinito di `nIDHelp` viene utilizzato (â €"1), l'ID di risorsa di stringa, `nIDPrompt`, viene utilizzato per il contesto della Guida. Per ulteriori informazioni sulla definizione dei contesti della Guida, vedere [28 Nota tecnica](../../mfc/tn028-context-sensitive-help-support.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#133; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cstring-formatting-and-message-box-display_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [Classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md)

