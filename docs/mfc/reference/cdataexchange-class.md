---
title: CDataExchange (classe) | Documenti Microsoft
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
ms.openlocfilehash: 2ed2f918a51c1dca1aa7e1713ac919102a599e38
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953347"
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
|[CDataExchange::Fail](#fail)|Chiamata eseguita quando si verifica un errore di convalida. Reimposta lo stato attivo sul controllo precedente e genera un'eccezione.|  
|[CDataExchange::PrepareCtrl](#preparectrl)|Prepara il controllo specificato per lo scambio di dati o la convalida. Utilizzo per i controlli nonedit.|  
|[CDataExchange::PrepareEditCtrl](#prepareeditctrl)|Prepara il controllo di modifica specificato per lo scambio di dati o la convalida.|  
|[CDataExchange::PrepareOleCtrl](#prepareolectrl)|Prepara il controllo OLE specificato per lo scambio di dati o la convalida. Utilizzo per i controlli nonedit.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataExchange::m_bSaveAndValidate](#m_bsaveandvalidate)|Flag per la direzione di DDX e DDV.|  
|[CDataExchange::m_pDlgWnd](#m_pdlgwnd)|La finestra di dialogo o la finestra in cui lo scambio di dati viene eseguita.|  
  
## <a name="remarks"></a>Note  
 `CDataExchange` non dispone di una classe basa.  
  
 Utilizzare questa classe se si siano scrivendo una routine di scambio dei dati per i tipi di dati personalizzati o controlli, o se si siano scrivendo le proprie routine di convalida dei dati. Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [finestre di dialogo](../../mfc/dialog-boxes.md).  
  
 Oggetto `CDataExchange` oggetto fornisce le informazioni sul contesto necessarie per DDX e DDV diventino inserire. Il flag *m_bSaveAndValidate* viene **FALSE** quando DDX viene usato per riempire i valori iniziali dei controlli di finestra di dialogo dai membri dati. Il flag *m_bSaveAndValidate* viene **TRUE** quando DDX consente di impostare i valori correnti dei controlli di finestra di dialogo in membri dati e quando DDV viene usato per convalidare i valori dei dati. Se la convalida DDV non riesce, la procedura DDV visualizzerà una finestra di messaggio che spiega l'errore di input. La procedura DDV chiamerà quindi `Fail` per reimpostare lo stato attivo al controllo che causa l'errore e generare un'eccezione che interrompe il processo di convalida.  
  
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
 Puntatore alla finestra padre che contiene il controllo. In genere si tratta di un [CDialog](../../mfc/reference/cdialog-class.md)-oggetto derivato.  
  
 *bSaveAndValidate*  
 Se **TRUE**, convalida i dati di questo oggetto, quindi scrive i dati dai controlli per i membri. Se **FALSE**, spostare l'oggetto dati dai membri ai controlli.  
  
### <a name="remarks"></a>Note  
 Costruire un `CDataExchange` oggetto manualmente per archiviare informazioni aggiuntive nell'oggetto exchange dati da passare a della finestra [CWnd:: DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#70](../../mfc/codesnippet/cpp/cdataexchange-class_1.cpp)]  
  
##  <a name="fail"></a>  CDataExchange::Fail  
 Il framework chiama questa funzione membro quando si verifica un errore di un'operazione di convalida (DDV) dei dati di finestra di dialogo.  
  
```  
void Fail();
```  
  
### <a name="remarks"></a>Note  
 `Fail` Ripristina la messa a fuoco e la selezione al controllo la cui convalida non riuscita (se è presente un controllo per il ripristino). `Fail` quindi genera un'eccezione di tipo [CUserException](../../mfc/reference/cuserexception-class.md) per arrestare il processo di convalida. L'eccezione, una finestra di messaggio che spiega l'errore da visualizzare. Dopo la convalida DDV non riesce, l'utente può immettere nuovamente i dati nel controllo che causa l'errore.  
  
 Gli implementatori di routine DDV personalizzate è possono chiamare `Fail` dalla routine quando una convalida non riesce.  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
##  <a name="m_bsaveandvalidate"></a>  CDataExchange::m_bSaveAndValidate  
 Questo flag indica la direzione di un'operazione di exchange (DDX) dei dati di finestra di dialogo.  
  
```  
BOOL m_bSaveAndValidate;  
```  
  
### <a name="remarks"></a>Note  
 Il flag è diverso da zero se la `CDataExchange` oggetto utilizzato per spostare i dati dai controlli finestra di dialogo a membri dati della classe di finestra di dialogo dopo che l'utente modifica i controlli. Il flag è zero se l'oggetto viene utilizzato per inizializzare i controlli di finestra di dialogo da membri dati della classe di finestra di dialogo.  
  
 Il flag è diverso da zero anche durante la convalida dei dati di finestra di dialogo (DDV).  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
##  <a name="m_pdlgwnd"></a>  CDataExchange::m_pDlgWnd  
 Contiene un puntatore per il [CWnd](../../mfc/reference/cwnd-class.md) oggetto per la quale finestra di dialogo convalida (DDV) o lo scambio di dati (DDX) eseguita.  
  
```  
CWnd* m_pDlgWnd;  
```  
  
### <a name="remarks"></a>Note  
 Questo oggetto è in genere un [CDialog](../../mfc/reference/cdialog-class.md) oggetto. Gli implementatori di routine DDX o DDV personalizzate possono utilizzare l'indicatore di misura per ottenere l'accesso alla finestra di dialogo che contiene i controlli operano.  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
##  <a name="preparectrl"></a>  CDataExchange::PrepareCtrl  
 Il framework chiama questa funzione membro per preparare il controllo specificato per dialog data exchange (DDX) e convalida (DDV).  
  
```  
HWND PrepareCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDC*  
 L'ID del controllo da essere preparati per DDX o DDV.  
  
### <a name="return-value"></a>Valore restituito  
 Il `HWND` del controllo in fase di preparazione per DDX o DDV.  
  
### <a name="remarks"></a>Note  
 Utilizzare [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica; utilizzare questa funzione membro per tutti gli altri controlli.  
  
 Preparazione si suddivide l'archiviazione del controllo `HWND` nella `CDataExchange` classe. Il framework Usa questo handle per ripristinare lo stato attivo al controllo con stato attivo in precedenza in caso di errore DDX o DDV.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareCtrl` per tutti i controlli non di modifica per il quale sono lo scambio di dati tramite DDX o la convalida dei dati tramite DDV.  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
##  <a name="prepareeditctrl"></a>  CDataExchange::PrepareEditCtrl  
 Il framework chiama questa funzione membro per preparare il controllo di modifica specificato dialog data exchange (DDX) e convalida (DDV).  
  
```  
HWND PrepareEditCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDC*  
 L'ID del controllo di modifica da essere preparati per DDX o DDV.  
  
### <a name="return-value"></a>Valore restituito  
 Il `HWND` del controllo di modifica in fase di preparazione per DDX o DDV.  
  
### <a name="remarks"></a>Note  
 Uso [PrepareCtrl](#preparectrl) invece per tutti i controlli non di modifica.  
  
 Preparazione è costituito da due operazioni. Innanzitutto `PrepareEditCtrl` archivia il controllo `HWND` nella `CDataExchange` classe. Il framework Usa questo handle per ripristinare lo stato attivo al controllo con stato attivo in precedenza in caso di errore DDX o DDV. In secondo luogo, `PrepareEditCtrl` imposta un flag nel `CDataExchange` classe per indicare che il controllo cui dati vengono scambiati o convalidato sono un controllo di modifica.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareEditCtrl` per tutti i controlli per cui sono lo scambio di dati tramite DDX o la convalida dei dati tramite DDV di modifica.  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
##  <a name="prepareolectrl"></a>  CDataExchange::PrepareOleCtrl  
 Il framework chiama questa funzione membro per preparare il controllo OLE specificato dialog data exchange (DDX) e convalida (DDV).  
  
```  
COleControlSite* PrepareOleCtrl(int nIDC);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDC*  
 L'ID del controllo OLE da essere preparati per DDX o DDV.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al sito del controllo OLE.  
  
### <a name="remarks"></a>Note  
 Uso [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica o [PrepareCtrl](#preparectrl) per tutti gli altri controlli non OLE.  
  
 Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareOleCtrl` per tutti i controlli per cui sono lo scambio di dati tramite DDX o la convalida dei dati tramite DDV OLE.  
  
 Per ulteriori informazioni su come scrivere le proprie routine DDX e DDV, vedere [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [convalida e DDX](../../mfc/dialog-data-exchange-and-validation.md) e [negli argomenti di finestra di dialogo](../../mfc/dialog-boxes.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd:: DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange)   
 [CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata)

