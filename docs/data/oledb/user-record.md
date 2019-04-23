---
title: Record utente
ms.date: 11/04/2016
helpviewer_keywords:
- records, user
- OLE DB providers, user record
- user records
- user records, described
- rowsets, user record
ms.assetid: 9c0d2864-2738-4f62-a750-1016d9c3523f
ms.openlocfilehash: b37835f1a3161edd10f61f9b4e76cfb5f558e07b
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59038521"
---
# <a name="user-record"></a>Record utente

Record utente fornisce la struttura di codice e i dati che rappresenta i dati della colonna per un set di righe. Un record utente può essere creato in fase di compilazione o in fase di esecuzione. Quando si crea un provider tramite il **Creazione guidata Provider OLE DB ATL**, la procedura guidata crea un record utente predefinito aspetto simile al seguente (supponendo che venga specificato un nome di provider [short name] del *MyProvider*):

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

I modelli di provider OLE DB di gestire tutte le specifiche di OLE DB sulle interazioni con il client. Per acquisire i dati di colonna necessari per una risposta, il provider chiama il `GetColumnInfo` (funzione), che è necessario inserire nel record utente. È possibile eseguire l'override esplicito `GetColumnInfo` nel record utente, ad esempio, dichiarando nel file con estensione h come illustrato di seguito:

```cpp
template <class T>
static ATLCOLUMNINFO* GetColumnInfo(T* pThis, ULONG* pcCols) 
```

Ciò equivale a:

```cpp
static ATLCOLUMNINFO* GetColumnInfo(CommandClass* pThis, ULONG* pcCols)
static ATLCOLUMNINFO* GetColumnInfo(RowsetClass* pThis, ULONG* pcCols)
```

Implementare poi `GetColumnInfo` in file con estensione cpp del record utente.

Le macro PROVIDER_COLUMN_MAP aiuto per la creazione di un `GetColumnInfo` funzione:

- BEGIN_PROVIDER_COLUMN_MAP definisce il prototipo di funzione e una matrice statica di `ATLCOLUMNINFO` strutture.

- PROVIDER_COLUMN_ENTRY definisce e Inizializza un singolo `ATLCOLUMNINFO`.

- END_PROVIDER_COLUMN_MAP chiude la matrice e la funzione. Inserisce anche il numero di elementi di matrice nel *pcCols* parametro.

Quando viene creato un record utente in fase di esecuzione `GetColumnInfo` utilizza le *pThis* parametro per la ricezione di un puntatore a un'istanza di set di righe o un comando. I comandi e i set di righe deve supportare il `IColumnsInfo` interfaccia, in modo che le informazioni di colonna possono essere eseguite dal puntatore ' this '.

`CommandClass` e `RowsetClass` sono i comandi e set di righe che utilizzano il record utente.

Per un esempio più dettagliato di come eseguire l'override `GetColumnInfo` in un record utente, vedere [determinazione dinamica delle colonne restituite al Consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
