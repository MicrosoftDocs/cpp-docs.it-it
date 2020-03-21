---
title: Record utente
ms.date: 05/09/2019
helpviewer_keywords:
- records, user
- OLE DB providers, user record
- user records
- user records, described
- rowsets, user record
ms.assetid: 9c0d2864-2738-4f62-a750-1016d9c3523f
ms.openlocfilehash: 4a8fb6c9eeee3736501a04a095bdd763de16de7d
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80079008"
---
# <a name="user-record"></a>Record utente

> [!NOTE]
> La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

Il record utente fornisce il codice e la struttura dei dati che rappresenta i dati della colonna per un set di righe. Un record utente può essere creato in fase di compilazione o in fase di esecuzione. Quando si crea un provider tramite la **Creazione guidata provider OLE DB ATL**, la procedura guidata crea un record utente predefinito simile al seguente (supponendo che venga specificato un nome di provider [nome breve] *MyProvider*):

```cpp
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

I modelli di provider OLE DB gestiscono tutte le specifiche OLE DB nelle interazioni con il client. Per acquisire i dati della colonna necessari per una risposta, il provider chiama la funzione `GetColumnInfo`, che è necessario inserire nel record utente. È possibile eseguire in modo esplicito l'override di `GetColumnInfo` nel record utente, ad esempio dichiarandolo nel file con estensione h come illustrato di seguito:

```cpp
template <class T>
static ATLCOLUMNINFO* GetColumnInfo(T* pThis, ULONG* pcCols)
```

Ciò equivale a:

```cpp
static ATLCOLUMNINFO* GetColumnInfo(CommandClass* pThis, ULONG* pcCols)
static ATLCOLUMNINFO* GetColumnInfo(RowsetClass* pThis, ULONG* pcCols)
```

Implementare quindi `GetColumnInfo` nel file con estensione cpp del record utente.

Le macro PROVIDER_COLUMN_MAP sono utili per la creazione di una funzione `GetColumnInfo`:

- BEGIN_PROVIDER_COLUMN_MAP definisce il prototipo di funzione e una matrice statica di strutture `ATLCOLUMNINFO`.

- PROVIDER_COLUMN_ENTRY definisce e inizializza un singolo oggetto `ATLCOLUMNINFO`.

- END_PROVIDER_COLUMN_MAP chiude la matrice e la funzione. Inserisce anche il numero di elementi della matrice nel parametro *pcCols*.

Quando un record utente viene creato in fase di esecuzione `GetColumnInfo` usa il parametro *pThis* per ricevere un puntatore a un'istanza di un comando o un set di righe. I comandi e i set di righe devono supportare l'interfaccia `IColumnsInfo`, in modo che le informazioni di colonna possano essere ricavate da questo puntatore.

`CommandClass` e `RowsetClass` sono il comando e il set di righe che usano il record utente.

Per un esempio più dettagliato di come eseguire l'override di `GetColumnInfo` in un record utente, vedere [Determinazione dinamica delle colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
