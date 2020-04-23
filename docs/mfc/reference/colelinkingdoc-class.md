---
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
ms.openlocfilehash: 1fad986b7e7304075cacb0b5ced9feeb8af4664f
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753846"
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
|[COleLinkingDoc::Registra](#register)|Registra il documento con le DLL di sistema OLE.|
|[COleLinkingDoc::Revoke](#revoke)|Revoca la registrazione del documento.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[COleLinkingDoc::OnFindEmbeddedItem](#onfindembeddeditem)|Trova l'elemento incorporato specificato.|
|[COleLinkingDoc::OnGetLinkedItem](#ongetlinkeditem)|Trova l'elemento collegato specificato.|

## <a name="remarks"></a>Osservazioni

Un'applicazione contenitore che supporta il collegamento a elementi incorporati è denominata "contenitore di collegamenti". L'applicazione di esempio [OCLIENT](../../overview/visual-cpp-samples.md) è un esempio di contenitore di collegamenti.

Quando l'origine di un elemento collegato è un elemento incorporato in un altro documento, tale documento deve essere caricato affinché l'elemento incorporato possa essere modificato. Per questo motivo, un contenitore di collegamenti deve essere in grado di essere avviato da un'altra applicazione contenitore quando l'utente desidera modificare l'origine di un elemento collegato. L'applicazione deve inoltre utilizzare la classe [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) in modo che possa creare documenti quando viene avviata a livello di codice.

Per rendere il contenitore un contenitore `COleLinkingDoc` di collegamenti, derivare la classe documento da anziché [COleDocument](../../mfc/reference/coledocument-class.md). Come con qualsiasi altro contenitore OLE, è necessario progettare la classe per archiviare i dati nativi dell'applicazione, nonché gli elementi incorporati o collegati. Inoltre, è necessario progettare strutture di dati per l'archiviazione dei dati nativi. Se si `CDocItem`definisce una classe derivata dall'applicazione per i `COleDocument` dati nativi dell'applicazione, è possibile utilizzare l'interfaccia definita da per archiviare i dati nativi e i dati OLE.

Per consentire l'avvio dell'applicazione a `COleTemplateServer` livello di codice da un `CWinApp`altro contenitore, dichiarare un oggetto come membro della classe derivata dall'applicazione:To allow your application to be launched programmatically by another container, declare a object as a member of your application-derived class:

[!code-cpp[NVC_MFCOleContainer#23](../../mfc/codesnippet/cpp/colelinkingdoc-class_1.h)]

Nella `InitInstance` funzione membro `CWinApp`della classe derivata, creare un `COleLinkingDoc`modello di documento e specificare la classe derivata come classe documento:

[!code-cpp[NVC_MFCOleContainer#24](../../mfc/codesnippet/cpp/colelinkingdoc-class_2.cpp)]

Connettere `COleTemplateServer` l'oggetto ai modelli di `ConnectTemplate` documento chiamando la funzione membro dell'oggetto `COleTemplateServer::RegisterAll`e registrare tutti gli oggetti di classe con il sistema OLE chiamando :

[!code-cpp[NVC_MFCOleContainer#25](../../mfc/codesnippet/cpp/colelinkingdoc-class_3.cpp)]

Per una `CWinApp`definizione e `InitInstance` una funzione di classe derivata da esempio, vedere OCLIENT. H e OCLIENT. CPP nell'esempio MFC [OCLIENT](../../overview/visual-cpp-samples.md).

Per ulteriori informazioni `COleLinkingDoc`sull'utilizzo, consultate gli articoli [Contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md) e [contenitori: funzionalità avanzate](../../mfc/containers-advanced-features.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

[COleDocument](../../mfc/reference/coledocument-class.md)

`COleLinkingDoc`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="colelinkingdoccolelinkingdoc"></a><a name="colelinkingdoc"></a>COleLinkingDoc::COleLinkingDoc

Costruisce un `COleLinkingDoc` oggetto senza iniziare le comunicazioni con le DLL di sistema OLE.

```
COleLinkingDoc();
```

### <a name="remarks"></a>Osservazioni

È necessario `Register` chiamare la funzione membro per informare OLE che il documento è aperto.

## <a name="colelinkingdoconfindembeddeditem"></a><a name="onfindembeddeditem"></a>COleLinkingDoc::OnFindEmbeddedItem

Chiamato dal framework per determinare se il documento contiene un elemento OLE incorporato con il nome specificato.

```
virtual COleClientItem* OnFindEmbeddedItem(LPCTSTR lpszItemName);
```

### <a name="parameters"></a>Parametri

*lpszItemName (nome dall'elemento in stato di inademp*<br/>
Puntatore al nome dell'elemento OLE incorporato richiesto.

### <a name="return-value"></a>Valore restituito

Un puntatore all'elemento specificato; NULL se l'elemento non viene trovato.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita cerca nell'elenco di elementi incorporati un elemento con il nome specificato (il confronto dei nomi fa distinzione tra maiuscole e minuscole). Eseguire l'override di questa funzione se si dispone di un metodo personalizzato per l'archiviazione o la denominazione di elementi OLE incorporati.

## <a name="colelinkingdocongetlinkeditem"></a><a name="ongetlinkeditem"></a>COleLinkingDoc::OnGetLinkedItem

Chiamato dal framework per verificare se il documento contiene un elemento del server collegato con il nome specificato.

```
virtual COleServerItem* OnGetLinkedItem(LPCTSTR lpszItemName);
```

### <a name="parameters"></a>Parametri

*lpszItemName (nome dall'elemento in stato di inademp*<br/>
Puntatore al nome dell'elemento OLE collegato richiesto.

### <a name="return-value"></a>Valore restituito

Un puntatore all'elemento specificato; NULL se l'elemento non viene trovato.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita `COleLinkingDoc` restituisce sempre NULL. Questa funzione viene sottoposta `COleServerDoc` a override nella classe derivata per cercare un elemento server OLE nell'elenco di elementi server OLE un elemento collegato con il nome specificato (il confronto dei nomi fa distinzione tra maiuscole e minuscole). Eseguire l'override di questa funzione se è stato implementato un metodo personalizzato per l'archiviazione o il recupero di elementi del server collegato.

## <a name="colelinkingdocregister"></a><a name="register"></a>COleLinkingDoc::Registra

Informa le DLL di sistema OLE che il documento è aperto.

```
BOOL Register(
    COleObjectFactory* pFactory,
    LPCTSTR lpszPathName);
```

### <a name="parameters"></a>Parametri

*pFactory*<br/>
Puntatore a un oggetto Factory OLE (può essere NULL).

*LpszPathName (nome di metodo)*<br/>
Puntatore al percorso completo del documento contenitore.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il documento viene registrato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione durante la creazione o l'apertura di un file denominato per registrare il documento con le DLL di sistema OLE. Non è necessario chiamare questa funzione se il documento rappresenta un elemento incorporato.

Se si `COleTemplateServer` utilizza nell'applicazione, `Register` viene `COleLinkingDoc`chiamato dall'implementazione di `OnNewDocument`, `OnOpenDocument`, e `OnSaveDocument`.

## <a name="colelinkingdocrevoke"></a><a name="revoke"></a>COleLinkingDoc::Revoke

Informa le DLL di sistema OLE che il documento non è più aperto.

```cpp
void Revoke();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per revocare la registrazione del documento con le DLL di sistema OLE.

È necessario chiamare questa funzione quando si chiude un file denominato, ma in genere non è necessario chiamarlo direttamente. `Revoke`è chiamato per `COleLinkingDoc`voi dall'implementazione `OnCloseDocument`di , `OnNewDocument`, `OnOpenDocument`, e `OnSaveDocument`.

## <a name="see-also"></a>Vedere anche

[Esempio MFC OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[Classe COleDocument](../../mfc/reference/coledocument-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)
