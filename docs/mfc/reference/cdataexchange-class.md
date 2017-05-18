---
title: CDataExchange (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDataExchange
- AFXWIN/CDataExchange
- AFXWIN/CDataExchange::CDataExchange
- AFXWIN/CDataExchange::Fail
- AFXWIN/CDataExchange::PrepareCtrl
- AFXWIN/CDataExchange::PrepareEditCtrl
- AFXWIN/CDataExchange::PrepareOleCtrl
- AFXWIN/CDataExchange::m_bSaveAndValidate
- AFXWIN/CDataExchange::m_pDlgWnd
dev_langs:
- C++
helpviewer_keywords:
- DDX/DDV, Technical Note 26
- DDX/DDV, CDataExchange class
- DDX (dialog data exchange), direction of exchange
- DDX (dialog data exchange), between dialog and CDialog
- DDX (dialog data exchange), custom DDX routines
- DDV (dialog data validation)
- m_bSaveAndValidate
- CDataExchange class
- exchanging data between dialogs and CDialogs
- DDV (dialog data validation), custom DDV routines
- DDX/DDV
- DDX (dialog data exchange)
- validating data, dialog box data entry
ms.assetid: 84ed6113-325d-493e-a75d-223f03a992b8
caps.latest.revision: 20
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 8f35e87d562a894411401755ccd4fdd54e43b58a
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cdataexchange-class"></a>CDataExchange (classe)
Supporta le routine DDX (Dialog Data Exchange) e DDV (Dialog Data Validation) usate da Microsoft Foundation Classes.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDataExchange  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataExchange::CDataExchange](#cdataexchange)|Costruisce un oggetto `CDataExchange`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataExchange::Fail](#fail)|Chiamato quando la convalida non riesce. Reimposta lo stato attivo al controllo precedente e genera un'eccezione.|  
|[CDataExchange::PrepareCtrl](#preparectrl)|Prepara il controllo specificato per la convalida o di scambio di dati. Utilizzare per i controlli nonedit.|  
|[CDataExchange::PrepareEditCtrl](#prepareeditctrl)|Prepara il controllo di modifica specificato per la convalida o di scambio di dati.|  
|[CDataExchange::PrepareOleCtrl](#prepareolectrl)|Prepara il controllo OLE specificato per la convalida o di scambio di dati. Utilizzare per i controlli nonedit.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataExchange::m_bSaveAndValidate](#m_bsaveandvalidate)|Flag per specificare la direzione di DDX e DDV.|  
|[CDataExchange::m_pDlgWnd](#m_pdlgwnd)|La finestra di dialogo o la finestra in cui i dati di exchange viene eseguito.|  
  
## <a name="remarks"></a>Note  
 `CDataExchange`non dispone di una classe di base.  
  
 Utilizzare questa classe se si siano scrivendo una routine di scambio dei dati per tipi di dati personalizzati o controlli, o se si siano scrivendo una propria routine di convalida dei dati. Per ulteriori informazioni sulla scrittura delle proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [le finestre di dialogo](../../mfc/dialog-boxes.md).  
  
 Oggetto `CDataExchange` oggetto fornisce le informazioni sul contesto necessarie per DDX e DDV per poter inserire. Il flag `m_bSaveAndValidate` è **FALSE** quando DDX viene utilizzato per riempire i valori iniziali dei controlli di finestra di dialogo dei membri dati. Il flag `m_bSaveAndValidate` è **TRUE** quando DDX viene utilizzato per impostare i valori correnti dei controlli di finestra di dialogo in membri di dati e quando DDV viene utilizzato per convalidare i valori dei dati. Se la convalida DDV non riesce, la procedura DDV visualizzerà una finestra di messaggio che spiega l'errore di input. La procedura DDV chiamerà quindi **errore** per reimpostare lo stato attivo al controllo che causa l'errore e genera un'eccezione per interrompere il processo di convalida.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDataExchange`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cdataexchange"></a>CDataExchange::CDataExchange  
 Chiamare questa funzione membro per costruire un `CDataExchange` oggetto.  
  
```  
CDataExchange(
    CWnd* pDlgWnd,  
    BOOL bSaveAndValidate);
```  
  
### <a name="parameters"></a>Parametri  
 *pDlgWnd*  
 Puntatore alla finestra padre che contiene il controllo. In genere questo è un [CDialog](../../mfc/reference/cdialog-class.md)-oggetto derivato.  
  
 `bSaveAndValidate`  
 Se **TRUE**, convalida i dati di questo oggetto, quindi scrive i dati dai controlli per i membri. Se **FALSE**, l'oggetto sposta i dati dai membri ai controlli.  
  
### <a name="remarks"></a>Note  
 Costruire un `CDataExchange` oggetto per archiviare informazioni aggiuntive nell'oggetto di scambio di dati per passare a della finestra [CWnd:: DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog&#70;](../../mfc/codesnippet/cpp/cdataexchange-class_1.cpp)]  
  
##  <a name="fail"></a>CDataExchange::Fail  
 Il framework chiama questa funzione membro quando un'operazione di finestra di dialogo dati convalida (DDV) non riesce.  
  
```  
void Fail();
```  
  
### <a name="remarks"></a>Note  
 **Errore** Ripristina la selezione e lo stato attivo al controllo la cui convalida non riuscita (se è disponibile un controllo per il ripristino). **Errore** quindi genera un'eccezione di tipo [CUserException](../../mfc/reference/cuserexception-class.md) per arrestare il processo di convalida. L'eccezione, una finestra di messaggio che spiega l'errore da visualizzare. Dopo DDV convalida non riesce, l'utente può immettere nuovamente i dati nel controllo che causa l'errore.  
  
 Gli implementatori di routine DDV personalizzate è possono chiamare **esito negativo** dalla routine quando una convalida non riesce.  
  
 Per ulteriori informazioni sulla scrittura delle proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [della finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
##  <a name="m_bsaveandvalidate"></a>CDataExchange::m_bSaveAndValidate  
 Questo flag indica la direzione di un'operazione di dialog data exchange (DDX).  
  
```  
BOOL m_bSaveAndValidate;  
```  
  
### <a name="remarks"></a>Note  
 Il flag è diverso da zero se la `CDataExchange` oggetto viene utilizzato per spostare i dati dai controlli finestra di dialogo a membri dati della classe di finestra di dialogo dopo che l'utente modifica i controlli. Il flag è zero se l'oggetto viene utilizzato per inizializzare i controlli di finestra di dialogo da membri dati della classe di finestra di dialogo.  
  
 Il flag è diverso da zero durante la convalida dei dati di finestra di dialogo (DDV).  
  
 Per ulteriori informazioni sulla scrittura delle proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [della finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
##  <a name="m_pdlgwnd"></a>CDataExchange::m_pDlgWnd  
 Contiene un puntatore per il [CWnd](../../mfc/reference/cwnd-class.md) oggetto per cui dialog data exchange (DDX) o convalida (DDV) ha luogo.  
  
```  
CWnd* m_pDlgWnd;  
```  
  
### <a name="remarks"></a>Note  
 Questo oggetto è in genere un [CDialog](../../mfc/reference/cdialog-class.md) oggetto. Gli implementatori di routine DDX o DDV personalizzate è possono utilizzare questo puntatore per ottenere l'accesso alla finestra di dialogo che contiene i controlli operino su.  
  
 Per ulteriori informazioni sulla scrittura delle proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [della finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
##  <a name="preparectrl"></a>CDataExchange::PrepareCtrl  
 Il framework chiama questa funzione membro per preparare il controllo specificato per dialog data exchange (DDX) e convalida (DDV).  
  
```  
HWND PrepareCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDC`  
 L'ID del controllo per essere preparati per DDX e DDV.  
  
### <a name="return-value"></a>Valore restituito  
 Il `HWND` del controllo da preparati per DDX e DDV.  
  
### <a name="remarks"></a>Note  
 Utilizzare [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica; utilizzare questa funzione membro per tutti gli altri controlli.  
  
 Preparazione si suddivide l'archiviazione del controllo `HWND` nella `CDataExchange` classe. Il framework utilizza questo handle per ripristinare lo stato attivo al controllo con stato attivo in precedenza in caso di errore DDX o DDV.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareCtrl` per tutti i controlli per cui sono lo scambio di dati tramite DDX o la convalida dei dati tramite DDV non di modifica.  
  
 Per ulteriori informazioni sulla scrittura delle proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [della finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
##  <a name="prepareeditctrl"></a>CDataExchange::PrepareEditCtrl  
 Il framework chiama questa funzione membro per preparare il controllo di modifica specificato dialog data exchange (DDX) e convalida (DDV).  
  
```  
HWND PrepareEditCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDC`  
 L'ID del controllo di modifica per essere preparati per DDX e DDV.  
  
### <a name="return-value"></a>Valore restituito  
 Il `HWND` del controllo di modifica viene preparato per DDX e DDV.  
  
### <a name="remarks"></a>Note  
 Utilizzare [PrepareCtrl](#preparectrl) invece di tutti i controlli non di modifica.  
  
 Preparazione è costituito da due elementi. Primo, `PrepareEditCtrl` archivia il controllo `HWND` nella `CDataExchange` classe. Il framework utilizza questo handle per ripristinare lo stato attivo al controllo con stato attivo in precedenza in caso di errore DDX o DDV. Secondo, `PrepareEditCtrl` imposta un flag `CDataExchange` classe per indicare che il controllo i cui dati vengono scambiati o convalidato sono un controllo di modifica.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareEditCtrl` per tutti i controlli per cui sono lo scambio di dati tramite DDX o la convalida dei dati tramite DDV di modifica.  
  
 Per ulteriori informazioni sulla scrittura delle proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [della finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
##  <a name="prepareolectrl"></a>CDataExchange::PrepareOleCtrl  
 Il framework chiama questa funzione membro per preparare il controllo OLE specificato dialog data exchange (DDX) e convalida (DDV).  
  
```  
COleControlSite* PrepareOleCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDC`  
 L'ID del controllo OLE per essere preparati per DDX e DDV.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al sito del controllo OLE.  
  
### <a name="remarks"></a>Note  
 Utilizzare [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica o [PrepareCtrl](#preparectrl) per tutti gli altri controlli non OLE.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareOleCtrl` per tutti i controlli per cui sono lo scambio di dati tramite DDX o la convalida dei dati tramite DDV OLE.  
  
 Per ulteriori informazioni sulla scrittura delle proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [della finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd:: DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange)   
 [CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata)


