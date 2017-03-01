---
title: Classe CMFCCaptionBar | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCCaptionBar
dev_langs:
- C++
helpviewer_keywords:
- CMFCCaptionBar class
ms.assetid: acb54d5f-14ff-4c96-aeb3-7717cf566d9a
caps.latest.revision: 28
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: c9be93449392de9d04e4869db8dcd73e08125c88
ms.lasthandoff: 02/24/2017

---
# <a name="cmfccaptionbar-class"></a>Classe CMFCCaptionBar
Oggetto `CMFCCaptionBar` oggetto è una barra di controllo che consente di visualizzare tre elementi: un pulsante, un'etichetta di testo e una bitmap. Può essere visualizzato un solo elemento di ogni tipo alla volta. È possibile allineare ciascun elemento ai margini sinistro o destro del controllo o al centro. È inoltre possibile applicare uno stile Flat o 3D ai bordi superiore e inferiore della barra del titolo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCCaptionBar : public CPane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionBar::Create](#create)|Crea il controllo barra di didascalia e lo collega a di `CMFCCaptionBar` oggetto.|  
|[CMFCCaptionBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Indica se un altro riquadro può essere inserito in modo dinamico tra la barra del titolo e il relativo frame padre. (Esegue l'override di [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|  
|[CMFCCaptionBar::EnableButton](#enablebutton)|Abilita o disabilita il pulsante della barra del titolo.|  
|[CMFCCaptionBar::GetAlignment](#getalignment)|Restituisce l'allineamento dell'elemento specificato.|  
|[CMFCCaptionBar::GetBorderSize](#getbordersize)|Restituisce la dimensione del bordo della barra del titolo.|  
|[CMFCCaptionBar::GetButtonRect](#getbuttonrect)|Recupera il rettangolo di delimitazione del pulsante sulla barra del titolo.|  
|[CMFCCaptionBar::GetMargin](#getmargin)|Restituisce la distanza tra il bordo degli elementi barra didascalia e il bordo del controllo barra di didascalia.|  
|[CMFCCaptionBar::IsMessageBarMode](#ismessagebarmode)|Specifica se la barra del titolo è in modalità di barra dei messaggi.|  
|[CMFCCaptionBar::RemoveBitmap](#removebitmap)|Rimuove l'immagine bitmap della barra del titolo.|  
|[CMFCCaptionBar::RemoveButton](#removebutton)|Rimuove il pulsante della barra del titolo.|  
|[CMFCCaptionBar::RemoveIcon](#removeicon)|Rimuove l'icona nella barra del titolo.|  
|[CMFCCaptionBar::RemoveText](#removetext)|Rimuove l'etichetta di testo nella barra del titolo.|  
|[CMFCCaptionBar::SetBitmap](#setbitmap)|Imposta l'immagine bitmap per la barra del titolo.|  
|[CMFCCaptionBar::SetBorderSize](#setbordersize)|Imposta le dimensioni del bordo della barra del titolo.|  
|[CMFCCaptionBar::SetButton](#setbutton)|Imposta il pulsante per la barra del titolo.|  
|[CMFCCaptionBar::SetButtonPressed](#setbuttonpressed)|Consente di specificare se il pulsante premuto.|  
|[CMFCCaptionBar::SetButtonToolTip](#setbuttontooltip)|Imposta la descrizione comando del pulsante.|  
|[CMFCCaptionBar::SetFlatBorder](#setflatborder)|Imposta lo stile del bordo della barra del titolo.|  
|[CMFCCaptionBar::SetIcon](#seticon)|Imposta l'icona per una barra del titolo.|  
|[CMFCCaptionBar::SetImageToolTip](#setimagetooltip)|Imposta la descrizione comando per l'immagine per la barra del titolo.|  
|[CMFCCaptionBar::SetMargin](#setmargin)|Imposta la distanza tra il bordo dell'elemento barra didascalia e il bordo del controllo barra di didascalia.|  
|[CMFCCaptionBar::SetText](#settext)|Imposta l'etichetta di testo per la barra del titolo.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionBar::OnDrawBackground](#ondrawbackground)|Chiamato dal framework per riempire lo sfondo della barra del titolo.|  
|[CMFCCaptionBar::OnDrawBorder](#ondrawborder)|Chiamato dal framework per disegnare il bordo della barra del titolo.|  
|[CMFCCaptionBar::OnDrawButton](#ondrawbutton)|Chiamato dal framework per disegnare il pulsante della barra del titolo.|  
|[CMFCCaptionBar::OnDrawImage](#ondrawimage)|Chiamato dal framework per disegnare l'immagine di barra del titolo.|  
|[CMFCCaptionBar::OnDrawText](#ondrawtext)|Chiamato dal framework per disegnare il testo della barra del titolo.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionBar::m_clrBarBackground](#m_clrbarbackground)|Il colore di sfondo della barra del titolo.|  
|[CMFCCaptionBar::m_clrBarBorder](#m_clrbarborder)|Il colore del bordo della barra del titolo.|  
|[CMFCCaptionBar::m_clrBarText](#m_clrbartext)|Colore testo della didascalia della barra.|  
  
## <a name="remarks"></a>Note  
 Per creare una barra del titolo, seguire questi passaggi:  
  
1.  Costruire l'oggetto `CMFCCaptionBar`. In genere, aggiungere la barra del titolo di una classe finestra cornice.  
  
2.  Chiamare il [CMFCCaptionBar::Create](#create) per creare il controllo barra di didascalia e associarlo al `CMFCCaptionBar` oggetto.  
  
3.  Chiamare [CMFCCaptionBar::SetButton](#setbutton), [CMFCCaptionBar::SetText](#settext), [CMFCCaptionBar::SetIcon](#seticon), e [CMFCCaptionBar::SetBitmap](#setbitmap) per impostare gli elementi della barra di didascalia.  
  
 Quando si imposta l'elemento button, è necessario assegnare un ID di comando al pulsante. Quando l'utente fa clic sul pulsante, le route di didascalia della barra di `WM_COMMAND` i messaggi con questo ID per la finestra cornice padre.  
  
 Barra del titolo inoltre è possibile utilizzare nella modalità barra del messaggio, che emula la barra dei messaggi che viene visualizzato nelle applicazioni di Microsoft Office 2007. Nella modalità barra dei messaggi, la barra del titolo visualizza una bitmap, un messaggio e un pulsante (che in genere consente di aprire una finestra di dialogo.) È possibile assegnare una descrizione comando per la bitmap.  
  
 Per abilitare la modalità barra del messaggio, chiamare [CMFCCaptionBar::Create](#create) e impostare il quarto parametro (bIsMessageBarMode) `TRUE`.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare metodi diversi di `CMFCCaptionBar` (classe). Nell'esempio viene illustrato come creare il controllo barra di didascalia, impostare un bordo 3D della barra del titolo, impostare la distanza, espressa in pixel, tra il bordo della didascalia della barra di elementi e il bordo del controllo barra di didascalia, impostare il pulsante per la barra del titolo, impostare la descrizione comando per il pulsante, impostare l'etichetta di testo per la barra del titolo, impostare l'immagine bitmap per la barra del titolo e impostare la descrizione comando per l'immagine nella barra del titolo. Questo frammento di codice fa parte di [esempio MS Office 2007 Demo](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo n.&1;](../../mfc/reference/codesnippet/cpp/cmfccaptionbar-class_1.h)]  
[!code-cpp[NVC_MFC_MSOffice2007Demo n.&2;](../../mfc/reference/codesnippet/cpp/cmfccaptionbar-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCCaptionBar](../../mfc/reference/cmfccaptionbar-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcaptionbar.h  
  
##  <a name="a-namecreatea--cmfccaptionbarcreate"></a><a name="create"></a>CMFCCaptionBar::Create  
 Crea il controllo barra di didascalia e lo collega a di `CMFCCaptionBar` oggetto.  
  
```  
BOOL Create(
    DWORD dwStyle,  
    CWnd* pParentWnd,  
    UINT uID,  
    int nHeight=-1,  
    BOOL bIsMessageBarMode=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 La combinazione OR logica degli stili barra del titolo.  
  
 `pParentWnd`  
 La finestra padre del controllo barra di didascalia.  
  
 `uID`  
 L'ID del controllo barra di didascalia.  
  
 `nHeight`  
 L'altezza, in pixel, della barra di didascalia. Se è -1, l'altezza viene calcolata in base l'altezza dell'icona, il testo e il pulsante che consente di visualizzare il controllo barra di didascalia.  
  
 `bIsMessageBarMode`  
 `TRUE`Se la barra del titolo è in modalità barra dei messaggi; `FALSE` in caso contrario.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il controllo barra di didascalia viene creato correttamente. `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Costruire un `CMFCCaptionBar` oggetto in due passaggi. Prima chiamare il costruttore e quindi si chiama il `Create` che crea il controllo di Windows e lo associa al `CMFCCaptionBar` oggetto.  
  
##  <a name="a-namedoesallowdyninsertbeforea--cmfccaptionbardoesallowdyninsertbefore"></a><a name="doesallowdyninsertbefore"></a>CMFCCaptionBar::DoesAllowDynInsertBefore  
 Indica se un altro riquadro può essere inserito in modo dinamico tra la barra del titolo e il relativo frame padre.  
  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `FALSE` a meno che non viene sottoposto a override.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameenablebuttona--cmfccaptionbarenablebutton"></a><a name="enablebutton"></a>CMFCCaptionBar::EnableButton  
 Abilita o disabilita il pulsante della barra del titolo.  
  
```  
void EnableButton(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare il pulsante `FALSE` per disattivare il pulsante.  
  
##  <a name="a-namegetalignmenta--cmfccaptionbargetalignment"></a><a name="getalignment"></a>CMFCCaptionBar::GetAlignment  
 Restituisce l'allineamento dell'elemento specificato.  
  
```  
BarElementAlignment GetAlignment(BarElement elem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `elem`  
 Un elemento della barra di didascalia per il quale recuperare l'allineamento.  
  
### <a name="return-value"></a>Valore restituito  
 L'allineamento di un elemento, ad esempio un pulsante, una bitmap, testo o un'icona.  
  
### <a name="remarks"></a>Note  
 L'allineamento dell'elemento può essere uno dei valori seguenti:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
##  <a name="a-namegetbordersizea--cmfccaptionbargetbordersize"></a><a name="getbordersize"></a>CMFCCaptionBar::GetBorderSize  
 Restituisce la dimensione del bordo della barra del titolo.  
  
```  
int GetBorderSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni, in pixel, del bordo.  
  
##  <a name="a-namegetbuttonrecta--cmfccaptionbargetbuttonrect"></a><a name="getbuttonrect"></a>CMFCCaptionBar::GetButtonRect  
 Recupera il rettangolo di delimitazione del pulsante sulla barra del titolo.  
  
```  
CRect GetButtonRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CRect` oggetto che contiene le coordinate del rettangolo di delimitazione del pulsante sulla barra del titolo.  
  
##  <a name="a-namegetmargina--cmfccaptionbargetmargin"></a><a name="getmargin"></a>CMFCCaptionBar::GetMargin  
 Restituisce la distanza tra il bordo degli elementi barra didascalia e il bordo del controllo barra di didascalia.  
  
```  
int GetMargin() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Distanza, espressa in pixel, tra il bordo degli elementi barra didascalia e il bordo del controllo barra di didascalia.  
  
##  <a name="a-nameismessagebarmodea--cmfccaptionbarismessagebarmode"></a><a name="ismessagebarmode"></a>CMFCCaptionBar::IsMessageBarMode  
 Specifica se la barra del titolo è in modalità di barra dei messaggi.  
  
```  
BOOL IsMessageBarMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra del titolo è in modalità barra dei messaggi; `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Nella modalità barra messaggi, la barra del titolo visualizza un'immagine con una descrizione comando, un testo del messaggio e un pulsante.  
  
##  <a name="a-namemclrbarbackgrounda--cmfccaptionbarmclrbarbackground"></a><a name="m_clrbarbackground"></a>CMFCCaptionBar::m_clrBarBackground  
 Il colore di sfondo della barra del titolo.  
  
```  
COLORREF m_clrBarBackground  
```  
  
##  <a name="a-namemclrbarbordera--cmfccaptionbarmclrbarborder"></a><a name="m_clrbarborder"></a>CMFCCaptionBar::m_clrBarBorder  
 Il colore del bordo della barra del titolo.  
  
```  
COLORREF m_clrBarBorder  
```  
  
##  <a name="a-namemclrbartexta--cmfccaptionbarmclrbartext"></a><a name="m_clrbartext"></a>CMFCCaptionBar::m_clrBarText  
 Colore testo della didascalia della barra.  
  
```  
COLORREF m_clrBarText  
```  
  
##  <a name="a-nameondrawbackgrounda--cmfccaptionbarondrawbackground"></a><a name="ondrawbackground"></a>CMFCCaptionBar::OnDrawBackground  
 Chiamato dal framework per riempire lo sfondo della barra del titolo.  
  
```  
virtual void OnDrawBackground(
    CDC* pDC,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al contesto di dispositivo della barra del titolo.  
  
 [in] `rect`  
 Per riempire il rettangolo di delimitazione.  
  
### <a name="remarks"></a>Note  
 Il `OnDrawBackground` viene chiamato quando lo sfondo della barra del titolo sta per essere compilato. L'implementazione predefinita, lo sfondo viene compilato utilizzando il [CMFCCaptionBar::m_clrBarBackground](#m_clrbarbackground) colore.  
  
 Eseguire l'override di questo metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto della barra del titolo.  
  
##  <a name="a-nameondrawbordera--cmfccaptionbarondrawborder"></a><a name="ondrawborder"></a>CMFCCaptionBar::OnDrawBorder  
 Chiamato dal framework per disegnare il bordo della barra del titolo.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Un contesto di dispositivo che consente di visualizzare i bordi.  
  
 [in] `rect`  
 Rettangolo di delimitazione.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, i bordi con lo stile flat.  
  
 Eseguire l'override di questo metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto dei bordi della barra del titolo.  
  
##  <a name="a-nameondrawbuttona--cmfccaptionbarondrawbutton"></a><a name="ondrawbutton"></a>CMFCCaptionBar::OnDrawButton  
 Chiamato dal framework per disegnare il pulsante della barra del titolo.  
  
```  
virtual void OnDrawButton(
    CDC* pDC,  
    CRect rect,  
    const CString& strButton,  
    BOOL bEnabled);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Un puntatore a un contesto di dispositivo utilizzato per visualizzare il pulsante.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del pulsante.  
  
 [in] `strButton`  
 Etichetta di testo del pulsante.  
  
 [in] `bEnabled`  
 `TRUE`Se il pulsante è abilitato; `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto del pulsante della barra del titolo.  
  
##  <a name="a-nameondrawimagea--cmfccaptionbarondrawimage"></a><a name="ondrawimage"></a>CMFCCaptionBar::OnDrawImage  
 Chiamato dal framework per disegnare l'immagine di barra del titolo.  
  
```  
virtual void OnDrawImage(
    CDC* pDC,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Un puntatore a un contesto di dispositivo che viene utilizzato per visualizzare l'immagine.  
  
 [in] `rect`  
 Specifica il rettangolo di delimitazione dell'immagine.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto dell'immagine.  
  
##  <a name="a-nameondrawtexta--cmfccaptionbarondrawtext"></a><a name="ondrawtext"></a>CMFCCaptionBar::OnDrawText  
 Chiamato dal framework per disegnare il testo della barra del titolo.  
  
```  
virtual void OnDrawText(
    CDC* pDC,  
    CRect rect,  
    const CString& strText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Un puntatore a un contesto di dispositivo utilizzato per visualizzare il pulsante.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del testo.  
  
 [in] `strText`  
 La stringa di testo da visualizzare.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita consente di visualizzare il testo utilizzando `CDC::DrawText` e [CMFCCaptionBar::m_clrBarText](#m_clrbartext) colore.  
  
 Eseguire l'override di questo metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto del testo della barra del titolo.  
  
##  <a name="a-nameremovebitmapa--cmfccaptionbarremovebitmap"></a><a name="removebitmap"></a>CMFCCaptionBar::RemoveBitmap  
 Rimuove l'immagine bitmap della barra del titolo.  
  
```  
void RemoveBitmap();
```  
  
##  <a name="a-nameremovebuttona--cmfccaptionbarremovebutton"></a><a name="removebutton"></a>CMFCCaptionBar::RemoveButton  
 Rimuove il pulsante della barra del titolo.  
  
```  
void RemoveButton();
```  
  
### <a name="remarks"></a>Note  
 Il layout degli elementi della barra di didascalia vengono regolati automaticamente.  
  
##  <a name="a-nameremoveicona--cmfccaptionbarremoveicon"></a><a name="removeicon"></a>CMFCCaptionBar::RemoveIcon  
 Rimuove l'icona nella barra del titolo.  
  
```  
void RemoveIcon();
```  
  
##  <a name="a-nameremovetexta--cmfccaptionbarremovetext"></a><a name="removetext"></a>CMFCCaptionBar::RemoveText  
 Rimuove l'etichetta di testo nella barra del titolo.  
  
```  
void RemoveText();
```  
  
##  <a name="a-namesetbitmapa--cmfccaptionbarsetbitmap"></a><a name="setbitmap"></a>CMFCCaptionBar::SetBitmap  
 Imposta l'immagine bitmap per la barra del titolo.  
  
```  
void SetBitmap(
    HBITMAP hBitmap,  
    COLORREF clrTransparent,  
    BOOL bStretch=FALSE,  
    BarElementAlignment bmpAlignment=ALIGN_RIGHT);

 
void SetBitmap(
    UINT uiBmpResID,  
    COLORREF clrTransparent,  
    BOOL bStretch=FALSE,  
    BarElementAlignment bmpAlignment=ALIGN_RIGHT);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hBitmap`  
 Handle di bitmap da impostare.  
  
 [in] `clrTransparent`  
 Un valore RGB che specifica il colore trasparente dell'immagine bitmap.  
  
 [in] `bStretch`  
 Se `TRUE`, la bitmap viene estesa se non si adatta all'immagine del rettangolo di delimitazione. In caso contrario la bitmap non è estesa.  
  
 [in] `bmpAlignment`  
 L'allineamento dell'immagine bitmap.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per impostare una bitmap in una barra del titolo.  
  
 La bitmap precedente viene eliminata automaticamente. Se la barra del titolo viene visualizzata un'icona perché è stato chiamato il [CMFCCaptionBar::SetIcon](#seticon) (metodo), la bitmap non verrà visualizzata a meno che non si rimuove l'icona chiamando [CMFCCaptionBar::RemoveIcon](#removeicon).  
  
 La bitmap viene allineata come specificato dal `bmpAlignment` parametro.  Questo parametro può avere uno dei valori `BarElementAlignment` seguenti:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
##  <a name="a-namesetbordersizea--cmfccaptionbarsetbordersize"></a><a name="setbordersize"></a>CMFCCaptionBar::SetBorderSize  
 Imposta le dimensioni del bordo della barra del titolo.  
  
```  
void SetBorderSize(int nSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nSize`  
 La nuova dimensione, in pixel, del bordo della barra di didascalia.  
  
##  <a name="a-namesetbuttona--cmfccaptionbarsetbutton"></a><a name="setbutton"></a>CMFCCaptionBar::SetButton  
 Imposta il pulsante per la barra del titolo.  
  
```  
void SetButton(
    LPCTSTR lpszLabel,  
    UINT uiCmdUI,  
    BarElementAlignment btnAlignmnet=ALIGN_LEFT,  
    BOOL bHasDropDownArrow=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszLabel`  
 Etichetta di comando del pulsante.  
  
 `uiCmdUI`  
 ID di comando. del pulsante  
  
 `btnAlignmnet`  
 Allineamento del pulsante.  
  
 `bHasDropDownArrow`  
 `TRUE`Se il pulsante Visualizza un elenco a discesa freccia, `FALSE` in caso contrario.  
  
##  <a name="a-namesetbuttonpresseda--cmfccaptionbarsetbuttonpressed"></a><a name="setbuttonpressed"></a>CMFCCaptionBar::SetButtonPressed  
 Consente di specificare se il pulsante premuto.  
  
```  
void SetButtonPressed(BOOL bPresed=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bPresed`  
 `TRUE`Se il pulsante conserva il proprio stato premuto, `FALSE` in caso contrario.  
  
##  <a name="a-namesetbuttontooltipa--cmfccaptionbarsetbuttontooltip"></a><a name="setbuttontooltip"></a>CMFCCaptionBar::SetButtonToolTip  
 Imposta la descrizione comando del pulsante.  
  
```  
void SetButtonToolTip(
    LPCTSTR lpszToolTip,  
    LPCTSTR lpszDescription=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszToolTip`  
 La didascalia della descrizione comando.  
  
 [in] `lpszDescription`  
 La descrizione della descrizione.  
  
##  <a name="a-namesetflatbordera--cmfccaptionbarsetflatborder"></a><a name="setflatborder"></a>CMFCCaptionBar::SetFlatBorder  
 Imposta lo stile del bordo della barra del titolo.  
  
```  
void SetFlatBorder(BOOL bFlat=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bFlat`  
 `TRUE`Se il bordo di una barra del titolo è flat. `FALSE`Se il bordo 3D.  
  
##  <a name="a-nameseticona--cmfccaptionbarseticon"></a><a name="seticon"></a>CMFCCaptionBar::SetIcon  
 Imposta l'icona per una barra del titolo.  
  
```  
void SetIcon(
    HICON hIcon,  
    BarElementAlignment iconAlignment=ALIGN_RIGHT);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hIcon`  
 Handle per l'icona da impostare.  
  
 [in] `iconAlignment`  
 L'allineamento dell'icona.  
  
### <a name="remarks"></a>Note  
 Barre visualizzare icone o bitmap. Vedere [CMFCCaptionBar::SetBitmap](#setbitmap) per scoprire come visualizzare una bitmap. Se si imposta un'icona sia una bitmap, l'icona viene sempre visualizzata. Chiamare [CMFCCaptionBar::RemoveIcon](#removeicon) per rimuovere un'icona nella barra del titolo.  
  
 L'icona è allineato in base al `iconAlignment` parametro. Può essere uno dei seguenti `BarElementAlignment` valori:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
##  <a name="a-namesetimagetooltipa--cmfccaptionbarsetimagetooltip"></a><a name="setimagetooltip"></a>CMFCCaptionBar::SetImageToolTip  
 Imposta la descrizione comando per l'immagine nella barra del titolo.  
  
```  
void SetImageToolTip(
    LPCTSTR lpszToolTip,  
    LPCTSTR lpszDescription=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszToolTip`  
 Il testo della descrizione comando.  
  
 [in] `lpszDescription`  
 La descrizione della descrizione.  
  
##  <a name="a-namesetmargina--cmfccaptionbarsetmargin"></a><a name="setmargin"></a>CMFCCaptionBar::SetMargin  
 Imposta la distanza tra il bordo dell'elemento barra didascalia e il bordo del controllo barra di didascalia.  
  
```  
void SetMargin(int nMargin);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nMargin`  
 Distanza, espressa in pixel, tra il bordo degli elementi barra didascalia e il bordo del controllo barra di didascalia.  
  
##  <a name="a-namesettexta--cmfccaptionbarsettext"></a><a name="settext"></a>CMFCCaptionBar::SetText  
 Imposta l'etichetta di testo per la barra del titolo.  
  
```  
void SetText(
    const CString& strText,  
    BarElementAlignment textAlignment=ALIGN_RIGHT);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `strText`  
 Per impostare la stringa di testo.  
  
 [in] `textAlignment`  
 L'allineamento del testo.  
  
### <a name="remarks"></a>Note  
 L'etichetta di testo è allineato come specificato dal `textAlignment` parametro. Può essere uno dei seguenti `BarElementAlignment` valori:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

