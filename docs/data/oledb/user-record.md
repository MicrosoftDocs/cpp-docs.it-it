---
title: "Record utente | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "provider OLE DB, record utente"
  - "record, utente"
  - "rowset, record utente"
  - "record utente"
  - "record utente, descrizione"
ms.assetid: 9c0d2864-2738-4f62-a750-1016d9c3523f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Record utente
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nel record utente vengono forniti il codice e la struttura dati che rappresenta i dati della colonna di un rowset.  Un record utente può essere creato in fase di compilazione o in fase di esecuzione.  Supponendo che venga specificato il nome provider \[nome breve\] "MyProvider", quando si crea un provider mediante la Creazione guidata provider OLE DB ATL, viene creato un record utente predefinito con codice analogo a quello riportato di seguito:  
  
```  
class CWindowsFile:  
   public WIN32_FIND_DATA  
{  
public:  
  
BEGIN_PROVIDER_COLUMN_MAP(CMyProviderWindowsFile)  
   PROVIDER_COLUMN_ENTRY("FileAttributes", 1, dwFileAttributes)  
   PROVIDER_COLUMN_ENTRY("FileSizeHigh", 2, nFileSizeHigh)  
   PROVIDER_COLUMN_ENTRY("FileSizeLow", 3, nFileSizeLow)  
   PROVIDER_COLUMN_ENTRY_STR("FileName", 4, cFileName)  
   PROVIDER_COLUMN_ENTRY_STR("AltFileName", 5, cAlternateFileName)  
END_PROVIDER_COLUMN_MAP()  
  
};  
```  
  
 I modelli provider OLE DB gestiscono tutte le specifiche OLE DB relative alle interazioni con il client.  Per acquisire i dati delle colonne necessari per una risposta, il provider chiama la funzione `GetColumnInfo`, che è necessario inserire nel record utente.  È possibile eseguire l'override esplicito di `GetColumnInfo` nel record utente, ad esempio dichiarandolo nel file H come illustrato di seguito:  
  
```  
template <class T>  
static ATLCOLUMNINFO* GetColumnInfo(T* pThis, ULONG* pcCols)   
```  
  
 Questa dichiarazione equivale a:  
  
```  
static ATLCOLUMNINFO* GetColumnInfo(CommandClass* pThis, ULONG* pcCols)  
static ATLCOLUMNINFO* GetColumnInfo(RowsetClass* pThis, ULONG* pcCols)  
```  
  
 È inoltre necessario implementare `GetColumnInfo` nel file CPP del record utente.  
  
 Le macro PROVIDER\_COLUMN\_MAP possono fornire un valido aiuto per la creazione di una funzione `GetColumnInfo`:  
  
-   BEGIN\_PROVIDER\_COLUMN\_MAP definisce il prototipo di funzione e una matrice statica di strutture **ATLCOLUMNINFO**.  
  
-   PROVIDER\_COLUMN\_ENTRY definisce e inizializza un'unica **ATLCOLUMNINFO**.  
  
-   END\_PROVIDER\_COLUMN\_MAP chiude la matrice e la funzione.  Inserisce inoltre il numero degli elementi della matrice nel parametro `pcCols`.  
  
 Quando si crea un record utente in fase di esecuzione, **GetColumnInfo** utilizza il parametro `pThis` per ricevere un puntatore a un'istanza di rowset o di comando.  Gli oggetti Command e Rowset devono supportare l'interfaccia `IColumnsInfo`, in modo che sia possibile ottenere informazioni sulle colonne da questo puntatore.  
  
 **CommandClass** e **RowsetClass** sono il comando e il rowset che utilizzano il record utente.  
  
 Per un esempio più dettagliato relativo all'override di `GetColumnInfo` in un record utente, vedere [Determinazione dinamica delle colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).  
  
## Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)