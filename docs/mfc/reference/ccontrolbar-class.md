---
title: CControlBar (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CControlBar
dev_langs:
- C++
helpviewer_keywords:
- CControlBar class
- OLE resize bars
- OLE resize bars, base class
- dialog bars, base class
- toolbars [C++], base class
- control bars [C++], base class
- status bars, base class
ms.assetid: 4d668c55-9b42-4838-97ac-cf2b3000b82c
caps.latest.revision: 22
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 9720c4c11656834923c0e42a2017d51543c08f53
ms.lasthandoff: 02/24/2017

---
# <a name="ccontrolbar-class"></a>CControlBar Class
La classe base per le classi di barre di controllo [CStatusBar](../../mfc/reference/cstatusbar-class.md), [CToolBar](../../mfc/reference/ctoolbar-class.md), [CDialogBar](../../mfc/reference/cdialogbar-class.md), [CReBar](../../mfc/reference/crebar-class.md), e [COleResizeBar](../../mfc/reference/coleresizebar-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CControlBar : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CControlBar::CControlBar](#ccontrolbar)|Costruisce un oggetto `CControlBar`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CControlBar::CalcDynamicLayout](#calcdynamiclayout)|Restituisce la dimensione di una barra di controllo dinamico come un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.|  
|[CControlBar::CalcFixedLayout](#calcfixedlayout)|Restituisce le dimensioni della barra di controllo come un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.|  
|[CControlBar::CalcInsideRect](#calcinsiderect)|Restituisce le dimensioni correnti dell'area della barra di controllo; inclusi i bordi.|  
|[CControlBar::DoPaint](#dopaint)|Esegue il rendering i bordi e lo spostamento della barra di controllo.|  
|[CControlBar::DrawBorders](#drawborders)|Visualizza i bordi della barra di controllo.|  
|[CControlBar::DrawGripper](#drawgripper)|Esegue il rendering di spostamento della barra di controllo.|  
|[CControlBar:: EnableDocking](#enabledocking)|Consente una barra di controllo per essere ancorato o mobile.|  
|[CControlBar::](#getbarstyle)|Recupera le impostazioni di stile della barra di controllo.|  
|[CControlBar::GetBorders](#getborders)|Recupera i valori del bordo della barra di controllo.|  
|[CControlBar::GetCount](#getcount)|Restituisce il numero di non `HWND` gli elementi nella barra di controllo.|  
|[CControlBar::GetDockingFrame](#getdockingframe)|Restituisce un puntatore al frame in cui è ancorata una barra di controllo.|  
|[CControlBar::IsFloating](#isfloating)|Restituisce un valore diverso da zero se la barra di controllo in questione è una barra di controllo a virgola mobile.|  
|[CControlBar::OnUpdateCmdUI](#onupdatecmdui)|Chiama i gestori di comando dell'interfaccia utente.|  
|[CControlBar::SetBarStyle](#setbarstyle)|Modifica le impostazioni di stile della barra di controllo.|  
|[CControlBar::SetBorders](#setborders)|Imposta i valori del bordo della barra di controllo.|  
|[CControlBar::SetInPlaceOwner](#setinplaceowner)|Modifica il proprietario sul posto di una barra di controllo.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CControlBar::m_bAutoDelete](#m_bautodelete)|Se diverso da zero, il `CControlBar` oggetto viene eliminato quando viene eliminata la barra di controllo di Windows.|  
|[CControlBar::m_pInPlaceOwner](#m_pinplaceowner)|Il proprietario sul posto della barra di controllo.|  
  
## <a name="remarks"></a>Note  
 Una barra di controllo è una finestra che in genere è allineata a sinistra o destra di una finestra cornice. Può contenere elementi figlio che possono essere `HWND`- basato su controlli, ovvero windows che generano e rispondere ai messaggi di Windows, o non - `HWND`-basato su elementi che non sono windows e gestiti dal codice dell'applicazione o framework. Le caselle di riepilogo e i controlli di modifica sono esempi di `HWND`- controlli; riquadri della barra di stato e pulsanti bitmap sono esempi di non - `HWND`-controlli basati su.  
  
 Barra di controllo windows è in genere finestre figlio di una finestra cornice padre e in genere è di pari livello alla visualizzazione client o client MDI della finestra cornice. Oggetto `CControlBar` oggetto utilizza le informazioni sul rettangolo client della finestra padre per posizionarsi. In seguito viene indicato nella finestra padre per la quantità di spazio rimane non allocato nell'area client della finestra padre.  
  
 Per ulteriori informazioni su `CControlBar`, vedere:  
  
- [Barre di controllo](../../mfc/control-bars.md)  
  
- [Nota tecnica 31: Barre di controllo](../../mfc/tn031-control-bars.md).  
  
-   Articolo della Knowledge Base Q242577: PRB: aggiornamento comandi dell'interfaccia utente gestori non funzionano per Menu collegato a una finestra di dialogo  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CControlBar`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT  
  
##  <a name="a-namecalcdynamiclayouta--ccontrolbarcalcdynamiclayout"></a><a name="calcdynamiclayout"></a>CControlBar::CalcDynamicLayout  
 Il framework chiama questa funzione membro per calcolare le dimensioni di una barra degli strumenti dinamica.  
  
```  
virtual CSize CalcDynamicLayout(
    int nLength,  
    DWORD nMode);
```  
  
### <a name="parameters"></a>Parametri  
 `nLength`  
 La dimensione richiesta della barra di controllo, orizzontale o verticale, in base alle `dwMode`.  
  
 `nMode`  
 I flag predefiniti seguenti vengono utilizzati per determinare l'altezza e larghezza della barra di controllo dinamico. Utilizzare l'operatore OR bit per bit (|) per combinare i flag.  
  
|Flag della modalità di layout|Significato|  
|-----------------------|-------------------|  
|`LM_STRETCH`|Indica se la barra di controllo deve essere ingrandita alle dimensioni del frame. Impostare se la barra non è una barra di ancoraggio (non disponibile per l'ancoraggio). Non è impostata quando la barra è mobile o ancorato (disponibile per l'ancoraggio). Se impostato, `LM_STRETCH` ignora `nLength` e restituisce le dimensioni in base il `LM_HORZ` dello stato. `LM_STRETCH`è simile al `bStretch` parametro utilizzato in [CalcFixedLayout](#calcfixedlayout); vedere la funzione membro per ulteriori informazioni sulla relazione tra allungamento e l'orientamento.|  
|`LM_HORZ`|Indica che la barra è orientata orizzontalmente o verticalmente. Impostare se la barra è orientata orizzontalmente, e se è orientato verticalmente, non è impostata. `LM_HORZ`è simile al `bHorz` parametro utilizzato in [CalcFixedLayout](#calcfixedlayout); vedere la funzione membro per ulteriori informazioni sulla relazione tra allungamento e l'orientamento.|  
|**LM_MRUWIDTH**|Usati di recente larghezza dinamica. Ignora `nLength` parametro e utilizza la memorizzazione utilizzati più di recente larghezza.|  
|`LM_HORZDOCK`|Orizzontale ancorato dimensioni. Ignora `nLength` parametro e restituisce la dimensione dinamica con la larghezza massima.|  
|`LM_VERTDOCK`|Verticale ancorato dimensioni. Ignora `nLength` parametro e restituisce la dimensione dinamica con l'altezza massima.|  
|`LM_LENGTHY`|Impostare se `nLength` indica l'altezza (direzione-Y) invece di larghezza.|  
|`LM_COMMIT`|Reimposta **LM_MRUWIDTH** alla larghezza corrente della barra di controllo a virgola mobile.|  
  
### <a name="return-value"></a>Valore restituito  
 La barra di controllo dimensione, in pixel, di un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per fornire il proprio layout dinamico in classi derivate da `CControlBar`. Le classi MFC derivate da `CControlBar`, ad esempio [CToolbar](../../mfc/reference/ctoolbar-class.md), eseguire l'override di questa funzione membro e fornire la propria implementazione.  
  
##  <a name="a-namecalcfixedlayouta--ccontrolbarcalcfixedlayout"></a><a name="calcfixedlayout"></a>CControlBar::CalcFixedLayout  
 Chiamare questa funzione membro per calcolare la dimensione orizzontale di una barra di controllo.  
  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 `bStretch`  
 Indica se la barra deve essere ingrandita alle dimensioni del frame. Il `bStretch` parametro è diverso da zero quando la barra non è una barra di ancoraggio (non disponibile per l'ancoraggio) e 0 quando è ancorato o a virgola mobile (disponibile per l'ancoraggio).  
  
 `bHorz`  
 Indica che la barra è orientata orizzontalmente o verticalmente. Il `bHorz` parametro è diverso da zero se la barra è orientata orizzontalmente ed è 0 se è orientato verticalmente.  
  
### <a name="return-value"></a>Valore restituito  
 La barra di controllo dimensione, in pixel, di un `CSize` oggetto.  
  
### <a name="remarks"></a>Note  
 Barre di controllo, ad esempio le barre degli strumenti è possono estendere orizzontalmente o verticalmente per contenere i pulsanti contenuti nella barra di controllo.  
  
 Se `bStretch` è **TRUE**, estendere la dimensione lungo l'orientamento fornito da `bHorz`. In altre parole, se `bHorz` è **FALSE**, la barra di controllo viene esteso in senso verticale. Se `bStretch` è **FALSE**, si verifica alcuna estensione. La tabella seguente illustra le permutazioni possibili e gli stili di barra di controllo risultante, di `bStretch` e `bHorz`.  
  
|bStretch|bHorz|Adattamento|Orientamento|Ancoraggio/non ancoraggio|  
|--------------|-----------|----------------|-----------------|--------------------------|  
|**TRUE**|**TRUE**|Adattamento orizzontale|Orizzontalmente|Non ancorato|  
|**TRUE**|**FALSE**|Ingrandimento verticale|Orientati verticalmente|Non ancorato|  
|**FALSE**|**TRUE**|Nessuna estensione disponibili|Orizzontalmente|Ancoraggio|  
|**FALSE**|**FALSE**|Nessuna estensione disponibili|Orientati verticalmente|Ancoraggio|  
  
##  <a name="a-namecalcinsiderecta--ccontrolbarcalcinsiderect"></a><a name="calcinsiderect"></a>CControlBar::CalcInsideRect  
 Il framework chiama questa funzione per calcolare l'area client della barra di controllo.  
  
```  
virtual void CalcInsideRect(
    CRect& rect,  
    BOOL bHorz) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Contiene le dimensioni correnti della barra di controllo. inclusi i bordi.  
  
 `bHorz`  
 Indica che la barra è orientata orizzontalmente o verticalmente. Il `bHorz` parametro è diverso da zero se la barra è orientata orizzontalmente ed è 0 se è orientato verticalmente.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata prima della barra di controllo viene disegnata.  
  
 Eseguire l'override di questa funzione per personalizzare il rendering dei bordi e barra verticale di ridimensionamento della barra di controllo.  
  
##  <a name="a-nameccontrolbara--ccontrolbarccontrolbar"></a><a name="ccontrolbar"></a>CControlBar::CControlBar  
 Costruisce un oggetto `CControlBar`.  
  
```  
CControlBar();
```  
  
##  <a name="a-namedopainta--ccontrolbardopaint"></a><a name="dopaint"></a>CControlBar::DoPaint  
 Chiamato dal framework di eseguire il rendering di bordi e barra verticale di ridimensionamento della barra di controllo.  
  
```  
virtual void DoPaint(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al contesto di dispositivo da utilizzare per il rendering i bordi e lo spostamento della barra di controllo.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per personalizzare il comportamento di disegno della barra di controllo.  
  
 Un metodo di personalizzazione consiste nell'eseguire l'override di `DrawBorders` e `DrawGripper` le funzioni e aggiungere il codice di disegno personalizzato per i bordi e lo spostamento. Poiché questi metodi vengono chiamati per l'impostazione predefinita `DoPaint` (metodo), un override di `DoPaint` non è necessaria.  
  
##  <a name="a-namedrawbordersa--ccontrolbardrawborders"></a><a name="drawborders"></a>CControlBar::DrawBorders  
 Chiamato dal framework per eseguire il rendering i bordi della barra di controllo.  
  
```  
virtual void DrawBorders(
    CDC* pDC,  
    CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al contesto di dispositivo da utilizzare per il rendering i bordi della barra di controllo.  
  
 `rect`  
 Oggetto `CRect` oggetto contenente le dimensioni della barra di controllo.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per personalizzare l'aspetto dei bordi della barra di controllo.  
  
##  <a name="a-namedrawgrippera--ccontrolbardrawgripper"></a><a name="drawgripper"></a>CControlBar::DrawGripper  
 Chiamato dal framework per eseguire il rendering di spostamento della barra di controllo.  
  
```  
virtual void DrawGripper(
    CDC* pDC,  
    const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al contesto di dispositivo da utilizzare per il rendering di gripper barra di controllo.  
  
 `rect`  
 Oggetto `CRect` oggetto contenente le dimensioni del gripper barra di controllo.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per personalizzare l'aspetto del gripper barra di controllo.  
  
##  <a name="a-nameenabledockinga--ccontrolbarenabledocking"></a><a name="enabledocking"></a>CControlBar:: EnableDocking  
 Chiamare questa funzione per abilitare una barra di controllo per essere ancorato.  
  
```  
void EnableDocking(DWORD dwDockStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDockStyle`  
 Specifica se la barra di controllo supporta l'ancoraggio e i lati della finestra padre a cui può essere ancorata la barra di controllo, se supportato. Può essere uno o più delle seguenti operazioni:  
  
- `CBRS_ALIGN_TOP`Consente di ancoraggio nella parte superiore dell'area client.  
  
- `CBRS_ALIGN_BOTTOM`Consente di ancoraggio nella parte inferiore dell'area client.  
  
- `CBRS_ALIGN_LEFT`Consente di ancoraggio sul lato sinistro dell'area client.  
  
- `CBRS_ALIGN_RIGHT`Consente di ancoraggio sul lato destro dell'area client.  
  
- `CBRS_ALIGN_ANY`Consente di ancoraggio su qualsiasi lato dell'area client.  
  
- `CBRS_FLOAT_MULTI`Consente a più barre di controllo essere spostate in una finestra con mini-cornice singolo.  
  
 Se è 0 (ovvero, che indica nessun flag), la barra di controllo non verrà ancorata.  
  
### <a name="remarks"></a>Note  
 I lati specificati devono corrispondere a uno dei lati attivati per l'ancoraggio della finestra cornice di destinazione o la barra di controllo non può essere ancorata a una finestra cornice.  
  
##  <a name="a-namegetbarstylea--ccontrolbargetbarstyle"></a><a name="getbarstyle"></a>CControlBar::  
 Chiamare questa funzione per determinare quale **CBRS _** impostazioni (stili del controllo barra) attualmente impostate per la barra di controllo.  
  
```  
DWORD GetBarStyle();
```  
  
### <a name="return-value"></a>Valore restituito  
 Corrente **CBRS _** impostazioni (stili barra di controllo) per la barra di controllo. Vedere [CControlBar::SetBarStyle](#setbarstyle) per l'elenco completo di stili disponibili.  
  
### <a name="remarks"></a>Note  
 Non gestisce **WS _** (finestra) di stile.  
  
##  <a name="a-namegetbordersa--ccontrolbargetborders"></a><a name="getborders"></a>CControlBar::GetBorders  
 Restituisce i valori correnti di bordo per la barra di controllo.  
  
```  
CRect GetBorders() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CRect` oggetto che contiene la larghezza corrente, in pixel, di ogni lato dell'oggetto barra di controllo. Ad esempio, il valore di `left` membro, di [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto, la larghezza del bordo sinistro.  
  
##  <a name="a-namegetcounta--ccontrolbargetcount"></a><a name="getcount"></a>CControlBar::GetCount  
 Restituisce il numero di non `HWND` gli elementi di `CControlBar` oggetto.  
  
```  
int GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di non `HWND` gli elementi di `CControlBar` oggetto. Questa funzione restituisce 0 per un [CDialogBar](../../mfc/reference/cdialogbar-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Il tipo dell'elemento dipende l'oggetto derivato: riquadri per [CStatusBar](../../mfc/reference/cstatusbar-class.md) oggetti e i pulsanti e separatori per [CToolBar](../../mfc/reference/ctoolbar-class.md) oggetti.  
  
##  <a name="a-namegetdockingframea--ccontrolbargetdockingframe"></a><a name="getdockingframe"></a>CControlBar::GetDockingFrame  
 Chiamare questa funzione membro per ottenere un puntatore alla finestra cornice corrente a cui è ancorata la barra di controllo.  
  
```  
CFrameWnd* GetDockingFrame() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una finestra cornice se ha esito positivo. in caso contrario **NULL**.  
  
 Se la barra di controllo non è ancorata a una finestra cornice (vale a dire, se la barra di controllo è mobile), verrà restituito un puntatore all'elemento padre [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md).  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sulle barre di controllo ancorabile, vedere [CControlBar:: EnableDocking](#enabledocking) e [CFrameWnd:: DockControlBar](../../mfc/reference/cframewnd-class.md#dockcontrolbar).  
  
##  <a name="a-nameisfloatinga--ccontrolbarisfloating"></a><a name="isfloating"></a>CControlBar::IsFloating  
 Chiamare questa funzione membro per determinare se la barra di controllo è mobile o ancorato.  
  
```  
BOOL IsFloating() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra di controllo è mobile. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per modificare lo stato di una barra di controllo da ancorata a virgola mobile, chiamare [CFrameWnd:: FloatControlBar](../../mfc/reference/cframewnd-class.md#floatcontrolbar).  
  
##  <a name="a-namembautodeletea--ccontrolbarmbautodelete"></a><a name="m_bautodelete"></a>CControlBar::m_bAutoDelete  
 Se diverso da zero, il `CControlBar` oggetto viene eliminato quando viene eliminata la barra di controllo di Windows.  
  
```  
BOOL m_bAutoDelete;  
```  
  
### <a name="remarks"></a>Note  
 `m_bAutoDelete`è una variabile pubblica di tipo **BOOL**.  
  
 Un oggetto barra di controllo in genere è incorporato in un oggetto finestra cornice. In questo caso, `m_bAutoDelete` è 0 perché l'oggetto barra di controllo incorporato viene eliminato quando viene eliminata la finestra cornice.  
  
 Impostare questa variabile su un valore diverso da zero se si assegna un `CControlBar` oggetto nell'heap non si prevede di chiamare **eliminare**.  
  
##  <a name="a-namempinplaceownera--ccontrolbarmpinplaceowner"></a><a name="m_pinplaceowner"></a>CControlBar::m_pInPlaceOwner  
 Il proprietario sul posto della barra di controllo.  
  
```  
CWnd* m_pInPlaceOwner;  
```  
  
##  <a name="a-nameonupdatecmduia--ccontrolbaronupdatecmdui"></a><a name="onupdatecmdui"></a>CControlBar::OnUpdateCmdUI  
 Questa funzione membro viene chiamata dal framework per aggiornare lo stato della barra di stato o della barra degli strumenti.  
  
```  
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,  
    BOOL bDisableIfNoHndler) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 `pTarget`  
 Punta alla finestra cornice principale dell'applicazione. Questo puntatore viene utilizzato per il routing dei messaggi di aggiornamento.  
  
 `bDisableIfNoHndler`  
 Flag che indica se un controllo che non dispone di alcun gestore di aggiornamento deve essere visualizzato automaticamente come disabilitato.  
  
### <a name="remarks"></a>Note  
 Per aggiornare un singolo pulsante o il riquadro, utilizzare il `ON_UPDATE_COMMAND_UI` macro nella mappa messaggi per impostare un gestore di aggiornamento in modo appropriato. Vedere [ON_UPDATE_COMMAND_UI](http://msdn.microsoft.com/library/c4de3c21-2d2e-4b89-a4ce-d0c0e2d9edc4) per ulteriori informazioni sull'utilizzo di questa macro.  
  
 `OnUpdateCmdUI`viene chiamato dal framework quando l'applicazione è inattiva. La finestra cornice da aggiornare deve essere almeno indirettamente, una finestra figlio, di una finestra cornice visibile. `OnUpdateCmdUI`avanzato sottoponibile a override.  
  
##  <a name="a-namesetbarstylea--ccontrolbarsetbarstyle"></a><a name="setbarstyle"></a>CControlBar::SetBarStyle  
 Chiamare questa funzione per impostare il valore desiderato **CBRS _** gli stili per la barra di controllo.  
  
```  
void SetBarStyle(DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Gli stili desiderati per la barra di controllo. Può essere uno o più delle seguenti operazioni:  
  
- `CBRS_ALIGN_TOP`Consente la barra di controllo per essere ancorato alla parte superiore dell'area client di una finestra cornice.  
  
- `CBRS_ALIGN_BOTTOM`Consente la barra di controllo per essere ancorato alla parte inferiore dell'area client di una finestra cornice.  
  
- `CBRS_ALIGN_LEFT`Consente la barra di controllo ancorato a sinistra dell'area client di una finestra cornice.  
  
- `CBRS_ALIGN_RIGHT`Consente la barra di controllo ancorato a destra dell'area client di una finestra cornice.  
  
- `CBRS_ALIGN_ANY`Consente la barra di controllo ancorato a qualsiasi lato dell'area client di una finestra cornice.  
  
- `CBRS_BORDER_TOP`Fa sì che un bordo da disegnare sul bordo superiore della barra di controllo quando dovrebbe essere visibile.  
  
- `CBRS_BORDER_BOTTOM`Fa sì che un bordo da disegnare sul bordo inferiore della barra di controllo quando dovrebbe essere visibile.  
  
- `CBRS_BORDER_LEFT`Fa sì che un bordo da disegnare sul bordo sinistro della barra di controllo quando dovrebbe essere visibile.  
  
- `CBRS_BORDER_RIGHT`Fa sì che un bordo da disegnare sul bordo destro della barra di controllo quando dovrebbe essere visibile.  
  
- `CBRS_FLOAT_MULTI`Consente a più barre di controllo essere spostate in una finestra con mini-cornice singolo.  
  
- `CBRS_TOOLTIPS`Causa descrizioni comandi da visualizzare per la barra di controllo.  
  
- `CBRS_FLYBY`Il testo di messaggio da aggiornare contemporaneamente le descrizioni comandi.  
  
- **CBRS_GRIPPER** provoca un gripper, simile a quella utilizzata in bande in un **CReBar** da adottare per qualsiasi oggetto `CControlBar`-classe derivata.  
  
### <a name="remarks"></a>Note  
 Non influisce la **WS _** impostazioni (stile finestra).  
  
##  <a name="a-namesetbordersa--ccontrolbarsetborders"></a><a name="setborders"></a>CControlBar::SetBorders  
 Chiamare questa funzione per impostare le dimensioni dei bordi della barra di controllo.  
  
```  
void SetBorders(
    int cxLeft = 0,  
    int cyTop = 0,  
    int cxRight = 0,  
    int cyBottom = 0);  
  
void SetBorders(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 *cxLeft*  
 La larghezza, in pixel, del bordo sinistro della barra di controllo.  
  
 *cyTop*  
 L'altezza, in pixel, del bordo superiore della barra di controllo.  
  
 *cxRight*  
 La larghezza, in pixel, del bordo destro della barra di controllo.  
  
 *cyBottom*  
 L'altezza, in pixel, del bordo inferiore della barra di controllo.  
  
 `lpRect`  
 Un puntatore a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene la larghezza corrente, in pixel, di ogni bordo dell'oggetto barra di controllo.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta i bordi superiore e inferiore della barra di controllo di 5 pixel e i bordi sinistro e destro a 2 pixel:  
  
 [!code-cpp[NVC_MFCControlLadenDialog n.&61;](../../mfc/codesnippet/cpp/ccontrolbar-class_1.cpp)]  
  
##  <a name="a-namesetinplaceownera--ccontrolbarsetinplaceowner"></a><a name="setinplaceowner"></a>CControlBar::SetInPlaceOwner  
 Modifica il proprietario sul posto di una barra di controllo.  
  
```  
void SetInPlaceOwner(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Un puntatore a un `CWnd` oggetto.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CToolBar (classe)](../../mfc/reference/ctoolbar-class.md)   
 [CDialogBar (classe)](../../mfc/reference/cdialogbar-class.md)   
 [CStatusBar (classe)](../../mfc/reference/cstatusbar-class.md)   
 [CReBar (classe)](../../mfc/reference/crebar-class.md)

