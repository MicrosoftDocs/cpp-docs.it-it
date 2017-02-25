---
title: "TN002: formato dati oggetto persistente | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArchive (classe), supporto per dati persistenti"
  - "oggetti C++ persistenti"
  - "dati oggetto persistenti"
  - "TN002"
  - "VERSIONABLE_SCHEMA (macro)"
ms.assetid: 553fe01d-c587-4c8d-a181-3244a15c2be9
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# TN002: formato dati oggetto persistente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota vengono descritte le routine di MFC che supportano oggetti persistenti C\+\+ e il formato dei dati dell'oggetto quando viene archiviato in un file.  Si applica solo alle classi con le macro di [IMPLEMENT\_SERIAL](../Topic/IMPLEMENT_SERIAL.md) e di [DECLARE\_SERIAL](../Topic/DECLARE_SERIAL.md).  
  
## Il problema  
 L'implementazione di MFC per dati persistenti degli archivi dati per molti oggetti in una singola parte contigua di un file.  Il metodo di `Serialize` dell'oggetto converte i dati object in formato binario compresso.  
  
 L'implementazione garantisce che tutti i dati vengono salvati nello stesso formato tramite [CArchive Class](../mfc/reference/carchive-class.md).  Utilizza un oggetto di `CArchive` come convertitore.  Questo oggetto rende persistente dal momento in cui viene creato fino a quando non si chiama [CArchive::Close](../Topic/CArchive::Close.md).  Questo metodo può essere chiamato in modo esplicito dal programmatore o in modo implicito dal distruttore al termine del programma l'ambito che contiene `CArchive`.  
  
 Questa nota descritta l'implementazione dei membri [CArchive::ReadObject](../Topic/CArchive::ReadObject.md) e [CArchive::WriteObject](../Topic/CArchive::WriteObject.md)di `CArchive`.  Si trova il codice per queste funzioni in Arcobj.cpp e l'implementazione di base per `CArchive` in Arccore.cpp.  Il codice utente non chiama direttamente `ReadObject` e `WriteObject`.  Invece, questi oggetti vengono utilizzati gli operatori indipendenti dai tipi specifici di estrazione e di inserimento generati automaticamente da macro di `IMPLEMENT_SERIAL` e di `DECLARE_SERIAL`.  Nel codice seguente viene illustrato come `WriteObject` e `ReadObject` in modo implicito vengono chiamati:  
  
```  
class CMyObject : public CObject  
{  
    DECLARE_SERIAL(CMyObject)  
};  
  
IMPLEMENT_SERIAL(CMyObj, CObject, 1)  
  
// example usage (ar is a CArchive&)  
CMyObject* pObj;  
CArchive& ar;  
ar << pObj;        // calls ar.WriteObject(pObj)  
ar >> pObj;        // calls ar.ReadObject(RUNTIME_CLASS(CObj))  
```  
  
## Oggetti del salvataggio nell'archivio \(CArchive::WriteObject\)  
 Il metodo `CArchive::WriteObject` scrive i dati dell'intestazione utilizzati per ricostruire l'oggetto.  Questi dati sono costituiti da due parti: il tipo di oggetto e lo stato dell'oggetto.  Questo metodo è anche responsabile della gestione dell'identità dell'oggetto scritto, in modo che una sola copia viene salvata, indipendentemente dal numero dei puntatori a tale oggetto \(puntatori circolari tra cui\).  
  
 Salvare \(inserire\) e ripristinare gli oggetti \(disegnare\) si basano su "diverse costanti manifesto." Questi valori vengono archiviati in file binario e forniscono informazioni importanti nell'archivio \(si noti il prefisso "w" indica le quantità a 16 bit\):  
  
|Tag|Descrizione|  
|---------|-----------------|  
|wNullTag|Utilizzato per puntatori a oggetti NULL \(0\).|  
|wNewClassTag|Indica che descrizione della classe che segue è nuovo in questo contesto dell'archivio \(\- 1\).|  
|wOldClassTag|Indica che la classe dell'oggetto che viene letto è stata vista in questo contesto \(0x8000\).|  
  
 Nell'archiviare gli oggetti, l'archivio gestisce [CMapPtrToPtr](../mfc/reference/cmapptrtoptr-class.md) \( `m_pStoreMap`\) che è un mapping da un oggetto archiviato in un identificatore persistente \(PID\) a 32 bit.  Un PID è assegnato a ogni oggetto univoco e a ogni nome della classe univoco che viene salvato nel contesto dell'archivio.  Questi PIDs sono in sequenza avviare distribuito su 1.  Questi PIDs non hanno significato dell'ambito dell'archivio e, in particolare, non devono essere confusi con i numeri di record o altri elementi identity.  
  
 Nella classe di `CArchive`, i PIDs sono 32 bit, ma sono scritti come 16 bit\/x86 a meno che non siano più grandi di 0x7FFE.  Grandi PIDs è scritta come 0x7FFF seguiti a 32 bit PID.  Ciò garantisce la compatibilità con i progetti creati nelle versioni precedenti.  
  
 Quando viene effettuata una richiesta di salvare un oggetto in un archivio \(in genere utilizzando l'operatore globale di inserimento\), un controllo viene eseguito per un puntatore NULL di [CObject](../mfc/reference/cobject-class.md).  Se il puntatore è NULL, `wNullTag` viene inserito nel flusso dell'archivio.  
  
 Se il puntatore non è NULL e può essere serializzato \(la classe è una classe di `DECLARE_SERIAL` \), i controlli di codice `m_pStoreMap` per verificare se l'oggetto è stato salvato in precedenza.  Se ha esito positivo, il codice inserisce il 32 bit PID associato a tale oggetto nel flusso dell'archivio.  
  
 Se l'oggetto non è stato salvato in precedenza, esistono due possibilità da prendere in considerazione: sia l'oggetto che il tipo esatto ovvero classe\) dell'oggetto sono nuovi in questo contesto store, o un oggetto è di tipo esatto già presenti.  Per stabilire se il tipo è stato in precedenza, il codice esegue una query `m_pStoreMap` per un oggetto di [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) corrispondente all'oggetto di `CRuntimeClass` associato all'oggetto salvato.  Se esiste una corrispondenza, `WriteObject` inserire un tag che è `OR` come un bit di `wOldClassTag` e di questo indice.  Se `CRuntimeClass` è nuovo in questo contesto store, `WriteObject` assegna un nuovo PID a tale classe e lo inserisce nell'archivio, preceduto dal valore di `wNewClassTag`.  
  
 Il descrittore della classe viene quindi inserito nell'archivio mediante il metodo di `CRuntimeClass::Store`.  `CRuntimeClass::Store` inserisce il numero dello schema della classe \(vedere di seguito\) e il nome del testo ASCII della classe.  Notare che l'utilizzo del nome del testo ASCII non garantisce l'univocità dell'archivio tra le applicazioni.  Pertanto, è necessario contrassegnare i file di dati per impedire l'alterazione.  All'inserimento delle informazioni sulle classi, l'archivio inserisce l'oggetto in `m_pStoreMap` quindi chiama il metodo di `Serialize` per inserire dati specifici.  Posizionando l'oggetto in `m_pStoreMap` prima di chiamare `Serialize` impedire più copie dell'oggetto venga salvato nell'archivio.  
  
 In tornare al chiamante iniziale \(in genere la radice della rete degli oggetti\), è necessario chiamare [CArchive::Close](../Topic/CArchive::Close.md).  Se si intende eseguire altre operazioni [CFile](../mfc/reference/cfile-class.md), è necessario chiamare il metodo `CArchive`[Flush](../Topic/CArchive::Flush.md) per impedire l'alterazione store.  
  
> [!NOTE]
>  Questa implementazione impongono un limite rigido degli indici 0x3FFFFFFE per contesto dell'archivio.  Questo numero rappresenta il numero massimo di oggetti univoci e classi che possono essere salvati in un unico archivio, ma un singolo file su disco può avere un numero illimitato di contesti dell'archivio.  
  
## Oggetti di carico dall'archivio \(CArchive::ReadObject\)  
 Il carico \(disegnare oggetti\) utilizza il metodo di `CArchive::ReadObject` ed è l'opposto di `WriteObject`.  Come con `WriteObject`, `ReadObject` non viene chiamato direttamente dal codice utente; il codice utente deve chiamare l'operatore indipendente dai tipi di estrazione che chiama `ReadObject` con `CRuntimeClass`previsto.  Ciò assicura l'integrità del tipo di operazione di estrarre.  
  
 Poiché l'implementazione di `WriteObject` assegnati i PIDs in aumento, a partire da 1 \(0 è preconfigurato come oggetto NULL\), l'implementazione di `ReadObject` può utilizzare una matrice per gestire lo stato del contesto dell'archivio.  Quando un PID viene letto dall'archivio, se il PID è superiore al limite superiore corrente di `m_pLoadArray`, `ReadObject` sa che un nuovo oggetto o descrizione della classe\) seguente.  
  
## Numeri dello schema  
 Il numero dello schema, assegnato alla classe quando il metodo di `IMPLEMENT_SERIAL` della classe viene rilevato, è "release" dell'implementazione della classe.  Lo schema si riferisce all'implementazione della classe, non al numero di volte in cui un oggetto specificato è stato reso persistente in genere definito la versione dell'oggetto\).  
  
 Se si intende gestire diverse implementazioni della stessa classe nel tempo, incrementare lo schema come esaminare l'implementazione del metodo di `Serialize` dell'oggetto consentirà di scrivere codice che può caricare gli oggetti memorizzati tramite versioni precedenti di implementazione.  
  
 Il metodo di `CArchive::ReadObject` genererà [CArchiveException](../mfc/reference/carchiveexception-class.md) quando viene rilevato un numero dello schema nell'archivio persistente diverso dal numero dello schema della descrizione della classe nella memoria.  Non è facile recuperare da questa eccezione.  
  
 È possibile utilizzare `VERSIONABLE_SCHEMA` combinato con \( `OR`bit per bit\) la versione dello schema per gestire questa eccezione rispetto a essere generato.  Utilizzando `VERSIONABLE_SCHEMA`, il codice può eseguire l'azione appropriata nella propria funzione di `Serialize` controllando il valore restituito da [CArchive::GetObjectSchema](../Topic/CArchive::GetObjectSchema.md).  
  
## Serializza chiamare direttamente  
 In molti casi il sovraccarico dello schema generale dell'oggetto t `WriteObject` e di `ReadObject` non è necessario.  Questo è il caso più comune di serializzare i dati in [CDocument](../mfc/reference/cdocument-class.md).  In questo caso, il metodo di `Serialize` di `CDocument` viene chiamato direttamente, non agli operatori di inserimento o estrai.  Il contenuto del documento può a sua volta utilizzare lo schema più generale dell'archivio dell'oggetto.  
  
 Chiamare direttamente `Serialize` presenta i seguenti vantaggi e svantaggi:  
  
-   Nessun byte aggiuntivo verrà aggiunto all'archivio prima o dopo l'oggetto viene serializzato.  Ciò non solo dei dati salvati minori, ma che consente di implementare le routine di `Serialize` in grado di gestire tutti i formati di file.  
  
-   MFC viene ottimizzato in modo che le implementazioni di `ReadObject` e di `WriteObject` e raccolte correlate non verranno collegate nell'applicazione in cui è necessario lo schema più generale dell'archivio degli oggetti per un altro scopo.  
  
-   Il codice non deve recuperare da numeri precedenti dello schema.  In questo modo il codice di serializzazione di documenti responsabile della codifica dei numeri dello schema, numeri di versione di formato di file, o a qualsiasi numero di identificazione utilizzate all'inizio dei file di dati.  
  
-   Qualsiasi oggetto di cui viene serializzato con una chiamata diretta a `Serialize` non deve utilizzare o `CArchive::GetObjectSchema` deve gestire un valore restituito \(UINT\) \- 1 che indica che la versione è sconosciuta.  
  
 Poiché `Serialize` viene chiamato direttamente nel documento, in genere non è possibile per gli oggetti subordinati del documento ai riferimenti dell'archivio al documento padre.  Questi oggetti devono essere forniti un puntatore al documento contenitore in modo esplicito oppure utilizzare la funzione di [CArchive::MapObject](../Topic/CArchive::MapObject.md) eseguire il mapping del puntatore di `CDocument` a un PID prima di questi puntatori finale siano archiviati.  
  
 Come accennato in precedenza, codificare la versione e informazioni sulle classi manualmente quando si chiama direttamente `Serialize`, consentendo di modificare successivamente il formato conservando la compatibilità con le versioni precedenti dei file più recenti.  La funzione di `CArchive::SerializeClass` può essere chiamato in modo esplicito prima direttamente di serializzare un oggetto o prima di chiamare una classe base.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)