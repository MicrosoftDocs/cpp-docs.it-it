---
title: Classe COleLinkingDoc | Microsoft Docs
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
ms.openlocfilehash: b957aa3129f3fedd4aaeecf9f70d6620dc7d5ede
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46443475"
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

Un'applicazione contenitore che supporta il collegamento a elementi incorporati è chiamata "contenitore collegamento". Il [OCLIENT](../../visual-cpp-samples.md) applicazione di esempio è un esempio di un contenitore di collegamento.

Quando l'origine dell'elemento collegato è un elemento incorporato in un altro documento, tale documento che lo contiene deve essere caricato nell'ordine per l'elemento incorporato da modificare. Per questo motivo, un contenitore di collegamento deve essere in grado di essere avviata da un'altra applicazione contenitore quando l'utente desidera modificare l'origine di un elemento collegato. L'applicazione deve usare anche il [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) classe in modo da poter creare i documenti quando avviata a livello di codice.

Per rendere il contenitore di un contenitore di collegamento, derivare la classe documento da `COleLinkingDoc` invece di [COleDocument](../../mfc/reference/coledocument-class.md). Come con qualsiasi altro contenitore OLE, è necessario progettare la classe per l'archiviazione dell'applicazione nativa dei dati, nonché elementi incorporati o collegati. Inoltre, è necessario progettare le strutture di dati per l'archiviazione dei dati nativi. Se si definisce una `CDocItem`-classe derivata per l'applicazione nativa di dati, è possibile usare l'interfaccia definita da `COleDocument` per archiviare i dati nativi, nonché i dati OLE.

Per consentire all'applicazione di essere avviata a livello di codice da un altro contenitore, dichiarare un `COleTemplateServer` oggetto come un membro della propria applicazione `CWinApp`-classe derivata:

[!code-cpp[NVC_MFCOleContainer#23](../../mfc/codesnippet/cpp/colelinkingdoc-class_1.h)]

Nel `InitInstance` funzione membro del `CWinApp`-derivato (classe), creare un modello di documento e specificare il `COleLinkingDoc`-derivata alla classe documento:

[!code-cpp[NVC_MFCOleContainer#24](../../mfc/codesnippet/cpp/colelinkingdoc-class_2.cpp)]

Connettere il `COleTemplateServer` oggetto ai modelli di documento chiamando l'oggetto `ConnectTemplate` funzione membro, nonché registrare classe tutti gli oggetti con il sistema OLE chiamando `COleTemplateServer::RegisterAll`:

[!code-cpp[NVC_MFCOleContainer#25](../../mfc/codesnippet/cpp/colelinkingdoc-class_3.cpp)]

Per un esempio `CWinApp`-definizione di classe derivata e `InitInstance` function, vedere OCLIENT. H e OCLIENT. CPP nell'esempio di MFC [OCLIENT](../../visual-cpp-samples.md).

Per altre informazioni sull'uso `COleLinkingDoc`, vedere gli articoli [contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md) e [contenitori: funzionalità avanzate](../../mfc/containers-advanced-features.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

[COleDocument](../../mfc/reference/coledocument-class.md)

`COleLinkingDoc`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="colelinkingdoc"></a>  COleLinkingDoc::COleLinkingDoc

Costruisce un `COleLinkingDoc` oggetto senza iniziano le comunicazioni con il sistema OLE DLL.

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

*lpszItemName*<br/>
Puntatore al nome di OLE incorporati elemento richiesto.

### <a name="return-value"></a>Valore restituito

Un puntatore all'elemento specificato; NULL se l'elemento non viene trovato.

### <a name="remarks"></a>Note

L'implementazione predefinita cerca l'elenco di elementi incorporati per un elemento con il nome specificato (nel confronto tra nomi viene fatta distinzione tra maiuscole e minuscole). Eseguire l'override di questa funzione se si dispone di un metodo personalizzato di archiviazione di dati o elementi OLE incorporati di denominazione.

##  <a name="ongetlinkeditem"></a>  COleLinkingDoc::OnGetLinkedItem

Chiamato dal framework per verificare se il documento contiene un elemento del server collegato con il nome specificato.

```
virtual COleServerItem* OnGetLinkedItem(LPCTSTR lpszItemName);
```

### <a name="parameters"></a>Parametri

*lpszItemName*<br/>
Puntatore al nome di OLE collegato elemento richiesto.

### <a name="return-value"></a>Valore restituito

Un puntatore all'elemento specificato; NULL se l'elemento non viene trovato.

### <a name="remarks"></a>Note

Il valore predefinito `COleLinkingDoc` implementazione restituisce sempre NULL. Questa funzione è sottoposta a override nella classe derivata `COleServerDoc` per cercare l'elenco di elementi del server OLE per un elemento collegato con il nome specificato (nel confronto tra nomi viene fatta distinzione tra maiuscole e minuscole). Eseguire l'override di questa funzione se è stato implementato il proprio metodo di archiviazione o il recupero di elementi del server collegato.

##  <a name="register"></a>  COleLinkingDoc::Register

Informa il sistema OLE DLL che il documento è aperto.

```
BOOL Register(
    COleObjectFactory* pFactory,
    LPCTSTR lpszPathName);
```

### <a name="parameters"></a>Parametri

*pFactory*<br/>
Puntatore a un oggetto factory OLE (può essere NULL).

*lpszPathName*<br/>
Puntatore al percorso completo del documento contenitore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stato registrato correttamente il documento; in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione durante la creazione o apertura di un file denominato per registrare il documento con le DLL di sistema OLE. Non è necessario chiamare questa funzione se il documento rappresenta un elemento incorporato.

Se si usa `COleTemplateServer` nell'applicazione `Register` viene chiamato automaticamente dal `COleLinkingDoc`dell'implementazione di `OnNewDocument`, `OnOpenDocument`, e `OnSaveDocument`.

##  <a name="revoke"></a>  COleLinkingDoc::Revoke

Informa il sistema OLE DLL che il documento non è più aperto.

```
void Revoke();
```

### <a name="remarks"></a>Note

Chiamare questa funzione per revocare la registrazione del documento con le DLL di sistema OLE.

È necessario chiamare questa funzione quando la chiusura di un file denominato, ma in genere non occorre chiamarlo direttamente. `Revoke` viene chiamato automaticamente da `COleLinkingDoc`dell'implementazione del `OnCloseDocument`, `OnNewDocument`, `OnOpenDocument`, e `OnSaveDocument`.

## <a name="see-also"></a>Vedere anche

[Esempio MFC OCLIENT](../../visual-cpp-samples.md)<br/>
[Classe COleDocument](../../mfc/reference/coledocument-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)
