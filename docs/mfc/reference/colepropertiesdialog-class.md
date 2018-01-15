---
title: Classe COlePropertiesDialog | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COlePropertiesDialog
- AFXODLGS/COlePropertiesDialog
- AFXODLGS/COlePropertiesDialog::COlePropertiesDialog
- AFXODLGS/COlePropertiesDialog::DoModal
- AFXODLGS/COlePropertiesDialog::OnApplyScale
- AFXODLGS/COlePropertiesDialog::m_gp
- AFXODLGS/COlePropertiesDialog::m_lp
- AFXODLGS/COlePropertiesDialog::m_op
- AFXODLGS/COlePropertiesDialog::m_psh
- AFXODLGS/COlePropertiesDialog::m_vp
dev_langs: C++
helpviewer_keywords:
- COlePropertiesDialog [MFC], COlePropertiesDialog
- COlePropertiesDialog [MFC], DoModal
- COlePropertiesDialog [MFC], OnApplyScale
- COlePropertiesDialog [MFC], m_gp
- COlePropertiesDialog [MFC], m_lp
- COlePropertiesDialog [MFC], m_op
- COlePropertiesDialog [MFC], m_psh
- COlePropertiesDialog [MFC], m_vp
ms.assetid: a54dbc89-1447-4329-bd01-00e98ec9e935
caps.latest.revision: "23"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a5460926e1f58a557b26d8e5fa0a0ed763fc5de6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="colepropertiesdialog-class"></a>Classe COlePropertiesDialog
Incapsula la finestra di dialogo delle proprietà dell'oggetto OLE comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COlePropertiesDialog : public COleDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePropertiesDialog::COlePropertiesDialog](#colepropertiesdialog)|Costruisce un oggetto `COlePropertiesDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePropertiesDialog::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|  
|[COlePropertiesDialog::OnApplyScale](#onapplyscale)|Chiamato dal framework quando il ridimensionamento dell'elemento del documento è stato modificato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePropertiesDialog::m_gp](#m_gp)|Una struttura utilizzata per inizializzare la pagina "Generale" di un `COlePropertiesDialog` oggetto.|  
|[COlePropertiesDialog::m_lp](#m_lp)|Una struttura utilizzata per inizializzare la pagina "Collegamento" di un `COlePropertiesDialog` oggetto.|  
|[COlePropertiesDialog::m_op](#m_op)|Una struttura utilizzata per inizializzare il `COlePropertiesDialog` oggetto.|  
|[COlePropertiesDialog::m_psh](#m_psh)|Una struttura utilizzata per aggiungere delle pagine delle proprietà personalizzate aggiuntive.|  
|[COlePropertiesDialog::m_vp](#m_vp)|Una struttura utilizzata per personalizzare la pagina "Visualizzazione" di un `COlePropertiesDialog` oggetto.|  
  
## <a name="remarks"></a>Note  
 Finestre di dialogo proprietà dell'oggetto OLE comune forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento del documento OLE in modo coerente con gli standard di Windows. Queste proprietà includono, ad esempio, informazioni sui file rappresentato dall'elemento del documento, opzioni per visualizzare l'icona e il ridimensionamento dell'immagine e le informazioni sul collegamento dell'elemento (se l'elemento è collegato).  
  
 Per utilizzare un `COlePropertiesDialog` oggetto, creare innanzitutto l'oggetto utilizzando il `COlePropertiesDialog` costruttore. Dopo che la finestra di dialogo è stata creata, chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di modificare le proprietà dell'elemento. `DoModal`indica se l'utente selezionato OK ( **IDOK**) o l'annullamento ( **IDCANCEL**) pulsante. Oltre ai pulsanti OK e Annulla, è disponibile un pulsante Applica. Quando l'utente seleziona applica, eventuali modifiche apportate alle proprietà dell'elemento del documento vengono applicate all'elemento e l'immagine viene aggiornata automaticamente, ma rimane attivo.  
  
 Il [m_psh](#m_psh) (membro dati) è un puntatore a un **PROPSHEETHEADER** struttura e nella maggior parte dei casi non è necessario accedervi in modo esplicito. Unica eccezione è quando è necessario pagine delle proprietà aggiuntive oltre la pagine generale, visualizzazione e collegamento predefinite. In questo caso, è possibile modificare il `m_psh` includono pagine personalizzate prima di chiamare un membro dati di `DoModal` funzione membro.  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COlePropertiesDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="colepropertiesdialog"></a>COlePropertiesDialog::COlePropertiesDialog  
 Crea un oggetto `COlePropertiesDialog`.  
  
```  
COlePropertiesDialog(
    COleClientItem* pItem,  
    UINT nScaleMin = 10,  
    UINT nScaleMax = 500,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore all'elemento del documento, le cui proprietà vengano utilizzate.  
  
 *nScaleMin*  
 Percentuale minima di adattamento per l'immagine di elemento del documento.  
  
 *nScaleMax*  
 Massima scalabilità percentuale per l'immagine di elemento del documento.  
  
 `pParentWnd`  
 Puntatore all'elemento padre o il proprietario della finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Derivare la classe di finestra di dialogo comune di proprietà dell'oggetto OLE da `COlePropertiesDialog` per implementare la scalabilità per gli elementi del documento. Finestre di dialogo implementate da un'istanza di questa classe non supporta il ridimensionamento dell'elemento del documento.  
  
 Per impostazione predefinita, la finestra di dialogo di proprietà dell'oggetto OLE comune ha tre pagine predefinito:  
  
-   Generale  
  
     Questa pagina contiene informazioni di sistema per il file rappresentato dall'elemento del documento selezionato. In questa pagina, l'utente è possibile convertire l'elemento selezionato in un altro tipo.  
  
-   Visualizza  
  
     Questa pagina contiene le opzioni per la visualizzazione dell'elemento, l'icona di modifica e la scalabilità dell'immagine.  
  
-   Collegamento  
  
     Questa pagina contiene le opzioni per la modifica del percorso dell'elemento collegato e l'aggiornamento dell'elemento collegato. In questa pagina, l'utente può interrompere il collegamento dell'elemento selezionato.  
  
 Per aggiungere pagine oltre a quelli forniti per impostazione predefinita, modificare il [m_psh](#m_psh) variabile membro prima della chiusura del costruttore del `COlePropertiesDialog`-classe derivata. Si tratta di un'implementazione avanzata del `COlePropertiesDialog` costruttore.  
  
##  <a name="domodal"></a>COlePropertiesDialog::DoModal  
 Chiamare questa funzione membro per visualizzare la finestra di dialogo proprietà dell'oggetto OLE comune Windows e consentire all'utente di visualizzare e/o modificare le varie proprietà dell'elemento del documento.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 **IDOK** o **IDCANCEL** se ha esito positivo; in caso contrario, 0. **IDOK** e **IDCANCEL** sono le costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.  
  
 Se **IDCANCEL** viene restituito, è possibile chiamare Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) funzione per determinare se si è verificato un errore.  
  
##  <a name="m_gp"></a>COlePropertiesDialog::m_gp  
 Una struttura di tipo [OLEUIGNRLPROPS](http://msdn.microsoft.com/library/windows/desktop/ms687297), utilizzato per inizializzare la pagina Generale della finestra di dialogo proprietà dell'oggetto OLE.  
  
```  
OLEUIGNRLPROPS m_gp;  
```  
  
### <a name="remarks"></a>Note  
 Questa pagina indica il tipo e dimensioni di un tipo di incorporamento e consente all'utente l'accesso per la finestra di dialogo Converti. Questa pagina mostra anche la destinazione del collegamento se l'oggetto è un collegamento.  
  
 Per ulteriori informazioni sul **OLEUIGNRLPROPS** struttura, vedi il Windows SDK.  
  
##  <a name="m_lp"></a>COlePropertiesDialog::m_lp  
 Una struttura di tipo [OLEUILINKPROPS](http://msdn.microsoft.com/library/windows/desktop/ms680735), utilizzato per inizializzare la pagina di collegamento della finestra di dialogo proprietà dell'oggetto OLE.  
  
```  
OLEUILINKPROPS m_lp;  
```  
  
### <a name="remarks"></a>Note  
 Questa pagina Mostra la posizione dell'elemento collegato e consente all'utente di aggiornamento o un'interruzione, il collegamento all'elemento.  
  
 Per ulteriori informazioni sul **OLEUILINKPROPS** struttura, vedi il Windows SDK.  
  
##  <a name="m_op"></a>COlePropertiesDialog::m_op  
 Una struttura di tipo [OLEUIOBJECTPROPS](http://msdn.microsoft.com/library/windows/desktop/ms687199), utilizzato per inizializzare la finestra di dialogo di proprietà dell'oggetto OLE comune.  
  
```  
OLEUIOBJECTPROPS m_op;  
```  
  
### <a name="remarks"></a>Note  
 Questa struttura contiene membri utilizzati per inizializzare le pagine generale, collegamento e visualizzazione.  
  
 Per ulteriori informazioni, vedere il **OLEUIOBJECTPROPS** e [OLEUILINKPROPS](http://msdn.microsoft.com/library/windows/desktop/ms680735) strutture in Windows SDK.  
  
##  <a name="m_psh"></a>COlePropertiesDialog::m_psh  
 Una struttura di tipo [PROPSHEETHEADER](http://msdn.microsoft.com/library/windows/desktop/bb774546), i cui membri archiviano le caratteristiche dell'oggetto finestra di dialogo.  
  
```  
PROPSHEETHEADER m_psh;  
```  
  
### <a name="remarks"></a>Note  
 Al termine della creazione un `COlePropertiesDialog` dell'oggetto, è possibile utilizzare `m_psh` per impostare i vari aspetti della finestra di dialogo prima di chiamare il `DoModal` funzione membro.  
  
 Se si modifica il `m_psh` (membro dati) direttamente, si eseguirà l'override di alcun comportamento predefinito.  
  
 Per ulteriori informazioni sul **PROPSHEETHEADER** struttura, vedi il Windows SDK.  
  
##  <a name="m_vp"></a>COlePropertiesDialog::m_vp  
 Una struttura di tipo [OLEUIVIEWPROPS](http://msdn.microsoft.com/library/windows/desktop/ms693751), utilizzato per inizializzare la pagina di visualizzazione della finestra di dialogo proprietà dell'oggetto OLE.  
  
```  
OLEUIVIEWPROPS m_vp;  
```  
  
### <a name="remarks"></a>Note  
 Questa pagina consente all'utente di alternare "contenuto" e "iconico" viste dell'oggetto e modificare la scala all'interno del contenitore. Consente inoltre all'utente l'accesso per la finestra di dialogo Cambia icona quando l'oggetto viene visualizzato come un'icona.  
  
 Per ulteriori informazioni sul **OLEUIVIEWPROPS** struttura, vedi il Windows SDK.  
  
##  <a name="onapplyscale"></a>COlePropertiesDialog::OnApplyScale  
 Chiamato dal framework quando è stato modificato il valore di scala e OK o applica è stato selezionato.  
  
```  
virtual BOOL OnApplyScale(
    COleClientItem* pItem,  
    int nCurrentScale,  
    BOOL bRelativeToOrig);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore all'elemento del documento, le cui proprietà vengano utilizzate.  
  
 `nCurrentScale`  
 Valore numerico della scala finestra di dialogo.  
  
 *bRelativeToOrig*  
 Indica se si applica il ridimensionamento alla dimensione originale dell'elemento del documento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stato gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. È necessario eseguire l'override di questa funzione per abilitare le opzioni disponibili.  
  
> [!NOTE]
>  Prima che venga visualizzata la finestra di dialogo di proprietà dell'oggetto OLE comune, il framework chiama questa funzione con un **NULL** per `pItem` e -1 per `nCurrentScale`. Questa operazione viene eseguita per determinare se i controlli di scala devono essere abilitati.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC CIRC](../../visual-cpp-samples.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Classe CPropertyPage](../../mfc/reference/cpropertypage-class.md)
