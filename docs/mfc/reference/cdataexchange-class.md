---
title: CDataExchange (classe) | Documenti Microsoft
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
- CDataExchange [MFC], CDataExchange
- CDataExchange [MFC], Fail
- CDataExchange [MFC], PrepareCtrl
- CDataExchange [MFC], PrepareEditCtrl
- CDataExchange [MFC], PrepareOleCtrl
- CDataExchange [MFC], m_bSaveAndValidate
- CDataExchange [MFC], m_pDlgWnd
ms.assetid: 84ed6113-325d-493e-a75d-223f03a992b8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1e56df3ec4604a02ba9cf1075152a11eefe7e28f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CDataExchange::Fail](#fail)|Chiamata eseguita quando la convalida non riesce. Reimposta lo stato attivo al controllo precedente e genera un'eccezione.|  
|[CDataExchange::PrepareCtrl](#preparectrl)|Prepara il controllo specificato per la convalida o di scambio di dati. Utilizzo per i controlli nonedit.|  
|[CDataExchange::PrepareEditCtrl](#prepareeditctrl)|Prepara il controllo di modifica specificato per la convalida o di scambio di dati.|  
|[CDataExchange::PrepareOleCtrl](#prepareolectrl)|Prepara il controllo OLE specificato per la convalida o di scambio di dati. Utilizzo per i controlli nonedit.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataExchange::m_bSaveAndValidate](#m_bsaveandvalidate)|Flag per la direzione di DDX e DDV.|  
|[CDataExchange::m_pDlgWnd](#m_pdlgwnd)|La finestra di dialogo o la finestra in cui i dati di exchange viene eseguita.|  
  
## <a name="remarks"></a>Note  
 `CDataExchange`non dispone di una classe di base.  
  
 Utilizzare questa classe se si siano scrivendo una routine di scambio di dati per i tipi di dati personalizzati o controlli, o se si siano scrivendo la propria routine di convalida dei dati. Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [finestre di dialogo](../../mfc/dialog-boxes.md).  
  
 Oggetto `CDataExchange` oggetto fornisce le informazioni sul contesto necessarie per inserire DDX e DDV da eseguire. Il flag `m_bSaveAndValidate` è **FALSE** quando DDX viene utilizzato per riempire i valori iniziali dei controlli di finestra di dialogo dei membri dati. Il flag `m_bSaveAndValidate` è **TRUE** quando DDX viene utilizzato per impostare i valori correnti dei controlli di finestra di dialogo in membri di dati e quando DDV viene utilizzato per convalidare i valori dei dati. Se la convalida DDV non riesce, la procedura DDV visualizzerà una finestra di messaggio che spiega l'errore di input. La procedura DDV chiamerà quindi **esito negativo** per reimpostare lo stato attivo al controllo all'origine dell'errore e genera un'eccezione per arrestare il processo di convalida.  
  
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
 Puntatore alla finestra padre che contiene il controllo. In genere si tratta di un [CDialog](../../mfc/reference/cdialog-class.md)-oggetto derivato.  
  
 `bSaveAndValidate`  
 Se **TRUE**, convalida i dati di questo oggetto, quindi scrive i dati dai controlli per i membri. Se **FALSE**, spostare l'oggetto dati dai membri ai controlli.  
  
### <a name="remarks"></a>Note  
 Costruire un `CDataExchange` oggetto manualmente per archiviare informazioni aggiuntive nell'oggetto exchange dati da passare a della finestra [CWnd:: DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#70](../../mfc/codesnippet/cpp/cdataexchange-class_1.cpp)]  
  
##  <a name="fail"></a>CDataExchange::Fail  
 Quando un'operazione di convalida (DDV) di dati di finestra di dialogo non riesce, il framework chiama questa funzione membro.  
  
```  
void Fail();
```  
  
### <a name="remarks"></a>Note  
 **Esito negativo** Ripristina l'attivazione e la selezione al controllo la cui convalida non riuscita (se è presente un controllo da ripristinare). **Esito negativo** quindi genera un'eccezione di tipo [CUserException](../../mfc/reference/cuserexception-class.md) per arrestare il processo di convalida. L'eccezione, una finestra di messaggio che spiega l'errore da visualizzare. Dopo aver DDV convalida non riesce, l'utente può rientrare nel controllo origine dati.  
  
 Gli implementatori di routine DDV personalizzate è possono chiamare **esito negativo** dalla routine quando una convalida non riesce.  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
##  <a name="m_bsaveandvalidate"></a>CDataExchange::m_bSaveAndValidate  
 Questo flag indica la direzione di un'operazione di exchange (DDX) di dati di finestra di dialogo.  
  
```  
BOOL m_bSaveAndValidate;  
```  
  
### <a name="remarks"></a>Note  
 Il flag è diverso da zero se la `CDataExchange` oggetto viene utilizzato per spostare i dati dai controlli finestra di dialogo a membri dati della classe di finestra di dialogo dopo che l'utente modifica i controlli. Il flag è zero se l'oggetto viene utilizzato per inizializzare i controlli di finestra di dialogo dai membri di dati della classe di finestra di dialogo.  
  
 Il flag è diverso da zero anche durante la convalida dei dati di finestra di dialogo (DDV).  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
##  <a name="m_pdlgwnd"></a>CDataExchange::m_pDlgWnd  
 Contiene un puntatore al [CWnd](../../mfc/reference/cwnd-class.md) oggetto per la quale finestra di dialogo convalida (DDV) o scambio di dati (DDX) viene eseguita.  
  
```  
CWnd* m_pDlgWnd;  
```  
  
### <a name="remarks"></a>Note  
 Questo oggetto è in genere un [CDialog](../../mfc/reference/cdialog-class.md) oggetto. Gli implementatori di routine DDX o DDV personalizzate è possono utilizzare questo puntatore per ottenere l'accesso per la finestra di dialogo che contiene i controlli operino su.  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
##  <a name="preparectrl"></a>CDataExchange::PrepareCtrl  
 Il framework chiama questa funzione membro per preparare il controllo specificato per dialog data exchange (DDX) e (DDV) di convalida.  
  
```  
HWND PrepareCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDC`  
 L'ID del controllo da essere preparati per DDX o DDV.  
  
### <a name="return-value"></a>Valore restituito  
 Il `HWND` del controllo verrà preparato per DDX o DDV.  
  
### <a name="remarks"></a>Note  
 Utilizzare [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica; utilizzare questa funzione membro per tutti gli altri controlli.  
  
 Preparazione si suddivide l'archiviazione del controllo `HWND` nel `CDataExchange` classe. Il framework Usa questo handle per ripristinare lo stato attivo al controllo con lo stato attivo in precedenza in caso di errore DDX o DDV.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareCtrl` per tutti i controlli per cui sono lo scambio di dati tramite DDX o convalida dei dati tramite DDV non di modifica.  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
##  <a name="prepareeditctrl"></a>CDataExchange::PrepareEditCtrl  
 Il framework chiama questa funzione membro per preparare il controllo di modifica specificato dialog data exchange (DDX) e (DDV) di convalida.  
  
```  
HWND PrepareEditCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDC`  
 L'ID del controllo di modifica da essere preparati per DDX o DDV.  
  
### <a name="return-value"></a>Valore restituito  
 Il `HWND` del controllo di modifica verrà preparato per DDX o DDV.  
  
### <a name="remarks"></a>Note  
 Utilizzare [PrepareCtrl](#preparectrl) invece per tutti i controlli non di modifica.  
  
 Preparazione è costituito da due operazioni. Prima di tutto, `PrepareEditCtrl` archivia il controllo `HWND` nel `CDataExchange` classe. Il framework Usa questo handle per ripristinare lo stato attivo al controllo con lo stato attivo in precedenza in caso di errore DDX o DDV. In secondo luogo, `PrepareEditCtrl` imposta un flag nella `CDataExchange` classe per indicare che il controllo, i cui dati vengono scambiati o convalidato sono un controllo di modifica.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareEditCtrl` per tutti i controlli per cui sono lo scambio di dati tramite DDX o convalida dei dati tramite DDV di modifica.  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
##  <a name="prepareolectrl"></a>CDataExchange::PrepareOleCtrl  
 Il framework chiama questa funzione membro per preparare il controllo OLE specificato dialog data exchange (DDX) e (DDV) di convalida.  
  
```  
COleControlSite* PrepareOleCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDC`  
 L'ID del controllo OLE da essere preparati per DDX o DDV.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al sito del controllo OLE.  
  
### <a name="remarks"></a>Note  
 Utilizzare [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica o [PrepareCtrl](#preparectrl) per tutti gli altri controlli non OLE.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareOleCtrl` per tutti i controlli per cui sono lo scambio di dati tramite DDX o convalida dei dati tramite DDV OLE.  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [finestra di dialogo argomenti](../../mfc/dialog-boxes.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd:: DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange)   
 [CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata)

