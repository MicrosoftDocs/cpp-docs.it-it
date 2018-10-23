---
title: Creazione di un Consumer senza utilizzare una procedura guidata | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB consumers, creating
ms.assetid: e8241cfe-5faf-48f8-9de3-241203de020b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cd8412ed280c0a256ea8acb7274da5d6238134fc
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49807797"
---
# <a name="creating-a-consumer-without-using-a-wizard"></a>Creazione di un consumer senza utilizzare una procedura guidata

Nell'esempio seguente si presuppone che si aggiunge il supporto di consumer OLE DB a un progetto ATL esistente. Se si desidera aggiungere il supporto di consumer OLE DB a un'applicazione MFC, è necessario eseguire la creazione guidata applicazione MFC, che consente di creare tutto il supporto necessari e richiama le routine MFC necessari per eseguire l'applicazione.  
  
Per aggiungere supporto OLE DB consumer senza utilizzare la creazione guidata Consumer OLE DB ATL:  
  
- Nel file pch. h, aggiungere il codice seguente `#include` istruzioni:  
  
    ```cpp  
    #include <atlbase.h>  
    #include <atldbcli.h>  
    #include <atldbsch.h> // if you are using schema templates  
    ```  
  
Un consumer a livello di codice, in genere esegue la sequenza delle operazioni seguente:  
  
1. Creare una classe di record utente che associa le colonne a variabili locali. In questo esempio `CMyTableNameAccessor` è la classe di record utente (vedere [record utente](../../data/oledb/user-records.md)). Questa classe contiene la mappa delle colonne e una mappa dei parametri. Dichiara un membro dati della classe di record utente per ogni campo specificato nella mappa delle colonne. per ognuno di questi membri dati, anche dichiarare un membro dati di stato e un membro dati di lunghezza. Per altre informazioni, vedere [membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata](../../data/oledb/field-status-data-members-in-wizard-generated-accessors.md).  
  
    > [!NOTE]
    > Se si crea un consumer personalizzato, le variabili di dati devono precedere le variabili di stato e lunghezza.  
  
- Creare un'istanza di un'origine dati e una sessione. Decidere quale tipo di funzione di accesso e set di righe da usare e quindi creare un'istanza di un set di righe utilizzando [CCommand](../../data/oledb/ccommand-class.md) oppure [CTable](../../data/oledb/ctable-class.md):  
  
    ```cpp  
    CDataSource ds;  
    CSession ss;  
    class CMyTableName : public CCommand<CAccessor<CMyTableNameAccessor>>  
    ```  
  
- Chiamare `CoInitialize` inizializzare COM. Si tratta in genere nel codice principale. Ad esempio:  
  
    ```cpp  
    HRESULT hr = CoInitialize(NULL);  
    ```  
  
- Chiamare [CDataSource:: Open](../../data/oledb/cdatasource-open.md) o una delle sue varianti.  
  
- Aprire una connessione all'origine dati, aprire la sessione e aprire e inizializzare il set di righe (e se un comando, anche eseguirla):  
  
    ```cpp  
    hr = ds.Open();  
    hr = ss.Open(ds);  
    hr = rs.Open();            // (Open also executes the command)  
    ```  
  
- Facoltativamente, set di proprietà set di righe utilizzando `CDBPropSet::AddProperty` e passarli come parametro al `rs.Open`. Per un esempio di questa procedura, vedere `GetRowsetProperties` nelle [riguardano metodi](../../data/oledb/consumer-wizard-generated-methods.md).  
  
- È ora possibile usare il set di righe per recuperare o modificare i dati.  
  
- Quando viene eseguita l'applicazione, chiudere la connessione, sessione e set di righe:  
  
    ```cpp  
    rs.Close();  
    ss.Close();  
    ds.Close();  
    ```  
  
     Se si usa un comando, è possibile chiamare `ReleaseCommand` dopo aver `Close`. Nell'esempio di codice [CCommand](../../data/oledb/ccommand-close.md) Mostra come chiamare `Close` e `ReleaseCommand`.  
  
- Chiamare `CoUnInitialize` da non inizializzare COM. Si tratta in genere nel codice principale.  
  
    ```cpp  
    CoUninitialize();  
    ```  
  
## <a name="see-also"></a>Vedere anche  

[Creazione di un consumer OLE DB](../../data/oledb/creating-an-ole-db-consumer.md)