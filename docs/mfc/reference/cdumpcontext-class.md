---
title: Classe CDumpContext | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- CDumpContext class
- AfxDump object
- diagnostics, diagnostic classes
- diagnostic classes
- diagnosis, diagnostic classes
ms.assetid: 98c52b2d-14b5-48ed-b423-479a4d1c60fa
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
ms.sourcegitcommit: bb94e24657d16b2a3eda3a770c2b6ae734c6006f
ms.openlocfilehash: 0722150ff3cc496a462008b362e55362aeebb9c1
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

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
|[CDumpContext::DumpAsHex](#dumpashex)|Trasferisce l'elemento indicato in formato esadecimale.|  
|[CDumpContext::Flush](#flush)|Scarica tutti i dati nel buffer del contesto di dump.|  
|[CDumpContext::GetDepth](#getdepth)|Ottiene un valore intero corrispondente per la profondità del dump.|  
|[CDumpContext::HexDump](#hexdump)|Esegue il dump di byte contenuti in una matrice in formato esadecimale.|  
|[CDumpContext::SetDepth](#setdepth)|Imposta la profondità del dump.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDumpContext::operator&lt;&lt;](#operator_lt_lt)|Inserisce il contesto di dump variabili e oggetti.|  
  
## <a name="remarks"></a>Note  
 `CDumpContext`non dispone di una classe di base.  
  
 È possibile utilizzare [afxDump](diagnostic-services.md#afxdump), un dichiarata in precedenza `CDumpContext` oggetto, per la maggior parte del dump. Il `afxDump` l'oggetto è disponibile solo nella versione di Debug della libreria di classi Microsoft Foundation.  
  
 Diversi della memoria [servizi diagnostici](../../mfc/reference/diagnostic-services.md) utilizzare `afxDump` per il relativo output.  
  
 Nell'ambiente di Windows, l'output predefinito `afxDump` oggetto concettualmente simile per la `cerr` flusso, viene indirizzato al debugger tramite la funzione di Windows **OutputDebugString**.  
  
 Il `CDumpContext` classe dispone di un inserimento in overload ( **<<**) operatore per `CObject` puntatori che trasferisce i dati dell'oggetto. Se è necessario un formato dump personalizzato per un oggetto derivato, eseguire l'override [CObject::Dump](../../mfc/reference/cobject-class.md#dump). La maggior parte delle classi Microsoft Foundation implementano un sottoposto a override `Dump` funzione membro.  
  
 Le classi che non sono derivate da `CObject`, ad esempio `CString`, `CTime`, e `CTimeSpan`, hanno i propri overload `CDumpContext` degli operatori di inserimento, come strutture di eseguire spesso utilizzato, ad esempio **CFileStatus**, `CPoint`, e `CRect`.  
  
 Se si utilizza il [IMPLEMENT_DYNAMIC](../../mfc/reference/run-time-object-model-services.md#implement_dynamic) o [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) macro nell'implementazione della classe, quindi `CObject::Dump` verrà stampato il nome del `CObject`-classe derivata. In caso contrario, verrà stampata `CObject`.  
  
 Il `CDumpContext` classe è disponibile con le versioni di Debug e di rilascio della libreria, ma la `Dump` funzione membro è definita solo nella versione di Debug. Utilizzare **debug #ifdef**  /  `#endif` istruzioni da racchiudere tra parentesi quadre codice diagnostica, tra cui personalizzato `Dump` funzioni membro.  
  
 Prima di creare la propria `CDumpContext` dell'oggetto, è necessario creare un `CFile` oggetto che viene utilizzato come destinazione del dump.  
  
 Per ulteriori informazioni su `CDumpContext`, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  
  
 **#define debug**  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDumpContext`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="cdumpcontext"></a>CDumpContext::CDumpContext  
 Costruisce un oggetto della classe `CDumpContext`.  
  
```  
CDumpContext(CFile* pFile = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pFile`  
 Un puntatore al `CFile` oggetto che rappresenta la destinazione del dump.  
  
### <a name="remarks"></a>Note  
 Il `afxDump` oggetto viene creato automaticamente.  
  
 Non scrivere nei sottostante `CFile` mentre il contesto di dump è attivo; in caso contrario, interferisce con il dump. Nell'ambiente di Windows, l'output viene indirizzato al debugger tramite la funzione Windows **OutputDebugString**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities #12](../../mfc/codesnippet/cpp/cdumpcontext-class_1.cpp)]  
  
##  <a name="dumpashex"></a>CDumpContext::DumpAsHex  
 Esegue il dump del tipo specificato, formattato come numeri esadecimali.  
  
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
 Chiamare questa funzione membro per l'elemento del tipo specificato come numero esadecimale di dump. Per eseguire il dump una matrice, chiamare [CDumpContext::HexDump](#hexdump).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities #13](../../mfc/codesnippet/cpp/cdumpcontext-class_2.cpp)]  
  
##  <a name="flush"></a>CDumpContext::Flush  
 Forza tutti i dati rimanenti nel buffer in cui scrivere il file associato al contesto di dump.  
  
```  
void Flush();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities #14](../../mfc/codesnippet/cpp/cdumpcontext-class_3.cpp)]  
  
##  <a name="getdepth"></a>CDumpContext::GetDepth  
 Determina se un dump completo o superficiale è in corso.  
  
```  
int GetDepth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La profondità del dump secondo l'impostazione `SetDepth`.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [SetDepth](#setdepth).  
  
##  <a name="hexdump"></a>CDumpContext::HexDump  
 Esegue il dump di una matrice di byte formattati come numeri esadecimali.  
  
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
  
 `nBytes`  
 Il numero di byte per eseguire il dump.  
  
 `nWidth`  
 Numero massimo di byte il dump per ogni riga (non la larghezza della riga di output).  
  
### <a name="remarks"></a>Note  
 Per eseguire il dump di un tipo di elemento singolo, specifico come numero esadecimale, chiamare [CDumpContext::DumpAsHex](#dumpashex).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities #15](../../mfc/codesnippet/cpp/cdumpcontext-class_4.cpp)]  
  
##  <a name="operator_lt_lt"></a>CDumpContext::operator&lt;&lt;  
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
 Oggetto `CDumpContext` riferimento. Utilizzando il valore restituito, è possibile scrivere più operazioni di inserimento in una singola riga di codice sorgente.  
  
### <a name="remarks"></a>Note  
 L'operatore di inserimento è sottoposto a overload per `CObject` anche i puntatori a quello dei tipi più primitivi. Un puntatore al carattere comporta un dump del contenuto di stringa; un puntatore a `void` risultati in un dump esadecimale dell'indirizzo solo. Oggetto **LONGLONG** risultati in un dump di un intero con segno a 64 bit; Oggetto **ULONGLONG** risultati in un dump di un intero senza segno a 64 bit.  
  
 Se si utilizza il `IMPLEMENT_DYNAMIC` o `IMPLEMENT_SERIAL` macro nell'implementazione della classe, quindi l'operatore di inserimento, tramite `CObject::Dump`, verrà stampato il nome del `CObject`-classe derivata. In caso contrario, verrà stampata `CObject`. Se esegue l'override di `Dump` funzione di classe, sarà possibile fornire un output più significativo del contenuto dell'oggetto anziché un dump esadecimale.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities #17](../../mfc/codesnippet/cpp/cdumpcontext-class_5.cpp)]  
  
##  <a name="setdepth"></a>CDumpContext::SetDepth  
 Imposta la profondità per il dump.  
  
```  
void SetDepth(int nNewDepth);
```  
  
### <a name="parameters"></a>Parametri  
 *nNewDepth*  
 Il nuovo valore di profondità.  
  
### <a name="remarks"></a>Note  
 Se si dump di un tipo primitivo o semplice `CObject` che non contiene puntatori ad altri oggetti, quindi è sufficiente un valore pari a 0. Un valore maggiore di 0 specifica un dump completo in cui tutti gli oggetti vengono copiate in modo ricorsivo. Ad esempio, un dump completo di una raccolta viene eseguito il dump di tutti gli elementi della raccolta. È possibile utilizzare altri valori di profondità specifica nelle classi derivate.  
  
> [!NOTE]
>  I riferimenti circolari non vengono rilevati nei dump completo e possono causare un ciclo infinito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities n. 16](../../mfc/codesnippet/cpp/cdumpcontext-class_6.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFile (classe)](../../mfc/reference/cfile-class.md)   
 [Classe CObject](../../mfc/reference/cobject-class.md)

