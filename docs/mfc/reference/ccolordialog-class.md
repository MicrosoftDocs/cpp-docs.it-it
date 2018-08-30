---
title: Classe CColorDialog | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CColorDialog
- AFXDLGS/CColorDialog
- AFXDLGS/CColorDialog::CColorDialog
- AFXDLGS/CColorDialog::DoModal
- AFXDLGS/CColorDialog::GetColor
- AFXDLGS/CColorDialog::GetSavedCustomColors
- AFXDLGS/CColorDialog::SetCurrentColor
- AFXDLGS/CColorDialog::OnColorOK
- AFXDLGS/CColorDialog::m_cc
dev_langs:
- C++
helpviewer_keywords:
- CColorDialog [MFC], CColorDialog
- CColorDialog [MFC], DoModal
- CColorDialog [MFC], GetColor
- CColorDialog [MFC], GetSavedCustomColors
- CColorDialog [MFC], SetCurrentColor
- CColorDialog [MFC], OnColorOK
- CColorDialog [MFC], m_cc
ms.assetid: d013dc25-9290-4b5d-a97e-95ad7208e13b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c528e2a80894db1da82d7b07ba34a7c62b6237da
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43219019"
---
# <a name="ccolordialog-class"></a>Classe CColorDialog
Consente di incorporare nell'applicazione di una finestra di dialogo di selezione colore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CColorDialog : public CCommonDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CColorDialog::CColorDialog](#ccolordialog)|Costruisce un oggetto `CColorDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CColorDialog::DoModal](#domodal)|Visualizza una finestra di dialogo colore e consente all'utente di effettuare una selezione.|  
|[CColorDialog::GetColor](#getcolor)|Restituisce un `COLORREF` struttura che contiene i valori del colore selezionato.|  
|[CColorDialog::GetSavedCustomColors](#getsavedcustomcolors)|Recupera i colori personalizzati creati dall'utente.|  
|[CColorDialog::SetCurrentColor](#setcurrentcolor)|Forza la selezione di colore corrente sul colore specificato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CColorDialog::OnColorOK](#oncolorok)|Eseguire l'override per convalidare il colore immesso nella finestra di dialogo.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CColorDialog::m_cc](#m_cc)|Struttura utilizzata per personalizzare le impostazioni della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Oggetto `CColorDialog` oggetto è una finestra di dialogo con un elenco di colori definiti per il sistema di visualizzazione. L'utente può selezionare o creare un determinato colore dall'elenco, che viene quindi segnalato nuovamente all'applicazione quando viene chiusa la finestra di dialogo.  
  
 Per costruire un `CColorDialog` dell'oggetto, usare il costruttore fornito o derivare una nuova classe e usare il proprio costruttore personalizzato.  
  
 Una volta la finestra di dialogo è stata costruita, è possibile impostare o modificare i valori di [m_cc](#m_cc) struttura per inizializzare i valori dei controlli della finestra di dialogo. Il *m_cc* struttura è di tipo [CHOOSECOLOR](/windows/desktop/api/commdlg/ns-commdlg-tagchoosecolora).  
  
 Dopo l'inizializzazione i controlli della finestra di dialogo, chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare un colore. `DoModal` Restituisce la selezione dell'utente del pulsante OK (IDOK) o annullare (IDCANCEL) entrambi della finestra di dialogo.  
  
 Se `DoModal` restituisce IDOK, è possibile usare uno dei `CColorDialog`di funzioni membro per recuperare le informazioni di input dall'utente.  
  
 È possibile utilizzare il Windows [CommDlgExtendedError](/windows/desktop/api/commdlg/nf-commdlg-commdlgextendederror) funzione per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per altre informazioni sull'errore.  
  
 `CColorDialog` si basa sul COMMDLG. File DLL che viene fornito con Windows 3.1 e versioni successive.  
  
 Per personalizzare la finestra di dialogo, derivare una classe da `CColorDialog`, offrono un modello di finestra di dialogo personalizzata e aggiungere una mappa messaggi per elaborare i messaggi di notifica da controlli estesi. Eventuali messaggi non elaborati devono essere passati alla classe di base.  
  
 La funzione hook di personalizzazione non è obbligatorio.  
  
> [!NOTE]
>  In alcune installazioni dei componenti di `CColorDialog` oggetti non verranno visualizzati con uno sfondo grigio se è stato usato il framework per apportare `CDialog` grigio di oggetti.  
  
 Per altre informazioni sull'uso `CColorDialog`, vedere [classi di finestra di dialogo comuni](../../mfc/common-dialog-classes.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CColorDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdlgs. h  
  
##  <a name="ccolordialog"></a>  CColorDialog::CColorDialog  
 Costruisce un oggetto `CColorDialog`.  
  
```  
CColorDialog(
    COLORREF clrInit = 0,  
    DWORD dwFlags = 0,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *clrInit*  
 La selezione di colore predefinito. Se viene specificato alcun valore, il valore predefinito è RGB(0,0,0) (nero).  
  
 *dwFlags*  
 Un set di flag che consentono di personalizzare il funzionamento e l'aspetto della finestra di dialogo. Per altre informazioni, vedere la [CHOOSECOLOR](/windows/desktop/api/commdlg/ns-commdlg-tagchoosecolora) struttura nel SDK di Windows.  
  
 *pParentWnd*  
 Puntatore alla finestra padre o proprietaria della finestra di dialogo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#49](../../mfc/codesnippet/cpp/ccolordialog-class_1.cpp)]  
  
##  <a name="domodal"></a>  CColorDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo Windows comune dei colori e consentire all'utente di selezionare un colore.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare il Windows [CommDlgExtendedError](/windows/desktop/api/commdlg/nf-commdlg-commdlgextendederror) funzione per determinare se si è verificato un errore.  
  
 IDOK e IDCANCEL sono le costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare le varie opzioni della finestra di dialogo colore impostando i membri del [m_cc](#m_cc) struttura, è necessario eseguire questa operazione prima di chiamare `DoModal` ma dopo che viene costruito l'oggetto finestra di dialogo.  
  
 Dopo aver chiamato `DoModal`, è possibile chiamare altri membri funzioni per recuperare le impostazioni o input di informazioni dall'utente nella finestra di dialogo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CColorDialog::CColorDialog](#ccolordialog).  
  
##  <a name="getcolor"></a>  CColorDialog::GetColor  
 Chiamare questa funzione dopo la chiamata `DoModal` per recuperare le informazioni relative al colore selezionato dall'utente.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore che contiene informazioni per il colore selezionato nella finestra di dialogo colore RGB.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#50](../../mfc/codesnippet/cpp/ccolordialog-class_2.cpp)]  
  
##  <a name="getsavedcustomcolors"></a>  CColorDialog::GetSavedCustomColors  
 `CColorDialog` oggetti di permettere all'utente, oltre a scegliere i colori, definire fino a 16 colori personalizzati.  
  
```  
static COLORREF* PASCAL GetSavedCustomColors();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una matrice di 16 valori di colore RGB che archivia i colori personalizzati creati dall'utente.  
  
### <a name="remarks"></a>Note  
 Il `GetSavedCustomColors` funzione membro fornisce l'accesso a questi colori. Questi colori possono essere recuperati dopo [DoModal](#domodal) restituisce IDOK.  
  
 Ognuno dei valori RGB 16 nella matrice restituita viene inizializzata RGB(255,255,255) (bianco). I colori personalizzati scelti dall'utente vengono salvati solo tra le chiamate di finestra di dialogo all'interno dell'applicazione. Se si vuole salvare questi colori tra le chiamate dell'applicazione, è necessario salvarli in altro modo, ad esempio in un'inizializzazione (. File con estensione INI).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#51](../../mfc/codesnippet/cpp/ccolordialog-class_3.cpp)]  
  
##  <a name="m_cc"></a>  CColorDialog::m_cc  
 Una struttura di tipo [CHOOSECOLOR](/windows/desktop/api/commdlg/ns-commdlg-tagchoosecolora), i cui membri memorizzare le caratteristiche e i valori della finestra di dialogo.  
  
```  
CHOOSECOLOR m_cc;  
```  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione di un `CColorDialog` dell'oggetto, è possibile usare *m_cc* per impostare i vari aspetti della finestra di dialogo prima di chiamare il [DoModal](#domodal) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#53](../../mfc/codesnippet/cpp/ccolordialog-class_4.cpp)]  
  
##  <a name="oncolorok"></a>  CColorDialog::OnColorOK  
 Eseguire l'override per convalidare il colore immesso nella finestra di dialogo.  
  
```  
virtual BOOL OnColorOK();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra di dialogo non deve essere ignorata; in caso contrario, 0 per accettare il colore che è stata immessa.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione solo se si desidera fornire la convalida personalizzata del colore che l'utente seleziona nella finestra di dialogo colore.  
  
 L'utente può selezionare un colore da uno dei due metodi seguenti:  
  
-   Facendo clic su un colore nella tavolozza dei colori. I valori RGB del colore selezionato vengono quindi riflesse nelle caselle di modifica RGB appropriate.  
  
-   Immissione dei valori RGB caselle di modifica  
  
 Si esegue l'override `OnColorOK` consente di rifiutare un colore a cui l'utente immette una finestra di dialogo colore comune per qualsiasi motivo specifico dell'applicazione.  
  
 In genere, non devi usare questa funzione perché il framework fornisce la convalida predefinita di colori e visualizza una finestra di messaggio se non viene specificato un colore non valido.  
  
 È possibile chiamare [SetCurrentColor](#setcurrentcolor) dall'interno `OnColorOK` per forzare una selezione di colore. Una volta `OnColorOK` è stata attivata (vale a dire, l'utente fa clic **OK** per accettare la modifica di colore), è possibile chiamare [GetColor](#getcolor) per ottenere il valore RGB del nuovo colore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#52](../../mfc/codesnippet/cpp/ccolordialog-class_5.cpp)]  
  
##  <a name="setcurrentcolor"></a>  CColorDialog::SetCurrentColor  
 Chiamare questa funzione dopo la chiamata `DoModal` per forzare la selezione di colore corrente sul valore di colore specificato *clr*.  
  
```  
void SetCurrentColor(COLORREF clr);
```  
  
### <a name="parameters"></a>Parametri  
 *Common Language Runtime*  
 Un valore di colore RGB.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata dall'interno di un gestore di messaggi o `OnColorOK`. La finestra di dialogo aggiornerà automaticamente la selezione dell'utente in base al valore della *clr* parametro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CColorDialog::OnColorOK](#oncolorok).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [Esempio MFC DRAWCLI](../../visual-cpp-samples.md)   
 [Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)

