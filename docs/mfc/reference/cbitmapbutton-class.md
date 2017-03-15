---
title: Classe CBitmapButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CBitmapButton
dev_langs:
- C++
helpviewer_keywords:
- buttons, bitmap
- CBitmapButton class
- bitmaps, button controls
ms.assetid: 9ad6cb45-c3c4-4fb1-96d3-1fe3df7bbcfc
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
ms.sourcegitcommit: 0b07f6b12e178d8e324313ea3b0f6de9ae7420c9
ms.openlocfilehash: 16d39cb380b75e6dcef71dda01626f120d5c12fb
ms.lasthandoff: 02/24/2017

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
|[CBitmapButton::AutoLoad](#autoload)|Associa un oggetto di un pulsante in una finestra di dialogo di `CBitmapButton` (classe), carica il bitmap(s) in base al nome e il pulsante per adattarsi alla bitmap di dimensioni.|  
|[CBitmapButton::LoadBitmaps](#loadbitmaps)|Inizializza l'oggetto per il caricamento di una o più risorse bitmap denominata dal file di risorse dell'applicazione e collegare le bitmap all'oggetto.|  
|[CBitmapButton::SizeToContent](#sizetocontent)|Pulsante per adattare la mappa di bit, le dimensioni.|  
  
## <a name="remarks"></a>Note  
 `CBitmapButton`gli oggetti contengono fino a quattro bitmap, che contengono immagini per i diversi stati può assumere un pulsante: alto (o normale), verso il basso o selezionato, con stato attivo e disabilitato. Solo la prima bitmap è obbligatoria. gli altri sono facoltativi.  
  
 Pulsante bitmap immagini includono il bordo dell'immagine, nonché dell'immagine stessa. Bordo in genere gioca un ruolo a visualizzare lo stato del pulsante. Ad esempio, la bitmap per lo stato attivo è in genere è simile a quella per lo stato attivo, ma con un margine rettangolo tratteggiato dal bordo o una linea spessa continua al bordo. La bitmap per lo stato disabilitato in genere è simile a quello per lo stato attivo ma ha contrasto inferiore (ad esempio una selezione di menu in grigio o in grigio).  
  
 Queste mappe di bit possono essere di qualsiasi dimensione, ma tutti vengono trattati come se fossero la stessa dimensione bitmap per lo stato attivo.  
  
 Diverse applicazioni richiedono diverse combinazioni di immagini bitmap:  
  
|Su|Giù|Con stato attivo|Disabled|Applicazione|  
|--------|----------|-------------|--------------|-----------------|  
|×||||Bitmap|  
|×|×|||Pulsante senza **WS_TABSTOP** stile|  
|×|×|×|×|Pulsante di finestra di dialogo con tutti gli Stati|  
|×|×|×||Pulsante di finestra di dialogo con **WS_TABSTOP** stile|  
  
 Quando si crea un controllo pulsante bitmap, impostare il **BS_OWNERDRAW** stile per specificare che il pulsante è proprietario. In questo modo Windows inviare il `WM_MEASUREITEM` e `WM_DRAWITEM` i messaggi per il pulsante, il framework gestisce questi messaggi e gestisce l'aspetto del pulsante per l'utente.  
  
### <a name="to-create-a-bitmap-button-control-in-a-windows-client-area"></a>Per creare un controllo pulsante bitmap nell'area client della finestra  
  
1.  Creare una a quattro immagini bitmap per il pulsante.  
  
2.  Costruire il [CBitmapButton](#cbitmapbutton) oggetto.  
  
3.  Chiamare il [crea](../../mfc/reference/cbutton-class.md#create) funzione per creare il controllo pulsante di Windows e associarlo a di `CBitmapButton` oggetto.  
  
4.  Chiamare il [LoadBitmaps](#loadbitmaps) funzione membro per caricare le risorse bitmap dopo essere stato costruito pulsante bitmap.  
  
### <a name="to-include-a-bitmap-button-control-in-a-dialog-box"></a>Per includere un pulsante bitmap in una finestra di dialogo  
  
1.  Creare una a quattro immagini bitmap per il pulsante.  
  
2.  Creare un modello di finestra di dialogo con un pulsante di disegno personalizzato posizione desiderato sul pulsante bitmap. Le dimensioni del pulsante nel modello non è rilevante.  
  
3.  Impostare la didascalia del pulsante su un valore, ad esempio " **MYIMAGE**" e definire un simbolo per il pulsante, ad esempio **IDC_MYIMAGE**.  
  
4.  Nello script di risorsa dell'applicazione, concedere a ogni delle immagini create per il pulsante di un ID creato mediante l'aggiunta di una delle lettere "U", "D", "F" o "X" (per verso l'alto, verso il basso, con stato attivo e disabilitate) e la stringa utilizzata per la didascalia del pulsante nel passaggio 3. Per la didascalia del pulsante " **MYIMAGE**,", ad esempio, gli ID sarebbe " **MYIMAGEU**," " **MYIMAGED**," " **MYIMAGEF**," e " **MYIMAGEX**." Si **deve** specificare l'ID dei vostri bitmap all'interno di virgolette doppie. In caso contrario, l'editor risorse verrà assegnato un numero intero per la risorsa e MFC ha esito negativo quando il caricamento dell'immagine.  
  
5.  Nella classe di finestra di dialogo dell'applicazione (derivato da `CDialog`), aggiungere un `CBitmapButton` oggetto membro.  
  
6.  Nel `CDialog` dell'oggetto [OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog) chiamata di routine, il `CBitmapButton` dell'oggetto [AutoLoad](#autoload) funzione, utilizzando come parametri ID di controllo del pulsante e `CDialog` dell'oggetto **questo** puntatore.  
  
 Se si desidera gestire i messaggi di notifica di Windows, ad esempio **BN_CLICKED**, inviato da un controllo pulsante di bitmap al relativo padre (in genere una classe derivata da **CDialog)**, aggiungere il `CDialog`-derivato una mappa messaggi voce e gestore di messaggi la funzione membro oggetto per ogni messaggio. Le notifiche inviate da un `CBitmapButton` oggetto sono uguali a quelli inviati da un [CButton](../../mfc/reference/cbutton-class.md) oggetto.  
  
 La classe [CToolBar](../../mfc/reference/ctoolbar-class.md) adotta un approccio diverso per i pulsanti bitmap.  
  
 Per ulteriori informazioni su `CBitmapButton`, vedere [controlli](../../mfc/controls-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 `CBitmapButton`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT  
  
##  <a name="a-nameautoloada--cbitmapbuttonautoload"></a><a name="autoload"></a>CBitmapButton::AutoLoad  
 Associa un oggetto di un pulsante in una finestra di dialogo di `CBitmapButton` (classe), carica il bitmap(s) in base al nome e il pulsante per adattarsi alla bitmap di dimensioni.  
  
```  
BOOL AutoLoad(
    UINT nID,  
    CWnd* pParent);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 ID del controllo. del pulsante  
  
 `pParent`  
 Puntatore all'oggetto a cui appartiene il pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `AutoLoad` funzione per inizializzare un pulsante di disegno personalizzato in una finestra di dialogo come un pulsante bitmap. Le istruzioni per l'utilizzo di questa funzione sono nella sezione Osservazioni per la `CBitmapButton` classe.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#75; NVC_MFCControlLadenDialog](../../mfc/codesnippet/cpp/cbitmapbutton-class_1.cpp)]  
  
##  <a name="a-namecbitmapbuttona--cbitmapbuttoncbitmapbutton"></a><a name="cbitmapbutton"></a>CBitmapButton::CBitmapButton  
 Crea un oggetto `CBitmapButton`.  
  
```  
CBitmapButton();
```  
  
### <a name="remarks"></a>Note  
 Dopo la creazione di C++ `CBitmapButton` dell'oggetto, chiamare [CButton::Create](../../mfc/reference/cbutton-class.md#create) per creare il controllo pulsante di Windows e associarlo a di `CBitmapButton` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog&#57;](../../mfc/codesnippet/cpp/cbitmapbutton-class_2.cpp)]  
  
##  <a name="a-nameloadbitmapsa--cbitmapbuttonloadbitmaps"></a><a name="loadbitmaps"></a>CBitmapButton::LoadBitmaps  
 Utilizzare questa funzione quando si desidera caricare immagini bitmap identificate i nomi delle risorse o i numeri ID, oppure quando non è possibile utilizzare il `AutoLoad` funziona poiché, ad esempio, si sta creando un pulsante bitmap che non fa parte di una finestra di dialogo.  
  
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
 Punta alla stringa di terminazione null che contiene il nome della bitmap per normale di un pulsante bitmap o "backup" dello stato. Obbligatorio.  
  
 *lpszBitmapResourceSel*  
 Punta alla stringa di terminazione null che contiene il nome della bitmap per un pulsante bitmap selezionato o "disattivato". Potrebbe essere **NULL**.  
  
 *lpszBitmapResourceFocus*  
 Punta alla stringa di terminazione null che contiene il nome della bitmap per un pulsante bitmap con stato attivo dello stato. Potrebbe essere **NULL**.  
  
 *lpszBitmapResourceDisabled*  
 Punta alla stringa di terminazione null che contiene il nome della bitmap per un pulsante bitmap stato disabilitato. Potrebbe essere **NULL**.  
  
 *nIDBitmapResource*  
 Specifica il numero di ID risorsa della risorsa bitmap per normale di un pulsante bitmap o "backup" dello stato. Obbligatorio.  
  
 *nIDBitmapResourceSel*  
 Specifica il numero di ID risorsa della risorsa bitmap per un pulsante bitmap selezionato o "disattivato". Può essere 0.  
  
 *nIDBitmapResourceFocus*  
 Specifica il numero di ID risorsa della risorsa bitmap per lo stato attivo del pulsante bitmap. Può essere 0.  
  
 *nIDBitmapResourceDisabled*  
 Specifica il numero di ID risorsa della risorsa bitmap per lo stato disabilitato di un pulsante bitmap. Può essere 0.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog&#58;](../../mfc/codesnippet/cpp/cbitmapbutton-class_3.cpp)]  
  
##  <a name="a-namesizetocontenta--cbitmapbuttonsizetocontent"></a><a name="sizetocontent"></a>CBitmapButton::SizeToContent  
 Chiamare questa funzione per ridimensionare un pulsante bitmap per le dimensioni della bitmap.  
  
```  
void SizeToContent();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog&#59;](../../mfc/codesnippet/cpp/cbitmapbutton-class_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio CTRLTEST](../../visual-cpp-samples.md)   
 [CButton (classe)](../../mfc/reference/cbutton-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)


