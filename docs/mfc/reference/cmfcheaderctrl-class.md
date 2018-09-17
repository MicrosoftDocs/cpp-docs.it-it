---
title: Classe CMFCHeaderCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCHeaderCtrl
- AFXHEADERCTRL/CMFCHeaderCtrl
- AFXHEADERCTRL/CMFCHeaderCtrl::CMFCHeaderCtrl
- AFXHEADERCTRL/CMFCHeaderCtrl::EnableMultipleSort
- AFXHEADERCTRL/CMFCHeaderCtrl::GetColumnState
- AFXHEADERCTRL/CMFCHeaderCtrl::GetSortColumn
- AFXHEADERCTRL/CMFCHeaderCtrl::IsAscending
- AFXHEADERCTRL/CMFCHeaderCtrl::IsDialogControl
- AFXHEADERCTRL/CMFCHeaderCtrl::IsMultipleSort
- AFXHEADERCTRL/CMFCHeaderCtrl::RemoveSortColumn
- AFXHEADERCTRL/CMFCHeaderCtrl::SetSortColumn
- AFXHEADERCTRL/CMFCHeaderCtrl::OnDrawItem
- AFXHEADERCTRL/CMFCHeaderCtrl::OnDrawSortArrow
- AFXHEADERCTRL/CMFCHeaderCtrl::OnFillBackground
dev_langs:
- C++
helpviewer_keywords:
- CMFCHeaderCtrl [MFC], CMFCHeaderCtrl
- CMFCHeaderCtrl [MFC], EnableMultipleSort
- CMFCHeaderCtrl [MFC], GetColumnState
- CMFCHeaderCtrl [MFC], GetSortColumn
- CMFCHeaderCtrl [MFC], IsAscending
- CMFCHeaderCtrl [MFC], IsDialogControl
- CMFCHeaderCtrl [MFC], IsMultipleSort
- CMFCHeaderCtrl [MFC], RemoveSortColumn
- CMFCHeaderCtrl [MFC], SetSortColumn
- CMFCHeaderCtrl [MFC], OnDrawItem
- CMFCHeaderCtrl [MFC], OnDrawSortArrow
- CMFCHeaderCtrl [MFC], OnFillBackground
ms.assetid: 2f5fbf7b-5c75-42db-9216-640b1628f777
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 36817eba04d630ea4e56140af582bf49fa6f54ce
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45718120"
---
# <a name="cmfcheaderctrl-class"></a>CMFCHeaderCtrl Class
Il `CMFCHeaderCtrl` classe supporta l'ordinamento di più colonne in un controllo intestazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCHeaderCtrl : public CHeaderCtrl  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCHeaderCtrl::CMFCHeaderCtrl](#cmfcheaderctrl)|Costruisce un oggetto `CMFCHeaderCtrl`.|  
|`CMFCHeaderCtrl::~CMFCHeaderCtrl`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCHeaderCtrl::EnableMultipleSort](#enablemultiplesort)|Abilita o disabilita *ordinamento a più colonne* modalità per il controllo intestazione corrente.|  
|[CMFCHeaderCtrl::GetColumnState](#getcolumnstate)|Indica se una colonna non è stata ordinata o viene ordinata in ordine crescente o decrescente.|  
|[CMFCHeaderCtrl::GetSortColumn](#getsortcolumn)|Recupera l'indice in base zero della prima colonna ordinata nel controllo header.|  
|`CMFCHeaderCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCHeaderCtrl::IsAscending](#isascending)|Indica se qualsiasi colonna nel controllo di intestazione è ordinato in ordine crescente.|  
|[CMFCHeaderCtrl::IsDialogControl](#isdialogcontrol)|Indica se la finestra padre del controllo intestazione corrente è una finestra di dialogo.|  
|[CMFCHeaderCtrl::IsMultipleSort](#ismultiplesort)|Indica se il controllo intestazione corrente è nel *ordinamento a più colonne* modalità.|  
|[CMFCHeaderCtrl::RemoveSortColumn](#removesortcolumn)|Rimuove la colonna specificata dall'elenco di colonne di ordinamento.|  
|[CMFCHeaderCtrl::SetSortColumn](#setsortcolumn)|Imposta l'ordinamento di una colonna specificata in un controllo intestazione.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCHeaderCtrl::OnDrawItem](#ondrawitem)|Chiamata eseguita dal framework per disegnare una colonna del controllo intestazione.|  
|[CMFCHeaderCtrl::OnDrawSortArrow](#ondrawsortarrow)|Chiamata eseguita dal framework per disegnare la freccia di ordinamento.|  
|[CMFCHeaderCtrl::OnFillBackground](#onfillbackground)|Chiamato dal framework per riempire lo sfondo di una colonna del controllo intestazione.|  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCHeaderCtrl` classe e su come abilitare *ordinamento a più colonne* modalità per il controllo intestazione corrente.  
  
 [!code-cpp[NVC_MFC_RibbonApp#24](../../mfc/reference/codesnippet/cpp/cmfcheaderctrl-class_1.cpp)]  
  
## <a name="remarks"></a>Note  
 Il `CMFCHeaderCtrl` classe disegna una freccia di ordinamento su una colonna del controllo intestazione per indicare che la colonna è ordinata. Uso *ordinamento a più colonne* modalità se un set di colonne nel controllo elenco padre ( [classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)) possono essere ordinate allo stesso tempo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)  
  
 [CMFCHeaderCtrl](../../mfc/reference/cmfcheaderctrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxheaderctrl.h  
  
##  <a name="cmfcheaderctrl"></a>  CMFCHeaderCtrl::CMFCHeaderCtrl  
 Costruisce un oggetto `CMFCHeaderCtrl`.  
  
```  
CMFCHeaderCtrl::CMFCHeaderCtrl()  
```  
  
### <a name="remarks"></a>Note  
 Questo costruttore inizializza le variabili membro seguenti sui valori specificati:  
  
|Variabile membro|Valore|  
|---------------------|-----------|  
|`m_bIsMousePressed`|false|  
|`m_bMultipleSort`|false|  
|`m_bAscending`|true|  
|`m_nHighlightedItem`|-1|  
|`m_bTracked`|false|  
|`m_bIsDlgControl`|FALSE|  
|`m_hFont`|NULL|  
  
##  <a name="enablemultiplesort"></a>  CMFCHeaderCtrl::EnableMultipleSort  
 Abilita o disabilita *ordinamento a più colonne* modalità per il controllo intestazione corrente.  
  
```  
void EnableMultipleSort(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*bAttivare il*<br/>
[in] TRUE per abilitare la modalità di ordinamento di più colonne; FALSE per disabilitare la modalità di ordinamento più colonne e rimuovere tutte le colonne dall'elenco di colonne ordinate. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
 Usare questo metodo per abilitare o disabilitare la modalità di ordinamento più colonne. Due o più colonne possono partecipare un ordinamento, se il controllo intestazione è in modalità di ordinamento più colonne.  
  
##  <a name="getcolumnstate"></a>  CMFCHeaderCtrl::GetColumnState  
 Indica se una colonna è ordinata, o viene ordinata in ordine crescente o decrescente.  
  
```  
int GetColumnState(int iColumn) const;  
```  
  
### <a name="parameters"></a>Parametri  
*iColumn*<br/>
[in] Indice a base zero di una colonna.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica lo stato di ordinamento della colonna specificata. Nella tabella seguente sono elencati i valori possibili:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|-1|Disposto in ordine decrescente.|  
|0|Non è ordinato.|  
|1|Ordinati in ordine crescente.|  
  
### <a name="remarks"></a>Note  
  
##  <a name="getsortcolumn"></a>  CMFCHeaderCtrl::GetSortColumn  
 Recupera l'indice in base zero della prima colonna ordinata nel controllo header.  
  
```  
int GetSortColumn() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice di una colonna ordinata o -1 se viene trovata alcuna colonna ordinata.  
  
### <a name="remarks"></a>Note  
 Se il controllo intestazione è nel *ordinamento a più colonne* modalità e compilato l'applicazione in modalità debug, questo metodo effettua un'asserzione e consiglia di utilizzare il [CMFCHeaderCtrl::GetColumnState](#getcolumnstate) metodo invece. Se il controllo intestazione è in modalità di ordinamento più colonne ed è stato compilato l'applicazione in modalità delle vendite al dettaglio, questo metodo restituisce -1.  
  
##  <a name="isascending"></a>  CMFCHeaderCtrl::IsAscending  
 Indica se qualsiasi colonna nel controllo di intestazione è ordinato in ordine crescente.  
  
```  
BOOL IsAscending() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se qualsiasi colonna nel controllo header è ordinata in ordine crescente; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Il valore restituito da questo metodo consente di visualizzare la freccia di ordinamento appropriato nell'elemento di controllo intestazione. Usare la [CMFCHeaderCtrl::SetSortColumn](#setsortcolumn) metodo per impostare l'ordinamento.  
  
##  <a name="isdialogcontrol"></a>  CMFCHeaderCtrl::IsDialogControl  
 Indica se la finestra padre del controllo intestazione corrente è una finestra di dialogo.  
  
```  
BOOL IsDialogControl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra padre del controllo intestazione corrente è una finestra di dialogo; in caso contrario, FALSE.  
  
##  <a name="ismultiplesort"></a>  CMFCHeaderCtrl::IsMultipleSort  
 Indica se il controllo intestazione corrente è nel *ordinamento a più colonne* modalità.  
  
```  
BOOL IsMultipleSort() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se più modalità di ordinamento di colonne è abilitata. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Usare la [CMFCHeaderCtrl::EnableMultipleSort](#enablemultiplesort) metodo per abilitare o disabilitare la modalità di ordinamento più colonne. Due o più colonne possono partecipare un ordinamento, se il controllo intestazione è in modalità di ordinamento più colonne.  
  
##  <a name="ondrawitem"></a>  CMFCHeaderCtrl::OnDrawItem  
 Chiamata eseguita dal framework per disegnare una colonna del controllo intestazione.  
  
```  
virtual void OnDrawItem(
    CDC* pDC,  
    int iItem,  
    CRect rect,  
    BOOL bIsPressed,  
    BOOL bIsHighlighted);
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.  
  
*iItem*<br/>
[in] Indice a base zero dell'elemento da disegnare.  
  
*Rect*<br/>
[in] Il rettangolo di delimitazione dell'elemento da disegnare.  
  
*bIsPressed*<br/>
[in] TRUE per disegnare l'elemento nello stato pressed; in caso contrario, FALSE.  
  
*bIsHighlighted*<br/>
[in] TRUE per disegnare l'elemento in stato evidenziato. in caso contrario, FALSE.  
  
##  <a name="ondrawsortarrow"></a>  CMFCHeaderCtrl::OnDrawSortArrow  
 Chiamata eseguita dal framework per disegnare la freccia di ordinamento.  
  
```  
virtual void OnDrawSortArrow(
    CDC* pDC,  
    CRect rectArrow);
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.  
  
*rectArrow*<br/>
[in] Il rettangolo di delimitazione della freccia di ordinamento.  
  
##  <a name="onfillbackground"></a>  CMFCHeaderCtrl::OnFillBackground  
 Chiamato dal framework per riempire lo sfondo di una colonna del controllo intestazione.  
  
```  
virtual void OnFillBackground(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="removesortcolumn"></a>  CMFCHeaderCtrl::RemoveSortColumn  
 Rimuove la colonna specificata dall'elenco di colonne di ordinamento.  
  
```  
void RemoveSortColumn(int iColumn);
```  
  
### <a name="parameters"></a>Parametri  
*iColumn*<br/>
[in] Indice a base zero della colonna da rimuovere.  
  
##  <a name="setsortcolumn"></a>  CMFCHeaderCtrl::SetSortColumn  
 Imposta l'ordinamento di una colonna specificata in un controllo intestazione.  
  
```  
void SetSortColumn(
    int iColumn,  
    BOOL bAscending=TRUE,  
    BOOL bAdd=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
*iColumn*<br/>
[in] Indice a base zero di una colonna del controllo intestazione. Se questo parametro è minore di zero, questo metodo rimuove tutte le colonne nell'elenco delle colonne di ordinamento.  
  
*bAscending*<br/>
[in] Specifica l'ordinamento della colonna che il *iColumn* parametro specifica. TRUE per impostare l'ordine crescente; FALSE per impostare l'ordine decrescente. Il valore predefinito è TRUE.  
  
*bAggiungi*<br/>
[in] True per impostare l'ordinamento della colonna che il *iColumn* parametro specifica.  
  
 Se il controllo intestazione corrente è nel *ordinamento a più colonne* modalità, questo metodo aggiunge la colonna specificata all'elenco di colonne di ordinamento. Uso [CMFCHeaderCtrl::EnableMultipleSort](#enablemultiplesort) impostare più modalità di ordinamento di colonne.  
  
 Se non è impostata più modalità di ordinamento di colonne e questo metodo viene compilato in modalità di debug, questo metodo effettua un'asserzione. Se non è impostata più modalità di ordinamento di colonne e questo metodo viene compilato in modalità delle vendite al dettaglio, questo metodo prima di tutto rimuove tutte le colonne nell'elenco delle colonne di ordinamento e quindi aggiunge la colonna specificata all'elenco.  
  
 Se ha valore FALSE, innanzitutto rimuovere tutte le colonne nell'elenco delle colonne di ordinamento e quindi aggiungere la colonna specificata all'elenco. Il valore predefinito è FALSE.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per impostare l'ordinamento di una colonna. Se necessario, questo metodo aggiunge la colonna all'elenco di colonne di ordinamento. Il controllo intestazione viene utilizzato l'ordinamento per disegnare una freccia di ordinamento che punta verso l'alto o verso il basso.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)
