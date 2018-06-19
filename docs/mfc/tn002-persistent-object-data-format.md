---
title: 'TN002: Formato dati oggetto persistente | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.data
dev_langs:
- C++
helpviewer_keywords:
- VERSIONABLE_SCHEMA macro [MFC]
- persistent object data
- CArchive class [MFC], support for persistent data
- persistent C++ objects [MFC]
- TN002
ms.assetid: 553fe01d-c587-4c8d-a181-3244a15c2be9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ca145ff871e1c5ccff27bdebe473c6cb6f39073a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33385417"
---
# <a name="tn002-persistent-object-data-format"></a>TN002: formato dati oggetto persistente
Questa nota descrive le routine MFC che supportano oggetti C++ persistenti e il formato dei dati dell'oggetto quando questo viene archiviato in un file. Si applica solo alle classi con la [DECLARE_SERIAL](../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../mfc/reference/run-time-object-model-services.md#implement_serial) macro.  
  
## <a name="the-problem"></a>Il problema  
 L'implementazione di MFC per i dati persistenti archivia i dati per molti oggetti in una singola parte contigua di un file. L'oggetto `Serialize` metodo converte i dati dell'oggetto in un formato binario compresso.  
  
 L'implementazione garantisce che tutti i dati viene salvato nello stesso formato utilizzando il [CArchive (classe)](../mfc/reference/carchive-class.md). Usa un `CArchive` oggetto come una funzione di conversione. Questo oggetto viene mantenuto dal momento in cui viene creata finché non si chiama [CArchive::Close](../mfc/reference/carchive-class.md#close). Questo metodo può essere chiamato in modo esplicito dal programmatore o in modo implicito dal distruttore quando il programma esce dall'ambito che contiene il `CArchive`.  
  
 Questa nota viene descritta l'implementazione del `CArchive` membri [CArchive::ReadObject](../mfc/reference/carchive-class.md#readobject) e [CArchive::WriteObject](../mfc/reference/carchive-class.md#writeobject). È possibile trovare il codice per queste funzioni in Arcobj.cpp e l'implementazione principale per `CArchive` in Arccore.cpp. Il codice utente non chiama `ReadObject` e `WriteObject` direttamente. Questi oggetti vengono invece utilizzati dagli specifici di una classe indipendente dai tipi inserimento ed estrazione operatori che vengono generati automaticamente dal `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` macro. Il codice seguente viene illustrato come `WriteObject` e `ReadObject` vengono chiamati in modo implicito:  
  
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
  
## <a name="saving-objects-to-the-store-carchivewriteobject"></a>Salvataggio degli oggetti nell'archivio (CArchive::WriteObject)  
 Il metodo `CArchive::WriteObject` scrive i dati di intestazione utilizzati per ricostruire l'oggetto. Questi dati è costituito da due parti: il tipo di oggetto e lo stato dell'oggetto. Questo metodo è anche responsabile di mantenere l'identità dell'oggetto viene scritto, in modo che una sola copia viene salvata, indipendentemente dal numero di puntatori all'oggetto (inclusi i puntatori circolari).  
  
 Salvataggio (inserimento) e il ripristino degli oggetti (autoestraente) si basa su diversi "costanti manifesto". Questi sono valori che vengono archiviati in formato binario e forniscono informazioni importanti sull'archivio (si noti il prefisso "w" indica la quantità a 16 bit):  
  
|Tag|Descrizione|  
|---------|-----------------|  
|wNullTag|Utilizzato per puntatori a oggetti NULL (0).|  
|wNewClassTag|Indica la descrizione della classe che segue è una novità di questo contesto di archivio (-1).|  
|wOldClassTag|Indica la classe dell'oggetto da leggere rilevata in questo contesto (0x8000).|  
  
 Quando si archiviano gli oggetti, l'archivio gestisce un [CMapPtrToPtr](../mfc/reference/cmapptrtoptr-class.md) (il `m_pStoreMap`) che è un mapping da un oggetto archiviato in un identificatore permanente a 32 bit (PID). Un PID viene assegnato a ogni oggetto univoco e ogni nome di classe univoco che viene salvato nel contesto dell'archivio. Questi PID vengono assegnati in modo sequenziale a partire da 1. Questi PID non hanno alcun significato all'esterno dell'ambito dell'archivio e, in particolare, non deve essere confusa con numeri di record o altri elementi di identità.  
  
 Nel `CArchive` (classe), PID sono a 32 bit, ma questi sono scritti come a 16 bit a meno che non siano superiori a 0x7FFE. PID di grandi dimensioni vengono scritte come 0x7FFF aggiungendo il PID di 32 bit. Ciò garantisce la compatibilità con i progetti creati in versioni precedenti.  
  
 Quando viene effettuata una richiesta di salvare un oggetto in un archivio (in genere utilizzando l'operatore di inserimento globale), un valore null viene eseguito un controllo [CObject](../mfc/reference/cobject-class.md) puntatore. Se il puntatore è NULL, il `wNullTag` viene inserito il flusso di archivio.  
  
 Se il puntatore è diverso da NULL e possono essere serializzato (la classe è un `DECLARE_SERIAL` classe), il codice controlla il `m_pStoreMap` per vedere se l'oggetto è già stato salvato. In caso affermativo, il codice inserisce il PID di 32 bit associato a tale oggetto nel flusso di archivio.  
  
 Se l'oggetto non è ancora stato salvato, sono disponibili due opzioni da considerare: sia l'oggetto e il tipo esatto (classe) dell'oggetto sono nuovi per questo contesto di archiviazione o l'oggetto è di tipo esatto già presente. Per determinare se il tipo è stato individuato, le query di codice il `m_pStoreMap` per un [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) oggetto corrispondente il `CRuntimeClass` oggetto associato all'oggetto salvato. Se esiste una corrispondenza, `WriteObject` inserisce un tag che è il bit per bit `OR` di `wOldClassTag` e l'indice. Se il `CRuntimeClass` è una novità di questo contesto, archivio `WriteObject` assegna un nuovo PID per quella classe e lo inserisce nell'archivio, preceduto dal `wNewClassTag` valore.  
  
 Il descrittore per questa classe viene quindi inserito nell'archivio utilizzando il `CRuntimeClass::Store` metodo. `CRuntimeClass::Store` Inserisce il numero di schema della classe (vedere sotto) e il nome di testo ASCII della classe. Si noti che l'utilizzo del nome di testo ASCII non garantisce l'univocità dell'archivio tutte le applicazioni. Pertanto, si devono contrassegnare i file di dati per evitare il danneggiamento dei. Dopo l'inserimento delle informazioni sulla classe, l'archivio inserisce nell'oggetto verso il `m_pStoreMap` e quindi chiama il `Serialize` metodo per inserire i dati specifici di una classe. Inserire l'oggetto di `m_pStoreMap` prima di chiamare `Serialize` impedisce di salvare l'archivio più copie dell'oggetto.  
  
 Quando viene restituito al chiamante iniziale (in genere la radice della rete di oggetti), è necessario chiamare [CArchive::Close](../mfc/reference/carchive-class.md#close). Se si prevede di eseguire altre [CFile](../mfc/reference/cfile-class.md)operazioni, è necessario chiamare il `CArchive` metodo [scaricamento](../mfc/reference/carchive-class.md#flush) per impedire il danneggiamento dell'archivio.  
  
> [!NOTE]
>  Questa implementazione impone un limite rigido di 0x3FFFFFFE indici per ogni contesto di archiviazione. Questo numero rappresenta il numero massimo di oggetti univoci e le classi che possono essere salvate in un singolo archivio, ma un singolo file su disco può avere un numero illimitato di contesti di archivio.  
  
## <a name="loading-objects-from-the-store-carchivereadobject"></a>Caricamento di oggetti dall'archivio (CArchive::ReadObject)  
 Il caricamento (estrazione) di oggetti viene utilizzato il `CArchive::ReadObject` metodo ed è l'opposto di `WriteObject`. Come con `WriteObject`, `ReadObject` non viene chiamato direttamente dal codice utente; il codice utente deve chiamare l'operatore di estrazione indipendente dai tipi che chiama `ReadObject` con previsto `CRuntimeClass`. In questo modo si assicura l'integrità del tipo di operazione di estrazione.  
  
 Poiché il `WriteObject` implementazione assegnato PID crescente, a partire da 1 (0 è predefinito dell'oggetto NULL), il `ReadObject` implementazione può usare una matrice per mantenere lo stato del contesto di archiviazione. Quando viene letto un PID dall'archivio, se è maggiore del limite superiore corrente del `m_pLoadArray`, `ReadObject` sa che segue un nuovo oggetto (o una descrizione della classe).  
  
## <a name="schema-numbers"></a>Numeri di schema  
 Il numero di schema, che viene assegnato alla classe quando il `IMPLEMENT_SERIAL` metodo della classe viene rilevato, è la "versione" implementazione della classe. Lo schema fa riferimento all'implementazione della classe, non al numero di volte in cui un determinato oggetto reso permanente (in genere definito per la versione dell'oggetto).  
  
 Se si prevede di gestire diverse implementazioni della stessa classe nel tempo, incremento lo schema durante la revisione dell'oggetto `Serialize` consentirà di scrivere codice in grado di caricare gli oggetti archiviati con le versioni precedenti di implementazione del metodo l'implementazione.  
  
 Il `CArchive::ReadObject` metodo genererà un [eccezione CArchiveException](../mfc/reference/carchiveexception-class.md) quando viene rilevato un numero di schema in un archivio permanente che differisce dal numero di schema della descrizione della classe in memoria. Non è facile per il ripristino da questa eccezione.  
  
 È possibile utilizzare `VERSIONABLE_SCHEMA` combinandola (OR bit per bit `OR`) la versione dello schema per mantenere questa eccezione venga generata. Utilizzando `VERSIONABLE_SCHEMA`, il codice può eseguire l'azione appropriata relativo `Serialize` funzione controllando il valore restituito da [CArchive::GetObjectSchema](../mfc/reference/carchive-class.md#getobjectschema).  
  
## <a name="calling-serialize-directly"></a>Chiamare il metodo serializzare direttamente  
 In molti casi, l'overhead dello schema dell'archivio oggetto generale `WriteObject` e `ReadObject` non è necessario. Questa è la situazione comune di serializzare i dati in un [CDocument](../mfc/reference/cdocument-class.md). In questo caso, il `Serialize` metodo il `CDocument` viene chiamato direttamente, non con gli operatori di estrazione o insert. Il contenuto del documento a sua volta può utilizzare lo schema di archiviazione più generale di oggetto.  
  
 La chiamata `Serialize` direttamente con i vantaggi e gli svantaggi seguenti:  
  
-   Nessun byte aggiuntivi vengono aggiunti all'archivio prima o dopo l'oggetto viene serializzato. Questo non solo rende i dati salvati più piccoli, ma consente di implementare `Serialize` routine in grado di gestire i formati di file.  
  
-   MFC è ottimizzata pertanto `WriteObject` e `ReadObject` implementazioni e raccolte correlate non verrà collegate all'interno dell'applicazione a meno che non è necessario lo schema di archiviazione più generale di oggetto per altri scopi.  
  
-   Il codice non deve recuperare i numeri di schema precedente. Questo rende il codice di serializzazione di documenti responsabile della codifica i numeri di schema, i numeri di versione di formato di file o qualsiasi che identifica i numeri utilizzare all'inizio del file di dati.  
  
-   Qualsiasi oggetto che viene serializzato con una chiamata diretta a `Serialize` non devono utilizzare `CArchive::GetObjectSchema` o necessario handle di un valore restituito di -1 (UINT) che indica che la versione è sconosciuta.  
  
 Poiché `Serialize` viene chiamato direttamente nel documento, non è in genere possibile per gli oggetti secondari del documento da archiviare i riferimenti per il documento padre. Questi oggetti devono essere forniti un puntatore per il documento contenitore in modo esplicito o è necessario utilizzare [CArchive::MapObject](../mfc/reference/carchive-class.md#mapobject) funzione per eseguire il mapping di `CDocument` puntatore a un PID prima sono archiviati questi puntatori all'indietro.  
  
 Come notato in precedenza, è necessario codificare la versione e informazioni sulla classe manualmente quando si chiama `Serialize` direttamente, che consente di modificare il formato in un secondo momento, pur mantenendo la compatibilità con versioni precedenti. Il `CArchive::SerializeClass` funzione può essere chiamata in modo esplicito prima di serializzare direttamente un oggetto o prima della chiamata a una classe di base.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

