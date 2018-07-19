---
title: Classe CDumpContext | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDumpContext
- AFX/CDumpContext
- AFX/CDumpContext::CDumpContext
- AFX/CDumpContext::DumpAsHex
- AFX/CDumpContext::Flush
- AFX/CDumpContext::GetDepth
- AFX/CDumpContext::HexDump
- AFX/CDumpContext::SetDepth
dev_langs:
- C++
helpviewer_keywords:
- CDumpContext [MFC], CDumpContext
- CDumpContext [MFC], DumpAsHex
- CDumpContext [MFC], Flush
- CDumpContext [MFC], GetDepth
- CDumpContext [MFC], HexDump
- CDumpContext [MFC], SetDepth
ms.assetid: 98c52b2d-14b5-48ed-b423-479a4d1c60fa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d80ed097056c9d52f5f9d98ab8e3f80fae431d98
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37336345"
---
# <a name="cdumpcontext-class"></a>Classe CDumpContext
Supporta l'output di diagnostica orientato al flusso sotto forma di testo leggibile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDumpContext  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDumpContext::CDumpContext](#cdumpcontext)|Costruisce un oggetto `CDumpContext`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDumpContext::DumpAsHex](#dumpashex)|Trasferisce l'elemento indicato nel formato esadecimale.|  
|[CDumpContext::Flush](#flush)|Scarica tutti i dati nel buffer del contesto di dump.|  
|[CDumpContext::GetDepth](#getdepth)|Ottiene un valore intero corrispondente per la profondità del dump.|  
|[CDumpContext::HexDump](#hexdump)|I dump di byte contenuti in una matrice in formato esadecimale.|  
|[CDumpContext::SetDepth](#setdepth)|Imposta la profondità del dump.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDumpContext::operator &lt;&lt;](#operator_lt_lt)|Inserisce le variabili e gli oggetti nel contesto di dump.|  
  
## <a name="remarks"></a>Note  
 `CDumpContext` non è una classe di base.  
  
 È possibile usare [afxDump](diagnostic-services.md#afxdump), un predichiarati `CDumpContext` oggetto, per la maggior parte del dump. Il `afxDump` l'oggetto è disponibile solo nella versione di Debug della libreria di classi Microsoft Foundation.  
  
 Diversi della memoria [servizi diagnostici](../../mfc/reference/diagnostic-services.md) usare `afxDump` per l'output delle applicazioni.  
  
 In ambiente Windows, l'output dall'oggetto predefinito `afxDump` oggetti, concettualmente simili al `cerr` di flusso, viene indirizzato al debugger tramite la funzione di Windows `OutputDebugString`.  
  
 Il `CDumpContext` classe dispone di un inserimento di overload ( **<<**) operatore per `CObject` puntatori che esegue il dump dei dati dell'oggetto. Se è necessario un formato dump personalizzato per un oggetto derivato, eseguire l'override [CObject::Dump](../../mfc/reference/cobject-class.md#dump). La maggior parte delle classi di Microsoft Foundation implementano un sottoposto a override `Dump` funzione membro.  
  
 Le classi che non sono derivate da `CObject`, ad esempio `CString`, `CTime`, e `CTimeSpan`, hanno i propri overload `CDumpContext` degli operatori di inserimento, come strutture usate frequentemente, ad esempio `CFileStatus`, `CPoint`, e `CRect`.  
  
 Se si usa la [IMPLEMENT_DYNAMIC](../../mfc/reference/run-time-object-model-services.md#implement_dynamic) oppure [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) macro nell'implementazione della classe, quindi `CObject::Dump` stamperà il nome del `CObject`-classe derivata. In caso contrario, verrà stampata `CObject`.  
  
 Il `CDumpContext` classe è disponibile con le versioni di Debug e di versione della libreria, ma il `Dump` funzione membro è definita solo nella versione di Debug. Uso **debug #ifdef**  /  `#endif` istruzioni da racchiudere tra parentesi quadre del codice di diagnostica, inclusi personalizzata `Dump` funzioni membro.  
  
 Prima di creare il proprio `CDumpContext` dell'oggetto, è necessario creare un `CFile` oggetto usato come destinazione dei dump.  
  
 Per ulteriori informazioni sul `CDumpContext`, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  
  
 **#define debug**  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDumpContext`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="cdumpcontext"></a>  CDumpContext::CDumpContext  
 Costruisce un oggetto della classe `CDumpContext`.  
  
```  
CDumpContext(CFile* pFile = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pFile*  
 Un puntatore al `CFile` oggetto che rappresenta la destinazione del dump.  
  
### <a name="remarks"></a>Note  
 Il `afxDump` oggetto viene creato automaticamente.  
  
 Non scrivere sottostante `CFile` mentre il contesto di dump è attivo; in caso contrario, onde evitare di interferire con il dump. In ambiente Windows, l'output viene indirizzato al debugger tramite la funzione Windows `OutputDebugString`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#12](../../mfc/codesnippet/cpp/cdumpcontext-class_1.cpp)]  
  
##  <a name="dumpashex"></a>  CDumpContext::DumpAsHex  
 Esegue il dump nel tipo specificato nel formato numeri esadecimali.  
  
```  
CDumpContext& DumpAsHex(BYTE b);  
CDumpContext& DumpAsHex(DWORD dw);  
CDumpContext& DumpAsHex(int n);  
CDumpContext& DumpAsHex(LONG l);  
CDumpContext& DumpAsHex(LONGLONG n);  
CDumpContext& DumpAsHex(UINT u);  
CDumpContext& DumpAsHex(ULONGLONG n);  
CDumpContext& DumpAsHex(WORD w);
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento a un oggetto `CDumpContext`.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per l'elemento del tipo specificato come numero esadecimale di dump. Per una matrice di dump, chiamare [CDumpContext::HexDump](#hexdump).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#13](../../mfc/codesnippet/cpp/cdumpcontext-class_2.cpp)]  
  
##  <a name="flush"></a>  CDumpContext::Flush  
 Forza i dati rimanenti nel buffer da scrivere nel file associato al contesto di dump.  
  
```  
void Flush();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#14](../../mfc/codesnippet/cpp/cdumpcontext-class_3.cpp)]  
  
##  <a name="getdepth"></a>  CDumpContext::GetDepth  
 Determina se un dump completo o superficiale è nel processo.  
  
```  
int GetDepth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La profondità del dump come impostato da `SetDepth`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [SetDepth](#setdepth).  
  
##  <a name="hexdump"></a>  CDumpContext::HexDump  
 I dump di una matrice di byte nel formato numeri esadecimali.  
  
```  
void HexDump(
    LPCTSTR lpszLine,  
    BYTE* pby,  
    int nBytes,  
    int nWidth);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszLine*  
 Una stringa di output all'inizio di una nuova riga.  
  
 *pby*  
 Un puntatore a un buffer contenente i byte per eseguire il dump.  
  
 *nBytes*  
 Il numero di byte per eseguire il dump.  
  
 *nWidth*  
 Numero massimo di byte il dump per ogni riga (non la larghezza della riga di output).  
  
### <a name="remarks"></a>Note  
 Per eseguire il dump di un tipo di elemento singolo, specifico come numero esadecimale, chiamare [CDumpContext::DumpAsHex](#dumpashex).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#15](../../mfc/codesnippet/cpp/cdumpcontext-class_4.cpp)]  
  
##  <a name="operator_lt_lt"></a>  CDumpContext::operator &lt;&lt;  
 Restituisce i dati specificati per il contesto di dump.  
  
```  
CDumpContext& operator<<(const CObject* pOb);  
CDumpContext& operator<<(const CObject& ob);  
CDumpContext& operator<<(LPCTSTR lpsz);  
CDumpContext& operator<<(const void* lp);  
CDumpContext& operator<<(BYTE by);  
CDumpContext& operator<<(WORD w);  
CDumpContext& operator<<(DWORD dw);  
CDumpContext& operator<<(int n);  
CDumpContext& operator<<(double d);  
CDumpContext& operator<<(float f);  
CDumpContext& operator<<(LONG l);  
CDumpContext& operator<<(UINT u);  
CDumpContext& operator<<(LPCWSTR lpsz);  
CDumpContext& operator<<(LPCSTR lpsz);  
CDumpContext& operator<<(LONGLONG n);  
CDumpContext& operator<<(ULONGLONG n);  
CDumpContext& operator<<(HWND h);  
CDumpContext& operator<<(HDC h);  
CDumpContext& operator<<(HMENU h);  
CDumpContext& operator<<(HACCEL h);  
CDumpContext& operator<<(HFONT h);
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CDumpContext` riferimento. Usando il valore restituito, è possibile scrivere più operazioni di inserimento in una singola riga di codice sorgente.  
  
### <a name="remarks"></a>Note  
 L'operatore di inserimento è sottoposto a overload per `CObject` puntatori nonché tipi più primitivi. Puntatore al carattere risultante in un dump del contenuto delle stringhe; un puntatore a **void** comporta un dump esadecimale dell'indirizzo solo. Un LongLong con risultati in un dump di un intero con segno a 64 bit; Un valore ULONGLONG comporta un dump di un intero senza segno a 64 bit.  
  
 Se si usa la macro IMPLEMENT_DYNAMIC o IMPLEMENT_SERIAL nell'implementazione della classe, quindi l'operatore di inserimento, attraverso `CObject::Dump`, verrà stampato il nome del `CObject`-classe derivata. In caso contrario, verrà stampata `CObject`. Se esegue l'override di `Dump` funzione della classe, sarà possibile fornire un output più significativo del contenuto dell'oggetto anziché un dump esadecimale.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#17](../../mfc/codesnippet/cpp/cdumpcontext-class_5.cpp)]  
  
##  <a name="setdepth"></a>  CDumpContext::SetDepth  
 Imposta la profondità per il dump.  
  
```  
void SetDepth(int nNewDepth);
```  
  
### <a name="parameters"></a>Parametri  
 *nNewDepth*  
 Il nuovo valore della profondità.  
  
### <a name="remarks"></a>Note  
 Se si è il dump di un tipo primitivo o semplice `CObject` che non contiene puntatori ad altri oggetti, quindi è sufficiente un valore pari a 0. Un valore maggiore di 0 specifica un dump completo in cui tutti gli oggetti vengono copiate in modo ricorsivo. Ad esempio, un dump completo di una raccolta viene eseguito il dump di tutti gli elementi della raccolta. È possibile usare altri valori di profondità della specifica nelle classi derivate.  
  
> [!NOTE]
>  I riferimenti circolari non vengono rilevati nei dump completo e possono comportare un ciclo infinito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#16](../../mfc/codesnippet/cpp/cdumpcontext-class_6.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CFile](../../mfc/reference/cfile-class.md)   
 [Classe CObject](../../mfc/reference/cobject-class.md)
