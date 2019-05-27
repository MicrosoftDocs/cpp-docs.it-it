---
title: Memorizzazione di stringhe in un provider OLE DB
ms.date: 05/09/2019
helpviewer_keywords:
- user records, editing
ms.assetid: 36cb9635-067c-4cad-8f85-962f28026f6a
ms.openlocfilehash: f0ae4a3718858c4de5417aaf5a4f9bc0c0ba9984
ms.sourcegitcommit: 00e26915924869cd7eb3c971a7d0604388abd316
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/10/2019
ms.locfileid: "65525347"
---
# <a name="storing-strings-in-the-ole-db-provider"></a>Memorizzazione di stringhe in un provider OLE DB

> [!NOTE] 
> La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.


In *Custom*RS.h la **Creazione guidata provider OLE DB ATL** crea un record utente predefinito denominato `CWindowsFile`. Per gestire le due stringhe, modificare `CWindowsFile` come illustrato nel codice seguente:

```cpp
////////////////////////////////////////////////////////////////////////
class CCustomWindowsFile:
   public WIN32_FIND_DATA
{
public:
DWORD dwBookmark;
static const int iSize = 256;    // Add this
TCHAR szCommand[iSize];          // Add this
TCHAR szText[iSize];             // Add this
TCHAR szCommand2[iSize];         // Add this
TCHAR szText2[iSize];            // Add this

BEGIN_PROVIDER_COLUMN_MAP(CCustomWindowsFile)
   PROVIDER_COLUMN_ENTRY("FileAttributes", 1, dwFileAttributes)
   PROVIDER_COLUMN_ENTRY("FileSizeHigh", 2, nFileSizeHigh)
   PROVIDER_COLUMN_ENTRY("FileSizeLow", 3, nFileSizeLow)
   PROVIDER_COLUMN_ENTRY_STR("FileName", 4, cFileName)
   PROVIDER_COLUMN_ENTRY_STR("AltFileName", 5, cAlternateFileName)

   PROVIDER_COLUMN_ENTRY_STR("Command", 6, szCommand)    // Add this
   PROVIDER_COLUMN_ENTRY_STR("Text", 7, szText)          // Add this
   PROVIDER_COLUMN_ENTRY_STR("Command2", 8, szCommand2)  // Add this
   PROVIDER_COLUMN_ENTRY_STR("Text2", 9, szText2)        // Add this
END_PROVIDER_COLUMN_MAP()

   bool operator==(const CCustomWindowsFile& am) // This is optional
   {
      return (lstrcmpi(cFileName, am.cFileName) == 0);
   }
};
```

I membri dati `szCommand` e `szText` rappresentano le due stringhe, con `szCommand2` e `szText2` con colonne aggiuntive, se necessario. Il membro dati `dwBookmark` non è necessario per questo provider semplice di sola lettura, ma viene usato in seguito per aggiungere un'interfaccia `IRowsetLocate`. Vedere [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md). L'operatore `==` confronta le istanze (l'implementazione di questo operatore è facoltativa).

Al termine di questa operazione, è possibile aggiungere la funzionalità di [Lettura di stringhe in un provider OLE DB](../../data/oledb/reading-strings-into-the-ole-db-provider.md).

## <a name="see-also"></a>Vedere anche

[Implementazione di un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md)<br/>
