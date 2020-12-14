---
description: 'Altre informazioni su: classe COleLinkingDoc'
title: Classe COleLinkingDoc
ms.date: 11/04/2016
f1_keywords:
- COleLinkingDoc
- AFXOLE/COleLinkingDoc
- AFXOLE/COleLinkingDoc::COleLinkingDoc
- AFXOLE/COleLinkingDoc::Register
- AFXOLE/COleLinkingDoc::Revoke
- AFXOLE/COleLinkingDoc::OnFindEmbeddedItem
- AFXOLE/COleLinkingDoc::OnGetLinkedItem
helpviewer_keywords:
- COleLinkingDoc [MFC], COleLinkingDoc
- COleLinkingDoc [MFC], Register
- COleLinkingDoc [MFC], Revoke
- COleLinkingDoc [MFC], OnFindEmbeddedItem
- COleLinkingDoc [MFC], OnGetLinkedItem
ms.assetid: 9f547f35-2f95-427f-b9c0-85c31940198b
ms.openlocfilehash: 10cf9bb81c4cbbd324b95a13dc2fa44548266583
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226909"
---
# <a name="colelinkingdoc-class"></a>Classe COleLinkingDoc

Classe di base per i documenti del contenitore OLE che supportano il collegamento agli elementi incorporati in essi contenuti.

## <a name="syntax"></a>Sintassi

```
class COleLinkingDoc : public COleDocument
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleLinkingDoc:: COleLinkingDoc](#colelinkingdoc)|Costruisce un oggetto `COleLinkingDoc`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleLinkingDoc:: Register](#register)|Registra il documento con le DLL di sistema OLE.|
|[COleLinkingDoc:: Revoke](#revoke)|Revoca la registrazione del documento.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[COleLinkingDoc:: OnFindEmbeddedItem](#onfindembeddeditem)|Trova l'elemento incorporato specificato.|
|[COleLinkingDoc:: OnGetLinkedItem](#ongetlinkeditem)|Trova l'elemento collegato specificato.|

## <a name="remarks"></a>Commenti

Un'applicazione contenitore che supporta il collegamento a elementi incorporati è detta "contenitore di collegamenti". L'applicazione di esempio [OCLIENT](../../overview/visual-cpp-samples.md) è un esempio di contenitore di collegamenti.

Quando l'origine di un elemento collegato è un elemento incorporato in un altro documento, è necessario caricare il documento che lo contiene affinché l'elemento incorporato venga modificato. Per questo motivo, è necessario che un contenitore di collegamenti possa essere avviato da un'altra applicazione contenitore quando l'utente desidera modificare l'origine di un elemento collegato. L'applicazione deve anche usare la classe [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) in modo che possa creare documenti quando viene avviata a livello di codice.

Per rendere il contenitore un contenitore di collegamenti, derivare la classe del documento da `COleLinkingDoc` anziché [COleDocument](../../mfc/reference/coledocument-class.md). Come per qualsiasi altro contenitore OLE, è necessario progettare la classe per archiviare i dati nativi dell'applicazione, nonché gli elementi incorporati o collegati. Inoltre, è necessario progettare strutture di dati per l'archiviazione dei dati nativi. Se si definisce una `CDocItem` classe derivata da per i dati nativi dell'applicazione, è possibile usare l'interfaccia definita da `COleDocument` per archiviare i dati nativi e i dati OLE.

Per consentire l'avvio dell'applicazione a livello di codice da un altro contenitore, dichiarare un `COleTemplateServer` oggetto come membro della classe derivata da dell'applicazione `CWinApp` :

[!code-cpp[NVC_MFCOleContainer#23](../../mfc/codesnippet/cpp/colelinkingdoc-class_1.h)]

Nella `InitInstance` funzione membro della `CWinApp` classe derivata da creare un modello di documento e specificare la `COleLinkingDoc` classe derivata da come classe del documento:

[!code-cpp[NVC_MFCOleContainer#24](../../mfc/codesnippet/cpp/colelinkingdoc-class_2.cpp)]

Connettere l' `COleTemplateServer` oggetto ai modelli di documento chiamando la `ConnectTemplate` funzione membro dell'oggetto e registrare tutti gli oggetti classe con il sistema OLE chiamando `COleTemplateServer::RegisterAll` :

[!code-cpp[NVC_MFCOleContainer#25](../../mfc/codesnippet/cpp/colelinkingdoc-class_3.cpp)]

Per una `CWinApp` definizione e una funzione della classe derivata da esempio `InitInstance` , vedere OCLIENT. H e OCLIENT. CPP nell'esempio MFC [OCLIENT](../../overview/visual-cpp-samples.md).

Per altre informazioni sull'uso di `COleLinkingDoc` , vedere gli articoli [contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md) e di [contenitori: funzionalità avanzate](../../mfc/containers-advanced-features.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

[COleDocument](../../mfc/reference/coledocument-class.md)

`COleLinkingDoc`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="colelinkingdoccolelinkingdoc"></a><a name="colelinkingdoc"></a> COleLinkingDoc:: COleLinkingDoc

Costruisce un `COleLinkingDoc` oggetto senza iniziare le comunicazioni con le DLL di sistema OLE.

```
COleLinkingDoc();
```

### <a name="remarks"></a>Commenti

È necessario chiamare la `Register` funzione membro per informare OLE che il documento è aperto.

## <a name="colelinkingdoconfindembeddeditem"></a><a name="onfindembeddeditem"></a> COleLinkingDoc:: OnFindEmbeddedItem

Chiamata eseguita dal Framework per determinare se il documento contiene un elemento OLE incorporato con il nome specificato.

```
virtual COleClientItem* OnFindEmbeddedItem(LPCTSTR lpszItemName);
```

### <a name="parameters"></a>Parametri

*lpszItemName*<br/>
Puntatore al nome dell'elemento OLE incorporato richiesto.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento specificato. NULL se l'elemento non viene trovato.

### <a name="remarks"></a>Commenti

L'implementazione predefinita esegue la ricerca nell'elenco di elementi incorporati per un elemento con il nome specificato (il confronto dei nomi fa distinzione tra maiuscole e minuscole). Eseguire l'override di questa funzione se si dispone di un metodo personalizzato per archiviare o rinominare gli elementi OLE incorporati.

## <a name="colelinkingdocongetlinkeditem"></a><a name="ongetlinkeditem"></a> COleLinkingDoc:: OnGetLinkedItem

Chiamata eseguita dal Framework per verificare se il documento contiene un elemento del server collegato con il nome specificato.

```
virtual COleServerItem* OnGetLinkedItem(LPCTSTR lpszItemName);
```

### <a name="parameters"></a>Parametri

*lpszItemName*<br/>
Puntatore al nome dell'elemento OLE collegato richiesto.

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento specificato. NULL se l'elemento non viene trovato.

### <a name="remarks"></a>Commenti

L' `COleLinkingDoc` implementazione predefinita restituisce sempre null. Questa funzione viene sottoposta a override nella classe derivata `COleServerDoc` per eseguire una ricerca nell'elenco di elementi server OLE per un elemento collegato con il nome specificato (il confronto dei nomi fa distinzione tra maiuscole e minuscole). Eseguire l'override di questa funzione se è stato implementato un metodo personalizzato per archiviare o recuperare gli elementi del server collegato.

## <a name="colelinkingdocregister"></a><a name="register"></a> COleLinkingDoc:: Register

Informa le DLL di sistema OLE che il documento è aperto.

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

Diverso da zero se il documento è stato registrato correttamente. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione quando si crea o si apre un file denominato per registrare il documento con le DLL di sistema OLE. Non è necessario chiamare questa funzione se il documento rappresenta un elemento incorporato.

Se si usa `COleTemplateServer` nell'applicazione, `Register` viene chiamato dall' `COleLinkingDoc` implementazione di `OnNewDocument` , `OnOpenDocument` e `OnSaveDocument` .

## <a name="colelinkingdocrevoke"></a><a name="revoke"></a> COleLinkingDoc:: Revoke

Informa le DLL di sistema OLE che il documento non è più aperto.

```cpp
void Revoke();
```

### <a name="remarks"></a>Commenti

Chiamare questa funzione per revocare la registrazione del documento con le DLL di sistema OLE.

È necessario chiamare questa funzione quando si chiude un file denominato, ma in genere non è necessario chiamarlo direttamente. `Revoke` viene chiamato dall' `COleLinkingDoc` implementazione di `OnCloseDocument` ,, `OnNewDocument` `OnOpenDocument` e `OnSaveDocument` .

## <a name="see-also"></a>Vedi anche

[OCLIENT di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleDocument](../../mfc/reference/coledocument-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)
