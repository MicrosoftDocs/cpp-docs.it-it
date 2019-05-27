---
title: Record utente
ms.date: 05/09/2019
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
ms.openlocfilehash: c9c1126f0e8248f31ac739bb1d939f811bda678d
ms.sourcegitcommit: 00e26915924869cd7eb3c971a7d0604388abd316
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/10/2019
ms.locfileid: "65525292"
---
# <a name="user-records"></a>Record utente

> [!NOTE]
> La Creazione guidata consumer OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile aggiungere la funzionalità manualmente. Per altre informazioni, vedere [Creazione di un consumer senza utilizzare una procedura guidata](creating-a-consumer-without-using-a-wizard.md).

Per usare una funzione di accesso statica, ovvero una funzione di accesso derivata da `CAccessor`, il consumer deve avere un record utente. Il record utente è una classe C++ che contiene gli elementi dati per gestire l'input o l'output. La **Creazione guidata consumer OLE DB ATL** genera un record utente per il consumer. È possibile aggiungere metodi al record utente per attività facoltative come la gestione dei comandi.

Il codice seguente mostra un record di esempio che gestisce i comandi. Nel record utente BEGIN_COLUMN_MAP rappresenta un set di righe di dati passato al consumer da un provider. BEGIN_PARAM_MAP rappresenta un set di parametri di comando. Questo esempio usa una classe [CCommand](../../data/oledb/ccommand-class.md) per gestire i parametri di comando. I membri dati nelle voci di mapping rappresentano gli offset in un blocco di memoria contiguo per ogni istanza della classe. Le macro COLUMN_ENTRY corrispondono alle macro PROVIDER_COLUMN_ENTRY sul lato del provider.

Per altre informazioni sulle macro COLUMN_MAP e PARAM_MAP, vedere [Macro per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).

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

## <a name="wizard-generated-user-records"></a>Record utente generati dalla procedura guidata

Se si usa la **Creazione guidata consumer OLE DB ATL** per generare un consumer, è possibile scegliere se usare modelli OLE DB o attributi OLE DB. Il codice generato in ciascuno dei casi è diverso. Per altre informazioni su questo codice, vedere [Classi generate mediante la Creazione guidata consumer](../../data/oledb/consumer-wizard-generated-classes.md).

## <a name="user-record-support-for-multiple-accessors"></a>Supporto dei record utente per più funzioni di accesso

Per una discussione dettagliata degli scenari in cui è necessario usare più funzioni di accesso, vedere [Uso di più funzioni di accesso per un set di righe](../../data/oledb/using-multiple-accessors-on-a-rowset.md).

L'esempio seguente mostra il record utente modificato per supportare più funzioni di accesso nel set di righe. Invece di BEGIN_COLUMN_MAP e END_COLUMN_MAP, usa [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md) e [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) per ogni funzione di accesso. La macro BEGIN_ACCESSOR specifica il numero di funzioni di accesso (offset da zero) e indica se la funzione di accesso è una funzione di accesso automatica. Le funzioni di accesso automatiche chiamano `GetData` per recuperare i dati automaticamente in una chiamata a [MoveNext](../../data/oledb/crowset-movenext.md). Le funzioni di accesso non automatiche richiedono di recuperare i dati in modo esplicito. Usare una funzione di accesso non automatica se si esegue il binding a un campo dati di grandi dimensioni (ad esempio, un'immagine bitmap) che è preferibile non recuperare per ogni record.

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

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)