---
title: 'TN002: formato dati oggetto persistente'
ms.date: 11/04/2016
f1_keywords:
- vc.data
helpviewer_keywords:
- VERSIONABLE_SCHEMA macro [MFC]
- persistent object data
- CArchive class [MFC], support for persistent data
- persistent C++ objects [MFC]
- TN002
ms.assetid: 553fe01d-c587-4c8d-a181-3244a15c2be9
ms.openlocfilehash: 5f5bde68d9fd4175ed97a7b61d807887d07e9e12
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50474386"
---
# <a name="tn002-persistent-object-data-format"></a>TN002: formato dati oggetto persistente

In questa nota descrive le routine MFC che supportano oggetti C++ persistenti e il formato dei dati dell'oggetto quando questo viene archiviato in un file. Questo vale solo per le classi con il [DECLARE_SERIAL](../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../mfc/reference/run-time-object-model-services.md#implement_serial) macro.

## <a name="the-problem"></a>Il problema

L'implementazione di MFC per i dati persistenti archivia i dati per molti oggetti in una singola parte contigua di un file. L'oggetto `Serialize` metodo converte i dati dell'oggetto in un formato binario compatto.

L'implementazione garantisce che tutti i dati vengono salvati nello stesso formato tramite il [classe CArchive](../mfc/reference/carchive-class.md). Usa un `CArchive` oggetto come una funzione di conversione. Questo oggetto viene mantenuto dal momento in cui viene creato finché non si chiama [CArchive::Close](../mfc/reference/carchive-class.md#close). Questo metodo può essere chiamato in modo esplicito il programmatore oppure in modo implicito dal distruttore quando il programma esce dall'ambito che contiene il `CArchive`.

In questa nota viene descritta l'implementazione del `CArchive` membri [CArchive::ReadObject](../mfc/reference/carchive-class.md#readobject) e [CArchive::WriteObject](../mfc/reference/carchive-class.md#writeobject). È possibile trovare il codice per queste funzioni in Arcobj.cpp e l'implementazione principale per `CArchive` in Arccore.cpp. Il codice utente non chiama `ReadObject` e `WriteObject` direttamente. Al contrario, questi oggetti vengono utilizzati dagli specifici di una classe indipendente dai tipi inserimento ed estrazione operatori che vengono generati automaticamente per le macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Il codice seguente illustra la modalità `WriteObject` e `ReadObject` vengono chiamati in modo implicito:

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

## <a name="saving-objects-to-the-store-carchivewriteobject"></a>Salvataggio degli oggetti per Store (CArchive::WriteObject)

Il metodo `CArchive::WriteObject` scrive i dati di intestazione utilizzato per ricostruire l'oggetto. Questi dati è costituita da due parti: il tipo di oggetto e lo stato dell'oggetto. Questo metodo è anche responsabile della gestione di identità dell'oggetto in corso di scrittura, in modo che una sola copia è stata salvata, indipendentemente dal numero dei puntatori all'oggetto (inclusi i puntatori circolari).

Salvataggio (inserimento) e il ripristino di oggetti (autoestraente) si basa su diversi "costanti manifesto". Sono valori che vengono archiviati in formato binario e vengono fornite informazioni importanti per l'archivio (si noti il prefisso "w" indica le quantità a 16 bit):

|Tag|Descrizione|
|---------|-----------------|
|wNullTag|Utilizzato per i puntatori di oggetto NULL (0).|
|wNewClassTag|Indica la descrizione della classe che segue è una novità di questo contesto di archiviazione (-1).|
|wOldClassTag|Indica la classe dell'oggetto da leggere è stata osservata in questo contesto (0x8000).|

Quando si archiviano gli oggetti, l'archivio mantiene una [CMapPtrToPtr](../mfc/reference/cmapptrtoptr-class.md) (le *m_pStoreMap*) che è un mapping da un oggetto archiviato in un identificatore permanente a 32 bit (PID). Un PID viene assegnato a tutti gli oggetti univoci e ogni nome di classe univoco che viene salvato nel contesto dell'archivio. I PID vengono assegnati in modo sequenziale a partire da 1. Questi PID non hanno significato all'esterno dell'ambito dell'archivio e, in particolare, non sono deve essere confusa con i numeri di record o altri elementi di identità.

Nel `CArchive` (classe), i PID sono 32 bit, ma essi vengono scritti come 16 bit a meno che non sono più 0x7FFE grande. I PID di grandi dimensioni vengono scritti come 0x7FFF aggiungendo il PID di 32 bit. Ciò garantisce la compatibilità con i progetti creati nelle versioni precedenti.

Quando viene effettuata una richiesta per salvare un oggetto in un archivio (in genere usando l'operatore di inserimento globale), un valore null viene eseguito un controllo [CObject](../mfc/reference/cobject-class.md) puntatore. Se il puntatore è NULL, il *wNullTag* viene inserito nel flusso di archivio.

Se il puntatore non NULL e possono essere serializzato (la classe è un `DECLARE_SERIAL` classe), il codice controlla le *m_pStoreMap* per vedere se l'oggetto è già stato salvato. In questo caso, il codice viene inserito il PID di 32 bit associato a tale oggetto all'interno del flusso di archivio.

Se l'oggetto non è ancora stato salvato, esistono due possibilità da prendere in considerazione: l'oggetto e il tipo esatto (vale a dire, classe) dell'oggetto ha familiarità con questo contesto di archiviazione oppure l'oggetto è di tipo esatto già visualizzato. Per determinare se il tipo è detto in precedenza, il codice effettua una query il *m_pStoreMap* per una [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) oggetto che corrisponde il `CRuntimeClass` oggetto associato all'oggetto da salvare. Se non esiste una corrispondenza, `WriteObject` inserisce un tag che è il bit per bit `OR` dei *wOldClassTag* e questo indice. Se il `CRuntimeClass` è una novità di questo contesto, archivio `WriteObject` assegna un PID nuova a quella classe e la inserisce nell'archivio, preceduto dalle *wNewClassTag* valore.

Il descrittore per questa classe viene quindi inserito nell'archivio utilizzando il `CRuntimeClass::Store` (metodo). `CRuntimeClass::Store` Inserisce il numero di schema della classe (vedere sotto) e il nome di testo ASCII della classe. Si noti che l'utilizzo del nome del testo ASCII non garantisce l'univocità dell'archivio tutte le applicazioni. Pertanto, è consigliabile contrassegnare i file di dati per evitare il danneggiamento. Dopo l'inserimento delle informazioni di classe, l'archivio inserisce nell'oggetto verso il *m_pStoreMap* e quindi chiama il `Serialize` metodo per inserire i dati specifici di una classe. L'inserimento nell'oggetto verso il *m_pStoreMap* prima di chiamare `Serialize` impedisce di salvare l'archivio più copie dell'oggetto.

Quando viene restituito al chiamante iniziale (in genere la radice della rete di oggetti), è necessario chiamare [CArchive::Close](../mfc/reference/carchive-class.md#close). Se si prevede di eseguire altre [CFile](../mfc/reference/cfile-class.md)operazioni, è necessario chiamare il `CArchive` metodo [Flush](../mfc/reference/carchive-class.md#flush) per evitare il danneggiamento dell'archivio.

> [!NOTE]
>  Questa implementazione impone un limite rigido di 0x3FFFFFFE indici per il contesto di archiviazione. Questo numero rappresenta il numero massimo di oggetti univoci e le classi che possono essere salvate in un singolo archivio, ma il disco singolo file può avere un numero illimitato di contesti di archivio.

## <a name="loading-objects-from-the-store-carchivereadobject"></a>Caricamento di oggetti da Store (CArchive::ReadObject)

Il caricamento (estrazione) gli oggetti viene utilizzato il `CArchive::ReadObject` metodo ed è l'opposto di `WriteObject`. Come per gli `WriteObject`, `ReadObject` non viene chiamato direttamente dal codice utente; il codice utente deve chiamare l'operatore di estrazione indipendente dai tipi che chiama `ReadObject` con quella prevista `CRuntimeClass`. In questo modo si assicura l'integrità di tipo dell'operazione di estrazione.

Poiché il `WriteObject` implementazione assegnato PID crescente, a partire da 1 (0 è predefinito come oggetto NULL), il `ReadObject` implementazione può utilizzare una matrice per mantenere lo stato del contesto dell'archivio. Quando un PID verrà letti dall'archivio, se il PID è maggiore di limite il superiore corrente del *m_pLoadArray*, `ReadObject` sa che segue un nuovo oggetto (o una descrizione della classe).

## <a name="schema-numbers"></a>Numeri di schema

Il numero di schema, che viene assegnato alla classe quando il `IMPLEMENT_SERIAL` metodo della classe viene rilevato, è la "versione" di implementazione della classe. Lo schema fa riferimento all'implementazione della classe, non il numero di volte in cui un determinato oggetto è stato resi persistente (in genere definite come versione dell'oggetto).

Se si prevede di gestire diverse implementazioni della stessa classe nel corso del tempo, incrementando lo schema durante la revisione dell'oggetto `Serialize` implementazione del metodo ti permetterà di scrivere codice che è possibile caricare gli oggetti archiviati con le versioni precedenti di l'implementazione.

Il `CArchive::ReadObject` metodo genererà un' [CArchiveException](../mfc/reference/carchiveexception-class.md) quando viene rilevato un numero di schema in un archivio permanente che è diverso dal numero di schema della descrizione della classe nella memoria. Non è semplice eseguire il ripristino da questa eccezione.

È possibile usare `VERSIONABLE_SCHEMA` combinato con (OR bit per bit **o**) la versione dello schema per mantenere che venga generata questa eccezione. Usando `VERSIONABLE_SCHEMA`, il codice può eseguire l'azione appropriata relativo `Serialize` controllando il valore restituito dalla funzione [CArchive::GetObjectSchema](../mfc/reference/carchive-class.md#getobjectschema).

## <a name="calling-serialize-directly"></a>Chiamare il metodo serializzare direttamente

In molti casi l'overhead dello schema dell'archivio oggetti generali `WriteObject` e `ReadObject` non è necessario. Questo è il caso comune di serializzare i dati in un [CDocument](../mfc/reference/cdocument-class.md). In questo caso, il `Serialize` metodo di `CDocument` viene chiamato direttamente, non con gli operatori di estrazione o insert. Il contenuto del documento possa a loro volta usano lo schema di archivio oggetto più generale.

La chiamata `Serialize` direttamente con i vantaggi e gli svantaggi seguenti:

- Nessun byte aggiuntivi vengono aggiunti all'archivio prima o dopo che l'oggetto viene serializzato. Ciò non solo rende i dati salvati più piccoli, ma consente di implementare `Serialize` routine in grado di gestire qualsiasi formati di file.

- MFC è ottimizzata in modo che il `WriteObject` e `ReadObject` implementazioni e raccolte correlate non verranno collegate all'interno dell'applicazione a meno che non è necessario lo schema di archivio oggetto più generale per altri scopi.

- Il codice non necessario risarcimento per i numeri di schema precedente. Questo rende il codice di serializzazione documento responsabile della codifica numeri dello schema, i numeri di versione formato di file o qualunque che identifica i numeri utilizzare all'inizio del file di dati.

- Qualsiasi oggetto che viene serializzato con una chiamata diretta al `Serialize` non è necessario usare `CArchive::GetObjectSchema` o necessario handle di valore restituito di -1 (UINT) che indica che la versione è sconosciuta.

Poiché `Serialize` viene chiamata direttamente nel documento, non è in genere possibile per gli oggetti secondari del documento per archiviare i riferimenti al proprio documento padre. Questi oggetti devono essere un puntatore specificati per il documento contenitore in modo esplicito o è necessario usare [CArchive::MapObject](../mfc/reference/carchive-class.md#mapobject) funzione per eseguire il mapping di `CDocument` puntatore a un PID prima che vengano archiviati questi puntatori all'indietro.

Come indicato in precedenza, è consigliabile codificare la versione e informazioni sulla classe manualmente quando si chiama `Serialize` direttamente, che consente di modificare il formato in un secondo momento, mantenendo la compatibilità con i file meno recenti. Il `CArchive::SerializeClass` funzione può essere chiamata in modo esplicito prima di serializzare direttamente un oggetto o prima di chiamare una classe di base.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

