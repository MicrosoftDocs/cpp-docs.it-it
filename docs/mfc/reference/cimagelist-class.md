---
title: CImageList (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CImageList
- AFXCMN/CImageList
- AFXCMN/CImageList::CImageList
- AFXCMN/CImageList::Add
- AFXCMN/CImageList::Attach
- AFXCMN/CImageList::BeginDrag
- AFXCMN/CImageList::Copy
- AFXCMN/CImageList::Create
- AFXCMN/CImageList::DeleteImageList
- AFXCMN/CImageList::DeleteTempMap
- AFXCMN/CImageList::Detach
- AFXCMN/CImageList::DragEnter
- AFXCMN/CImageList::DragLeave
- AFXCMN/CImageList::DragMove
- AFXCMN/CImageList::DragShowNolock
- AFXCMN/CImageList::Draw
- AFXCMN/CImageList::DrawEx
- AFXCMN/CImageList::DrawIndirect
- AFXCMN/CImageList::EndDrag
- AFXCMN/CImageList::ExtractIcon
- AFXCMN/CImageList::FromHandle
- AFXCMN/CImageList::FromHandlePermanent
- AFXCMN/CImageList::GetBkColor
- AFXCMN/CImageList::GetDragImage
- AFXCMN/CImageList::GetImageCount
- AFXCMN/CImageList::GetImageInfo
- AFXCMN/CImageList::GetSafeHandle
- AFXCMN/CImageList::Read
- AFXCMN/CImageList::Remove
- AFXCMN/CImageList::Replace
- AFXCMN/CImageList::SetBkColor
- AFXCMN/CImageList::SetDragCursorImage
- AFXCMN/CImageList::SetImageCount
- AFXCMN/CImageList::SetOverlayImage
- AFXCMN/CImageList::Write
- AFXCMN/CImageList::m_hImageList
dev_langs:
- C++
helpviewer_keywords:
- CImageList [MFC], CImageList
- CImageList [MFC], Add
- CImageList [MFC], Attach
- CImageList [MFC], BeginDrag
- CImageList [MFC], Copy
- CImageList [MFC], Create
- CImageList [MFC], DeleteImageList
- CImageList [MFC], DeleteTempMap
- CImageList [MFC], Detach
- CImageList [MFC], DragEnter
- CImageList [MFC], DragLeave
- CImageList [MFC], DragMove
- CImageList [MFC], DragShowNolock
- CImageList [MFC], Draw
- CImageList [MFC], DrawEx
- CImageList [MFC], DrawIndirect
- CImageList [MFC], EndDrag
- CImageList [MFC], ExtractIcon
- CImageList [MFC], FromHandle
- CImageList [MFC], FromHandlePermanent
- CImageList [MFC], GetBkColor
- CImageList [MFC], GetDragImage
- CImageList [MFC], GetImageCount
- CImageList [MFC], GetImageInfo
- CImageList [MFC], GetSafeHandle
- CImageList [MFC], Read
- CImageList [MFC], Remove
- CImageList [MFC], Replace
- CImageList [MFC], SetBkColor
- CImageList [MFC], SetDragCursorImage
- CImageList [MFC], SetImageCount
- CImageList [MFC], SetOverlayImage
- CImageList [MFC], Write
- CImageList [MFC], m_hImageList
ms.assetid: b6d1a704-1c82-4548-8a8f-77972adc98a5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 54804ff4c6b2410aa47ea4d7cf5f5d3ab48316f9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cimagelist-class"></a>CImageList (classe)
Fornisce la funzionalità del controllo elenco immagini comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CImageList : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImageList::CImageList](#cimagelist)|Costruisce un oggetto `CImageList`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImageList::Add](#add)|Aggiunge un'immagine o le immagini per un elenco di immagini.|  
|[CImageList::Attach](#attach)|Associa un elenco di immagini da un `CImageList` oggetto.|  
|[CImageList::BeginDrag](#begindrag)|Inizia a trascinare un'immagine.|  
|[CImageList::Copy](#copy)|Copia un'immagine all'interno di un `CImageList` oggetto.|  
|[CImageList:: Create](#create)|Inizializza un elenco di immagini e lo collega a un `CImageList` oggetto.|  
|[CImageList::DeleteImageList](#deleteimagelist)|Elimina un elenco di immagini.|  
|[CImageList::DeleteTempMap](#deletetempmap)|Chiamato dal [CWinApp](../../mfc/reference/cwinapp-class.md) gestore tempo di inattività per eliminare qualsiasi temporaneo `CImageList` oggetto creato da `FromHandle`.|  
|[CImageList::Detach](#detach)|Rimuove un oggetto elenco immagini da un `CImageList` dell'oggetto e restituisce un handle per un elenco di immagini.|  
|[CImageList::DragEnter](#dragenter)|Blocca gli aggiornamenti durante un'operazione di trascinamento e visualizza l'immagine di trascinamento in una posizione specificata.|  
|[CImageList::DragLeave](#dragleave)|Sblocca la finestra e nasconde l'immagine di trascinamento in modo che la finestra può essere aggiornata.|  
|[CImageList::DragMove](#dragmove)|Sposta l'immagine che viene trascinato durante un'operazione di trascinamento e rilascio.|  
|[CImageList::DragShowNolock](#dragshownolock)|Mostra o nasconde l'immagine di trascinamento durante un'operazione di trascinamento, senza bloccare la finestra.|  
|[CImageList:: Draw](#draw)|Disegna l'immagine che viene trascinato durante un'operazione di trascinamento e rilascio.|  
|[CImageList::DrawEx](#drawex)|Disegna un elemento dell'elenco immagini nel contesto di dispositivo specificato. La funzione utilizza lo stile di disegno specificato e unisce l'immagine con il colore specificato.|  
|[CImageList::DrawIndirect](#drawindirect)|Disegna un'immagine da un elenco di immagini.|  
|[CImageList::EndDrag](#enddrag)|Termina un'operazione di trascinamento.|  
|[CImageList::ExtractIcon](#extracticon)|Crea un'icona in base a un'immagine e una maschera in un elenco di immagini.|  
|[CImageList::FromHandle](#fromhandle)|Restituisce un puntatore a un `CImageList` oggetto quando viene specificato un handle per un elenco di immagini. Se all'handle non è collegato un oggetto `CImageList`, viene creato e collegato un oggetto `CImageList` temporaneo.|  
|[CImageList::FromHandlePermanent](#fromhandlepermanent)|Restituisce un puntatore a un `CImageList` oggetto quando viene specificato un handle per un elenco di immagini. Se un `CImageList` oggetto non è connesso all'handle **NULL** viene restituito.|  
|[CImageList::GetBkColor](#getbkcolor)|Recupera il colore di sfondo corrente per un elenco di immagini.|  
|[CImageList::GetDragImage](#getdragimage)|Ottiene l'elenco di immagini temporanea che viene utilizzato per il trascinamento.|  
|[CImageList::GetImageCount](#getimagecount)|Recupera il numero di immagini in un elenco di immagini.|  
|[CImageList::GetImageInfo](#getimageinfo)|Recupera le informazioni relative a un'immagine.|  
|[CImageList::GetSafeHandle](#getsafehandle)|Recupera **m_hImageList**.|  
|[CImageList::Read](#read)|Legge un elenco di immagini da un archivio.|  
|[CImageList::Remove](#remove)|Rimuove un'immagine da un elenco di immagini.|  
|[CImageList::Replace](#replace)|Sostituisce un'immagine in un elenco di immagini con una nuova immagine.|  
|[CImageList::SetBkColor](#setbkcolor)|Imposta il colore di sfondo per un elenco di immagini.|  
|[CImageList::SetDragCursorImage](#setdragcursorimage)|Crea una nuova immagine di trascinamento.|  
|[CImageList::SetImageCount](#setimagecount)|Reimposta il numero di immagini in un elenco di immagini.|  
|[CImageList:: SetOverlayImage](#setoverlayimage)|Aggiunge l'indice in base zero di un'immagine all'elenco di immagini da utilizzare come maschere di sovrapposizione.|  
|[CImageList::Write](#write)|Scrive un elenco di immagini in un archivio.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImageList::operator HIMAGELIST](#operator_himagelist)|Restituisce il `HIMAGELIST` collegato il `CImageList`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CImageList::m_hImageList](#m_himagelist)|Handle che contiene l'elenco di immagini associato a questo oggetto.|  
  
## <a name="remarks"></a>Note  
 Un "elenco di immagini" è una raccolta di immagini con stesse dimensioni, ognuno dei quali può fare riferimento al relativo indice in base zero. Elenchi di immagini vengono utilizzati per gestire in modo efficace grandi set di icone o bitmap. Tutte le immagini in un elenco immagini sono contenute in una singola, ampia bitmap in formato dispositivo dello schermo. Un elenco di immagini può includere anche una bitmap monocromatica contenente maschere utilizzate per disegnare immagini in modo trasparente (stile icona). L'applicazione di Microsoft Win32 API (API) fornisce funzioni di elenco di immagini che consentono di disegnare immagini, creare e distruggere elenchi di immagini, aggiungere e rimuovere le immagini, sostituire le immagini, immagini di tipo merge e trascinare le immagini.  
  
 Questo controllo (e pertanto la `CImageList` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Per ulteriori informazioni sull'utilizzo `CImageList`, vedere [controlli](../../mfc/controls-mfc.md) e [utilizzo di CImageList](../../mfc/using-cimagelist.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CImageList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="add"></a>  CImageList::Add  
 Chiamare questa funzione per aggiungere una o più immagini o un'icona per un elenco di immagini.  
  
```  
int Add(
    CBitmap* pbmImage,  
    CBitmap* pbmMask);

 
int Add(
    CBitmap* pbmImage,  
    COLORREF crMask);  
  
int Add(HICON hIcon);
```  
  
### <a name="parameters"></a>Parametri  
 `pbmImage`  
 Puntatore alla bitmap contenente le immagini. Il numero di immagini è dedotto dalla larghezza della bitmap.  
  
 `pbmMask`  
 Puntatore alla bitmap contenente la maschera. Se nessun filtro viene utilizzato con l'elenco di immagini, questo parametro viene ignorato.  
  
 `crMask`  
 Colore utilizzato per generare la maschera. Ciascun pixel di questo colore nella bitmap specificata viene impostato sul nero e il bit corrispondente nella maschera è impostato su uno.  
  
 `hIcon`  
 Handle dell'icona che contiene la bitmap e il filtro per la nuova immagine.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero della prima immagine nuovo se ha esito positivo. in caso contrario - 1.  
  
### <a name="remarks"></a>Note  
 Si è responsabile del rilascio di handle di icona quando al suo completamento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#1](../../mfc/reference/codesnippet/cpp/cimagelist-class_1.cpp)]  
  
##  <a name="attach"></a>  CImageList::Attach  
 Chiamare questa funzione per associare un elenco di immagini per un `CImageList` oggetto.  
  
```  
BOOL Attach(HIMAGELIST hImageList);
```  
  
### <a name="parameters"></a>Parametri  
 `hImageList`  
 Handle per un oggetto elenco immagini.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'allegato è stata completata. in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#2](../../mfc/reference/codesnippet/cpp/cimagelist-class_2.cpp)]  
  
##  <a name="begindrag"></a>  CImageList::BeginDrag  
 Chiamare questa funzione per iniziare a trascinare un'immagine.  
  
```  
BOOL BeginDrag(
    int nImage,  
    CPoint ptHotSpot);
```  
  
### <a name="parameters"></a>Parametri  
 `nImage`  
 Indice in base zero dell'immagine da trascinare.  
  
 `ptHotSpot`  
 Coordinate della posizione iniziale di trascinamento (in genere, la posizione del cursore). Le coordinate sono relative nell'angolo superiore sinistro dell'immagine.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione crea un elenco di immagini temporaneo che viene utilizzato per il trascinamento. L'immagine combina l'immagine specificata e la maschera con il cursore corrente. In risposta a successive `WM_MOUSEMOVE` messaggi, è possibile spostare l'immagine di trascinamento utilizzando il `DragMove` funzione membro. Per terminare l'operazione di trascinamento, è possibile utilizzare il `EndDrag` funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#3](../../mfc/reference/codesnippet/cpp/cimagelist-class_3.cpp)]  
  
##  <a name="cimagelist"></a>  CImageList::CImageList  
 Costruisce un oggetto `CImageList`.  
  
```  
CImageList();
```  
  
##  <a name="copy"></a>  CImageList::Copy  
 Questa funzione membro implementa il comportamento della funzione Win32 [ImageList_Copy](http://msdn.microsoft.com/library/windows/desktop/bb761520), come descritto in Windows SDK.  
  
```  
BOOL Copy(
    int iDst,  
    int iSrc,  
    UINT uFlags = ILCF_MOVE);

 
BOOL Copy(
    int iDst,  
    CImageList* pSrc,  
    int iSrc,  
    UINT uFlags = ILCF_MOVE);
```  
  
### <a name="parameters"></a>Parametri  
 *iDst*  
 Indice in base zero dell'immagine da utilizzare come destinazione dell'operazione di copia.  
  
 `iSrc`  
 Indice in base zero dell'immagine da utilizzare come origine dell'operazione di copia.  
  
 `uFlags`  
 Il valore di flag di bit che specifica il tipo di operazione di copia da eseguire. Questo parametro può essere uno dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|`ILCF_MOVE`|Immagine di origine viene copiato all'indice dell'immagine di destinazione. Questa operazione comporta più istanze di una determinata immagine. Il valore predefinito è `ILCF_MOVE`.|  
|`ILCF_SWAP`|Le immagini di origine e destinazione scambiano le posizioni all'interno dell'elenco immagini.|  
  
 `pSrc`  
 Un puntatore a un `CImageList` oggetto che rappresenta la destinazione dell'operazione di copia.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#6](../../mfc/reference/codesnippet/cpp/cimagelist-class_4.cpp)]  
  
##  <a name="create"></a>  CImageList:: Create  
 Inizializza un elenco di immagini e lo collega a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.  
  
```  
BOOL Create(
    int cx,  
    int cy,  
    UINT nFlags,  
    int nInitial,  
    int nGrow);

 
BOOL Create(
    UINT nBitmapID,  
    int cx,  
    int nGrow,  
    COLORREF crMask);

 
BOOL Create(
    LPCTSTR lpszBitmapID,  
    int cx,  
    int nGrow,  
    COLORREF crMask);

 
BOOL Create(
    CImageList& imagelist1,  
    int nImage1,  
    CImageList& imagelist2,  
    int nImage2,  
    int dx,  
    int dy);  
  
BOOL Create(CImageList* pImageList);
```  
  
### <a name="parameters"></a>Parametri  
 `cx`  
 Dimensioni di ogni immagine, in pixel.  
  
 `cy`  
 Dimensioni di ogni immagine, in pixel.  
  
 `nFlags`  
 Specifica il tipo dell'elenco immagini da creare. Questo parametro può essere una combinazione dei valori seguenti, ma può includere solo uno del `ILC_COLOR` valori.  
  
|Valore|Significato|  
|-----------|-------------|  
|`ILC_COLOR`|Usare il comportamento predefinito, se nessuno degli altri `ILC_COLOR`* flag sono specificati. In genere, il valore predefinito è `ILC_COLOR4`; ma per i driver video precedente, il valore predefinito è `ILC_COLORDDB`.|  
|`ILC_COLOR4`|Utilizzare una sezione di bitmap indipendente dalla periferica (DIB) 4 bit (16 colori) come mappa di bit per l'elenco di immagini.|  
|`ILC_COLOR8`|Utilizzare una sezione DIB 8 bit. I colori utilizzati per la tabella di colore sono gli stessi colori come la tavolozza dei mezzitoni.|  
|`ILC_COLOR16`|Utilizzare i 16 bit (32/64 KB colore) sezione DIB.|  
|`ILC_COLOR24`|Utilizzare una sezione DIB 24 bit.|  
|`ILC_COLOR32`|Utilizzare una sezione DIB 32 bit.|  
|`ILC_COLORDDB`|Utilizzare una bitmap dipendente dal dispositivo.|  
|`ILC_MASK`|Utilizza una maschera. L'elenco di immagini contiene due bitmap, uno dei quali è una bitmap monocromatica utilizzata come una maschera. Se questo valore non è incluso, l'elenco di immagini contiene solo una bitmap. Vedere [creazione di immagini da un elenco di immagini](../../mfc/drawing-images-from-an-image-list.md) per ulteriori informazioni sulle immagini mascherate.|  
  
 `nInitial`  
 Numero di immagini che inizialmente contiene l'elenco di immagini.  
  
 `nGrow`  
 Numero di immagini mediante il quale l'elenco di immagini può raggiungere quando è necessario ridimensionare l'elenco per liberare spazio per nuove immagini di sistema. Questo parametro rappresenta il numero di nuove immagini che può contenere l'elenco di immagine ridimensionata.  
  
 `nBitmapID`  
 ID risorsa della bitmap deve essere associato con l'elenco di immagini.  
  
 `crMask`  
 Colore utilizzato per generare una maschera. Ciascun pixel di questo colore nella bitmap specificata viene impostato sul nero e il bit corrispondente nella maschera è impostato su uno.  
  
 `lpszBitmapID`  
 Stringa contenente gli ID risorsa delle immagini.  
  
 `imagelist1`  
 Riferimento a un oggetto `CImageList`.  
  
 `nImage1`  
 Indice della prima immagine esistente.  
  
 `imagelist2`  
 Riferimento a un oggetto `CImageList`.  
  
 `nImage2`  
 Indice della seconda immagine esistente.  
  
 `dx`  
 Offset dell'asse x della seconda immagine in relazione alla prima immagine, in pixel.  
  
 `dy`  
 Offset dell'asse y dell'immagine di secondo in relazione alla prima immagine, in pixel.  
  
 `pImageList`  
 Un puntatore a un `CImageList` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CImageList` in due passaggi. In primo luogo, chiamare il costruttore, quindi `Create`, che crea l'elenco di immagini e lo collega al `CImageList` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#7](../../mfc/reference/codesnippet/cpp/cimagelist-class_5.cpp)]  
  
##  <a name="deleteimagelist"></a>  CImageList::DeleteImageList  
 Chiamare questa funzione per eliminare un elenco di immagini.  
  
```  
BOOL DeleteImageList();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#8](../../mfc/reference/codesnippet/cpp/cimagelist-class_6.cpp)]  
  
##  <a name="deletetempmap"></a>  CImageList::DeleteTempMap  
 Chiamato automaticamente dal `CWinApp` gestore tempo di inattività, `DeleteTempMap` elimina qualsiasi temporaneo `CImageList` degli oggetti creati da [FromHandle](#fromhandle), ma non elimina tutti gli handle ( `hImageList`) temporaneamente associata con il **ImageList** oggetti.  
  
```  
static void PASCAL DeleteTempMap();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#9](../../mfc/reference/codesnippet/cpp/cimagelist-class_7.cpp)]  
  
##  <a name="detach"></a>  CImageList::Detach  
 Chiamare questa funzione per scollegare un oggetto elenco immagini da un `CImageList` oggetto.  
  
```  
HIMAGELIST Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per un oggetto elenco immagini.  
  
### <a name="remarks"></a>Note  
 Questa funzione restituisce un handle all'oggetto elenco immagini.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CImageList::Attach](#attach).  
  
##  <a name="dragenter"></a>  CImageList::DragEnter  
 Durante un'operazione di trascinamento, blocca gli aggiornamenti alla finestra specificata da `pWndLock` e visualizza l'immagine di trascinamento in corrispondenza della posizione specificata da `point`.  
  
```  
static BOOL PASCAL DragEnter(
    CWnd* pWndLock,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 `pWndLock`  
 Puntatore alla finestra proprietaria dell'immagine di trascinamento.  
  
 `point`  
 Posizione in cui si desidera visualizzare l'immagine di trascinamento. Le coordinate sono rispetto all'angolo superiore sinistro della finestra (area non client).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le coordinate sono relative angolo superiore sinistro della finestra, pertanto è necessario tenere conto della larghezza degli elementi della finestra, ad esempio il bordo, sulla barra del titolo e la barra dei menu, quando si specificano le coordinate.  
  
 Se `pWndLock` è **NULL**, questa funzione Disegna l'immagine nel contesto di visualizzazione associato alla finestra del desktop e le coordinate sono relativamente all'angolo superiore sinistro della schermata.  
  
 Questa funzione Blocca tutti gli aggiornamenti per la finestra specificata durante l'operazione di trascinamento. Se è necessario eseguire operazioni di disegno durante un'operazione di trascinamento, ad esempio evidenziare la destinazione di un'operazione di trascinamento e rilascio, è possibile nascondere temporaneamente l'immagine trascinata utilizzando il [CImageList::DragLeave](#dragleave) (funzione).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CImageList::BeginDrag](#begindrag).  
  
##  <a name="dragleave"></a>  CImageList::DragLeave  
 Sblocca la finestra specificata da `pWndLock` e nasconde l'immagine di trascinamento, consentendo la finestra da aggiornare.  
  
```  
static BOOL PASCAL DragLeave(CWnd* pWndLock);
```  
  
### <a name="parameters"></a>Parametri  
 `pWndLock`  
 Puntatore alla finestra proprietaria dell'immagine di trascinamento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CImageList::EndDrag](#enddrag).  
  
##  <a name="dragmove"></a>  CImageList::DragMove  
 Chiamare questa funzione per spostare l'immagine che viene trascinato durante un'operazione di trascinamento e rilascio.  
  
```  
static BOOL PASCAL DragMove(CPoint pt);
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 Nuova posizione di trascinamento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata in genere in risposta a un `WM_MOUSEMOVE` messaggio. Per iniziare un'operazione di trascinamento, utilizzare il `BeginDrag` funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#4](../../mfc/reference/codesnippet/cpp/cimagelist-class_8.cpp)]  
  
##  <a name="dragshownolock"></a>  CImageList::DragShowNolock  
 Mostra o nasconde l'immagine di trascinamento durante un'operazione di trascinamento, senza bloccare la finestra.  
  
```  
static BOOL PASCAL DragShowNolock(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 `bShow`  
 Specifica se l'immagine di trascinamento è da visualizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il [CImageList::DragEnter](#dragenter) funzione Blocca tutti gli aggiornamenti per la finestra durante un'operazione di trascinamento. Questa funzione, tuttavia, non bloccare finestra.  
  
##  <a name="draw"></a>  CImageList:: Draw  
 Chiamare questa funzione per disegnare l'immagine che viene trascinato durante un'operazione di trascinamento e rilascio.  
  
```  
BOOL Draw(
    CDC* pDC,  
    int nImage,  
    POINT pt,  
    UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore al contesto di dispositivo di destinazione.  
  
 `nImage`  
 Indice in base zero dell'immagine da disegnare.  
  
 `pt`  
 Posizione in cui disegnare all'interno del contesto di dispositivo specificato.  
  
 `nStyle`  
 Flag che specifica lo stile di disegno. Può trattarsi di uno o più dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|`ILD_BLEND25`, **ILD_FOCUS**|Disegna l'immagine, sfumatura del 25% con il colore di sistema. Questo valore non ha alcun effetto se l'elenco di immagini non contiene una maschera.|  
|`ILD_BLEND50`, **ILD_SELECTED**, **ILD_BLEND**|Disegna l'immagine, sfumatura al 50% con il colore di sistema. Questo valore non ha alcun effetto se l'elenco di immagini non contiene una maschera.|  
|**ILD_MASK**|Disegna la maschera.|  
|`ILD_NORMAL`|Disegna l'immagine usando il colore di sfondo per l'elenco di immagini. Se il colore di sfondo è il `CLR_NONE` valore, l'immagine viene disegnato in modo trasparente mediante la maschera.|  
|`ILD_TRANSPARENT`|Disegna l'immagine in modo trasparente usando la maschera, indipendentemente dal colore di sfondo.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CImageList:: SetOverlayImage](#setoverlayimage).  
  
##  <a name="drawex"></a>  CImageList::DrawEx  
 Disegna un elemento dell'elenco immagini nel contesto di dispositivo specificato.  
  
```  
BOOL DrawEx(
    CDC* pDC,  
    int nImage,  
    POINT pt,  
    SIZE sz,  
    COLORREF clrBk,  
    COLORREF clrFg,  
    UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore al contesto di dispositivo di destinazione.  
  
 `nImage`  
 Indice in base zero dell'immagine da disegnare.  
  
 `pt`  
 Posizione in cui disegnare all'interno del contesto di dispositivo specificato.  
  
 `sz`  
 Dimensioni della parte dell'immagine da disegnare rispetto all'angolo superiore sinistro dell'immagine. Vedere `dx` e *dy* in [ImageList_DrawEx](http://msdn.microsoft.com/library/windows/desktop/bb761536) in Windows SDK.  
  
 *clrBk*  
 Colore di sfondo dell'immagine. Vedere *rgbBk* in [ImageList_DrawEx](http://msdn.microsoft.com/library/windows/desktop/bb761536) in Windows SDK.  
  
 *clrFg*  
 Colore di primo piano dell'immagine. Vedere *rgbFg* in [ImageList_DrawEx](http://msdn.microsoft.com/library/windows/desktop/bb761536) in Windows SDK.  
  
 `nStyle`  
 Flag che specifica lo stile di disegno. Vedere *fStyle* in [ImageList_DrawEx](http://msdn.microsoft.com/library/windows/desktop/bb761536) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La funzione utilizza lo stile di disegno specificato e unisce l'immagine con il colore specificato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#10](../../mfc/reference/codesnippet/cpp/cimagelist-class_9.cpp)]  
  
##  <a name="drawindirect"></a>  CImageList::DrawIndirect  
 Chiamare questa funzione membro per disegnare un'immagine da un elenco di immagini.  
  
```  
BOOL DrawIndirect(IMAGELISTDRAWPARAMS* pimldp);

 
BOOL DrawIndirect(
    CDC* pDC,  
    int nImage,  
    POINT pt,  
    SIZE sz,  
    POINT ptOrigin,  
    UINT fStyle = ILD_NORMAL,  
    DWORD dwRop = SRCCOPY,  
    COLORREF rgbBack = CLR_DEFAULT,  
    COLORREF rgbFore = CLR_DEFAULT,  
    DWORD fState = ILS_NORMAL,  
    DWORD Frame = 0,  
    COLORREF crEffect = CLR_DEFAULT);
```  
  
### <a name="parameters"></a>Parametri  
 *pimldp*  
 Un puntatore a un [IMAGELISTDRAWPARAMS](http://msdn.microsoft.com/library/windows/desktop/bb761395) struttura che contiene informazioni sull'operazione di disegno.  
  
 `pDC`  
 Puntatore al contesto di dispositivo di destinazione. È necessario eliminare questo [CDC](../../mfc/reference/cdc-class.md) oggetto una volta con esso.  
  
 `nImage`  
 Indice in base zero dell'immagine da disegnare.  
  
 `pt`  
 Oggetto [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che contiene le coordinate x e y in cui verrà disegnata l'immagine.  
  
 `sz`  
 Oggetto [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura che indica la dimensione dell'immagine da disegnare.  
  
 *ptOrigin*  
 Oggetto [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che contiene le coordinate x e y che specifica l'angolo superiore sinistro dell'operazione di disegno rispetto all'immagine stessa. Non vengono disegnate pixel dell'immagine che si trovano a sinistra della coordinata x e versioni successive la coordinata y.  
  
 `fStyle`  
 Flag che specifica lo stile di disegno e, facoltativamente, l'immagine sovrapposta. Vedere la sezione Osservazioni per informazioni sull'immagine di sovrapposizione. L'implementazione predefinita MFC, `ILD_NORMAL`, disegna l'immagine usando il colore di sfondo per l'elenco di immagini. Se il colore di sfondo è il `CLR_NONE` valore, l'immagine viene disegnato in modo trasparente utilizzando una maschera.  
  
 Gli altri stili possibili sono descritti nel **fStyle** appartenente il [IMAGELISTDRAWPARAMS](http://msdn.microsoft.com/library/windows/desktop/bb761395) struttura.  
  
 *dwRop*  
 Valore che specifica un codice di operazione raster. Questi codici di definiscono come i dati di colore per il rettangolo di origine vengono combinati con i dati di colore per il rettangolo di destinazione ottenere il colore finale. Implementazione, predefinita MFC **SRCCOPY**, copia il rettangolo di origine direttamente al rettangolo di destinazione. Questo parametro viene ignorato se la `fStyle` parametro non include il **ILD_ROP** flag.  
  
 Altri possibili valori sono descritti sotto il **dwRop** membro del [IMAGELISTDRAWPARAMS](http://msdn.microsoft.com/library/windows/desktop/bb761395) struttura.  
  
 *rgbBack*  
 Il colore di sfondo di immagine, per impostazione predefinita `CLR_DEFAULT`. Questo parametro può essere un valore RGB definito dall'applicazione o uno dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|`CLR_DEFAULT`|Colore di sfondo predefinito. Viene disegnata l'immagine utilizzando il colore di sfondo elenco immagini.|  
|`CLR_NONE`|Nessun colore di sfondo. Viene disegnata l'immagine in modo trasparente.|  
  
 *rgbFore*  
 Immagine di colore di primo piano, per impostazione predefinita `CLR_DEFAULT`. Questo parametro può essere un valore RGB definito dall'applicazione o uno dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|`CLR_DEFAULT`|Colore di primo piano predefinito. Viene disegnata l'immagine utilizzando il colore di sistema come il colore primo piano.|  
|`CLR_NONE`|Nessun colore di blend. L'immagine viene sfumato con il colore del contesto di dispositivo di destinazione.|  
  
 Questo parametro viene utilizzato solo se `fStyle` include il `ILD_BLEND25` o `ILD_BLEND50` flag.  
  
 *fState*  
 Flag che specifica lo stato di disegno. Questo membro può contenere uno o più flag di stato di elenco immagini.  
  
 *Frame*  
 Influisce sul comportamento di effetti saturate e fusione alfa.  
  
 Se usato con **ILS_SATURATE**, questo membro contiene il valore che viene aggiunto a ciascun componente di tre RGB per ciascun pixel nell'icona di colore.  
  
 Se usato con **ILS_APLHA**, questo membro contiene il valore per il canale alfa. Questo valore può essere compreso tra 0 e 255, dove 0 rappresenta completamente trasparente e 255 completamente opaco.  
  
 *crEffect*  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore utilizzato per gli effetti alone e shadow.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se l'immagine viene disegnata; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Utilizzare la prima versione, se si desidera compilare manualmente la struttura di Win32. Utilizzare la seconda versione, se si desidera usufruire di uno o più argomenti predefiniti di MFC o evitare di gestione della struttura.  
  
 Un'immagine sovrapposta è un'immagine che viene disegnata sopra l'immagine primaria, specificata in questa funzione membro di `nImage` parametro. Disegnare una maschera di sovrapposizione utilizzando il [disegnare](#draw) funzione membro con l'indice in base uno della maschera di sovrapposizione specificata utilizzando il [INDEXTOOVERLAYMASK](http://msdn.microsoft.com/library/windows/desktop/bb761408) (macro).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#11](../../mfc/reference/codesnippet/cpp/cimagelist-class_10.cpp)]  
  
##  <a name="enddrag"></a>  CImageList::EndDrag  
 Chiamare questa funzione per terminare un'operazione di trascinamento.  
  
```  
static void PASCAL EndDrag();
```  
  
### <a name="remarks"></a>Note  
 Per iniziare un'operazione di trascinamento, utilizzare il `BeginDrag` funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#5](../../mfc/reference/codesnippet/cpp/cimagelist-class_11.cpp)]  
  
##  <a name="extracticon"></a>  CImageList::ExtractIcon  
 Chiamare questa funzione per creare un'icona in base a un'immagine e la maschera correlata in un elenco di immagini.  
  
```  
HICON ExtractIcon(int nImage);
```  
  
### <a name="parameters"></a>Parametri  
 `nImage`  
 Indice in base zero dell'immagine.  
  
### <a name="return-value"></a>Valore restituito  
 Handle dell'icona se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questo metodo si basa sul comportamento del [ImageList_ExtractIcon](http://msdn.microsoft.com/library/windows/desktop/bb761401) (macro) per creare l'icona. Consultare la [ImageList_ExtractIcon](http://msdn.microsoft.com/library/windows/desktop/bb761401) (macro) per ulteriori informazioni sulla creazione di icone e pulizia.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#12](../../mfc/reference/codesnippet/cpp/cimagelist-class_12.cpp)]  
  
##  <a name="fromhandle"></a>  CImageList::FromHandle  
 Restituisce un puntatore a un `CImageList` oggetto quando viene specificato un handle per un elenco di immagini.  
  
```  
static CImageList* PASCAL FromHandle(HIMAGELIST hImageList);
```  
  
### <a name="parameters"></a>Parametri  
 `hImageList`  
 Specifica l'elenco di immagini.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CImageList` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Se un `CImageList` non è già collegato all'handle di una password temporanea `CImageList` oggetto viene creato e collegato. Questo temporaneo `CImageList` oggetto è valido solo finché la volta successiva che l'applicazione è il tempo di inattività nel relativo ciclo di eventi, nel qual caso vengono eliminati tutti gli oggetti temporanei.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#13](../../mfc/reference/codesnippet/cpp/cimagelist-class_13.cpp)]  
  
##  <a name="fromhandlepermanent"></a>  CImageList::FromHandlePermanent  
 Restituisce un puntatore a un `CImageList` oggetto quando viene specificato un handle per un elenco di immagini.  
  
```  
static CImageList* PASCAL FromHandlePermanent(HIMAGELIST hImageList);
```  
  
### <a name="parameters"></a>Parametri  
 `hImageList`  
 Specifica l'elenco di immagini.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CImageList` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Se un `CImageList` oggetto non è connesso all'handle **NULL** viene restituito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#14](../../mfc/reference/codesnippet/cpp/cimagelist-class_14.cpp)]  
  
##  <a name="getbkcolor"></a>  CImageList::GetBkColor  
 Chiamare questa funzione per recuperare il colore di sfondo corrente per un elenco di immagini.  
  
```  
COLORREF GetBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore del colore RGB di `CImageList` colore di sfondo dell'oggetto.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CImageList::SetBkColor](#setbkcolor).  
  
##  <a name="getdragimage"></a>  CImageList::GetDragImage  
 Ottiene l'elenco di immagini temporanea che viene utilizzato per il trascinamento.  
  
```  
static CImageList* PASCAL GetDragImage(
    LPPOINT lpPoint,  
    LPPOINT lpPointHotSpot);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoint`  
 Indirizzo di un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che riceve corrente trascinare posizione.  
  
 *lpPointHotSpot*  
 Indirizzo di un **punto** struttura che riceve l'offset dell'immagine di trascinamento rispetto alla posizione di trascinamento.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un puntatore all'immagine temporanea elenco che viene utilizzato per il trascinamento; in caso contrario, **NULL**.  
  
##  <a name="getimagecount"></a>  CImageList::GetImageCount  
 Chiamare questa funzione per recuperare il numero di immagini in un elenco di immagini.  
  
```  
int GetImageCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di immagini.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CImageList::ExtractIcon](#extracticon).  
  
##  <a name="getimageinfo"></a>  CImageList::GetImageInfo  
 Chiamare questa funzione per recuperare le informazioni relative a un'immagine.  
  
```  
BOOL GetImageInfo(
    int nImage,  
    IMAGEINFO* pImageInfo) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nImage`  
 Indice in base zero dell'immagine.  
  
 *pImageInfo*  
 Puntatore a un [IMAGEINFO](http://msdn.microsoft.com/library/windows/desktop/bb761393) struttura che riceve le informazioni sull'immagine. Le informazioni contenute in questa struttura consente di modificare direttamente le bitmap per l'immagine.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `IMAGEINFO` struttura contiene informazioni su un'immagine in un elenco di immagini.  
  
##  <a name="getsafehandle"></a>  CImageList::GetSafeHandle  
 Chiamare questa funzione per recuperare il **m_hImageList** (membro dati).  
  
```  
HIMAGELIST GetSafeHandle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle all'elenco di immagini associato; in caso contrario **NULL** se non è collegato alcun oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#15](../../mfc/reference/codesnippet/cpp/cimagelist-class_15.cpp)]  
  
##  <a name="m_himagelist"></a>  CImageList::m_hImageList  
 Handle dell'elenco immagini collegato a questo oggetto.  
  
 **M_hImageList HIMAGELIST;**  
  
### <a name="remarks"></a>Note  
 Il **m_hImageList** (membro dati) è una variabile pubblica di tipo `HIMAGELIST`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#23](../../mfc/reference/codesnippet/cpp/cimagelist-class_16.cpp)]  
  
##  <a name="operator_himagelist"></a>  CImageList::operator HIMAGELIST  
 Utilizzare questo operatore per ottenere l'handle di allegato il `CImageList` oggetto.  
  
```  
operator HIMAGELIST() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un handle all'elenco di immagini rappresentata la `CImageList` oggetto; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questo è un operatore di cast, che supporta l'utilizzo diretto di un `HIMAGELIST` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#16](../../mfc/reference/codesnippet/cpp/cimagelist-class_17.cpp)]  
  
##  <a name="read"></a>  CImageList::Read  
 Chiamare questa funzione per leggere un elenco di immagini da un archivio.  
  
```  
BOOL Read(CArchive* pArchive);
```  
  
### <a name="parameters"></a>Parametri  
 `pArchive`  
 Un puntatore a un `CArchive` oggetto da cui è possibile leggere l'elenco di immagini.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#18](../../mfc/reference/codesnippet/cpp/cimagelist-class_18.cpp)]  
  
##  <a name="remove"></a>  CImageList::Remove  
 Chiamare questa funzione per rimuovere un'immagine da un oggetto elenco immagini.  
  
```  
BOOL Remove(int nImage);
```  
  
### <a name="parameters"></a>Parametri  
 `nImage`  
 Indice in base zero dell'immagine da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Tutti gli elementi seguenti `nImage` spostare verso il basso di una posizione. Ad esempio, se un elenco di immagini contiene due elementi, se il primo elemento verrà eliminato rimanente elemento ora nella prima posizione. `nImage`= 0 per l'elemento nella prima posizione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#19](../../mfc/reference/codesnippet/cpp/cimagelist-class_19.cpp)]  
  
##  <a name="replace"></a>  CImageList::Replace  
 Chiamare questa funzione per sostituire un'immagine in un elenco di immagini con una nuova immagine.  
  
```  
BOOL Replace(
    int nImage,  
    CBitmap* pbmImage,  
    CBitmap* pbmMask);

 
int Replace(
    int nImage,  
    HICON hIcon);
```  
  
### <a name="parameters"></a>Parametri  
 `nImage`  
 Indice in base zero dell'immagine da sostituire.  
  
 `pbmImage`  
 Puntatore alla bitmap contenente l'immagine.  
  
 `pbmMask`  
 Puntatore alla bitmap contenente la maschera. Se nessun filtro viene utilizzato con l'elenco di immagini, questo parametro viene ignorato.  
  
 `hIcon`  
 Handle per l'icona che contiene la bitmap e il filtro per la nuova immagine.  
  
### <a name="return-value"></a>Valore restituito  
 La versione di restituzione **BOOL** restituisce diverso da zero se ha esito positivo; in caso contrario, 0.  
  
 La versione di restituzione `int` restituisce l'indice in base zero dell'immagine se ha esito positivo; in caso contrario - 1.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro dopo la chiamata [SetImageCount](#setimagecount) per assegnare il nuovo, immagini valide per il segnaposto dell'immagine di numeri di indice.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CImageList::SetImageCount](#setimagecount).  
  
##  <a name="setbkcolor"></a>  CImageList::SetBkColor  
 Chiamare questa funzione per impostare il colore di sfondo per un elenco di immagini.  
  
```  
COLORREF SetBkColor(COLORREF cr);
```  
  
### <a name="parameters"></a>Parametri  
 `cr`  
 Colore di sfondo da impostare. Può essere `CLR_NONE`. In tal caso, le immagini vengono disegnate in modo trasparente mediante la maschera.  
  
### <a name="return-value"></a>Valore restituito  
 Il colore di sfondo precedente se ha esito positivo. in caso contrario `CLR_NONE`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#20](../../mfc/reference/codesnippet/cpp/cimagelist-class_20.cpp)]  
  
##  <a name="setdragcursorimage"></a>  CImageList::SetDragCursorImage  
 Crea una nuova immagine di trascinamento combinando l'immagine specificata (in genere un'immagine del cursore del mouse) con l'immagine di trascinamento corrente.  
  
```  
BOOL SetDragCursorImage(
    int nDrag,  
    CPoint ptHotSpot);
```  
  
### <a name="parameters"></a>Parametri  
 *nDrag*  
 Indice della nuova immagine da combinare con l'immagine di trascinamento.  
  
 `ptHotSpot`  
 Posizione dell'area sensibile all'interno dell'immagine di nuovo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Poiché le funzioni di trascinamento utilizzano la nuova immagine durante un'operazione di trascinamento, è necessario utilizzare le finestre [ShowCursor](http://msdn.microsoft.com/library/windows/desktop/ms648396) funzione per nascondere il cursore del mouse effettivo dopo la chiamata `CImageList::SetDragCursorImage`. In caso contrario, il sistema potrebbe apparire di disporre di due cursori del mouse per la durata dell'operazione di trascinamento.  
  
##  <a name="setimagecount"></a>  CImageList::SetImageCount  
 Chiamare questa funzione membro per reimpostare il numero di immagini in un `CImageList` oggetto.  
  
```  
BOOL SetImageCount(UINT uNewCount);
```  
  
### <a name="parameters"></a>Parametri  
 *uNewCount*  
 Il valore che specifica il nuovo numero totale di immagini nell'elenco delle immagini.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se si chiama questa funzione membro per aumentare il numero di immagini nell'elenco delle immagini, quindi chiamare [sostituire](#replace) per ogni immagine aggiuntive assegnare nuovi indici a immagini valide. Se non è possibile assegnare gli indici per le immagini valide, le operazioni di disegno che creano le nuove immagini potrebbero essere imprevedibili.  
  
 Se si diminuisce la dimensione di un elenco di immagini mediante questa funzione, vengono liberate le immagini troncate.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#21](../../mfc/reference/codesnippet/cpp/cimagelist-class_21.cpp)]  
  
##  <a name="setoverlayimage"></a>  CImageList:: SetOverlayImage  
 Chiamare questa funzione per aggiungere l'indice in base zero di un'immagine all'elenco di immagini da utilizzare come maschere di sovrapposizione.  
  
```  
BOOL SetOverlayImage(
    int nImage,  
    int nOverlay);
```  
  
### <a name="parameters"></a>Parametri  
 `nImage`  
 Indice in base zero dell'immagine da utilizzare come maschera di sovrapposizione.  
  
 *nOverlay*  
 Indice in base uno della maschera di sovrapposizione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Fino a quattro indici possono essere aggiunti all'elenco.  
  
 Una maschera di sovrapposizione è un'immagine disegnata in modo trasparente in un'altra immagine. Disegnare una maschera di sovrapposizione su un'immagine utilizzando il [CImageList:: Draw](#draw) funzione membro con l'indice in base uno della maschera di sovrapposizione specificata utilizzando il **INDEXTOOVERLAYMASK** (macro).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#22](../../mfc/reference/codesnippet/cpp/cimagelist-class_22.cpp)]  
  
##  <a name="write"></a>  CImageList::Write  
 Chiamare questa funzione per scrivere un oggetto elenco immagini in un archivio.  
  
```  
BOOL Write(CArchive* pArchive);
```  
  
### <a name="parameters"></a>Parametri  
 `pArchive`  
 Un puntatore a un `CArchive` oggetto in cui viene archiviato l'elenco di immagini.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CImageList#17](../../mfc/reference/codesnippet/cpp/cimagelist-class_23.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CListCtrl (classe)](../../mfc/reference/clistctrl-class.md)   
 [Classe CTabCtrl](../../mfc/reference/ctabctrl-class.md)
