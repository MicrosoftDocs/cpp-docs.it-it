---
title: "CRowset::Insert | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CRowset<TAccessor>.Insert"
  - "CRowset.Insert"
  - "CRowset<TAccessor>.Insert"
  - "CRowset<TAccessor>::Insert"
  - "ATL::CRowset<TAccessor>::Insert"
  - "ATL.CRowset.Insert"
  - "CRowset::Insert"
  - "ATL::CRowset::Insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Insert (metodo)"
ms.assetid: 6a64a1c3-10ac-4296-8685-0fd6fe63a13b
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::Insert
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea e inizializza una nuova riga utilizzando i dati dalla funzione di accesso.  
  
## Sintassi  
  
```  
  
      HRESULT Insert(   
   int nAccessor = 0,   
   bool bGetHRow = false    
) throw( );  
```  
  
#### Parametri  
 `nAccessor`  
 \[in\] numero della funzione di accesso da utilizzare per l'inserimento di dati.  
  
 *bGetHRow*  
 \[in\] indica se l'handle per la riga incollata vengono recuperate.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetChange`, che potrebbe non essere supportata in tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario disporre **DBPROP\_IRowsetChange** a `VARIANT_TRUE` chiamare **Apri** la tabella o il comando che contiene il rowset.  
  
 Inserisci potrebbe non riuscire se una o più colonne non siano modificabili.  Modificare la mappa dei cursori per risolvere questo problema.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come accedere a un'origine dati con un rowset e quindi inserire una stringa in una tabella nel rowset.  
  
 Innanzitutto, creare una classe della tabella inserimento di un nuovo oggetto ATL al progetto.  Ad esempio, fare clic con il pulsante destro del mouse sul progetto nel riquadro dell'area di lavoro e selezionare **Nuovo oggetto ATL**.  Nella categoria di **Data Access**, **Consumer**selezionato.  Creare un oggetto consumer di tipo **Tabella**. \(Selezione **Tabella** crea un rowset direttamente dalla tabella; selezionando **Comando** crea un rowset tramite un comando SQL.\) Selezionare un'origine dati, specificando una tabella con cui accedere all'origine dati.  Se si chiama l'oggetto consumer **CCustomerTable**, quindi verrebbero implementare il codice di inserimento come segue:  
  
 [!code-cpp[NVC_OLEDB_Consumer#10](../../data/oledb/codesnippet/CPP/crowset-insert_1.cpp)]  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)