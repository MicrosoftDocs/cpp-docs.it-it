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
ms.openlocfilehash: 1880d5d43055966dea8ab16dc4f26bd4e4602ec5
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447136"
---
# <a name="tn002-persistent-object-data-format"></a>TN002: formato dati oggetto persistente

Questa nota descrive le routine MFC che supportano gli oggetti C++ permanenti e il formato dei dati dell'oggetto quando vengono archiviati in un file. Si applica solo alle classi con le macro [DECLARE_SERIAL](../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../mfc/reference/run-time-object-model-services.md#implement_serial) .

## <a name="the-problem"></a>Problema

L'implementazione MFC per i dati persistenti archivia i dati per molti oggetti in una singola parte contigua di un file. Il metodo di `Serialize` dell'oggetto converte i dati dell'oggetto in un formato binario compatto.

L'implementazione garantisce che tutti i dati vengano salvati nello stesso formato usando la [classe CArchive](../mfc/reference/carchive-class.md). Usa un oggetto `CArchive` come traduttore. Questo oggetto viene mantenuto dal momento in cui viene creato fino a quando non si chiama [CArchive:: Close](../mfc/reference/carchive-class.md#close). Questo metodo può essere chiamato in modo esplicito dal programmatore o in modo implicito dal distruttore quando il programma esce dall'ambito che contiene il `CArchive`.

Questa nota descrive l'implementazione dei membri `CArchive` [CArchive:: ReadObject](../mfc/reference/carchive-class.md#readobject) e [CArchive:: WriteObject](../mfc/reference/carchive-class.md#writeobject). Il codice per queste funzioni viene trovato in Arcobj. cpp e l'implementazione principale per `CArchive` in arccore. cpp. Il codice utente non chiama direttamente `ReadObject` e `WriteObject`. Questi oggetti vengono invece utilizzati dagli operatori di inserimento ed estrazione indipendenti dai tipi specifici della classe generati automaticamente dalle macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Nel codice seguente viene illustrato come `WriteObject` e `ReadObject` vengono chiamati in modo implicito:

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

## <a name="saving-objects-to-the-store-carchivewriteobject"></a>Salvataggio di oggetti nell'archivio (CArchive:: WriteObject)

Il metodo `CArchive::WriteObject` scrive i dati di intestazione utilizzati per ricostruire l'oggetto. Questi dati sono costituiti da due parti: il tipo dell'oggetto e lo stato dell'oggetto. Questo metodo è anche responsabile della gestione dell'identità dell'oggetto da scrivere, in modo che venga salvata una sola copia, indipendentemente dal numero di puntatori a tale oggetto (inclusi i puntatori circolari).

Il salvataggio (inserimento) e il ripristino (estrazione) degli oggetti si basa su diverse "costanti manifeste". Si tratta di valori archiviati in formato binario e forniscono informazioni importanti all'archivio (si noti che il prefisso "w" indica quantità a 16 bit):

|Tag|Descrizione|
|---------|-----------------|
|wNullTag|Utilizzato per i puntatori a oggetti NULL (0).|
|wNewClassTag|Indica che la descrizione della classe seguente è una novità di questo contesto di archivio (-1).|
|wOldClassTag|Indica che la classe dell'oggetto letto è stata individuata in questo contesto (0x8000).|

Quando si archiviano oggetti, l'archivio gestisce un [CMapPtrToPtr](../mfc/reference/cmapptrtoptr-class.md) (il *m_pStoreMap*), ovvero un mapping da un oggetto archiviato a un identificatore permanente a 32 bit (PID). Un PID viene assegnato a ogni oggetto univoco e a ogni nome di classe univoco salvato nel contesto dell'archivio. Questi PID vengono passati in sequenza a partire da 1. Tali PID non hanno significato al di fuori dell'ambito dell'archivio e, in particolare, non devono essere confusi con i numeri di record o altri elementi Identity.

Nella classe `CArchive` i PID sono a 32 bit, ma vengono scritti come a 16 bit, a meno che non siano di dimensioni maggiori di 0x7FFE. I PID di grandi dimensioni vengono scritti come 0x7FFF seguiti dal PID a 32 bit. Questo mantiene la compatibilità con i progetti creati nelle versioni precedenti.

Quando viene effettuata una richiesta di salvataggio di un oggetto in un archivio (in genere utilizzando l'operatore di inserimento globale), viene eseguito un controllo per un puntatore [COBJECT](../mfc/reference/cobject-class.md) null. Se il puntatore è NULL, *wNullTag* viene inserito nel flusso di archiviazione.

Se il puntatore non è NULL e può essere serializzato (la classe è una classe `DECLARE_SERIAL`), il codice controlla l' *m_pStoreMap* per verificare se l'oggetto è già stato salvato. In caso contrario, il codice inserisce il PID a 32 bit associato a tale oggetto nel flusso di archiviazione.

Se l'oggetto non è stato salvato in precedenza, è possibile considerare due opzioni: sia l'oggetto sia il tipo esatto (ovvero la classe) dell'oggetto sono nuovi per questo contesto di archiviazione oppure l'oggetto è di un tipo esatto già visualizzato. Per determinare se il tipo è stato individuato, il codice esegue una query sul *m_pStoreMap* per un oggetto [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) che corrisponde all'oggetto `CRuntimeClass` associato all'oggetto salvato. Se esiste una corrispondenza, `WriteObject` inserisce un tag che è il `OR` bit per bit di *wOldClassTag* e questo indice. Se il `CRuntimeClass` è nuovo per questo contesto di archiviazione, `WriteObject` assegna un nuovo PID a tale classe e lo inserisce nell'archivio, preceduto dal valore *wNewClassTag* .

Il descrittore per questa classe viene quindi inserito nell'archivio usando il metodo `CRuntimeClass::Store`. `CRuntimeClass::Store` inserisce il numero dello schema della classe (vedere di seguito) e il nome di testo ASCII della classe. Si noti che l'uso del nome di testo ASCII non garantisce l'univocità dell'archivio tra le applicazioni. Pertanto, è consigliabile contrassegnare i file di dati per evitare il danneggiamento. Dopo l'inserimento delle informazioni sulla classe, l'archivio inserisce l'oggetto nell' *m_pStoreMap* e quindi chiama il metodo `Serialize` per inserire i dati specifici della classe. Se si inserisce l'oggetto nel *m_pStoreMap* prima di chiamare `Serialize` si impedisce il salvataggio di più copie dell'oggetto nell'archivio.

Quando si torna al chiamante iniziale, in genere la radice della rete di oggetti, è necessario chiamare [CArchive:: Close](../mfc/reference/carchive-class.md#close). Se si prevede di eseguire altre operazioni di [CFile](../mfc/reference/cfile-class.md), è necessario chiamare il metodo `CArchive` [Flush](../mfc/reference/carchive-class.md#flush) per evitare il danneggiamento dell'archivio.

> [!NOTE]
>  Questa implementazione impone un limite rigido di indici 0x3FFFFFFE per ogni contesto di archiviazione. Questo numero rappresenta il numero massimo di oggetti univoci e classi che è possibile salvare in un singolo archivio, ma un solo file su disco può avere un numero illimitato di contesti di archivio.

## <a name="loading-objects-from-the-store-carchivereadobject"></a>Caricamento di oggetti dall'archivio (CArchive:: ReadObject)

Il caricamento (estrazione) di oggetti usa il metodo `CArchive::ReadObject` ed è il contrario di `WriteObject`. Come con `WriteObject`, `ReadObject` non viene chiamato direttamente dal codice utente; il codice utente deve chiamare l'operatore di estrazione indipendente dai tipi che chiama `ReadObject` con il `CRuntimeClass`previsto. In questo modo si assicura l'integrità del tipo dell'operazione di estrazione.

Poiché l'implementazione di `WriteObject` assegna un aumento dei PID, a partire da 1 (0 è predefinito come oggetto NULL), l'implementazione del `ReadObject` può utilizzare una matrice per mantenere lo stato del contesto dell'archivio. Quando un PID viene letto dall'archivio, se il PID è più grande del limite superiore corrente del *m_pLoadArray*, `ReadObject` sa che segue un nuovo oggetto o una descrizione della classe.

## <a name="schema-numbers"></a>Numeri di schema

Il numero dello schema, che viene assegnato alla classe quando viene rilevato il metodo `IMPLEMENT_SERIAL` della classe, è la "versione" dell'implementazione della classe. Lo schema si riferisce all'implementazione della classe, non al numero di volte in cui un determinato oggetto è stato reso persistente, in genere denominato versione dell'oggetto.

Se si desidera mantenere diverse implementazioni della stessa classe nel tempo, incrementare lo schema durante la revisione dell'implementazione del metodo `Serialize` dell'oggetto consentirà di scrivere codice in grado di caricare oggetti archiviati utilizzando versioni precedenti dell'implementazione.

Il metodo `CArchive::ReadObject` genererà un [CArchiveException](../mfc/reference/carchiveexception-class.md) quando rileva un numero di schema nell'archivio permanente che differisce dal numero dello schema della descrizione della classe in memoria. Non è facile recuperare da questa eccezione.

È possibile utilizzare `VERSIONABLE_SCHEMA` combinati con ( **or**bit per bit) la versione dello schema per evitare che venga generata questa eccezione. Utilizzando `VERSIONABLE_SCHEMA`, il codice può intraprendere l'azione appropriata nella relativa funzione `Serialize` controllando il valore restituito da [CArchive:: GetObjectSchema](../mfc/reference/carchive-class.md#getobjectschema).

## <a name="calling-serialize-directly"></a>Chiamata diretta di serializzazione

In molti casi, l'overhead dello schema generale di archiviazione degli oggetti di `WriteObject` e `ReadObject` non è necessario. Questo è il caso comune di serializzazione dei dati in un [CDocument](../mfc/reference/cdocument-class.md). In questo caso, il metodo `Serialize` della `CDocument` viene chiamato direttamente, non con gli operatori Extract o INSERT. Il contenuto del documento può a sua volta utilizzare lo schema di archiviazione degli oggetti più generale.

La chiamata di `Serialize` presenta direttamente i vantaggi e gli svantaggi seguenti:

- Nessun byte aggiuntivo viene aggiunto all'archivio prima o dopo la serializzazione dell'oggetto. Questa operazione non solo rende i dati salvati più piccoli, ma consente di implementare `Serialize` routine in grado di gestire qualsiasi formato di file.

- MFC viene ottimizzato in modo che le implementazioni `WriteObject` e `ReadObject` e le raccolte correlate non siano collegate nell'applicazione a meno che non sia necessario uno schema di archiviazione oggetti più generale per altri scopi.

- Il codice non deve essere ripristinato da numeri di schema obsoleti. In questo modo il codice di serializzazione del documento è responsabile della codifica dei numeri di schema, dei numeri di versione del formato di file o dei numeri di identificazione usati all'inizio dei file di dati.

- Qualsiasi oggetto serializzato con una chiamata diretta a `Serialize` non deve usare `CArchive::GetObjectSchema` o deve gestire un valore restituito di (UINT)-1 che indica che la versione è sconosciuta.

Poiché `Serialize` viene chiamato direttamente nel documento, per gli oggetti secondari del documento non è in genere possibile archiviare i riferimenti al documento padre. A questi oggetti deve essere assegnato un puntatore al documento contenitore in modo esplicito oppure è necessario usare la funzione [CArchive:: MapObject](../mfc/reference/carchive-class.md#mapobject) per eseguire il mapping del puntatore `CDocument` a un PID prima che questi puntatori back vengano archiviati.

Come indicato in precedenza, è necessario codificare manualmente le informazioni sulla versione e sulla classe quando si chiama `Serialize` direttamente, consentendo di modificare il formato in un secondo momento mantenendo la compatibilità con i file meno recenti. La funzione `CArchive::SerializeClass` può essere chiamata in modo esplicito prima di serializzare direttamente un oggetto o prima di chiamare una classe base.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
