---
title: Classe CFontDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFontDialog
- AFXDLGS/CFontDialog
- AFXDLGS/CFontDialog::CFontDialog
- AFXDLGS/CFontDialog::DoModal
- AFXDLGS/CFontDialog::GetCharFormat
- AFXDLGS/CFontDialog::GetColor
- AFXDLGS/CFontDialog::GetCurrentFont
- AFXDLGS/CFontDialog::GetFaceName
- AFXDLGS/CFontDialog::GetSize
- AFXDLGS/CFontDialog::GetStyleName
- AFXDLGS/CFontDialog::GetWeight
- AFXDLGS/CFontDialog::IsBold
- AFXDLGS/CFontDialog::IsItalic
- AFXDLGS/CFontDialog::IsStrikeOut
- AFXDLGS/CFontDialog::IsUnderline
- AFXDLGS/CFontDialog::m_cf
dev_langs:
- C++
helpviewer_keywords:
- CFontDialog class
- dialog boxes, fonts
- fonts
- fonts, selecting
ms.assetid: 6228d500-ed0f-4156-81e5-ab0d57d1dcf4
caps.latest.revision: 25
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 6f277ba8fba72106918e03397f57726bd5beb0ff
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cfontdialog-class"></a>Classe CFontDialog
Consente di incorporare una finestra di dialogo di selezione del carattere nell'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFontDialog : public CCommonDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontDialog::CFontDialog](#cfontdialog)|Costruisce un oggetto `CFontDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontDialog::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|  
|[CFontDialog::GetCharFormat](#getcharformat)|Recupera la formattazione di carattere del tipo di carattere selezionato.|  
|[CFontDialog::GetColor](#getcolor)|Restituisce il colore del tipo di carattere selezionato.|  
|[CFontDialog::GetCurrentFont](#getcurrentfont)|Assegna le caratteristiche del tipo di carattere attualmente selezionato in un `LOGFONT` struttura.|  
|[CFontDialog::GetFaceName](#getfacename)|Restituisce il nome del tipo di carattere selezionato.|  
|[CFontDialog::GetSize](#getsize)|Restituisce la dimensione del tipo di carattere selezionato.|  
|[CFontDialog::GetStyleName](#getstylename)|Restituisce il nome dello stile del tipo di carattere selezionato.|  
|[CFontDialog::GetWeight](#getweight)|Restituisce lo spessore del tipo di carattere selezionato.|  
|[CFontDialog::IsBold](#isbold)|Determina se il tipo di carattere grassetto.|  
|[CFontDialog::IsItalic](#isitalic)|Determina se il tipo di carattere corsivo.|  
|[CFontDialog::IsStrikeOut](#isstrikeout)|Determina se il tipo di carattere viene visualizzato in barrato.|  
|[CFontDialog::IsUnderline](#isunderline)|Determina se il tipo di carattere è sottolineato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontDialog::m_cf](#m_cf)|Una struttura utilizzata per personalizzare un `CFontDialog` oggetto.|  
  
## <a name="remarks"></a>Note  
 Oggetto `CFontDialog` oggetto è una finestra di dialogo con un elenco di tipi di carattere attualmente installati nel sistema. L'utente può selezionare un particolare tipo di carattere dall'elenco e quindi la selezione viene segnalata nuovamente all'applicazione.  
  
 Per costruire un `CFontDialog` dell'oggetto, utilizzare il costruttore fornito o derivare una nuova sottoclasse e utilizzare il proprio costruttore personalizzato.  
  
 Una volta un `CFontDialog` oggetto è stato costruito, è possibile utilizzare il `m_cf` struttura per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. Il [m_cf](#m_cf) struttura è di tipo [CHOOSEFONT](http://msdn.microsoft.com/library/windows/desktop/ms646832). Per ulteriori informazioni su tale struttura, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Dopo l'inizializzazione di controlli dell'oggetto finestra di dialogo, chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare un tipo di carattere. `DoModal`indica se l'utente selezionato OK ( **IDOK**) o annullare ( **IDCANCEL**) pulsante.  
  
 Se `DoModal` restituisce **IDOK**, è possibile utilizzare uno dei `CFontDialog`di funzioni membro per recuperare le informazioni di input dall'utente.  
  
 È possibile utilizzare Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) funzione per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore. Per ulteriori informazioni su questa funzione, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `CFontDialog`si basa sul COMMDLG. File DLL fornito con Windows 3.1 e versioni successive.  
  
 Per personalizzare la finestra di dialogo, derivare una classe da `CFontDialog`, fornire un modello di finestra di dialogo personalizzata e aggiungere una mappa messaggi per elaborare i messaggi di notifica da controlli estesi. Eventuali messaggi non elaborati devono essere passati alla classe di base.  
  
 Personalizzare la funzione hook non è necessaria.  
  
 Per ulteriori informazioni sull'utilizzo di `CFontDialog`, vedere [classi di finestre di dialogo comuni](../../mfc/common-dialog-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CFontDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdlgs. h  
  
##  <a name="cfontdialog"></a>CFontDialog::CFontDialog  
 Costruisce un oggetto `CFontDialog`.  
  
```  
CFontDialog(
    LPLOGFONT lplfInitial = NULL,  
    DWORD dwFlags = CF_EFFECTS | CF_SCREENFONTS,  
    CDC* pdcPrinter = NULL,  
    CWnd* pParentWnd = NULL);

CFontDialog(
    const CHARFORMAT& charformat,  
    DWORD dwFlags = CF_SCREENFONTS,  
    CDC* pdcPrinter = NULL,  
    CWnd* pParentWnd = NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 l`plfInitial`  
 Un puntatore a un [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura di dati che consente di impostare alcune delle caratteristiche del tipo di carattere.  
  
 `charFormat`  
 Un puntatore a un [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) struttura di dati che consente di impostare alcune delle caratteristiche del tipo di carattere in una ricca di controllo di modifica.  
  
 `dwFlags`  
 Specifica uno o più flag di scelta del tipo di carattere. È possibile combinare valori preimpostati usando l'operatore OR bit per bit. Se si modifica il membro della struttura `m_cf.Flag`s, verificare di usare un operatore OR bit per bit nelle modifiche per mantenere l'integrità del comportamento predefinito. Per informazioni dettagliate su ciascuno di questi flag, vedere la descrizione del [CHOOSEFONT](http://msdn.microsoft.com/library/windows/desktop/ms646832) struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 pdcPrinter  
 Un puntatore a un contesto di dispositivo stampante. Se fornito, questo parametro punta a un contesto di dispositivo stampante per la stampante in cui devono essere selezionati i tipi di carattere.  
  
 `pParentWnd`  
 Un puntatore alla finestra padre o proprietaria della finestra di dialogo del tipo di carattere.  
  
### <a name="remarks"></a>Note  
 Si noti che il costruttore riempie automaticamente i membri della struttura `CHOOSEFONT`, che devono essere modificati solo se la finestra di dialogo del tipo di carattere deve essere diversa da quella predefinita.  
  
> [!NOTE]
>  La prima versione di questa funzione esiste solo quando non è presente alcun supporto del controllo Rich Edit.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#78;](../../mfc/codesnippet/cpp/cfontdialog-class_1.cpp)]  
  
##  <a name="domodal"></a>CFontDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo Windows comune tipi di carattere e consentire all'utente di scegliere un tipo di carattere.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 **IDOK** o **IDCANCEL**. Se **IDCANCEL** viene restituito, chiamare il Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) funzione per determinare se si è verificato un errore.  
  
 **IDOK** e **IDCANCEL** sono le costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli di finestra di dialogo tipo di carattere impostando i membri di [m_cf](#m_cf) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce **IDOK**, è possibile chiamare altri membri funzioni per recuperare le impostazioni o input informazioni dall'utente nella finestra di dialogo.  
  
### <a name="example"></a>Esempio  
  Vedere gli esempi per [CFontDialog::CFontDialog](#cfontdialog) e [CFontDialog::GetColor](#getcolor).  
  
##  <a name="getcharformat"></a>CFontDialog::GetCharFormat  
 Recupera la formattazione di carattere del tipo di carattere selezionato.  
  
```  
void GetCharFormat(CHARFORMAT& cf) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `cf`  
 Oggetto [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) struttura contenente informazioni sulla formattazione di carattere del tipo di carattere selezionato.  
  
##  <a name="getcolor"></a>CFontDialog::GetColor  
 Chiamare questa funzione per recuperare il colore del tipo di carattere selezionato.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Colore del tipo di carattere selezionato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#79;](../../mfc/codesnippet/cpp/cfontdialog-class_2.cpp)]  
  
##  <a name="getcurrentfont"></a>CFontDialog::GetCurrentFont  
 Chiamare questa funzione per assegnare le caratteristiche del tipo di carattere attualmente selezionato per i membri di un [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura.  
  
```  
void GetCurrentFont(LPLOGFONT lplf);
```  
  
### <a name="parameters"></a>Parametri  
 *lplf*  
 Un puntatore a un `LOGFONT` struttura.  
  
### <a name="remarks"></a>Note  
 Altri `CFontDialog` per accedere alle singole caratteristiche del tipo di carattere corrente sono disponibili funzioni membro.  
  
 Se questa funzione viene chiamata durante una chiamata a [DoModal](#domodal), restituisce la selezione corrente al momento (quali l'utente vede o ha modificato nella finestra di dialogo). Se questa funzione viene chiamata dopo una chiamata a `DoModal` (solo se `DoModal` restituisce **IDOK**), viene restituito l'utente effettivamente selezionato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#80;](../../mfc/codesnippet/cpp/cfontdialog-class_3.cpp)]  
  
##  <a name="getfacename"></a>CFontDialog::GetFaceName  
 Chiamare questa funzione per recuperare il nome del tipo di carattere selezionato.  
  
```  
CString GetFaceName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome del tipo di carattere selezionato nel `CFontDialog` la finestra di dialogo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#81; NVC_MFCDocView](../../mfc/codesnippet/cpp/cfontdialog-class_4.cpp)]  
  
##  <a name="getsize"></a>CFontDialog::GetSize  
 Chiamare questa funzione per recuperare la dimensione del tipo di carattere selezionato.  
  
```  
int GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Dimensione del tipo di carattere, in decimi di un punto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#82;](../../mfc/codesnippet/cpp/cfontdialog-class_5.cpp)]  
  
##  <a name="getstylename"></a>CFontDialog::GetStyleName  
 Chiamare questa funzione per recuperare il nome dello stile del tipo di carattere selezionato.  
  
```  
CString GetStyleName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome dello stile del tipo di carattere.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&83;](../../mfc/codesnippet/cpp/cfontdialog-class_6.cpp)]  
  
##  <a name="getweight"></a>CFontDialog::GetWeight  
 Chiamare questa funzione per recuperare lo spessore del tipo di carattere selezionato.  
  
```  
int GetWeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Spessore del tipo di carattere selezionato.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sul peso di un tipo di carattere, vedere [CFont::](../../mfc/reference/cfont-class.md#createfont).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#84; NVC_MFCDocView](../../mfc/codesnippet/cpp/cfontdialog-class_7.cpp)]  
  
##  <a name="isbold"></a>CFontDialog::IsBold  
 Chiamare questa funzione per determinare se il tipo di carattere selezionato è in grassetto.  
  
```  
BOOL IsBold() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il tipo di carattere selezionato è la caratteristica grassetto attivata; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#85; NVC_MFCDocView](../../mfc/codesnippet/cpp/cfontdialog-class_8.cpp)]  
  
##  <a name="isitalic"></a>CFontDialog::IsItalic  
 Chiamare questa funzione per determinare se il tipo di carattere selezionato è in corsivo.  
  
```  
BOOL IsItalic() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il tipo di carattere selezionato è la caratteristica corsivo abilitata; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#86;](../../mfc/codesnippet/cpp/cfontdialog-class_9.cpp)]  
  
##  <a name="isstrikeout"></a>CFontDialog::IsStrikeOut  
 Chiamare questa funzione per determinare se il tipo di carattere selezionato viene visualizzato con barrato.  
  
```  
BOOL IsStrikeOut() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il tipo di carattere selezionato è la caratteristica barrato abilitata; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#87;](../../mfc/codesnippet/cpp/cfontdialog-class_10.cpp)]  
  
##  <a name="isunderline"></a>CFontDialog::IsUnderline  
 Chiamare questa funzione per determinare se il tipo di carattere selezionato è sottolineato.  
  
```  
BOOL IsUnderline() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il tipo di carattere selezionato è la caratteristica di sottolineatura attivata; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#88;](../../mfc/codesnippet/cpp/cfontdialog-class_11.cpp)]  
  
##  <a name="m_cf"></a>CFontDialog::m_cf  
 Una struttura i cui membri memorizzare le caratteristiche dell'oggetto finestra di dialogo.  
  
```  
CHOOSEFONT m_cf;  
```  
  
### <a name="remarks"></a>Note  
 Al termine della creazione un `CFontDialog` dell'oggetto, è possibile utilizzare `m_cf` modificare vari aspetti della finestra di dialogo prima di chiamare il `DoModal` funzione membro. Per ulteriori informazioni su tale struttura, vedere [CHOOSEFONT](http://msdn.microsoft.com/library/windows/desktop/ms646832) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#89;](../../mfc/codesnippet/cpp/cfontdialog-class_12.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




