---
title: Classe CMFCCaptionBar | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCCaptionBar
- AFXCAPTIONBAR/CMFCCaptionBar
- AFXCAPTIONBAR/CMFCCaptionBar::Create
- AFXCAPTIONBAR/CMFCCaptionBar::DoesAllowDynInsertBefore
- AFXCAPTIONBAR/CMFCCaptionBar::EnableButton
- AFXCAPTIONBAR/CMFCCaptionBar::GetAlignment
- AFXCAPTIONBAR/CMFCCaptionBar::GetBorderSize
- AFXCAPTIONBAR/CMFCCaptionBar::GetButtonRect
- AFXCAPTIONBAR/CMFCCaptionBar::GetMargin
- AFXCAPTIONBAR/CMFCCaptionBar::IsMessageBarMode
- AFXCAPTIONBAR/CMFCCaptionBar::RemoveBitmap
- AFXCAPTIONBAR/CMFCCaptionBar::RemoveButton
- AFXCAPTIONBAR/CMFCCaptionBar::RemoveIcon
- AFXCAPTIONBAR/CMFCCaptionBar::RemoveText
- AFXCAPTIONBAR/CMFCCaptionBar::SetBitmap
- AFXCAPTIONBAR/CMFCCaptionBar::SetBorderSize
- AFXCAPTIONBAR/CMFCCaptionBar::SetButton
- AFXCAPTIONBAR/CMFCCaptionBar::SetButtonPressed
- AFXCAPTIONBAR/CMFCCaptionBar::SetButtonToolTip
- AFXCAPTIONBAR/CMFCCaptionBar::SetFlatBorder
- AFXCAPTIONBAR/CMFCCaptionBar::SetIcon
- AFXCAPTIONBAR/CMFCCaptionBar::SetImageToolTip
- AFXCAPTIONBAR/CMFCCaptionBar::SetMargin
- AFXCAPTIONBAR/CMFCCaptionBar::SetText
- AFXCAPTIONBAR/CMFCCaptionBar::OnDrawBackground
- AFXCAPTIONBAR/CMFCCaptionBar::OnDrawBorder
- AFXCAPTIONBAR/CMFCCaptionBar::OnDrawButton
- AFXCAPTIONBAR/CMFCCaptionBar::OnDrawImage
- AFXCAPTIONBAR/CMFCCaptionBar::OnDrawText
- AFXCAPTIONBAR/CMFCCaptionBar::m_clrBarBackground
- AFXCAPTIONBAR/CMFCCaptionBar::m_clrBarBorder
- AFXCAPTIONBAR/CMFCCaptionBar::m_clrBarText
dev_langs: C++
helpviewer_keywords:
- CMFCCaptionBar [MFC], Create
- CMFCCaptionBar [MFC], DoesAllowDynInsertBefore
- CMFCCaptionBar [MFC], EnableButton
- CMFCCaptionBar [MFC], GetAlignment
- CMFCCaptionBar [MFC], GetBorderSize
- CMFCCaptionBar [MFC], GetButtonRect
- CMFCCaptionBar [MFC], GetMargin
- CMFCCaptionBar [MFC], IsMessageBarMode
- CMFCCaptionBar [MFC], RemoveBitmap
- CMFCCaptionBar [MFC], RemoveButton
- CMFCCaptionBar [MFC], RemoveIcon
- CMFCCaptionBar [MFC], RemoveText
- CMFCCaptionBar [MFC], SetBitmap
- CMFCCaptionBar [MFC], SetBorderSize
- CMFCCaptionBar [MFC], SetButton
- CMFCCaptionBar [MFC], SetButtonPressed
- CMFCCaptionBar [MFC], SetButtonToolTip
- CMFCCaptionBar [MFC], SetFlatBorder
- CMFCCaptionBar [MFC], SetIcon
- CMFCCaptionBar [MFC], SetImageToolTip
- CMFCCaptionBar [MFC], SetMargin
- CMFCCaptionBar [MFC], SetText
- CMFCCaptionBar [MFC], OnDrawBackground
- CMFCCaptionBar [MFC], OnDrawBorder
- CMFCCaptionBar [MFC], OnDrawButton
- CMFCCaptionBar [MFC], OnDrawImage
- CMFCCaptionBar [MFC], OnDrawText
- CMFCCaptionBar [MFC], m_clrBarBackground
- CMFCCaptionBar [MFC], m_clrBarBorder
- CMFCCaptionBar [MFC], m_clrBarText
ms.assetid: acb54d5f-14ff-4c96-aeb3-7717cf566d9a
caps.latest.revision: "28"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4449ebd1563fe02705913fd4f19e51d195b3d732
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cmfccaptionbar-class"></a>CMFCCaptionBar (classe)
Oggetto `CMFCCaptionBar` oggetto è una barra di controllo che è possibile visualizzare tre elementi: un pulsante, un'etichetta di testo e una bitmap. Può essere visualizzato un solo elemento di ogni tipo alla volta. È possibile allineare ciascun elemento ai margini sinistro o destro del controllo o al centro. È inoltre possibile applicare uno stile Flat o 3D ai bordi superiore e inferiore della barra del titolo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCCaptionBar : public CPane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionBar::Create](#create)|Crea il controllo barra di didascalia e lo collega al `CMFCCaptionBar` oggetto.|  
|[CMFCCaptionBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Indica se un altro riquadro può essere inserito in modo dinamico tra la barra del titolo e il relativo frame padre. (Esegue l'override [cbasepane:: Doesallowdyninsertbefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|  
|[CMFCCaptionBar::EnableButton](#enablebutton)|Abilita o disabilita il pulsante nella barra del titolo.|  
|[CMFCCaptionBar::GetAlignment](#getalignment)|Restituisce l'allineamento dell'elemento specificato.|  
|[CMFCCaptionBar::GetBorderSize](#getbordersize)|Restituisce le dimensioni del bordo della barra del titolo.|  
|[CMFCCaptionBar::GetButtonRect](#getbuttonrect)|Recupera il rettangolo di delimitazione del pulsante sulla barra del titolo.|  
|[CMFCCaptionBar::GetMargin](#getmargin)|Restituisce la distanza tra il bordo di elementi della barra la didascalia e il bordo del controllo indicatore di didascalia.|  
|[CMFCCaptionBar::IsMessageBarMode](#ismessagebarmode)|Specifica se la barra del titolo è in modalità barra dei messaggi.|  
|[CMFCCaptionBar::RemoveBitmap](#removebitmap)|Rimuove l'immagine bitmap della barra del titolo.|  
|[CMFCCaptionBar::RemoveButton](#removebutton)|Rimuove il pulsante della barra del titolo.|  
|[CMFCCaptionBar::RemoveIcon](#removeicon)|Rimuove l'icona nella barra del titolo.|  
|[CMFCCaptionBar::RemoveText](#removetext)|Rimuove l'etichetta di testo nella barra del titolo.|  
|[CMFCCaptionBar::SetBitmap](#setbitmap)|Imposta l'immagine bitmap per la barra del titolo.|  
|[CMFCCaptionBar::SetBorderSize](#setbordersize)|Imposta le dimensioni del bordo della barra del titolo.|  
|[CMFCCaptionBar::SetButton](#setbutton)|Imposta il pulsante per la barra del titolo.|  
|[CMFCCaptionBar::SetButtonPressed](#setbuttonpressed)|Specifica se il pulsante rimane premuto.|  
|[CMFCCaptionBar::SetButtonToolTip](#setbuttontooltip)|Imposta la descrizione comando del pulsante.|  
|[CMFCCaptionBar::SetFlatBorder](#setflatborder)|Imposta lo stile del bordo della barra del titolo.|  
|[CMFCCaptionBar::SetIcon](#seticon)|Imposta l'icona per una barra del titolo.|  
|[CMFCCaptionBar::SetImageToolTip](#setimagetooltip)|Imposta la descrizione comando per l'immagine per la barra del titolo.|  
|[CMFCCaptionBar::SetMargin](#setmargin)|Imposta la distanza tra il bordo dell'elemento barra didascalia e il bordo del controllo indicatore di didascalia.|  
|[CMFCCaptionBar::SetText](#settext)|Imposta l'etichetta di testo per la barra del titolo.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionBar::OnDrawBackground](#ondrawbackground)|Chiamato dal framework per riempire lo sfondo della barra del titolo.|  
|[CMFCCaptionBar::OnDrawBorder](#ondrawborder)|Chiamato dal framework per disegnare il bordo della barra del titolo.|  
|[CMFCCaptionBar::OnDrawButton](#ondrawbutton)|Chiamato dal framework per disegnare il pulsante di barra del titolo.|  
|[CMFCCaptionBar::OnDrawImage](#ondrawimage)|Chiamato dal framework per disegnare l'immagine di barra del titolo.|  
|[CMFCCaptionBar::OnDrawText](#ondrawtext)|Chiamato dal framework per disegnare il testo della barra del titolo.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCCaptionBar::m_clrBarBackground](#m_clrbarbackground)|Il colore di sfondo della barra del titolo.|  
|[CMFCCaptionBar::m_clrBarBorder](#m_clrbarborder)|Il colore del bordo della barra del titolo.|  
|[CMFCCaptionBar::m_clrBarText](#m_clrbartext)|Il colore del testo della barra di didascalia.|  
  
## <a name="remarks"></a>Note  
 Per creare una barra del titolo, seguire questi passaggi:  
  
1.  Costruire l'oggetto `CMFCCaptionBar`. In genere, aggiungere la barra del titolo di una classe della finestra cornice.  
  
2.  Chiamare il [CMFCCaptionBar::Create](#create) per creare il controllo barra di didascalia e associarlo al `CMFCCaptionBar` oggetto.  
  
3.  Chiamare [CMFCCaptionBar::SetButton](#setbutton), [CMFCCaptionBar::SetText](#settext), [CMFCCaptionBar::SetIcon](#seticon), e [CMFCCaptionBar::SetBitmap](#setbitmap)impostazione degli elementi di barra del titolo.  
  
 Quando si imposta l'elemento button, è necessario assegnare un ID di comando per il pulsante. Quando l'utente fa clic sul pulsante, le route barra didascalia di `WM_COMMAND` i messaggi con questo ID per la finestra cornice padre.  
  
 Barra del titolo può funziona anche in modalità barra del messaggio, che emula la barra dei messaggi che viene visualizzato nelle applicazioni di Microsoft Office 2007. Nella modalità barra del messaggio, la barra del titolo visualizza una bitmap, un messaggio e un pulsante (che in genere consente di aprire una finestra di dialogo.) È possibile assegnare una descrizione comando per la bitmap.  
  
 Per abilitare la modalità barra messaggi, chiamare [CMFCCaptionBar::Create](#create) e impostare il quarto parametro (bIsMessageBarMode) `TRUE`.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCCaptionBar` classe. Nell'esempio viene illustrato come creare il controllo barra di didascalia, impostare un bordo 3D della barra del titolo, impostare la distanza, espressa in pixel, tra il bordo della didascalia della barra di elementi e il bordo del controllo indicatore di didascalia, impostare il pulsante per la barra del titolo , impostare la descrizione comando per il pulsante, impostare l'etichetta di testo per la barra del titolo, impostare l'immagine bitmap per la barra del titolo e impostare la descrizione comando per l'immagine nella barra del titolo. Questo frammento di codice fa parte di [esempio MS Office 2007 Demo](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo#1](../../mfc/reference/codesnippet/cpp/cmfccaptionbar-class_1.h)]  
[!code-cpp[NVC_MFC_MSOffice2007Demo#2](../../mfc/reference/codesnippet/cpp/cmfccaptionbar-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCCaptionBar](../../mfc/reference/cmfccaptionbar-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcaptionbar.h  
  
##  <a name="create"></a>CMFCCaptionBar::Create  
 Crea il controllo barra di didascalia e lo collega al `CMFCCaptionBar` oggetto.  
  
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
 La finestra padre della barra di didascalia.  
  
 `uID`  
 ID del controllo barra di didascalia.  
  
 `nHeight`  
 L'altezza, in pixel, della barra di didascalia. Se è -1, l'altezza viene calcolata in base l'altezza dell'icona, il testo e il pulsante che consente di visualizzare il controllo barra di didascalia.  
  
 `bIsMessageBarMode`  
 `TRUE`Se la barra del titolo è in modalità barra messaggio; `FALSE` in caso contrario.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il controllo barra di didascalia viene creato correttamente. `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CMFCCaptionBar` oggetto in due passaggi. Prima chiamare il costruttore e quindi si chiama il `Create` metodo, che crea il controllo di Windows e lo collega al `CMFCCaptionBar` oggetto.  
  
##  <a name="doesallowdyninsertbefore"></a>CMFCCaptionBar::DoesAllowDynInsertBefore  
 Indica se un altro riquadro può essere inserito in modo dinamico tra la barra del titolo e il relativo frame padre.  
  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `FALSE` a meno che non viene sottoposto a override.  
  
### <a name="remarks"></a>Note  
  
##  <a name="enablebutton"></a>CMFCCaptionBar::EnableButton  
 Abilita o disabilita il pulsante nella barra del titolo.  
  
```  
void EnableButton(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare il pulsante, `FALSE` per disabilitare il pulsante.  
  
##  <a name="getalignment"></a>CMFCCaptionBar::GetAlignment  
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
  
##  <a name="getbordersize"></a>CMFCCaptionBar::GetBorderSize  
 Restituisce le dimensioni del bordo della barra del titolo.  
  
```  
int GetBorderSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni, in pixel, del bordo.  
  
##  <a name="getbuttonrect"></a>CMFCCaptionBar::GetButtonRect  
 Recupera il rettangolo di delimitazione del pulsante sulla barra del titolo.  
  
```  
CRect GetButtonRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CRect` oggetto che contiene le coordinate del rettangolo di delimitazione del pulsante sulla barra del titolo.  
  
##  <a name="getmargin"></a>CMFCCaptionBar::GetMargin  
 Restituisce la distanza tra il bordo di elementi della barra la didascalia e il bordo del controllo indicatore di didascalia.  
  
```  
int GetMargin() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La distanza in pixel, tra il bordo di elementi della barra la didascalia e il bordo del controllo indicatore di didascalia.  
  
##  <a name="ismessagebarmode"></a>CMFCCaptionBar::IsMessageBarMode  
 Specifica se la barra del titolo è in modalità barra dei messaggi.  
  
```  
BOOL IsMessageBarMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra del titolo è in modalità barra messaggio; `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Nella modalità barra di messaggio, la barra del titolo visualizza un'immagine con una descrizione comando, un testo del messaggio e un pulsante.  
  
##  <a name="m_clrbarbackground"></a>CMFCCaptionBar::m_clrBarBackground  
 Il colore di sfondo della barra del titolo.  
  
```  
COLORREF m_clrBarBackground  
```  
  
##  <a name="m_clrbarborder"></a>CMFCCaptionBar::m_clrBarBorder  
 Il colore del bordo della barra del titolo.  
  
```  
COLORREF m_clrBarBorder  
```  
  
##  <a name="m_clrbartext"></a>CMFCCaptionBar::m_clrBarText  
 Il colore del testo della barra di didascalia.  
  
```  
COLORREF m_clrBarText  
```  
  
##  <a name="ondrawbackground"></a>CMFCCaptionBar::OnDrawBackground  
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
 Il rettangolo da riempire.  
  
### <a name="remarks"></a>Note  
 Il `OnDrawBackground` metodo viene chiamato quando sta per essere riempito lo sfondo della barra del titolo. L'implementazione predefinita riempie lo sfondo usando il [CMFCCaptionBar::m_clrBarBackground](#m_clrbarbackground) colore.  
  
 Eseguire l'override di questo metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto della barra del titolo.  
  
##  <a name="ondrawborder"></a>CMFCCaptionBar::OnDrawBorder  
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
 Per impostazione predefinita, i bordi sono applicato lo stile flat.  
  
 Eseguire l'override di questo metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto dei bordi della barra del titolo.  
  
##  <a name="ondrawbutton"></a>CMFCCaptionBar::OnDrawButton  
 Chiamato dal framework per disegnare il pulsante di barra del titolo.  
  
```  
virtual void OnDrawButton(
    CDC* pDC,  
    CRect rect,  
    const CString& strButton,  
    BOOL bEnabled);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo che consente di visualizzare il pulsante.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del pulsante.  
  
 [in] `strButton`  
 Etichetta di testo del pulsante.  
  
 [in] `bEnabled`  
 `TRUE`Se il pulsante è abilitato; `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto del pulsante della barra del titolo.  
  
##  <a name="ondrawimage"></a>CMFCCaptionBar::OnDrawImage  
 Chiamato dal framework per disegnare l'immagine di barra del titolo.  
  
```  
virtual void OnDrawImage(
    CDC* pDC,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo che consente di visualizzare l'immagine.  
  
 [in] `rect`  
 Specifica il rettangolo di delimitazione dell'immagine.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto dell'immagine.  
  
##  <a name="ondrawtext"></a>CMFCCaptionBar::OnDrawText  
 Chiamato dal framework per disegnare il testo della barra del titolo.  
  
```  
virtual void OnDrawText(
    CDC* pDC,  
    CRect rect,  
    const CString& strText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo che consente di visualizzare il pulsante.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del testo.  
  
 [in] `strText`  
 La stringa di testo da visualizzare.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita viene visualizzato il testo utilizzando `CDC::DrawText` e [CMFCCaptionBar::m_clrBarText](#m_clrbartext) colore.  
  
 Eseguire l'override di questo metodo in un `CMFCCaptionBar` derivata per personalizzare l'aspetto del testo della barra del titolo.  
  
##  <a name="removebitmap"></a>CMFCCaptionBar::RemoveBitmap  
 Rimuove l'immagine bitmap della barra del titolo.  
  
```  
void RemoveBitmap();
```  
  
##  <a name="removebutton"></a>CMFCCaptionBar::RemoveButton  
 Rimuove il pulsante della barra del titolo.  
  
```  
void RemoveButton();
```  
  
### <a name="remarks"></a>Note  
 Il layout degli elementi della barra di didascalia vengono regolati automaticamente.  
  
##  <a name="removeicon"></a>CMFCCaptionBar::RemoveIcon  
 Rimuove l'icona nella barra del titolo.  
  
```  
void RemoveIcon();
```  
  
##  <a name="removetext"></a>CMFCCaptionBar::RemoveText  
 Rimuove l'etichetta di testo nella barra del titolo.  
  
```  
void RemoveText();
```  
  
##  <a name="setbitmap"></a>CMFCCaptionBar::SetBitmap  
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
 Se `TRUE`, la bitmap viene estesa se non è possibile inserirlo all'immagine del rettangolo di delimitazione. In caso contrario la bitmap non è estesa.  
  
 [in] `bmpAlignment`  
 L'allineamento dell'immagine bitmap.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per impostare una bitmap in una barra del titolo.  
  
 La bitmap precedente viene eliminata automaticamente. Se la barra del titolo viene visualizzata un'icona perché è stato chiamato il [CMFCCaptionBar::SetIcon](#seticon) (metodo), la bitmap non verrà visualizzata a meno che non si rimuove l'icona chiamando [CMFCCaptionBar::RemoveIcon](#removeicon).  
  
 La bitmap viene allineata come specificato da di `bmpAlignment` parametro.  Questo parametro può avere uno dei valori `BarElementAlignment` seguenti:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
##  <a name="setbordersize"></a>CMFCCaptionBar::SetBorderSize  
 Imposta le dimensioni del bordo della barra del titolo.  
  
```  
void SetBorderSize(int nSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nSize`  
 Nuova dimensione, in pixel, del bordo barra didascalia.  
  
##  <a name="setbutton"></a>CMFCCaptionBar::SetButton  
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
 Etichetta del comando del pulsante.  
  
 `uiCmdUI`  
 ID di comando. del pulsante  
  
 `btnAlignmnet`  
 Allineamento del pulsante.  
  
 `bHasDropDownArrow`  
 `TRUE`Se il pulsante Visualizza un elenco a discesa freccia, `FALSE` in caso contrario.  
  
##  <a name="setbuttonpressed"></a>CMFCCaptionBar::SetButtonPressed  
 Specifica se il pulsante rimane premuto.  
  
```  
void SetButtonPressed(BOOL bPresed=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bPresed`  
 `TRUE`Se il pulsante mantiene lo stato premuto e `FALSE` in caso contrario.  
  
##  <a name="setbuttontooltip"></a>CMFCCaptionBar::SetButtonToolTip  
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
  
##  <a name="setflatborder"></a>CMFCCaptionBar::SetFlatBorder  
 Imposta lo stile del bordo della barra del titolo.  
  
```  
void SetFlatBorder(BOOL bFlat=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bFlat`  
 `TRUE`Se il bordo di una barra del titolo è flat. `FALSE`Se il bordo 3D.  
  
##  <a name="seticon"></a>CMFCCaptionBar::SetIcon  
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
 Barre del titolo è possono visualizzare icone o bitmap. Vedere [CMFCCaptionBar::SetBitmap](#setbitmap) per scoprire come visualizzare una bitmap. Se si imposta un'icona e da una bitmap, icona viene sempre visualizzato. Chiamare [CMFCCaptionBar::RemoveIcon](#removeicon) per rimuovere un'icona nella barra del titolo.  
  
 L'icona è allineato in base al `iconAlignment` parametro. Può essere uno dei seguenti `BarElementAlignment` valori:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
##  <a name="setimagetooltip"></a>CMFCCaptionBar::SetImageToolTip  
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
  
##  <a name="setmargin"></a>CMFCCaptionBar::SetMargin  
 Imposta la distanza tra il bordo dell'elemento barra didascalia e il bordo del controllo indicatore di didascalia.  
  
```  
void SetMargin(int nMargin);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nMargin`  
 La distanza in pixel, tra il bordo di elementi della barra la didascalia e il bordo del controllo indicatore di didascalia.  
  
##  <a name="settext"></a>CMFCCaptionBar::SetText  
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
 L'etichetta di testo viene allineato come specificato da di `textAlignment` parametro. Può essere uno dei seguenti `BarElementAlignment` valori:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
