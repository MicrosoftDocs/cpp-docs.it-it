---
title: Record utente
ms.date: 10/22/2018
f1_keywords:
- COLUMN_ENTRY_MAP
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
ms.openlocfilehash: 4d52c36368b9b39815cbb9a103f84f140626ba2b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50567440"
---
# <a name="user-records"></a>Record utente

Usare una funzione di accesso statico (vale a dire, una funzione di accesso derivata da `CAccessor`), il consumer deve disporre di un record utente. Il record dell'utente è una classe C++ che contiene gli elementi di dati per gestire l'input o output. Il **Creazione guidata Consumer OLE DB ATL** genera un record utente per i consumer. È possibile aggiungere i metodi per il record dell'utente per attività facoltative, ad esempio gestione dei comandi.

Il codice seguente mostra un record di esempio che gestisce i comandi. Nel record utente, BEGIN_COLUMN_MAP rappresenta un set di righe di dati passati al consumer di un provider. BEGIN_PARAM_MAP rappresenta un set di parametri del comando. Questo esempio Usa un' [CCommand](../../data/oledb/ccommand-class.md) classe per gestire i parametri del comando. I membri di dati nelle voci della mappa rappresentano gli offset in un blocco contiguo di memoria per ogni istanza della classe. Le macro COLUMN_ENTRY corrispondono alle macro PROVIDER_COLUMN_ENTRY sul lato del provider.

Per altre informazioni sulle macro dei COLUMN_MAP e PARAM_MAP, vedere [macro per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).

```cpp
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

Se si usa la **Creazione guidata Consumer OLE DB ATL** per generare un consumer, è possibile scegliere di usare i modelli OLE DB o gli attributi OLE DB. Il codice generato è diverso in ogni caso. Per altre informazioni su questo codice, vedere [classi riguardano](../../data/oledb/consumer-wizard-generated-classes.md).

## <a name="user-record-support-for-multiple-accessors"></a>Supporto per più funzioni di accesso del Record utente

Per una discussione dettagliata degli scenari in cui è necessario utilizzare più funzioni di accesso, vedere [uso di più funzioni di accesso su un set di righe](../../data/oledb/using-multiple-accessors-on-a-rowset.md).

Nell'esempio seguente mostra il record utente modificato per supportare più funzioni di accesso sul set di righe. Anziché BEGIN_COLUMN_MAP ed END_COLUMN_MAP, vengono usati [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md) e [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) per ogni funzione di accesso. La macro BEGIN_ACCESSOR specifica il numero di funzioni di accesso (offset da zero) e indica se la funzione di accesso è un sia automatica o meno. Chiamata Autoaccessors `GetData` per recuperare i dati automaticamente in una chiamata a [MoveNext](../../data/oledb/crowset-movenext.md). Le funzioni di accesso necessario recuperare in modo esplicito i dati. Se viene eseguita l'associazione a un campo di dati di grandi dimensioni (ad esempio, un'immagine bitmap) che è possibile evitare di recuperare per ogni record, usare una funzione di accesso si.

```cpp
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