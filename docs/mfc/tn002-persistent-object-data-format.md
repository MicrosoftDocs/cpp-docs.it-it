---
title: 'TN002: formato dati oggetto persistente'
ms.date: 11/04/2016
helpviewer_keywords:
- VERSIONABLE_SCHEMA macro [MFC]
- persistent object data
- CArchive class [MFC], support for persistent data
- persistent C++ objects [MFC]
- TN002
ms.assetid: 553fe01d-c587-4c8d-a181-3244a15c2be9
ms.openlocfilehash: f65a7b7afcf6bd832c9c23560bb29374038fae1b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370448"
---
# <a name="tn002-persistent-object-data-format"></a>TN002: formato dati oggetto persistente

In questa nota vengono descritte le routine MFC che supportano gli oggetti persistenti di C, nonché il formato dei dati dell'oggetto quando vengono archiviati in un file. Questo vale solo per le classi con le [macro DECLARE_SERIAL](../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL.](../mfc/reference/run-time-object-model-services.md#implement_serial)

## <a name="the-problem"></a>Problema

L'implementazione MFC per i dati persistenti archivia i dati per molti oggetti in una singola parte contigua di un file. Il metodo `Serialize` dell'oggetto converte i dati dell'oggetto in un formato binario compatto.

L'implementazione garantisce che tutti i dati vengano salvati nello stesso formato utilizzando la [classe CArchive](../mfc/reference/carchive-class.md). Usa un `CArchive` oggetto come traduttore. Questo oggetto viene mantenuto dal momento in cui viene creato fino a quando non si chiama [CArchive::Close](../mfc/reference/carchive-class.md#close). Questo metodo può essere chiamato in modo esplicito dal programmatore o in modo `CArchive`implicito dal distruttore quando il programma esce dall'ambito che contiene l'oggetto .

In questa nota viene `CArchive` descritta l'implementazione dei membri [CArchive::ReadObject](../mfc/reference/carchive-class.md#readobject) e [CArchive::WriteObject](../mfc/reference/carchive-class.md#writeobject). Troverete il codice per queste funzioni in Arcobj.cpp `CArchive` e l'implementazione principale per in Arccore.cpp. Il codice utente `ReadObject` `WriteObject` non chiama e direttamente. Questi oggetti vengono invece utilizzati da operatori di inserimento ed estrazione indipendenti dai tipi specifici della classe generati automaticamente dalle macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Il codice seguente `WriteObject` `ReadObject` viene illustrato come e vengono chiamati in modo implicito:The following code shows how and are implicitly called:

```
class CMyObject : public CObject
{
    DECLARE_SERIAL(CMyObject)
};

IMPLEMENT_SERIAL(CMyObj, CObject, 1)

// example usage (ar is a CArchive&)
CMyObject* pObj;
CArchive& ar;
ar <<pObj;        // calls ar.WriteObject(pObj)
ar>> pObj;        // calls ar.ReadObject(RUNTIME_CLASS(CObj))
```

## <a name="saving-objects-to-the-store-carchivewriteobject"></a>Salvataggio di oggetti nell'archivio (CArchive::WriteObject)

Il `CArchive::WriteObject` metodo scrive i dati di intestazione utilizzati per ricostruire l'oggetto. Questi dati sono costituiti da due parti: il tipo dell'oggetto e lo stato dell'oggetto. Questo metodo è anche responsabile della gestione dell'identità dell'oggetto da scrivere, in modo che venga salvata una sola copia, indipendentemente dal numero di puntatori a tale oggetto (inclusi i puntatori circolari).

Il salvataggio (inserimento) e il ripristino (estrazione) degli oggetti si basa su diverse "costanti manifesto". Si tratta di valori che vengono archiviati in formato binario e forniscono informazioni importanti all'archivio (notare che il prefisso "w" indica quantità a 16 bit):

|Tag|Descrizione|
|---------|-----------------|
|wNullTag (tag Null)|Utilizzato per i puntatori a oggetti NULL (0).|
|wNewClassTag (oggetto WNewClassTag)|Indica la descrizione della classe che segue è una novità di questo contesto di archivio (-1).|
|wOldClassTag (tag) wOldClassTag (informazioni in|Indica che la classe dell'oggetto letto è stata visualizzata in questo contesto (0x8000).|

Quando si archiviano oggetti, l'archivio gestisce un [CMapPtrToPtr](../mfc/reference/cmapptrtoptr-class.md) (il *m_pStoreMap*) che è un mapping da un oggetto archiviato a un identificatore permanente a 32 bit (PID). Un PID viene assegnato a ogni oggetto univoco e ogni nome di classe univoco che viene salvato nel contesto dell'archivio. Questi PID vengono distribuiti in sequenza a partire da 1.These PIDs are disteso in sequenza a partire da 1. Questi PID non hanno alcun significato al di fuori dell'ambito dell'archivio e, in particolare, non devono essere confusi con i numeri di record o altri elementi di identità.

Nella `CArchive` classe, i PID sono a 32 bit, ma vengono scritti come 16 bit a meno che non siano maggiori di 0x7FFE. I PID di grandi dimensioni vengono scritti come 0x7FFF seguiti dal PID a 32 bit. In questo modo viene mantenuta la compatibilità con i progetti creati nelle versioni precedenti.

Quando viene effettuata una richiesta di salvare un oggetto in un archivio (in genere utilizzando l'operatore di inserimento globale), viene eseguito un controllo per un NULL [CObject](../mfc/reference/cobject-class.md) puntatore. Se il puntatore è NULL, *wNullTag* viene inserito nel flusso di archivio.

Se il puntatore non è NULL e può `DECLARE_SERIAL` essere serializzato (la classe è una classe), il codice controlla il *m_pStoreMap* per verificare se l'oggetto è già stato salvato. In caso affermativo, il codice inserisce il PID a 32 bit associato a tale oggetto nel flusso di archiviazione.

Se l'oggetto non è stato salvato in precedenza, ci sono due possibilità da considerare: sia l'oggetto che il tipo esatto (vale a dire, classe) dell'oggetto sono nuovi a questo contesto di archivio o l'oggetto è di un tipo esatto già visto. Per determinare se il tipo è stato visualizzato, il codice esegue `CRuntimeClass` una query *m_pStoreMap* per un [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) oggetto che corrisponde all'oggetto associato all'oggetto da salvare. Se esiste una `WriteObject` corrispondenza, inserisce un tag `OR` che è il bit-wise di *wOldClassTag* e questo indice. Se `CRuntimeClass` l'oggetto è nuovo `WriteObject` a questo contesto di archivio, assegna un nuovo PID a tale classe e lo inserisce nell'archivio, preceduto dal valore *wNewClassTag.*

Il descrittore per questa classe viene `CRuntimeClass::Store` quindi inserito nell'archivio utilizzando il metodo . `CRuntimeClass::Store`inserisce il numero di schema della classe (vedere di seguito) e il nome di testo ASCII della classe. Si noti che l'utilizzo del nome di testo ASCII non garantisce l'univocità dell'archivio tra le applicazioni. Pertanto, è necessario contrassegnare i file di dati per evitare il danneggiamento. Dopo l'inserimento delle informazioni sulla classe, *m_pStoreMap* l'archivio `Serialize` inserisce l'oggetto nel m_pStoreMap e quindi chiama il metodo per inserire i dati specifici della classe. L'inserimento *m_pStoreMap* dell'oggetto `Serialize` nel m_pStoreMap prima della chiamata impedisce il salvataggio di più copie dell'oggetto nell'archivio.

Quando si torna al chiamante iniziale (in genere la radice della rete di oggetti), è necessario chiamare [CArchive::Close](../mfc/reference/carchive-class.md#close). Se si prevede di eseguire altre operazioni `CArchive` di [CFile,](../mfc/reference/cfile-class.md)è necessario chiamare il metodo [Flush](../mfc/reference/carchive-class.md#flush) per evitare il danneggiamento dell'archivio.

> [!NOTE]
> Questa implementazione impone un limite rigido di indici 0x3FFFFFFE per contesto di archiviazione. Questo numero rappresenta il numero massimo di oggetti e classi univoci che possono essere salvati in un singolo archivio, ma un singolo file su disco può avere un numero illimitato di contesti di archivio.

## <a name="loading-objects-from-the-store-carchivereadobject"></a>Caricamento di oggetti dall'archivio (CArchive::ReadObject)

Il caricamento (estrazione) `CArchive::ReadObject` di oggetti utilizza il `WriteObject`metodo ed è il contrario di . Come `WriteObject`con `ReadObject` , non viene chiamato direttamente dal codice utente; il codice utente deve chiamare l'operatore di estrazione indipendente dai tipi che chiama `ReadObject` con l'oggetto . `CRuntimeClass` Ciò assicura l'integrità del tipo dell'operazione di estrazione.

Poiché `WriteObject` l'implementazione ha assegnato PID crescenti, a partire da `ReadObject` 1 (0 è predefinito come oggetto NULL), l'implementazione può utilizzare una matrice per mantenere lo stato del contesto di archivio. Quando un PID viene letto dall'archivio, se il PID *m_pLoadArray*è `ReadObject` più grande del limite superiore corrente della m_pLoadArray , sa che segue un nuovo oggetto (o descrizione della classe).

## <a name="schema-numbers"></a>Numeri dello schema

Il numero di schema, assegnato alla `IMPLEMENT_SERIAL` classe quando viene rilevato il metodo della classe, è la "versione" dell'implementazione della classe. Lo schema si riferisce all'implementazione della classe, non al numero di volte in cui un determinato oggetto è stato reso persistente (in genere indicato come la versione dell'oggetto).

Se si intende mantenere diverse implementazioni diverse della stessa classe nel tempo, incrementando lo schema durante la revisione dell'implementazione del metodo dell'oggetto `Serialize` sarà possibile scrivere codice in grado di caricare oggetti archiviati utilizzando versioni precedenti dell'implementazione.

Il `CArchive::ReadObject` metodo genererà un [CArchiveException](../mfc/reference/carchiveexception-class.md) quando rileva un numero di schema nell'archivio permanente che differisce dal numero di schema della descrizione della classe in memoria. Non è facile recuperare da questa eccezione.

È possibile `VERSIONABLE_SCHEMA` utilizzare combinato con **(OR**bit per bit ) la versione dello schema per impedire la generazione di questa eccezione. Utilizzando `VERSIONABLE_SCHEMA`, il codice può eseguire `Serialize` l'azione appropriata nella relativa funzione controllando il valore restituito da [CArchive::GetObjectSchema](../mfc/reference/carchive-class.md#getobjectschema).

## <a name="calling-serialize-directly"></a>Chiamata diretta di SerializeCalling Serialize Directly

In molti casi l'overhead dello `WriteObject` schema `ReadObject` generale di archiviazione degli oggetti di e non è necessario. Questo è il caso comune di serializzazione dei dati in un [CDocument](../mfc/reference/cdocument-class.md). In questo caso, `Serialize` il `CDocument` metodo dell'oggetto viene chiamato direttamente, non con gli operatori di estrazione o inserimento. Il contenuto del documento può a sua volta utilizzare lo schema di archiviazione degli oggetti più generale.

La `Serialize` chiamata diretta presenta i seguenti vantaggi e svantaggi:

- Nessun byte aggiuntivo viene aggiunto all'archivio prima o dopo la serializzazione dell'oggetto. Questo non solo riduce i dati salvati, `Serialize` ma consente di implementare routine in grado di gestire qualsiasi formato di file.

- MFC è stato sintonizzato `WriteObject` `ReadObject` in modo che le implementazioni e le raccolte correlate non verranno collegate all'applicazione a meno che non sia necessario lo schema di archiviazione degli oggetti più generale per altri scopi.

- Il codice non deve eseguire il ripristino da numeri di schema precedenti. In questo modo il codice di serializzazione del documento è responsabile della codifica dei numeri di schema, dei numeri di versione del formato di file o di qualsiasi numero di identificazione utilizzato all'inizio dei file di dati.

- Qualsiasi oggetto serializzato con una `Serialize` chiamata diretta `CArchive::GetObjectSchema` a non deve utilizzare o deve gestire un valore restituito di (UINT)-1 che indica che la versione era sconosciuta.

Poiché `Serialize` viene chiamato direttamente sul documento, in genere non è possibile che i sottooggetti del documento archivino i riferimenti al documento principale. A questi oggetti deve essere assegnato un puntatore al documento contenitore in `CDocument` modo esplicito oppure è necessario utilizzare la funzione [CArchive::MapObject](../mfc/reference/carchive-class.md#mapobject) per eseguire il mapping del puntatore a un PID prima che questi puntatori a rifare vengano archiviati.

Come indicato in precedenza, è necessario codificare `Serialize` manualmente le informazioni sulla versione e sulla classe quando si chiama direttamente, consentendo di modificare il formato in un secondo momento pur mantenendo la compatibilità con le versioni precedenti dei file. La `CArchive::SerializeClass` funzione può essere chiamata in modo esplicito prima di serializzare direttamente un oggetto o prima di chiamare una classe base.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
