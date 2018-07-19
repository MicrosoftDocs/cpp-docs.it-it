---
title: Classe CMFCRibbonColorButton | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCRibbonColorButton
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::CMFCRibbonColorButton
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::AddColorsGroup
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::EnableAutomaticButton
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::EnableOtherButton
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetAutomaticColor
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetColor
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetColorBoxSize
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetColumns
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::GetHighlightedColor
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::RemoveAllColorGroups
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColor
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColorBoxSize
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColorName
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetColumns
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetDocumentColors
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::SetPalette
- AFXRIBBONCOLORBUTTON/CMFCRibbonColorButton::UpdateColor
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonColorButton [MFC], CMFCRibbonColorButton
- CMFCRibbonColorButton [MFC], AddColorsGroup
- CMFCRibbonColorButton [MFC], EnableAutomaticButton
- CMFCRibbonColorButton [MFC], EnableOtherButton
- CMFCRibbonColorButton [MFC], GetAutomaticColor
- CMFCRibbonColorButton [MFC], GetColor
- CMFCRibbonColorButton [MFC], GetColorBoxSize
- CMFCRibbonColorButton [MFC], GetColumns
- CMFCRibbonColorButton [MFC], GetHighlightedColor
- CMFCRibbonColorButton [MFC], RemoveAllColorGroups
- CMFCRibbonColorButton [MFC], SetColor
- CMFCRibbonColorButton [MFC], SetColorBoxSize
- CMFCRibbonColorButton [MFC], SetColorName
- CMFCRibbonColorButton [MFC], SetColumns
- CMFCRibbonColorButton [MFC], SetDocumentColors
- CMFCRibbonColorButton [MFC], SetPalette
- CMFCRibbonColorButton [MFC], UpdateColor
ms.assetid: 6b4b4ee3-8cc0-41b4-a4eb-93e8847008e1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0966faee52febce026028fc6a93e611983ff61cb
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37853579"
---
# <a name="cmfcribboncolorbutton-class"></a>Classe CMFCRibbonColorButton
La classe `CMFCRibbonColorButton` implementa un pulsante colore che è possibile aggiungere a una barra multifunzione. Il pulsante colore della barra multifunzione visualizza un menu a discesa contenente una o più tavolozze dei colori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonColorButton : public CMFCRibbonGallery  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonColorButton::CMFCRibbonColorButton](#cmfcribboncolorbutton)||  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonColorButton::AddColorsGroup](#addcolorsgroup)|Aggiunge un gruppo di colori nell'area dei colori normali.|  
|[CMFCRibbonColorButton::EnableAutomaticButton](#enableautomaticbutton)|Specifica se il pulsante **Automatico** è abilitato.|  
|[CMFCRibbonColorButton::EnableOtherButton](#enableotherbutton)|Abilita il pulsante **Altro** .|  
|[CMFCRibbonColorButton::GetAutomaticColor](#getautomaticcolor)||  
|[CMFCRibbonColorButton::GetColor](#getcolor)|Restituisce il colore attualmente selezionato.|  
|[CMFCRibbonColorButton::GetColorBoxSize](#getcolorboxsize)|Restituisce le dimensioni degli elementi di colore visualizzati nella barra dei colori.|  
|[CMFCRibbonColorButton::GetColumns](#getcolumns)||  
|[CMFCRibbonColorButton::GetHighlightedColor](#gethighlightedcolor)|Restituisce il colore dell'elemento attualmente selezionato nella tavolozza dei colori popup.|  
|[CMFCRibbonColorButton::RemoveAllColorGroups](#removeallcolorgroups)|Rimuove tutti i gruppi di colore dall'area dei colori normali.|  
|[CMFCRibbonColorButton::SetColor](#setcolor)|Seleziona un colore dall'area dei colori normali.|  
|[CMFCRibbonColorButton::SetColorBoxSize](#setcolorboxsize)|Imposta le dimensioni di tutti gli elementi di colore visualizzati nella barra dei colori.|  
|[CMFCRibbonColorButton::SetColorName](#setcolorname)||  
|[CMFCRibbonColorButton::SetColumns](#setcolumns)||  
|[CMFCRibbonColorButton::SetDocumentColors](#setdocumentcolors)|Specifica un elenco di valori RGB da visualizzare nell'area dei colori del documento.|  
|[CMFCRibbonColorButton::SetPalette](#setpalette)||  
|[CMFCRibbonColorButton::UpdateColor](#updatecolor)||  
  
## <a name="remarks"></a>Note  
 Se selezionato, il pulsante colore della barra multifunzione visualizza una barra dei colori. Per impostazione predefinita, la barra dei colori contiene una tavolozza denominata area dei colori normali. Facoltativamente, la barra dei colori può visualizzare un pulsante **Automatico** che consente all'utente di selezionare un colore predefinito e un pulsante **Altro** che visualizza una tavolozza dei colori popup contenente altri colori.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come usare i vari metodi nella classe `CMFCRibbonColorButton` . L'esempio illustra come costruire un oggetto `CMFCRibbonColorButton` , impostare l'immagine di grandi dimensioni, abilitare il pulsante **Automatico** , abilitare il pulsante **Altro** , impostare il numero di colonne, impostare le dimensioni di tutti gli elementi di colore visualizzati nella barra dei colori, aggiungere un gruppo di colori nell'area dei colori normali e specificare un elenco di valori RGB da visualizzare nell'area dei colori del documento. Questo frammento di codice fa parte dell' [esempio Draw Client](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#3](../../mfc/reference/codesnippet/cpp/cmfcribboncolorbutton-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)  
  
 [CMFCRibbonColorButton](../../mfc/reference/cmfcribboncolorbutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribboncolorbutton.h  
  
##  <a name="addcolorsgroup"></a>  CMFCRibbonColorButton::AddColorsGroup  
 Aggiunge un gruppo di colori nell'area dei colori normali.  
  
```  
void AddColorsGroup(
    LPCTSTR lpszName,  
    const CList<COLORREF,COLORREF>& lstColors,  
    BOOL bContiguousColumns=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszName*  
 Il nome del gruppo.  
  
 [in] *lstColors*  
 L'elenco dei colori.  
  
 [in] *bContiguousColumns*  
 Determina come vengono visualizzati gli elementi di colore nel gruppo. Se TRUE, vengono disegnati gli elementi di colore senza una spaziatura verticale. Se FALSE, vengono disegnati gli elementi di colore con una spaziatura verticale.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per rendere il colore a comparsa visualizzati diversi gruppi di colori. È possibile controllare come i colori vengono visualizzati nel gruppo.  
  
##  <a name="cmfcribboncolorbutton"></a>  CMFCRibbonColorButton::CMFCRibbonColorButton  
 Costruisce un oggetto `CMFCRibbonColorButton`.  
  
```  
CMFCRibbonColorButton();

 
CMFCRibbonColorButton(
    UINT nID,  
    LPCTSTR lpszText,  
    int nSmallImageIndex,  
    COLORREF color = RGB(0, 0, 0));

 
CMFCRibbonColorButton(
    UINT nID,  
    LPCTSTR lpszText,  
    BOOL bSimpleButtonLook,  
    int nSmallImageIndex,  
    int nLargeImageIndex,  
    COLORREF color = RGB(0, 0, 0));
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nID*  
 Specifica l'ID di comando del comando da eseguire quando un utente fa clic sul pulsante.  
  
 [in] *lpszText*  
 Specifica il testo da visualizzare sul pulsante.  
  
 [in] *nSmallImageIndex*  
 Indice a base zero dell'immagine piccola da visualizzare sul pulsante.  
  
 [in] *colore*  
 Colore del pulsante (valore predefinito è nero).  
  
 [in] *bSimpleButtonLook*  
 Se TRUE, il pulsante viene disegnato un rettangolo semplice.  
  
 [in] *nLargeImageIndex*  
 Indice a base zero dell'immagine di grandi dimensioni da visualizzare sul pulsante.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="enableautomaticbutton"></a>  CMFCRibbonColorButton::EnableAutomaticButton  
 Specifica se il pulsante **Automatico** è abilitato.  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE,  
    LPCTSTR lpszToolTip=NULL,  
    BOOL bOnTop=TRUE,  
    BOOL bDrawBorder=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszLabel*  
 L'etichetta per il **automatica** pulsante.  
  
 [in] *colorAutomatic*  
 Un valore RGB che specifica la **automatica** colore predefinito del pulsante.  
  
 [in] *bAttivare il*  
 TRUE se il **automatica** pulsante è abilitato. FALSE se è disabilitato.  
  
 [in] *lpszToolTip*  
 La descrizione comando della **automatica** pulsante.  
  
 [in] *bOnTop*  
 Specifica se il **automatica** pulsante è nella parte superiore, prima della tavolozza dei colori.  
  
 [in] *bDrawBorder*  
 TRUE se l'applicazione disegna un bordo intorno a barra dei colori su pulsante colore della barra multifunzione. Barra dei colori viene visualizzato il colore attualmente selezionato. FALSE se l'applicazione non consente di disegnare un bordo  
  
##  <a name="enableotherbutton"></a>  CMFCRibbonColorButton::EnableOtherButton  
 Abilita il pulsante **Altro** .  
  
```  
void EnableOtherButton(
    LPCTSTR lpszLabel,  
    LPCTSTR lpszToolTip=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszLabel*  
 L'etichetta del pulsante.  
  
 *lpszToolTip*  
 Il testo della descrizione comando per il **altri** pulsante.  
  
### <a name="remarks"></a>Note  
 Il **altri** pulsante è quello che viene visualizzato sotto il gruppo di colori. Quando l'utente fa clic il **altri** pulsante, viene visualizzato una finestra di dialogo colore.  
  
##  <a name="getautomaticcolor"></a>  CMFCRibbonColorButton::GetAutomaticColor  
 Recupera il colore del pulsante automatico corrente.  
  
```  
COLORREF GetAutomaticColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di colore RGB che rappresenta il colore del pulsante automatico corrente.  
  
### <a name="remarks"></a>Note  
 Il colore del pulsante automatico è impostato il `colorAutomatic` il parametro passato al `CMFCRibbonColorButton::EnableAutomaticButton` (metodo).  
  
##  <a name="getcolor"></a>  CMFCRibbonColorButton::GetColor  
 Restituisce il colore attualmente selezionato.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Colore selezionato facendo clic sul pulsante.  
  
##  <a name="getcolorboxsize"></a>  CMFCRibbonColorButton::GetColorBoxSize  
 Restituisce le dimensioni degli elementi di colore visualizzati nella barra dei colori.  
  
```  
CSize GetColorBoxSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni dei pulsanti di colore della tavolozza dei colori di elenco a discesa.  
  
##  <a name="getcolumns"></a>  CMFCRibbonColorButton::GetColumns  
 Ottiene il numero di elementi in una riga della visualizzazione di raccolta del pulsante colore della barra multifunzione.  
  
```  
int GetColumns() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di icone in ogni riga.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gethighlightedcolor"></a>  CMFCRibbonColorButton::GetHighlightedColor  
 Restituisce il colore dell'elemento attualmente selezionato nella tavolozza dei colori popup.  
  
```  
COLORREF GetHighlightedColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Colore dell'elemento attualmente selezionato nella tavolozza dei colori popup.  
  
##  <a name="removeallcolorgroups"></a>  CMFCRibbonColorButton::RemoveAllColorGroups  
 Rimuove tutti i gruppi di colore dall'area dei colori normali.  
  
```  
void RemoveAllColorGroups();
```  
  
##  <a name="setcolor"></a>  CMFCRibbonColorButton::SetColor  
 Seleziona un colore dall'area dei colori normali.  
  
```  
void SetColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colore*  
 Impostare un colore.  
  
##  <a name="setcolorboxsize"></a>  CMFCRibbonColorButton::SetColorBoxSize  
 Imposta le dimensioni di tutti gli elementi di colore visualizzati nella barra dei colori.  
  
```  
void SetColorBoxSize(CSize sizeBox);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *sizeBox*  
 Le nuove dimensioni dei pulsanti di colore della tavolozza dei colori.  
  
##  <a name="setcolorname"></a>  CMFCRibbonColorButton::SetColorName  
 Imposta un nuovo nome per il colore specificati.  
  
```  
static void __stdcall SetColorName(
    COLORREF color,  
    const CString& strName);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colore*  
 Il valore RGB di un colore.  
  
 [in] *strName*  
 Il nuovo nome per il colore specificato.  
  
### <a name="remarks"></a>Note  
 Poiché chiama `CMFCColorBar::SetColorName`, questo metodo modifica il nome del colore specificato in tutte le `CMFCColorBar` oggetti nell'applicazione.  
  
##  <a name="setcolumns"></a>  CMFCRibbonColorButton::SetColumns  
 Imposta il numero di colonne visualizzate nella tabella dei colori che viene presentata all'utente durante il processo di selezione di colore dell'utente.  
  
```  
void SetColumns(int nColumns);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nColumns*  
 Il numero di icone di colore da visualizzare in ogni riga.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdocumentcolors"></a>  CMFCRibbonColorButton::SetDocumentColors  
 Specifica un elenco di valori RGB da visualizzare nell'area dei colori del documento.  
  
```  
void SetDocumentColors(
    LPCTSTR lpszLabel,  
    CList<COLORREF,COLORREF>& lstColors);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszLabel*  
 Il testo da visualizzare con i colori del documento.  
  
 [in] *lstColors*  
 Un riferimento a un elenco di valori RGB.  
  
##  <a name="setpalette"></a>  CMFCRibbonColorButton::SetPalette  
 Specifica i colori standard da visualizzare nella tabella colori che consente di visualizzare sul pulsante del colore.  
  
```  
void SetPalette(CPalette* pPalette);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pPalette*  
 Puntatore a una tavolozza dei colori.  
  
### <a name="remarks"></a>Note  
  
##  <a name="updatecolor"></a>  CMFCRibbonColorButton::UpdateColor  
 Chiamato dal framework quando l'utente seleziona un colore dalla tabella di colore visualizzata quando l'utente fa clic sul pulsante del colore.  
  
```  
void UpdateColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colore*  
 Colore selezionato dall'utente.  
  
### <a name="remarks"></a>Note  
 Il `CMFCRibbonColorButton::UpdateColor` metodo modifica il colore del pulsante attualmente selezionato e invia una notifica padre inviando un messaggio WM_COMMAND con una notifica standard BN_CLICKED. Usare la [CMFCRibbonColorButton::GetColor](#getcolor) metodo per recuperare il colore selezionato.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)
