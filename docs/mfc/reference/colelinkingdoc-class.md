---
title: Classe COleLinkingDoc | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- OLE containers, client items
- COleLinkingDoc class
ms.assetid: 9f547f35-2f95-427f-b9c0-85c31940198b
caps.latest.revision: 24
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
ms.openlocfilehash: acdfde1413d5ff93efc63dbbf211881f71cf624e
ms.lasthandoff: 02/24/2017

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
|[COleLinkingDoc::OnFindEmbeddedItem](#onfindembeddeditem)|Consente di trovare l'elemento incorporato specificato.|  
|[COleLinkingDoc::OnGetLinkedItem](#ongetlinkeditem)|Consente di trovare l'elemento collegato specificato.|  
  
## <a name="remarks"></a>Note  
 Un'applicazione contenitore che supporta il collegamento a elementi incorporati è chiamata "contenitore di collegamento". Il [OCLIENT](../../visual-cpp-samples.md) applicazione di esempio è riportato un esempio di un contenitore di collegamento.  
  
 Quando l'origine dell'elemento collegato è un elemento incorporato in un altro documento, tale documento contenitore deve essere caricato nel affinché l'elemento incorporato da modificare. Per questo motivo, un contenitore di collegamento deve essere in grado di essere avviata da un'altra applicazione contenitore quando l'utente desidera modificare l'origine di un elemento collegato. L'applicazione deve utilizzare anche il [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) classe in modo da poter creare documenti a livello di codice di avvio.  
  
 Per rendere il contenitore di un contenitore di collegamento, derivare la classe documento da `COleLinkingDoc` anziché [COleDocument](../../mfc/reference/coledocument-class.md). Come con qualsiasi altro contenitore OLE, è necessario progettare la classe per l'archiviazione dell'applicazione dati nativi, nonché elementi incorporati o collegati. Inoltre, è necessario progettare strutture di dati per l'archiviazione dei dati nativi. Se si definisce un `CDocItem`-classe derivata per l'applicazione nativa dati, è possibile utilizzare l'interfaccia definita da `COleDocument` per archiviare i dati nativi, nonché i dati OLE.  
  
 Per consentire all'applicazione di essere avviata a livello di codice da un altro contenitore, dichiarare un `COleTemplateServer` oggetto come un membro di un'applicazione `CWinApp`-classe derivata:  
  
 [!code-cpp[&#23; NVC_MFCOleContainer](../../mfc/codesnippet/cpp/colelinkingdoc-class_1.h)]  
  
 Nel `InitInstance` funzione membro il `CWinApp`-derivata, creare un modello di documento e specificare il `COleLinkingDoc`-derivato alla classe di documento:  
  
 [!code-cpp[NVC_MFCOleContainer&#24;](../../mfc/codesnippet/cpp/colelinkingdoc-class_2.cpp)]  
  
 Connettere il `COleTemplateServer` oggetto ai modelli di documento chiamando l'oggetto `ConnectTemplate` funzione membro, nonché registrare la classe tutti gli oggetti con il sistema OLE chiamando **COleTemplateServer:: RegisterAll**:  
  
 [!code-cpp[NVC_MFCOleContainer&#25;](../../mfc/codesnippet/cpp/colelinkingdoc-class_3.cpp)]  
  
 Per un esempio `CWinApp`-definizione della classe derivata e `InitInstance` funzione, vedere OCLIENT. H e OCLIENT. Nell'esempio MFC CPP [OCLIENT](../../visual-cpp-samples.md).  
  
 Per ulteriori informazioni sull'utilizzo di `COleLinkingDoc`, vedere gli articoli [contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md) e [contenitori: funzionalità avanzate](../../mfc/containers-advanced-features.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 [COleDocument](../../mfc/reference/coledocument-class.md)  
  
 `COleLinkingDoc`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="colelinkingdoc"></a>COleLinkingDoc::COleLinkingDoc  
 Costruisce un `COleLinkingDoc` oggetto senza inizio le comunicazioni con le DLL di sistema OLE.  
  
```  
COleLinkingDoc();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare il `Register` funzione membro per informare OLE che il documento viene aperto.  
  
##  <a name="onfindembeddeditem"></a>COleLinkingDoc::OnFindEmbeddedItem  
 Chiamato dal framework per determinare se il documento contiene un elemento OLE incorporato con il nome specificato.  
  
```  
virtual COleClientItem* OnFindEmbeddedItem(LPCTSTR lpszItemName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszItemName`  
 Puntatore al nome di elemento richiesto OLE incorporati.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento specificato. **NULL** se l'elemento non viene trovato.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita esegue ricerche nell'elenco di elementi incorporati per un elemento con il nome specificato (il confronto tra i nomi viene fatta distinzione tra maiuscole e minuscole). Eseguire l'override di questa funzione se si dispone di un metodo di archiviazione o nomi di elementi OLE incorporati.  
  
##  <a name="ongetlinkeditem"></a>COleLinkingDoc::OnGetLinkedItem  
 Chiamato dal framework per controllare se il documento contiene un elemento del server collegato con il nome specificato.  
  
```  
virtual COleServerItem* OnGetLinkedItem(LPCTSTR lpszItemName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszItemName`  
 Puntatore al nome di OLE collegati elemento richiesto.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento specificato. **NULL** se l'elemento non viene trovato.  
  
### <a name="remarks"></a>Note  
 Il valore predefinito `COleLinkingDoc` implementazione restituisce sempre **NULL**. Questa funzione è sottoposta a override nella classe derivata `COleServerDoc` la ricerca nell'elenco di elementi di server OLE per un elemento collegato con il nome specificato (il confronto tra i nomi viene fatta distinzione tra maiuscole e minuscole). Eseguire l'override di questa funzione se è stato implementato il proprio metodo di archiviazione o il recupero di elementi del server collegato.  
  
##  <a name="register"></a>COleLinkingDoc::Register  
 Informa il sistema OLE DLL che il documento viene aperto.  
  
```  
BOOL Register(
    COleObjectFactory* pFactory,  
    LPCTSTR lpszPathName);
```  
  
### <a name="parameters"></a>Parametri  
 *pFactory*  
 Puntatore a un oggetto factory OLE (può essere **NULL**).  
  
 `lpszPathName`  
 Puntatore a un percorso completo del documento contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il documento viene registrato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione quando si crea o apre un file denominato per registrare il documento con le DLL di sistema OLE. Non è necessario chiamare questa funzione se il documento rappresenta un elemento incorporato.  
  
 Se si utilizza `COleTemplateServer` nell'applicazione, `Register` viene chiamato automaticamente da `COleLinkingDoc`dell'implementazione di `OnNewDocument`, `OnOpenDocument`, e `OnSaveDocument`.  
  
##  <a name="revoke"></a>COleLinkingDoc::Revoke  
 Informa il sistema OLE DLL che il documento non è più visualizzato.  
  
```  
void Revoke();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per revocare la registrazione del documento con le DLL di sistema OLE.  
  
 È necessario chiamare questa funzione quando si chiude un file denominato, ma in genere non occorre chiamarlo direttamente. `Revoke`viene chiamato automaticamente da `COleLinkingDoc`dell'implementazione di `OnCloseDocument`, `OnNewDocument`, `OnOpenDocument`, e `OnSaveDocument`.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [COleDocument (classe)](../../mfc/reference/coledocument-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)

