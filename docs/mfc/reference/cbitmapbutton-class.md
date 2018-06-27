---
title: Classe CBitmapButton | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CBitmapButton
- AFXEXT/CBitmapButton
- AFXEXT/CBitmapButton::CBitmapButton
- AFXEXT/CBitmapButton::AutoLoad
- AFXEXT/CBitmapButton::LoadBitmaps
- AFXEXT/CBitmapButton::SizeToContent
dev_langs:
- C++
helpviewer_keywords:
- CBitmapButton [MFC], CBitmapButton
- CBitmapButton [MFC], AutoLoad
- CBitmapButton [MFC], LoadBitmaps
- CBitmapButton [MFC], SizeToContent
ms.assetid: 9ad6cb45-c3c4-4fb1-96d3-1fe3df7bbcfc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7ef1c1a328b785c189a2d7d4a2eb28ec3995a810
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36952180"
---
# <a name="cbitmapbutton-class"></a>Classe CBitmapButton
Crea controlli di tipo pulsante di comando dotati di immagini bitmap anziché di testo come etichetta.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CBitmapButton : public CButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmapButton::CBitmapButton](#cbitmapbutton)|Costruisce un oggetto `CBitmapButton`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmapButton::AutoLoad](#autoload)|Associa un oggetto di un pulsante in una finestra di dialogo di `CBitmapButton` (classe), carica il bitmap(s) in base al nome e il pulsante Adatta la bitmap di dimensioni.|  
|[CBitmapButton::LoadBitmaps](#loadbitmaps)|Inizializza l'oggetto durante il caricamento di una o più risorse denominate bitmap dal file di risorse dell'applicazione e collegando le bitmap per l'oggetto.|  
|[CBitmapButton::SizeToContent](#sizetocontent)|Pulsante per adattare la bitmap di dimensioni.|  
  
## <a name="remarks"></a>Note  
 `CBitmapButton` gli oggetti contengono le bitmap fino a quattro, che contengono le immagini per i diversi stati può presupporre un pulsante: alto (o normale) verso il basso o selezionato, con stato attivo e disabilitato. Solo il primo bitmap è obbligatoria. gli altri sono facoltativi.  
  
 Le immagini bitmap pulsante includono il bordo dell'immagine, nonché l'immagine stessa. Bordo in genere riveste un ruolo in che mostra lo stato del pulsante. Ad esempio, la mappa di bit per lo stato attivo è in genere come quella disponibile per lo stato attivo, ma con un margine rettangolo tratteggiato dal bordo o una linea spessa continua al bordo. La mappa di bit per il disabilitato lo stato in genere è simile a quella per lo stato attivo, ma ha contrasto inferiore (ad esempio, una selezione dei menu in grigio o appare in grigio).  
  
 Queste bitmap può essere di qualsiasi dimensione, ma tutti vengono trattati come se fossero le stesse dimensioni come mappa di bit per lo stato attivo.  
  
 Varie applicazioni richiedono diverse combinazioni delle immagini bitmap:  
  
|Su|Giù|Con stato attivo|Disabilitato|Applicazione|  
|--------|----------|-------------|--------------|-----------------|  
|×||||Bitmap|  
|×|×|||Pulsante senza **WS_TABSTOP** stile|  
|×|×|×|×|Pulsante di finestra di dialogo con tutti gli Stati|  
|×|×|×||Pulsante di finestra di dialogo con **WS_TABSTOP** stile|  
  
 Quando si crea un controllo pulsante bitmap, impostare il **BS_OWNERDRAW** stile per specificare che il pulsante viene disegnato dal proprietario. In questo modo, Windows inviare il `WM_MEASUREITEM` e `WM_DRAWITEM` i messaggi per il pulsante, il framework gestisce questi messaggi e gestisce l'aspetto del pulsante per l'utente.  
  
### <a name="to-create-a-bitmap-button-control-in-a-windows-client-area"></a>Per creare un controllo pulsante bitmap nell'area client della finestra  
  
1.  Creare una a quattro immagini bitmap per il pulsante.  
  
2.  Costruire il [CBitmapButton](#cbitmapbutton) oggetto.  
  
3.  Chiamare il [Create](../../mfc/reference/cbutton-class.md#create) funzione per creare il controllo pulsante di Windows e associarlo al `CBitmapButton` oggetto.  
  
4.  Chiamare il [LoadBitmaps](#loadbitmaps) funzione membro per caricare le risorse bitmap dopo essere stato costruito pulsante bitmap.  
  
### <a name="to-include-a-bitmap-button-control-in-a-dialog-box"></a>Per includere un controllo pulsante bitmap in una finestra di dialogo  
  
1.  Creare una a quattro immagini bitmap per il pulsante.  
  
2.  Creare un modello di finestra di dialogo con un pulsante di disegno posizionato in cui si desidera il pulsante bitmap. Le dimensioni del pulsante nel modello non è rilevante.  
  
3.  Impostare la didascalia del pulsante su un valore, ad esempio " **MYIMAGE**" e definire un simbolo per il pulsante, ad esempio **IDC_MYIMAGE**.  
  
4.  Nello script di risorsa dell'applicazione, assegnare a ciascuna delle immagini create per il pulsante di un ID costruito aggiungendo una lettera "U", "D", "F" o "X" (per verso l'alto, verso il basso, con stato attivo e disabilitato) e la stringa utilizzata per la didascalia del pulsante in passaggio 3. Per la didascalia del pulsante " **MYIMAGE**,", ad esempio, gli ID sarebbe " **MYIMAGEU**," " **MYIMAGED**," " **MYIMAGEF**," e " **MYIMAGEX**. " Si **necessario** specificare l'ID delle bitmap con virgolette doppie. In caso contrario, l'editor risorse verrà assegnato un numero intero per la risorsa e MFC avrà esito negativo durante il caricamento dell'immagine.  
  
5.  Nella classe di finestra di dialogo dell'applicazione (derivato da `CDialog`), aggiungere un `CBitmapButton` oggetto membro.  
  
6.  Nel `CDialog` dell'oggetto [OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog) chiamata di routine, il `CBitmapButton` dell'oggetto [AutoLoad](#autoload) funzione, usando come parametri di ID di controllo del pulsante e `CDialog` oggetto **ciò** puntatore.  
  
 Se si desidera gestire i messaggi di notifica di Windows, ad esempio BN_CLICKED, inviato da un controllo pulsante di bitmap al relativo elemento padre (in genere una classe derivata da `CDialog`), aggiungere il `CDialog`-oggetto derivato da un membro della mappa messaggi voce e gestore di messaggi funzione per ogni messaggio. Le notifiche inviate da un `CBitmapButton` oggetto sono uguali a quelli inviati da un [CButton](../../mfc/reference/cbutton-class.md) oggetto.  
  
 La classe [CToolBar](../../mfc/reference/ctoolbar-class.md) adotta un approccio diverso per pulsanti con bitmap.  
  
 Per ulteriori informazioni sul `CBitmapButton`, vedere [controlli](../../mfc/controls-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 `CBitmapButton`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT. h  
  
##  <a name="autoload"></a>  CBitmapButton::AutoLoad  
 Associa un oggetto di un pulsante in una finestra di dialogo di `CBitmapButton` (classe), carica il bitmap(s) in base al nome e il pulsante Adatta la bitmap di dimensioni.  
  
```  
BOOL AutoLoad(
    UINT nID,  
    CWnd* pParent);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 ID del controllo. del pulsante  
  
 *pParent*  
 Puntatore all'oggetto a cui appartiene il pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `AutoLoad` funzione per inizializzare un pulsante di disegno in una finestra di dialogo come un pulsante bitmap. Le istruzioni per l'utilizzo di questa funzione si nella sezione Osservazioni per il `CBitmapButton` classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#75](../../mfc/codesnippet/cpp/cbitmapbutton-class_1.cpp)]  
  
##  <a name="cbitmapbutton"></a>  CBitmapButton::CBitmapButton  
 Crea un oggetto `CBitmapButton`.  
  
```  
CBitmapButton();
```  
  
### <a name="remarks"></a>Note  
 Dopo la creazione di C++ `CBitmapButton` dell'oggetto, chiamare [CButton::Create](../../mfc/reference/cbutton-class.md#create) per creare il controllo pulsante di Windows e associarlo al `CBitmapButton` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#57](../../mfc/codesnippet/cpp/cbitmapbutton-class_2.cpp)]  
  
##  <a name="loadbitmaps"></a>  CBitmapButton::LoadBitmaps  
 Utilizzare questa funzione quando si desidera caricare immagini bitmap identificate ai nomi di risorse o ai numeri ID, o quando non è possibile utilizzare il `AutoLoad` funzionare perché, ad esempio, si sta creando un pulsante bitmap che non fa parte di una finestra di dialogo.  
  
```  
BOOL LoadBitmaps(
    LPCTSTR lpszBitmapResource,  
    LPCTSTR lpszBitmapResourceSel = NULL,  
    LPCTSTR lpszBitmapResourceFocus = NULL,  
    LPCTSTR lpszBitmapResourceDisabled = NULL);

 
BOOL LoadBitmaps(
    UINT nIDBitmapResource,  
    UINT nIDBitmapResourceSel = 0,  
    UINT nIDBitmapResourceFocus = 0,  
    UINT nIDBitmapResourceDisabled = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszBitmapResource*  
 Punta alla stringa con terminazione null che contiene il nome della bitmap per normale del pulsante bitmap o "backup" dello stato. Obbligatorio.  
  
 *lpszBitmapResourceSel*  
 Punta alla stringa con terminazione null che contiene il nome della bitmap per un pulsante bitmap selezionato o "disattivato". Potrebbe essere **NULL**.  
  
 *lpszBitmapResourceFocus*  
 Punta alla stringa con terminazione null che contiene il nome della bitmap per un pulsante bitmap con stato attivo dello stato. Potrebbe essere **NULL**.  
  
 *lpszBitmapResourceDisabled*  
 Punta alla stringa con terminazione null che contiene il nome della bitmap per un pulsante bitmap con stato disabilitato. Potrebbe essere **NULL**.  
  
 *nIDBitmapResource*  
 Specifica il numero di ID risorsa della risorsa bitmap per normale del pulsante bitmap o "backup" dello stato. Obbligatorio.  
  
 *nIDBitmapResourceSel*  
 Specifica il numero di ID risorsa della risorsa bitmap per un pulsante bitmap selezionato o "disattivato". Può essere 0.  
  
 *nIDBitmapResourceFocus*  
 Specifica il numero di ID risorsa della risorsa bitmap per lo stato attivo del pulsante una bitmap. Può essere 0.  
  
 *nIDBitmapResourceDisabled*  
 Specifica il numero di ID risorsa della risorsa bitmap per stato disabilitato del pulsante una bitmap. Può essere 0.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#58](../../mfc/codesnippet/cpp/cbitmapbutton-class_3.cpp)]  
  
##  <a name="sizetocontent"></a>  CBitmapButton::SizeToContent  
 Chiamare questa funzione per ridimensionare un pulsante bitmap per le dimensioni della bitmap.  
  
```  
void SizeToContent();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#59](../../mfc/codesnippet/cpp/cbitmapbutton-class_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC CTRLTEST](../../visual-cpp-samples.md)   
 [CButton (classe)](../../mfc/reference/cbutton-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)

