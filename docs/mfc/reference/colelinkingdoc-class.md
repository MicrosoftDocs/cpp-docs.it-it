---
title: Classe COleLinkingDoc | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleLinkingDoc
- AFXOLE/COleLinkingDoc
- AFXOLE/COleLinkingDoc::COleLinkingDoc
- AFXOLE/COleLinkingDoc::Register
- AFXOLE/COleLinkingDoc::Revoke
- AFXOLE/COleLinkingDoc::OnFindEmbeddedItem
- AFXOLE/COleLinkingDoc::OnGetLinkedItem
dev_langs:
- C++
helpviewer_keywords:
- COleLinkingDoc [MFC], COleLinkingDoc
- COleLinkingDoc [MFC], Register
- COleLinkingDoc [MFC], Revoke
- COleLinkingDoc [MFC], OnFindEmbeddedItem
- COleLinkingDoc [MFC], OnGetLinkedItem
ms.assetid: 9f547f35-2f95-427f-b9c0-85c31940198b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fe37e1a159fa0138c237b58ffbd622292dcba714
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33369847"
---
# <a name="colelinkingdoc-class"></a>Classe COleLinkingDoc
Classe di base per i documenti del contenitore OLE che supportano il collegamento agli elementi incorporati in essi contenuti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleLinkingDoc : public COleDocument  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinkingDoc::COleLinkingDoc](#colelinkingdoc)|Costruisce un oggetto `COleLinkingDoc`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinkingDoc::Register](#register)|Registra il documento con le DLL di sistema OLE.|  
|[COleLinkingDoc::Revoke](#revoke)|Revoca la registrazione del documento.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinkingDoc::OnFindEmbeddedItem](#onfindembeddeditem)|Trova l'elemento incorporato specificato.|  
|[COleLinkingDoc::OnGetLinkedItem](#ongetlinkeditem)|Trova l'elemento collegato specificato.|  
  
## <a name="remarks"></a>Note  
 Un'applicazione contenitore che supporta il collegamento a elementi incorporati viene chiamata "contenitore di collegamento". Il [OCLIENT](../../visual-cpp-samples.md) applicazione di esempio è riportato un esempio di un contenitore di collegamento.  
  
 Quando l'origine dell'elemento collegato è un elemento incorporato in un altro documento, tale documento contenitore deve essere caricato in modo che l'elemento incorporato da modificare. Per questo motivo, un contenitore di collegamento deve essere in grado di essere avviata da un'altra applicazione contenitore quando l'utente desidera modificare l'origine di un elemento collegato. L'applicazione deve usare anche il [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) classe in modo da poter creare documenti a livello di codice di avvio.  
  
 Per rendere il contenitore di un contenitore di collegamento, derivare la classe documento da `COleLinkingDoc` anziché [COleDocument](../../mfc/reference/coledocument-class.md). Come con qualsiasi altro contenitore OLE, è necessario progettare la classe per l'archiviazione dell'applicazione dati nativi, nonché elementi incorporati o collegati. Inoltre, è necessario progettare le strutture di dati per l'archiviazione dei dati nativi. Se si definisce un `CDocItem`-classe derivata per l'applicazione nativa dei dati, è possibile utilizzare l'interfaccia definita da `COleDocument` per archiviare i dati nativi, nonché i dati OLE.  
  
 Per consentire all'applicazione di essere avviata a livello di codice da un altro contenitore, dichiarare un `COleTemplateServer` oggetto come un membro di un'applicazione `CWinApp`-classe derivata:  
  
 [!code-cpp[NVC_MFCOleContainer#23](../../mfc/codesnippet/cpp/colelinkingdoc-class_1.h)]  
  
 Nel `InitInstance` funzione membro del `CWinApp`-derivata, creare un modello di documento e specificare il `COleLinkingDoc`-derivata come classe di documento:  
  
 [!code-cpp[NVC_MFCOleContainer#24](../../mfc/codesnippet/cpp/colelinkingdoc-class_2.cpp)]  
  
 Connettere il `COleTemplateServer` oggetto ai modelli di documento chiamando l'oggetto `ConnectTemplate` funzione membro, nonché registrare la classe tutti gli oggetti con il sistema OLE chiamando **COleTemplateServer:: RegisterAll**:  
  
 [!code-cpp[NVC_MFCOleContainer#25](../../mfc/codesnippet/cpp/colelinkingdoc-class_3.cpp)]  
  
 Per un esempio `CWinApp`-definizione di classe derivata e `InitInstance` funzione, vedere OCLIENT. H e OCLIENT. Nell'esempio MFC CPP [OCLIENT](../../visual-cpp-samples.md).  
  
 Per ulteriori informazioni sull'utilizzo `COleLinkingDoc`, vedere gli articoli [contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md) e [contenitori: funzionalità avanzate](../../mfc/containers-advanced-features.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 [COleDocument](../../mfc/reference/coledocument-class.md)  
  
 `COleLinkingDoc`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="colelinkingdoc"></a>  COleLinkingDoc::COleLinkingDoc  
 Costruisce un `COleLinkingDoc` oggetto senza iniziare le comunicazioni con le DLL di sistema OLE.  
  
```  
COleLinkingDoc();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare il `Register` funzione membro per informare OLE che il documento è aperto.  
  
##  <a name="onfindembeddeditem"></a>  COleLinkingDoc::OnFindEmbeddedItem  
 Chiamato dal framework per determinare se il documento contiene un elemento OLE incorporato con il nome specificato.  
  
```  
virtual COleClientItem* OnFindEmbeddedItem(LPCTSTR lpszItemName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszItemName`  
 Puntatore al nome di elemento richiesto OLE incorporati.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'elemento specificato. **NULL** se l'elemento non viene trovato.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita esegue ricerche nell'elenco di elementi incorporati per un elemento con il nome specificato (il confronto di nome è tra maiuscole e minuscole). Eseguire l'override di questa funzione se si dispone di un metodo di archiviazione o nomi di elementi OLE incorporati.  
  
##  <a name="ongetlinkeditem"></a>  COleLinkingDoc::OnGetLinkedItem  
 Chiamato dal framework per controllare se il documento contiene un elemento del server collegato con il nome specificato.  
  
```  
virtual COleServerItem* OnGetLinkedItem(LPCTSTR lpszItemName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszItemName`  
 Puntatore al nome di elemento richiesto OLE collegato.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'elemento specificato. **NULL** se l'elemento non viene trovato.  
  
### <a name="remarks"></a>Note  
 Il valore predefinito `COleLinkingDoc` implementazione restituisce sempre **NULL**. Questa funzione è sottoposta a override nella classe derivata `COleServerDoc` la ricerca nell'elenco di elementi di server OLE per un elemento collegato con il nome specificato (il confronto di nome è tra maiuscole e minuscole). Eseguire l'override di questa funzione se è stato implementato il proprio metodo di archiviazione o il recupero di elementi del server collegato.  
  
##  <a name="register"></a>  COleLinkingDoc::Register  
 Informa il sistema OLE DLL che il documento è aperto.  
  
```  
BOOL Register(
    COleObjectFactory* pFactory,  
    LPCTSTR lpszPathName);
```  
  
### <a name="parameters"></a>Parametri  
 *pFactory*  
 Puntatore a un oggetto factory OLE (può essere **NULL**).  
  
 `lpszPathName`  
 Puntatore al percorso completo del documento contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento è registrato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione durante la creazione o apertura di un file denominato per registrare il documento con le DLL di sistema OLE. Non è necessario chiamare questa funzione se il documento rappresenta un elemento incorporato.  
  
 Se si utilizza `COleTemplateServer` nell'applicazione, `Register` viene chiamato automaticamente da `COleLinkingDoc`dell'implementazione di `OnNewDocument`, `OnOpenDocument`, e `OnSaveDocument`.  
  
##  <a name="revoke"></a>  COleLinkingDoc::Revoke  
 Informa il sistema OLE DLL che il documento non è più visualizzato.  
  
```  
void Revoke();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per revocare la registrazione del documento con le DLL di sistema OLE.  
  
 Quando si chiude un file denominato, è necessario chiamare questa funzione, ma in genere non occorre chiamarlo direttamente. `Revoke` viene chiamato automaticamente da `COleLinkingDoc`dell'implementazione di `OnCloseDocument`, `OnNewDocument`, `OnOpenDocument`, e `OnSaveDocument`.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [COleDocument (classe)](../../mfc/reference/coledocument-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)
