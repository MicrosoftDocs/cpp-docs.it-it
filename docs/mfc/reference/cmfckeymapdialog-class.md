---
title: Classe CMFCKeyMapDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCKeyMapDialog
- AFXKEYMAPDIALOG/CMFCKeyMapDialog
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::CMFCKeyMapDialog
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::DoModal
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::FormatItem
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::GetCommandKeys
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnInsertItem
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnPrintHeader
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnPrintItem
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnSetColumns
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::PrintKeyMap
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::SetColumnsWidth
dev_langs:
- C++
helpviewer_keywords:
- CMFCKeyMapDialog class
ms.assetid: 5feb4942-d636-462d-a162-0104dd320f4e
caps.latest.revision: 26
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
ms.openlocfilehash: 6599f5c3cda6eb407f4545d42528c1c68950b94c
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfckeymapdialog-class"></a>Classe CMFCKeyMapDialog
La `CMFCKeyMapDialog` classe supporta un controllo che associa i comandi ai tasti sulla tastiera.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCKeyMapDialog : public CDialogEx  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCKeyMapDialog::CMFCKeyMapDialog](#cmfckeymapdialog)|Costruisce un oggetto `CMFCKeyMapDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCKeyMapDialog::DoModal](#domodal)|Visualizza una finestra di dialogo di mappatura della tastiera.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCKeyMapDialog::FormatItem](#formatitem)|Chiamato dal framework per compilare una stringa che descrive un mapping delle chiavi. Per impostazione predefinita, la stringa contiene il nome del comando, i tasti di scelta rapida utilizzati e la descrizione di tasti di scelta rapida.|  
|[CMFCKeyMapDialog::GetCommandKeys](#getcommandkeys)|Recupera una stringa che contiene un elenco di tasti di scelta rapida associato al comando specificato.|  
|[CMFCKeyMapDialog::OnInsertItem](#oninsertitem)|Chiamato dal framework prima che un nuovo elemento viene inserito nel controllo elenco interno che supporta il controllo di mappatura della tastiera.|  
|[CMFCKeyMapDialog::OnPrintHeader](#onprintheader)|Chiamato dal framework per stampare l'intestazione per la mappa di tastiera in una nuova pagina.|  
|[CMFCKeyMapDialog::OnPrintItem](#onprintitem)|Chiamato dal framework per stampare una voce di mappatura della tastiera.|  
|[CMFCKeyMapDialog::OnSetColumns](#onsetcolumns)|Chiamato dal framework per impostare le didascalie per le colonne nel controllo elenco interno che supporta il controllo di mappatura della tastiera.|  
|[CMFCKeyMapDialog::PrintKeyMap](#printkeymap)|Chiamato dal framework quando un utente sceglie il **stampa** pulsante.|  
|[CMFCKeyMapDialog::SetColumnsWidth](#setcolumnswidth)|Chiamato dal framework per impostare la larghezza delle colonne nel controllo elenco interno che supporta il controllo di mappatura della tastiera.|  
  
## <a name="remarks"></a>Note  
 Utilizzare la `CMFCKeyMapDialog` classe per implementare una finestra di dialogo mapping tastiera ridimensionabile. Nella finestra di dialogo utilizza un controllo visualizzazione elenco per visualizzare i tasti di scelta rapida e i relativi comandi.  
  
 Utilizzare il `CMFCKeyMapDialog` classe in un'applicazione, passare un puntatore alla finestra cornice principale come parametro per il `CMFCKeyMapDialog` costruttore. Chiamare quindi il `DoModal` metodo per avviare una finestra di dialogo modale.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
 [CMFCKeyMapDialog](../../mfc/reference/cmfckeymapdialog-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxkeymapdialog.h  
  
##  <a name="cmfckeymapdialog"></a>CMFCKeyMapDialog::CMFCKeyMapDialog  
 Costruisce un oggetto `CMFCKeyMapDialog`.  
  
```  
CMFCKeyMapDialog(
    CFrameWnd* pWndParentFrame,  
    BOOL bEnablePrint=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParentFrame`  
 Un puntatore alla finestra padre del `CMFCKeyMapDialog` oggetto.  
  
 [in] `bEnablePrint`  
 `TRUE`Se l'elenco dei tasti di scelta rapida può essere stampato; in caso contrario, `FALSE`. Il valore predefinito è `FALSE`.  
  
### <a name="remarks"></a>Note  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCKeyMapDialog` classe. Questo esempio fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo numero&21;](../../mfc/codesnippet/cpp/cmfckeymapdialog-class_1.cpp)]  
  
##  <a name="domodal"></a>CMFCKeyMapDialog::DoModal  
 Visualizza una finestra di dialogo di mappatura della tastiera.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un intero con segno, ad esempio `IDOK` o `IDCANCEL`, che è passato al [CDialog::EndDialog](../../mfc/reference/cdialog-class.md#enddialog) metodo. Il metodo, a sua volta, chiude la finestra di dialogo. Per ulteriori informazioni, vedere [CDialog::DoModal](../../mfc/reference/cdialog-class.md#domodal).  
  
### <a name="remarks"></a>Note  
 La finestra di dialogo di mappatura della tastiera consente di selezionare e assegnare i tasti di scelta rapida per diverse categorie di comandi. Inoltre, è possibile copiare negli Appunti i tasti di scelta rapida selezionata e la relativa descrizione.  
  
##  <a name="formatitem"></a>CMFCKeyMapDialog::FormatItem  
 Chiamato dal framework per compilare una stringa che descrive un mapping delle chiavi. Per impostazione predefinita, la stringa contiene il nome del comando, i tasti di scelta rapida utilizzati e la descrizione di tasti di scelta rapida.  
  
```  
virtual CString FormatItem(int nItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nItem`  
 Indice in base zero di un elemento nell'elenco interno dei mapping dei tasti.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto che contiene il testo formattato dell'elemento.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcommandkeys"></a>CMFCKeyMapDialog::GetCommandKeys  
 Recupera un valore stringa. La stringa contiene un elenco di tasti di scelta rapida associati a un comando specificato.  
  
```  
virtual CString GetCommandKeys(UINT uiCmdID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 Un ID di comando.  
  
### <a name="return-value"></a>Valore restituito  
 Delimitato da punto e virgola (';') elenco di tasti di scelta rapida che viene associato al comando specificato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="oninsertitem"></a>CMFCKeyMapDialog::OnInsertItem  
 Chiamato dal framework prima che un nuovo elemento viene inserito un controllo elenco interno che supporta il controllo di mappatura della tastiera.  
  
```  
virtual void OnInsertItem(
    CMFCToolBarButton* pButton,  
    int nItem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 Un puntatore a un pulsante della barra degli strumenti che viene utilizzato per eseguire il mapping di una combinazione di tasti della tastiera a un nome di comando e una descrizione. L'elemento della mappa di chiavi viene archiviato in un controllo elenco interno.  
  
 [in] `nItem`  
 Indice in base zero che specifica dove inserire il nuovo elemento di mappa di chiavi nel controllo elenco interno.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onprintheader"></a>CMFCKeyMapDialog::OnPrintHeader  
 Chiamato dal framework per stampare l'intestazione per la mappa di tastiera in una nuova pagina.  
  
```  
virtual int OnPrintHeader(
    CDC& dc,  
    int nPage,  
    int cx) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dc`  
 Il contesto di dispositivo per la stampante.  
  
 [in] `nPage`  
 Il numero di pagina da stampare.  
  
 [in] `cx`  
 Offset orizzontale dell'intestazione, in pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, l'altezza del testo stampato. Per ulteriori informazioni, vedere la sezione di valore restituito di [CDC](../../mfc/reference/cdc-class.md#drawtext).  
  
### <a name="remarks"></a>Note  
 Il framework utilizza questo metodo per stampare la mappa di tastiera. Per impostazione predefinita, questo metodo visualizza il numero di pagina, un nome dell'applicazione e un titolo della finestra di dialogo.  
  
##  <a name="onprintitem"></a>CMFCKeyMapDialog::OnPrintItem  
 Chiamato dal framework per stampare una voce di mappatura della tastiera.  
  
```  
virtual int OnPrintItem(
    CDC& dc,  
    int nItem,  
    int y,  
    int cx,  
    BOOL bCalcHeight) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dc`  
 Il contesto di dispositivo della stampante.  
  
 [in] `nItem`  
 Indice in base zero dell'elemento da stampare.  
  
 [in] `y`  
 L'offset verticale tra la parte superiore della pagina e la posizione dell'elemento.  
  
 [in] `cx`  
 Offset orizzontale tra sinistra della pagina e la posizione dell'elemento.  
  
 [in] `bCalcHeight`  
 `TRUE`per calcolare l'altezza ottimo per l'elemento di stampa. `FALSE` per l'elemento stampa verrà troncato in modo da adattarlo lo spazio predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza dell'elemento stampato.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per stampare un elemento della casella di dialogo mappa di chiavi. Per impostazione predefinita, questo metodo visualizza il nome di comando, tasti di scelta rapida e descrizione comando dell'elemento.  
  
##  <a name="onsetcolumns"></a>CMFCKeyMapDialog::OnSetColumns  
 Chiamato dal framework per impostare le didascalie per le colonne nel controllo elenco interno che supporta il controllo di mappatura della tastiera.  
  
```  
virtual void OnSetColumns();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo ottiene le didascalie per le colonne da tre risorse. La didascalia colonna comando è da IDS_AFXBARRES_COMMAND, la didascalia della colonna chiave è da IDS_AFXBARRES_KEYS e la didascalia colonna Descrizione è da IDS_AFXBARRES_DESCRIPTION.  
  
##  <a name="printkeymap"></a>CMFCKeyMapDialog::PrintKeyMap  
 Chiamato dal framework quando un utente sceglie il **stampa** pulsante.  
  
```  
virtual void PrintKeyMap();
```  
  
### <a name="remarks"></a>Note  
 Il `PrintKeyMap` metodo consente di stampare la mappa di chiavi. Avvia un nuovo processo di stampa e quindi chiama ripetutamente il [CMFCKeyMapDialog::OnPrintHeader](#onprintheader) e [CMFCKeyMapDialog::OnPrintItem](#onprintitem) metodi finché non vengono stampati tutti i mapping di chiavi.  
  
##  <a name="setcolumnswidth"></a>CMFCKeyMapDialog::SetColumnsWidth  
 Chiamato dal framework per impostare la larghezza delle colonne nel controllo elenco interno che supporta il controllo di mappatura della tastiera.  
  
```  
virtual void SetColumnsWidth();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta le colonne del controllo all'elenco interno alle larghezze predefinito. Innanzitutto, viene calcolata la larghezza della colonna di tasti di scelta rapida. Quindi un terzo della larghezza rimanente viene allocato per la colonna del comando e i due terzi restanti viene allocato per la colonna Descrizione.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)

