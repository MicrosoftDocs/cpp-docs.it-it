---
title: Classe COlePropertiesDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COlePropertiesDialog
dev_langs:
- C++
helpviewer_keywords:
- OLE Object Properties dialog box
- Object Properties dialog box
- dialog boxes, OLE
- OLE documents, modifying properties
- property pages, OLE
- COlePropertiesDialog class
ms.assetid: a54dbc89-1447-4329-bd01-00e98ec9e935
caps.latest.revision: 23
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 0c07766bca6bbc546f877e10255d80bd388d30d7
ms.lasthandoff: 02/24/2017

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
|[COlePropertiesDialog::m_psh](#m_psh)|Una struttura utilizzata per aggiungere pagine delle proprietà personalizzate aggiuntive.|  
|[COlePropertiesDialog::m_vp](#m_vp)|Una struttura utilizzata per personalizzare la pagina "Visualizzazione" di un `COlePropertiesDialog` oggetto.|  
  
## <a name="remarks"></a>Note  
 Finestre di dialogo proprietà dell'oggetto OLE comune forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento del documento OLE in modo coerente con gli standard di Windows. Queste proprietà includono, ad esempio, informazioni sui file rappresentato dall'elemento del documento, opzioni per visualizzare l'icona e il ridimensionamento delle immagini e informazioni sul collegamento dell'elemento (se l'elemento è collegato).  
  
 Per utilizzare un `COlePropertiesDialog` oggetto, creare innanzitutto l'oggetto utilizzando il `COlePropertiesDialog` costruttore. Dopo la finestra di dialogo è stata costruita, è necessario chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di modificare qualsiasi proprietà dell'elemento. `DoModal`indica se l'utente selezionato OK ( **IDOK**) o l'annullamento ( **IDCANCEL**) pulsante. Oltre ai pulsanti OK e Annulla, è previsto un pulsante Applica. Quando l'utente seleziona applica, tutte le modifiche apportate alle proprietà dell'elemento documento vengono applicate all'elemento e l'immagine viene aggiornata automaticamente, ma rimane attivo.  
  
 Il [m_psh](#m_psh) membro dati è un puntatore a un **PROPSHEETHEADER** struttura e nella maggior parte dei casi non è necessario accedervi in modo esplicito. Unica eccezione è quando occorre pagine delle proprietà aggiuntive oltre le pagine generale, visualizzazione e collegamento predefinito. In questo caso, è possibile modificare il `m_psh` membro dati da includere pagine personalizzate prima di chiamare il `DoModal` funzione membro.  
  
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
  
##  <a name="a-namecolepropertiesdialoga--colepropertiesdialogcolepropertiesdialog"></a><a name="colepropertiesdialog"></a>COlePropertiesDialog::COlePropertiesDialog  
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
 Puntatore all'elemento documento la cui proprietà vengano utilizzati.  
  
 *nScaleMin*  
 Percentuale minima di adattamento per l'immagine dell'elemento documento.  
  
 *nScaleMax*  
 Massima scalabilità percentuale per l'immagine dell'elemento documento.  
  
 `pParentWnd`  
 Puntatore al padre o proprietaria della finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Derivare la classe di finestra di dialogo comune di proprietà dell'oggetto OLE da `COlePropertiesDialog` per implementare la scalabilità per gli elementi del documento. Finestre di dialogo implementati da un'istanza di questa classe non supporta il ridimensionamento dell'elemento documento.  
  
 Per impostazione predefinita, la finestra di dialogo di proprietà dell'oggetto OLE comune dispone di tre pagine predefinito:  
  
-   Generale  
  
     Questa pagina contiene informazioni di sistema per il file rappresentato dall'elemento del documento selezionato. Da questa pagina, l'utente è possibile convertire l'elemento selezionato in un altro tipo.  
  
-   Visualizza  
  
     Questa pagina contiene le opzioni per la visualizzazione dell'elemento, l'icona di modifica e la scalabilità dell'immagine.  
  
-   Collegamento  
  
     Questa pagina contiene le opzioni per la modifica del percorso dell'elemento collegato e aggiornare l'elemento collegato. In questa pagina, l'utente può interrompere il collegamento dell'elemento selezionato.  
  
 Per aggiungere pagine oltre a quelle fornite per impostazione predefinita, modificare il [m_psh](#m_psh) variabile membro prima della chiusura del costruttore di `COlePropertiesDialog`-classe derivata. Si tratta di un'implementazione avanzata del `COlePropertiesDialog` costruttore.  
  
##  <a name="a-namedomodala--colepropertiesdialogdomodal"></a><a name="domodal"></a>COlePropertiesDialog::DoModal  
 Chiamare questa funzione membro per visualizzare la finestra di dialogo proprietà dell'oggetto OLE comune Windows e consentire all'utente di visualizzare e/o modificare le varie proprietà dell'elemento documento.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 **IDOK** o **IDCANCEL** se ha esito positivo; in caso contrario, 0. **IDOK** e **IDCANCEL** sono le costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.  
  
 Se **IDCANCEL** viene restituito, è possibile chiamare Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) funzione per determinare se si è verificato un errore.  
  
##  <a name="a-namemgpa--colepropertiesdialogmgp"></a><a name="m_gp"></a>COlePropertiesDialog::m_gp  
 Una struttura di tipo [OLEUIGNRLPROPS](http://msdn.microsoft.com/library/windows/desktop/ms687297), utilizzato per inizializzare la pagina Generale della finestra di dialogo proprietà dell'oggetto OLE.  
  
```  
OLEUIGNRLPROPS m_gp;  
```  
  
### <a name="remarks"></a>Note  
 Questa pagina indica il tipo e dimensioni di un tipo di incorporamento e consente all'utente l'accesso per la finestra di dialogo Converti. Questa pagina mostra anche la destinazione del collegamento se l'oggetto è un collegamento.  
  
 Per ulteriori informazioni sui **OLEUIGNRLPROPS** struttura, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namemlpa--colepropertiesdialogmlp"></a><a name="m_lp"></a>COlePropertiesDialog::m_lp  
 Una struttura di tipo [OLEUILINKPROPS](http://msdn.microsoft.com/library/windows/desktop/ms680735), utilizzato per inizializzare la pagina di collegamento della finestra di dialogo proprietà dell'oggetto OLE.  
  
```  
OLEUILINKPROPS m_lp;  
```  
  
### <a name="remarks"></a>Note  
 Questa pagina Mostra la posizione dell'elemento collegato e consente all'utente di aggiornare o interrompere, il collegamento all'elemento.  
  
 Per ulteriori informazioni sui **OLEUILINKPROPS** struttura, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namemopa--colepropertiesdialogmop"></a><a name="m_op"></a>COlePropertiesDialog::m_op  
 Una struttura di tipo [OLEUIOBJECTPROPS](http://msdn.microsoft.com/library/windows/desktop/ms687199), utilizzato per inizializzare la finestra di dialogo di proprietà dell'oggetto OLE comune.  
  
```  
OLEUIOBJECTPROPS m_op;  
```  
  
### <a name="remarks"></a>Note  
 Questa struttura contiene membri utilizzati per inizializzare le pagine generale, collegamento e visualizzazione.  
  
 Per ulteriori informazioni, vedere il **OLEUIOBJECTPROPS** e [OLEUILINKPROPS](http://msdn.microsoft.com/library/windows/desktop/ms680735) strutture di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namempsha--colepropertiesdialogmpsh"></a><a name="m_psh"></a>COlePropertiesDialog::m_psh  
 Una struttura di tipo [PROPSHEETHEADER](http://msdn.microsoft.com/library/windows/desktop/bb774546), i cui membri memorizzare le caratteristiche dell'oggetto finestra di dialogo.  
  
```  
PROPSHEETHEADER m_psh;  
```  
  
### <a name="remarks"></a>Note  
 Al termine della creazione un `COlePropertiesDialog` dell'oggetto, è possibile utilizzare `m_psh` impostare vari aspetti della finestra di dialogo prima di chiamare il `DoModal` funzione membro.  
  
 Se si modifica il `m_psh` (membro dati) direttamente, si eseguirà l'override di qualsiasi comportamento predefinito.  
  
 Per ulteriori informazioni sui **PROPSHEETHEADER** struttura, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namemvpa--colepropertiesdialogmvp"></a><a name="m_vp"></a>COlePropertiesDialog::m_vp  
 Una struttura di tipo [OLEUIVIEWPROPS](http://msdn.microsoft.com/library/windows/desktop/ms693751), utilizzato per inizializzare la pagina di visualizzazione della finestra di dialogo proprietà dell'oggetto OLE.  
  
```  
OLEUIVIEWPROPS m_vp;  
```  
  
### <a name="remarks"></a>Note  
 Questa pagina consente all'utente di alternare "content" e "ripercorre" viste dell'oggetto e modificare la scala all'interno del contenitore. Consente inoltre all'utente l'accesso alla finestra di dialogo di modifica dell'icona quando l'oggetto viene visualizzato come un'icona.  
  
 Per ulteriori informazioni sui **OLEUIVIEWPROPS** struttura, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonapplyscalea--colepropertiesdialogonapplyscale"></a><a name="onapplyscale"></a>COlePropertiesDialog::OnApplyScale  
 Chiamato dal framework quando è stato modificato il valore di scala ed è stato selezionato OK o applica.  
  
```  
virtual BOOL OnApplyScale(
    COleClientItem* pItem,  
    int nCurrentScale,  
    BOOL bRelativeToOrig);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore all'elemento documento la cui proprietà vengano utilizzati.  
  
 `nCurrentScale`  
 Valore numerico della scala finestra di dialogo.  
  
 *bRelativeToOrig*  
 Indica se il ridimensionamento viene applicato alla dimensione originale dell'elemento documento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stato gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. È necessario eseguire l'override di questa funzione per abilitare le opzioni disponibili.  
  
> [!NOTE]
>  Prima che venga visualizzata la finestra di dialogo di proprietà dell'oggetto OLE comune, il framework chiama questa funzione con un **NULL** per `pItem` e – 1 per `nCurrentScale`. Questa operazione viene eseguita per determinare se è necessario attivare le opzioni disponibili.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC CIRC](../../visual-cpp-samples.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [CPropertyPage (classe)](../../mfc/reference/cpropertypage-class.md)

