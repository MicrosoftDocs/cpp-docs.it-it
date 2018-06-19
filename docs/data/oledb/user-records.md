---
title: Record utente | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- COLUMN_ENTRY_MAP
dev_langs:
- C++
helpviewer_keywords:
- rowsets [C++], accessors
- COLUMN_ENTRY macro
- COLUMN_ENTRY_MAP macro
- user records, OLE DB consumer templates
- OLE DB consumer templates, user records
- CAccessor class, example
- BEGIN_ACCESSOR_MAP macro
- accessors [C++], rowsets
- accessors [C++], static
- BEGIN_ACCESSOR macro, example
ms.assetid: 2de9e5eb-53ce-42b1-80fa-57d46600a80c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: aea6b4b2ebb1a02e4ef669b437fbe7eb30937f9b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33109807"
---
# <a name="user-records"></a>Record utente
Per utilizzare una funzione di accesso statica (ovvero, una funzione di accesso derivata da **CAccessor)**, il consumer deve includere un record utente. Il record dell'utente è una classe C++ che contiene gli elementi di dati per gestire l'input o output. La creazione guidata Consumer OLE DB ATL genera un record utente per il consumer. È possibile aggiungere metodi per il record utente per attività facoltative, ad esempio gestione dei comandi.  
  
 Il codice seguente viene illustrato un esempio di record che gestisce i comandi. Nel record utente, `BEGIN_COLUMN_MAP` rappresenta un set di righe di dati passato al consumer da un provider. `BEGIN_PARAM_MAP` rappresenta un set di parametri del comando. Questo esempio viene utilizzato un [CCommand](../../data/oledb/ccommand-class.md) classe per gestire i parametri del comando. I membri di dati nelle voci di mappa rappresentano gli offset in un blocco contiguo di memoria per ogni istanza della classe. Il `COLUMN_ENTRY` macro corrispondono al `PROVIDER_COLUMN_ENTRY` macro sul lato del provider.  
  
 Per ulteriori informazioni sul **COLUMN_MAP** e **PARAM_MAP** macro, vedere [macro per i modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).  
  
```  
class CArtists  
{  
public:  
// Data Elements  
   CHAR m_szFirstName[20];  
   CHAR m_szLastName[30];  
   short m_nAge;  
  
// Column binding map  
BEGIN_COLUMN_MAP(CArtists)  
   COLUMN_ENTRY(1, m_szFirstName)  
   COLUMN_ENTRY(2, m_szLastName)  
   COLUMN_ENTRY(3, m_nAge)  
END_COLUMN_MAP()  
  
// Parameter binding map  
BEGIN_PARAM_MAP(CArtists)  
   COLUMN_ENTRY(1, m_nAge)  
END_PARAM_MAP()  
};  
```  
  
## <a name="wizard-generated-user-records"></a>Record utente generato dalla procedura guidata  
 Se si utilizza la creazione guidata Consumer OLE DB ATL per generare un consumer, è possibile scegliere di utilizzare i modelli OLE DB o gli attributi OLE DB. Il codice generato è diverso in ogni caso. Per ulteriori informazioni su questo codice, vedere [classi generate](../../data/oledb/consumer-wizard-generated-classes.md).  
  
## <a name="user-record-support-for-multiple-accessors"></a>Supporto di Record utente per più funzioni di accesso  
 Per una descrizione dettagliata degli scenari in cui è necessario utilizzare più funzioni di accesso, vedere [utilizzo di più funzioni di accesso per un Rowset](../../data/oledb/using-multiple-accessors-on-a-rowset.md).  
  
 Nell'esempio seguente viene modificato per supportare più funzioni di accesso nel set di righe il record dell'utente. Invece di `BEGIN_COLUMN_MAP` e `END_COLUMN_MAP`, Usa [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md) e [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) per ogni funzione di accesso. Il `BEGIN_ACCESSOR` (macro) specifica il numero di funzioni di accesso (offset da zero) e indica se la funzione di accesso è un sia automatica o meno. Chiamata di Autoaccessors `GetData` per recuperare i dati automaticamente con una chiamata a [MoveNext](../../data/oledb/crowset-movenext.md). Le funzioni di accesso è necessario recuperare in modo esplicito i dati. Utilizzare una funzione di accesso si se si desidera associare a un campo di dati di grandi dimensioni (ad esempio un'immagine bitmap) che potrebbe non desidera recuperare per ogni record.  
  
```  
class CMultiArtists  
{  
public:  
// Data Elements  
   CHAR m_szFirstName[20];  
   CHAR m_szLastName[30];  
   short m_nAge;  
  
// Column binding map  
BEGIN_ACCESSOR_MAP(CMultiArtists, 2)  
   BEGIN_ACCESSOR(0, true)    // true specifies an auto accessor  
    COLUMN_ENTRY(1, m_szFirstName)  
    COLUMN_ENTRY(2, m_szLastName)  
   END_ACCESSOR()  
   BEGIN_ACCESSOR(1, false)   // false specifies a manual accessor  
    COLUMN_ENTRY(3, m_nAge)  
   END_ACCESSOR()  
END_ACCESSOR_MAP()  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)