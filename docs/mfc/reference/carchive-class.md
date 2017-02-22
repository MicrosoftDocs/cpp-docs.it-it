---
title: "CArchive Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CArchive"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArchive class"
  - "data storage [C++], CArchive class"
  - "I/O [MFC], archiving objects"
  - "serializzazione [C++], CArchive class"
  - "storage [C++], CArchive class"
ms.assetid: 9e950d23-b874-456e-ae4b-fe00781a7699
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CArchive Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di salvare una rete complessa di oggetti in formato binario permanente in genere archiviazione su disco\) che viene mantenuto dopo che gli oggetti eliminati.  
  
## Sintassi  
  
```  
class CArchive  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArchive::CArchive](../Topic/CArchive::CArchive.md)|Crea un oggetto `CArchive`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArchive::Abort](../Topic/CArchive::Abort.md)|Chiude un archivio senza generare un'eccezione.|  
|[CArchive::Close](../Topic/CArchive::Close.md)|Elimina i dati e le sconnessioni non scritti da `CFile`.|  
|[CArchive::Flush](../Topic/CArchive::Flush.md)|Dati non scrittura di vampate dal buffer di archiviazione.|  
|[CArchive::GetFile](../Topic/CArchive::GetFile.md)|Ottiene un puntatore a un oggetto `CFile` per questo archivio.|  
|[CArchive::GetObjectSchema](../Topic/CArchive::GetObjectSchema.md)|Chiamato dalla funzione `Serialize` per determinare la versione dell'oggetto che si deserializzazione.|  
|[CArchive::IsBufferEmpty](../Topic/CArchive::IsBufferEmpty.md)|Determina se il buffer è stato svuotato durante il processo di Windows Sockets.|  
|[CArchive::IsLoading](../Topic/CArchive::IsLoading.md)|Determina se il file viene caricato.|  
|[CArchive::IsStoring](../Topic/CArchive::IsStoring.md)|Determina se l'archivio l'archiviazione.|  
|[CArchive::MapObject](../Topic/CArchive::MapObject.md)|Posiziona gli oggetti nella mappa che non vengono serializzati nel file, ma che sia disponibile per oggetti secondari di fare riferimento.|  
|[CArchive::Read](../Topic/CArchive::Read.md)|Legge i byte non elaborati.|  
|[CArchive::ReadClass](../Topic/CArchive::ReadClass.md)|Legge il riferimento della classe in precedenza archiviato con `WriteClass`.|  
|[CArchive::ReadObject](../Topic/CArchive::ReadObject.md)|Chiama la funzione `Serialize` di un oggetto per caricare.|  
|[CArchive::ReadString](../Topic/CArchive::ReadString.md)|Legge una riga di testo.|  
|[CArchive::SerializeClass](../Topic/CArchive::SerializeClass.md)|Lettura o scrittura il riferimento della classe all'oggetto `CArchive` a seconda della direzione `CArchive`.|  
|[CArchive::SetLoadParams](../Topic/CArchive::SetLoadParams.md)|Imposta la dimensione della matrice di carico aumenta.  Deve essere chiamato prima di qualsiasi oggetto venga caricato o prima `MapObject` o `ReadObject` venga chiamato.|  
|[CArchive::SetObjectSchema](../Topic/CArchive::SetObjectSchema.md)|Imposta lo schema dell'oggetto archiviato nell'oggetto dell'archivio.|  
|[CArchive::SetStoreParams](../Topic/CArchive::SetStoreParams.md)|Imposta il hash presenti le dimensioni e la dimensione di un blocco di mapping utilizzato per identificare gli oggetti univoci durante il processo di serializzazione.|  
|[CArchive::Write](../Topic/CArchive::Write.md)|Scrive byte non elaborati.|  
|[CArchive::WriteClass](../Topic/CArchive::WriteClass.md)|Scrive un riferimento a `CRuntimeClass` a `CArchive`.|  
|[CArchive::WriteObject](../Topic/CArchive::WriteObject.md)|Chiama la funzione `Serialize` di un oggetto per archiviare.|  
|[CArchive::WriteString](../Topic/CArchive::WriteString.md)|Scrivere una sola riga di testo.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArchive::operator \<\<](../Topic/CArchive::operator%20%3C%3C.md)|Oggetti e tipi primitivi dei file all'archivio.|  
|[CArchive::operator \>\>](../Topic/CArchive::operator%20%3E%3E.md)|Oggetti e tipi primitivi carichi dall'archivio.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArchive::m\_pDocument](../Topic/CArchive::m_pDocument.md)||  
  
## Note  
 `CArchive` non dispone di una classe base.  
  
 Successivamente è possibile caricare gli oggetti da archivio permanente, ricostituente li in memoria.  Questo processo di rendere persistenti i dati viene chiamato "serializzazione."  
  
 È possibile considerare un oggetto dell'archivio come tipo di flusso binario.  In un flusso di output, un archivio è associato a un file e consente la scrittura e la lettura dei dati memorizzati nel buffer da archiviazione.  Le sequenze di processi di un flusso di output di caratteri ASCII, ma un archivio elabora i dati binari oggetto in un formato efficiente e nonredundant.  
  
 È necessario creare un oggetto [file C](../../mfc/reference/cfile-class.md) prima di poter creare un oggetto `CArchive`.  Inoltre, è necessario assicurarsi che lo stato di caricamento\/file di archivio è compatibile con la modalità di apertura del file.  È limitata a un archivio attivo per file.  
  
 Quando si costruisce un oggetto `CArchive`, lo si associa a un oggetto di classe `CFile` o di una classe derivata\) che rappresenta un file aperto.  Viene inoltre specificato se l'archivio verrà utilizzato per il caricamento o archiviare.  Un oggetto `CArchive` può elaborare non solo i tipi primitivi ma anche gli oggetti [CObject](../../mfc/reference/cobject-class.md)di classi derivate progettate per la serializzazione.  Una classe serializzabile in genere da una funzione membro `Serialize` e in genere utilizza le macro [IMPLEMENT\_SERIAL](../Topic/IMPLEMENT_SERIAL.md) e [DECLARE\_SERIAL](../Topic/DECLARE_SERIAL.md), come descritto in `CObject`classe.  
  
 Operatori di overload di inserimento e\)**\>\>**\(di estrazione \(**\<\<**\) sono interfacce di programmazione pratiche dell'archivio che supportano entrambi i tipi primitivi che `CObject`di classi derivate.  
  
 La supporta la programmazione di`CArchive` anche con MFC Windows Sockets le classi [CSocket](../../mfc/reference/csocket-class.md) e [CSocketFile](../../mfc/reference/csocketfile-class.md).  I supporti di funzione membro [IsBufferEmpty](../Topic/CArchive::IsBufferEmpty.md) di utilizzo.  
  
 Per ulteriori informazioni su `CArchive`, vedere gli articoli [serializzazione](../../mfc/serialization-in-mfc.md) e [Windows Sockets: Utilizzo di socket con gli archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
## Gerarchia di ereditarietà  
 `CArchive`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFile Class](../../mfc/reference/cfile-class.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CSocket Class](../../mfc/reference/csocket-class.md)   
 [CSocketFile Class](../../mfc/reference/csocketfile-class.md)