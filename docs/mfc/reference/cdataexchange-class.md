---
title: Classe CDataExchange | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5972f6224fb7d184e1da29c5251cca8d2f32e276
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37337128"
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
|[CDataExchange::PrepareCtrl](#preparectrl)|Prepara il controllo specificato per lo scambio di dati o la convalida. Utilizzo per i controlli nonedit.|  
|[CDataExchange::PrepareEditCtrl](#prepareeditctrl)|Prepara il controllo di modifica specificato per lo scambio di dati o la convalida.|  
|[CDataExchange::PrepareOleCtrl](#prepareolectrl)|Prepara il controllo OLE specificato per lo scambio di dati o la convalida. Utilizzo per i controlli nonedit.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataExchange::m_bSaveAndValidate](#m_bsaveandvalidate)|Flag per la direzione di DDX e DDV.|  
|[CDataExchange::m_pDlgWnd](#m_pdlgwnd)|La finestra di dialogo o la finestra in cui i dati di exchange viene eseguita.|  
  
## <a name="remarks"></a>Note  
 `CDataExchange` non è una classe di base.  
  
 Utilizzare questa classe se si scrivono routine di scambio dei dati per i tipi di dati personalizzati o controlli, o se si siano scrivendo le proprie routine di convalida dei dati. Per altre informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [finestre di dialogo](../../mfc/dialog-boxes.md).  
  
 Oggetto `CDataExchange` oggetto fornisce le informazioni sul contesto necessarie per inserire DDX e DDV da eseguire. Il flag *m_bSaveAndValidate* è FALSE quando DDX viene usato per riempire i valori iniziali dei controlli di finestra di dialogo dei membri dati. Il flag *m_bSaveAndValidate* è TRUE quando DDX viene utilizzato per impostare i valori correnti dei controlli di finestra di dialogo in membri dati e quando DDV viene usato per convalidare i valori dei dati. Se la convalida DDV non riesce, la procedura DDV visualizzerà una finestra di messaggio che spiega l'errore di input. La procedura DDV chiamerà quindi `Fail` reimpostare lo stato attivo al controllo che causa l'errore e genera un'eccezione per arrestare il processo di convalida.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDataExchange`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cdataexchange"></a>  CDataExchange::CDataExchange  
 Chiamare questa funzione membro per costruire un `CDataExchange` oggetto.  
  
```  
CDataExchange(
    CWnd* pDlgWnd,  
    BOOL bSaveAndValidate);
```  
  
### <a name="parameters"></a>Parametri  
 *pDlgWnd*  
 Puntatore alla finestra padre che contiene il controllo. Si tratta in genere un [CDialog](../../mfc/reference/cdialog-class.md)-oggetto derivato.  
  
 *bSaveAndValidate*  
 Se TRUE, questo oggetto dati di convalida, quindi scrive i dati dai controlli per i membri. Se FALSE, spostare l'oggetto dati dai membri ai controlli.  
  
### <a name="remarks"></a>Note  
 Creare un `CDataExchange` oggetto per memorizzare informazioni aggiuntive nell'oggetto exchange dati da passare a della finestra [CWnd:: DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#70](../../mfc/codesnippet/cpp/cdataexchange-class_1.cpp)]  
  
##  <a name="fail"></a>  CDataExchange::Fail  
 Il framework chiama questa funzione membro quando si verifica un errore di un'operazione di convalida (DDV) finestra di dialogo dei dati.  
  
```  
void Fail();
```  
  
### <a name="remarks"></a>Note  
 `Fail` Ripristina la messa a fuoco e la selezione al controllo la cui convalida non riuscita (se è presente un controllo da ripristinare). `Fail` quindi viene generata un'eccezione di tipo [CUserException](../../mfc/reference/cuserexception-class.md) per arrestare il processo di convalida. L'eccezione causa una finestra di messaggio che spiega l'errore da visualizzare. Dopo la convalida DDV non riesce, l'utente può immettere nuovamente i dati nel controllo che causa l'errore.  
  
 Gli implementatori di routine DDV personalizzate è possono chiamare `Fail` dalla routine quando una convalida non riesce.  
  
 Per altre informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
##  <a name="m_bsaveandvalidate"></a>  CDataExchange::m_bSaveAndValidate  
 Questo flag indica la direzione di un'operazione di dialog data exchange (DDX).  
  
```  
BOOL m_bSaveAndValidate;  
```  
  
### <a name="remarks"></a>Note  
 Il flag è diverso da zero se il `CDataExchange` oggetto viene utilizzato per spostare i dati dai controlli finestra di dialogo a membri dati della classe di finestra di dialogo dopo che l'utente modifica i controlli. Il flag è zero se l'oggetto viene utilizzato per inizializzare i controlli di finestra di dialogo da membri dati della classe di finestra di dialogo.  
  
 Il flag è diverso da zero anche durante la convalida dei dati della finestra di dialogo (DDV).  
  
 Per altre informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
##  <a name="m_pdlgwnd"></a>  CDataExchange::m_pDlgWnd  
 Contiene un puntatore per il [CWnd](../../mfc/reference/cwnd-class.md) oggetto per la quale finestra di dialogo convalida (DDV) o lo scambio di dati (DDX) sia in esecuzione.  
  
```  
CWnd* m_pDlgWnd;  
```  
  
### <a name="remarks"></a>Note  
 Questo oggetto è in genere un [CDialog](../../mfc/reference/cdialog-class.md) oggetto. Gli implementatori di routine DDX o DDV personalizzate è possono utilizzare questo puntatore per ottenere l'accesso alla finestra di dialogo che contiene i controlli operino su.  
  
 Per altre informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
##  <a name="preparectrl"></a>  CDataExchange::PrepareCtrl  
 Il framework chiama questa funzione membro per preparare il controllo specificato per lo scambio di dati di finestra di dialogo (DDX) e la convalida (DDV).  
  
```  
HWND PrepareCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDC*  
 L'ID del controllo per prepararti DDX o DDV.  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto HWND del controllo in fase di preparazione per DDX o DDV.  
  
### <a name="remarks"></a>Note  
 Usare [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica; utilizzare questa funzione membro per tutti gli altri controlli.  
  
 Preparazione si suddivide l'archiviazione HWND del controllo nel `CDataExchange` classe. Il framework utilizza questo punto di controllo per ripristinare lo stato attivo per il controllo evidenziato in precedenza in caso di errore DDX o DDV.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareCtrl` per tutti i controlli non di modifica per il quale vengono lo scambio di dati tramite DDX o la convalida dei dati tramite DDV.  
  
 Per altre informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
##  <a name="prepareeditctrl"></a>  CDataExchange::PrepareEditCtrl  
 Il framework chiama questa funzione membro per preparare il controllo di modifica specificato per lo scambio di dati di finestra di dialogo (DDX) e la convalida (DDV).  
  
```  
HWND PrepareEditCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDC*  
 L'ID del controllo di modifica per prepararti DDX o DDV.  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto HWND del controllo di modifica in corso la preparazione per DDX o DDV.  
  
### <a name="remarks"></a>Note  
 Uso [PrepareCtrl](#preparectrl) invece per tutti i controlli non di modifica.  
  
 La preparazione è costituito da due operazioni. Prima di tutto `PrepareEditCtrl` archivia l'oggetto HWND del controllo nel `CDataExchange` classe. Il framework utilizza questo punto di controllo per ripristinare lo stato attivo per il controllo evidenziato in precedenza in caso di errore DDX o DDV. Secondo, `PrepareEditCtrl` imposta un flag nel `CDataExchange` classe per indicare che il controllo contenente i dati che viene scambiati o convalidato sono un controllo di modifica.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareEditCtrl` per tutti i controlli per il quale vengono lo scambio di dati tramite DDX o la convalida dei dati tramite DDV di modifica.  
  
 Per altre informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
##  <a name="prepareolectrl"></a>  CDataExchange::PrepareOleCtrl  
 Il framework chiama questa funzione membro per preparare il controllo OLE specificato per lo scambio di dati di finestra di dialogo (DDX) e la convalida (DDV).  
  
```  
COleControlSite* PrepareOleCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDC*  
 L'ID del controllo OLE per prepararti DDX o DDV.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al sito del controllo OLE.  
  
### <a name="remarks"></a>Note  
 Uso [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica oppure [PrepareCtrl](#preparectrl) per tutti gli altri controlli non OLE.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareOleCtrl` per tutti i controlli OLE per il quale vengono lo scambio di dati tramite DDX o la convalida dei dati tramite DDV.  
  
 Per altre informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd:: DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange)   
 [CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata)

