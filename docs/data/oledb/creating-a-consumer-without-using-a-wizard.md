---
title: Creazione di un Consumer senza utilizzare una procedura guidata | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB consumers, creating
ms.assetid: e8241cfe-5faf-48f8-9de3-241203de020b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ffc6a92f8fc4e4223e83c3270e28ae68ddc1829a
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="creating-a-consumer-without-using-a-wizard"></a>Creazione di un consumer senza utilizzare una procedura guidata
Nell'esempio seguente si presuppone che si aggiunge il supporto di consumer OLE DB a un progetto ATL esistente. Se si desidera aggiungere il supporto di consumer OLE DB a un'applicazione MFC, è necessario eseguire la creazione guidata applicazione MFC, che crea il supporto necessario e richiama le routine MFC necessarie per eseguire l'applicazione.  
  
 Per aggiungere il supporto di consumer OLE DB senza utilizzare la creazione guidata Consumer OLE DB ATL:  
  
-   Nel file stdafx. h, aggiungere le seguenti `#include` istruzioni:  
  
    ```  
    #include <atlbase.h>  
    #include <atldbcli.h>  
    #include <atldbsch.h> // if you are using schema templates  
    ```  
  
 A livello di codice, un consumer esegue in genere la sequenza delle operazioni seguente:  
  
-   Creare una classe di record utente che associa le colonne a variabili locali. In questo esempio, `CMyTableNameAccessor` è la classe di record utente (vedere [record utente](../../data/oledb/user-records.md)). Questa classe contiene la mappa delle colonne e una mappa dei parametri. Dichiarare un membro dati in una classe di record utente per ogni campo specificato nella mappa delle colonne. per ognuno di questi membri dati, anche dichiarare un membro dati di stato e un membro dati di lunghezza. Per ulteriori informazioni, vedere [membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata](../../data/oledb/field-status-data-members-in-wizard-generated-accessors.md).  
  
    > [!NOTE]
    >  Se si crea un consumer personalizzato, le variabili di dati devono precedere le variabili di stato e di lunghezza.  
  
-   Creare un'istanza di un'origine dati e una sessione. Scegliere il tipo di funzione di accesso e i set di righe da utilizzare e quindi creare un'istanza di un set di righe utilizzando [CCommand](../../data/oledb/ccommand-class.md) o [CTable](../../data/oledb/ctable-class.md):  
  
    ```  
    CDataSource ds;  
    CSession ss;  
    class CMyTableName : public CCommand<CAccessor<CMyTableNameAccessor>>  
    ```  
  
-   Chiamare **CoInitialize** inizializzare COM. Si tratta in genere nel codice principale. Ad esempio:  
  
    ```  
    HRESULT hr = CoInitialize(NULL);  
    ```  
  
-   Chiamare [CDataSource:: Open](../../data/oledb/cdatasource-open.md) o una delle sue varianti.  
  
-   Aprire una connessione all'origine dati, aprire la sessione, aprire e inizializzare il set di righe (e se un comando, anche eseguirla):  
  
    ```  
    hr = ds.Open();  
    hr = ss.Open(ds);  
    hr = rs.Open();            // (Open also executes the command)  
    ```  
  
-   Facoltativamente, set di proprietà set di righe utilizzando `CDBPropSet::AddProperty` e passarle come parametro a `rs.Open`. Per un esempio di questa procedura, vedere GetRowsetProperties in [metodi generate](../../data/oledb/consumer-wizard-generated-methods.md).  
  
-   È ora possibile utilizzare il set di righe per recuperare o modificare i dati.  
  
-   Quando viene eseguita l'applicazione, chiudere la connessione, una sessione e un set di righe:  
  
    ```  
    rs.Close();  
    ss.Close();  
    ds.Close();  
    ```  
  
     Se si utilizza un comando, si desidera chiamare `ReleaseCommand` dopo **Chiudi**. Nell'esempio di codice [CCommand](../../data/oledb/ccommand-close.md) viene illustrato come chiamare **Chiudi** e `ReleaseCommand`.  
  
-   Chiamare **CoUnInitialize** per annullare l'inizializzazione COM. Si tratta in genere nel codice principale.  
  
    ```  
    CoUninitialize();  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un consumer OLE DB](../../data/oledb/creating-an-ole-db-consumer.md)