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
ms.openlocfilehash: deca5e0913013e73188e505935d5b2c9b8bf79db
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36952207"
---
# <a name="tn002-persistent-object-data-format"></a>TN002: formato dati oggetto persistente
In questa nota descrive le routine MFC che supportano oggetti C++ persistenti e il formato dei dati dell'oggetto quando questo viene archiviato in un file. Questo vale solo per le classi con la [DECLARE_SERIAL](../mfc/reference/run-time-object-model-services.md#declare_serial) e [IMPLEMENT_SERIAL](../mfc/reference/run-time-object-model-services.md#implement_serial) macro.  
  
## <a name="the-problem"></a>Il problema  
 L'implementazione di MFC per i dati persistenti archivia i dati per molti oggetti in una singola parte di un file contigua. L'oggetto `Serialize` metodo converte i dati dell'oggetto in un formato binario compresso.  
  
 L'implementazione garantisce che tutti i dati viene salvato nello stesso formato utilizzando il [CArchive (classe)](../mfc/reference/carchive-class.md). Usa un `CArchive` oggetto come una funzione di conversione. Questo oggetto viene mantenuto dal momento in cui viene creata finché non si chiama [CArchive::Close](../mfc/reference/carchive-class.md#close). Questo metodo può essere chiamato in modo esplicito il programmatore oppure in modo implicito dal distruttore quando il programma esce dall'ambito che contiene il `CArchive`.  
  
 In questa nota viene descritta l'implementazione del `CArchive` membri [CArchive::ReadObject](../mfc/reference/carchive-class.md#readobject) e [CArchive::WriteObject](../mfc/reference/carchive-class.md#writeobject). Si noterà il codice per queste funzioni in Arcobj.cpp e l'implementazione principale per `CArchive` in Arccore.cpp. Il codice utente non chiamare `ReadObject` e `WriteObject` direttamente. Al contrario, questi oggetti vengono utilizzati dagli specifici di una classe indipendente dai tipi inserimento ed estrazione operatori che vengono generati automaticamente da macro DECLARE_SERIAL e IMPLEMENT_SERIAL. Il codice seguente illustra come `WriteObject` e `ReadObject` vengono chiamati in modo implicito:  
  
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
  
## <a name="saving-objects-to-the-store-carchivewriteobject"></a>Il salvataggio degli oggetti nell'archivio (CArchive::WriteObject)  
 Il metodo `CArchive::WriteObject` scrive i dati di intestazione utilizzato per ricostruire l'oggetto. Questi dati è costituito da due parti: il tipo di oggetto e lo stato dell'oggetto. Questo metodo è anche responsabile di mantenere l'identità dell'oggetto viene scritto, in modo che una sola copia viene salvata, indipendentemente dal numero dei puntatori all'oggetto (inclusi i puntatori circolari).  
  
 Il salvataggio (inserimento) e il ripristino di oggetti (autoestraente) si basa su diverse "costanti manifesto". Questi sono valori che vengono archiviati in formato binario e forniscono informazioni importanti sull'archivio (si noti il prefisso "w" indica le quantità a 16 bit):  
  
|Tag|Descrizione|  
|---------|-----------------|  
|wNullTag|Utilizzato per puntatori a oggetti NULL (0).|  
|wNewClassTag|Indica la descrizione della classe che segue è una novità di questo contesto di archivio (-1).|  
|wOldClassTag|Indica la classe dell'oggetto letto rilevata in questo contesto (0x8000).|  
  
 Quando si archiviano gli oggetti, l'archivio gestisce un [CMapPtrToPtr](../mfc/reference/cmapptrtoptr-class.md) (il *m_pStoreMap*) che è un mapping da un oggetto archiviato in un identificatore permanente a 32 bit (PID). Un PID viene assegnato a ogni oggetto univoco e ogni nome di classe univoco che viene salvato nel contesto dell'archivio. Questi PID vengono assegnati in modo sequenziale a partire da 1. Questi PID non hanno alcun significato all'esterno dell'ambito dell'archivio e, in particolare, non deve essere confusa con numeri di record o altri elementi di identità.  
  
 Nel `CArchive` (classe), PID sono a 32 bit, ma questi sono scritti come a 16 bit a meno che non siano superiori a 0x7FFE. PID di grandi dimensioni vengono scritte come 0x7FFF aggiungendo il PID di 32 bit. Ciò garantisce la compatibilità con i progetti creati nelle versioni precedenti.  
  
 Quando viene effettuata una richiesta per salvare un oggetto in un archivio (in genere utilizzando l'operatore di inserimento globale), viene eseguito un controllo per un valore NULL [CObject](../mfc/reference/cobject-class.md) puntatore. Se il puntatore è NULL, il *wNullTag* viene inserito il flusso di archivio.  
  
 Se il puntatore non NULL e possono essere serializzato (la classe è un `DECLARE_SERIAL` classe), il codice controlla il *m_pStoreMap* per vedere se l'oggetto è già stato salvato. In caso affermativo, il codice inserisce il PID di 32 bit associato a quell'oggetto nel flusso di archivio.  
  
 Se l'oggetto non è stato salvato prima, esistono due possibilità per prendere in considerazione: sia l'oggetto e il tipo esatto (classe) dell'oggetto ha familiarità con questo contesto di archiviazione o l'oggetto è di tipo esatto già presente. Per determinare se il tipo è stato individuato, le query di codice il *m_pStoreMap* per un [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) oggetto corrispondente il `CRuntimeClass` oggetto associato all'oggetto in corso il salvataggio. Se non esiste una corrispondenza `WriteObject` inserisce un tag che è il bit per bit `OR` dei *wOldClassTag* e questo indice. Se il `CRuntimeClass` rappresenta una novità in questo contesto, archive `WriteObject` assegna un PID nuova a quella classe e lo inserisce nell'archivio, preceduto dal *wNewClassTag* valore.  
  
 Il descrittore per questa classe viene quindi inserito nell'archivio utilizzando i `CRuntimeClass::Store` metodo. `CRuntimeClass::Store` Inserisce il numero di schema della classe (vedere sotto) e il nome di testo ASCII della classe. Si noti che l'utilizzo del nome di testo ASCII non garantisce l'univocità dell'archivio tra le applicazioni. Pertanto, si devono contrassegnare i file di dati per evitare il danneggiamento dei. Dopo l'inserimento delle informazioni sulla classe, l'archivio inserisce nell'oggetto verso il *m_pStoreMap* e quindi chiama il `Serialize` metodo per inserire i dati specifici di una classe. Impostare l'oggetto nel *m_pStoreMap* prima di chiamare `Serialize` impedisce di salvare l'archivio più copie dell'oggetto.  
  
 Quando viene restituito al chiamante iniziale (in genere la radice della rete di oggetti), è necessario chiamare [CArchive::Close](../mfc/reference/carchive-class.md#close). Se si prevede di eseguire altre [CFile](../mfc/reference/cfile-class.md)operazioni, è necessario chiamare il `CArchive` metodo [Flush](../mfc/reference/carchive-class.md#flush) per impedire il danneggiamento dell'archivio.  
  
> [!NOTE]
>  Questa implementazione impone un limite rigido di 0x3FFFFFFE indici per ogni contesto di archivio. Questo numero rappresenta il numero massimo di oggetti univoci e le classi che possono essere salvate in un singolo archivio, ma un singolo file su disco può avere un numero illimitato di contesti di archivio.  
  
## <a name="loading-objects-from-the-store-carchivereadobject"></a>Caricamento di oggetti dall'archivio (CArchive::ReadObject)  
 Il caricamento (l'estrazione) oggetti utilizza il `CArchive::ReadObject` metodo ed è vero il contrario di `WriteObject`. Come con `WriteObject`, `ReadObject` non viene chiamato direttamente dal codice utente; il codice utente deve chiamare l'operatore di estrazione indipendente dai tipi che chiama `ReadObject` con previsto `CRuntimeClass`. In questo modo si assicura l'integrità di tipo dell'operazione di estrazione.  
  
 Poiché il `WriteObject` implementazione assegnato PID crescente, a partire da 1 (0 è predefinita dell'oggetto NULL), il `ReadObject` implementazione può usare una matrice per mantenere lo stato del contesto di archivio. Quando un PID viene letto dall'archivio, se il PID è maggiore di limite il superiore corrente del *m_pLoadArray*, `ReadObject` sa che segue un nuovo oggetto (o classe descrizione).  
  
## <a name="schema-numbers"></a>Numeri di schema  
 Il numero di schema, che viene assegnato alla classe quando il `IMPLEMENT_SERIAL` metodo della classe viene rilevato, è la "versione" implementazione della classe. Lo schema fa riferimento all'implementazione della classe, non al numero di volte in cui un determinato oggetto è stata resa persistente (detto in genere la versione dell'oggetto).  
  
 Se si prevede di gestire diverse implementazioni della stessa classe nel corso del tempo, con incrementi di schema durante la revisione dell'oggetto `Serialize` implementazione del metodo consente di scrivere codice in grado di caricare gli oggetti archiviati con le versioni precedenti di l'implementazione.  
  
 Il `CArchive::ReadObject` metodo genererà un' [eccezione CArchiveException](../mfc/reference/carchiveexception-class.md) quando viene rilevato un numero di schema in un archivio permanente che è diverso da quello dello schema della descrizione della classe in memoria. Non è facile per il ripristino da questa eccezione.  
  
 È possibile utilizzare `VERSIONABLE_SCHEMA` abbinata (OR bit per bit **o**) la versione dello schema per mantenere questa eccezione venga generata. Utilizzando `VERSIONABLE_SCHEMA`, il codice può eseguire l'azione appropriata relativo `Serialize` funzione controllando il valore restituito da [CArchive::GetObjectSchema](../mfc/reference/carchive-class.md#getobjectschema).  
  
## <a name="calling-serialize-directly"></a>Chiamare il metodo serializzare direttamente  
 In molti casi, l'overhead dello schema di archivio oggetto generale del `WriteObject` e `ReadObject` non è necessario. Questa è la situazione comune di serializzare i dati in un [CDocument](../mfc/reference/cdocument-class.md). In questo caso, il `Serialize` metodo il `CDocument` viene chiamato direttamente, non con gli operatori di estrazione o insert. Il contenuto del documento può a loro volta usano lo schema di archivio oggetto più generale.  
  
 La chiamata `Serialize` direttamente con i vantaggi e gli svantaggi seguenti:  
  
-   Nessun byte aggiuntivi vengono aggiunti all'archivio prima o dopo l'oggetto viene serializzato. Questo non solo rende i dati salvati più piccoli, ma è possibile implementare `Serialize` routine che possono gestire qualsiasi formati di file.  
  
-   MFC è regolata pertanto `WriteObject` e `ReadObject` implementazioni e raccolte correlate non verranno collegate in un'applicazione a meno che non è necessario lo schema di archivio oggetto più generale per altri scopi.  
  
-   Il codice non necessario risarcimento per i numeri di schema precedente. Questo rende il codice di serializzazione di documenti responsabile della codifica i numeri di schema, i numeri di versione formato file o qualsiasi che identifica i numeri utilizzare all'inizio del file di dati.  
  
-   Qualsiasi oggetto che viene serializzato con una chiamata diretta `Serialize` non devono utilizzare `CArchive::GetObjectSchema` o necessario handle di valore restituito di -1 (UINT) che indica che la versione è sconosciuta.  
  
 Poiché `Serialize` viene chiamato direttamente nel documento, non è in genere possibile per gli oggetti secondari del documento da archiviare i riferimenti per il documento padre. Questi oggetti devono essere specificati un puntatore per il documento contenitore in modo esplicito oppure è necessario utilizzare [CArchive::MapObject](../mfc/reference/carchive-class.md#mapobject) funzione per eseguire il mapping di `CDocument` puntatore a un PID prima sono archiviati questi puntatori all'indietro.  
  
 Come notato in precedenza, è consigliabile codificare la versione e informazioni sulla classe manualmente quando si chiama `Serialize` direttamente, che consente di modificare il formato in un secondo momento pur mantenendo la compatibilità con versioni precedenti. Il `CArchive::SerializeClass` funzione può essere chiamata in modo esplicito prima di serializzare direttamente un oggetto o prima di chiamare una classe di base.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

