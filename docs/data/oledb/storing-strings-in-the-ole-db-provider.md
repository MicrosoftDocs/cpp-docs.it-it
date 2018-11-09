---
title: Memorizzazione di stringhe in un provider OLE DB
ms.date: 10/26/2018
helpviewer_keywords:
- user records, editing
ms.assetid: 36cb9635-067c-4cad-8f85-962f28026f6a
ms.openlocfilehash: 54dfdb347c621cf6f8645feb6d13742f32503f9f
ms.sourcegitcommit: 943c792fdabf01c98c31465f23949a829eab9aad
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/07/2018
ms.locfileid: "51264619"
---
# <a name="storing-strings-in-the-ole-db-provider"></a>Memorizzazione di stringhe in un provider OLE DB

Nella *Custom*RS, il **Creazione guidata Provider OLE DB ATL** consente di creare un record utente predefinita denominato `CWindowsFile`. Per gestire le due stringhe, modificare `CWindowsFile` come illustrato nel codice seguente:

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

I membri dei dati `szCommand` e `szText` rappresentano le due stringhe, con `szCommand2` e `szText2` con colonne aggiuntive se necessario. Il membro dati `dwBookmark` non è necessaria per questo provider semplice in sola lettura, ma viene usato in un secondo momento per aggiungere un' `IRowsetLocate` dell'interfaccia, vedere [miglioramento di un Provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md). Il `==` operatore confronta istanze (implementazione di questo operatore è facoltativo).

Quando questa operazione, è possibile aggiungere la funzionalità del [lettura di stringhe in un Provider OLE DB](../../data/oledb/reading-strings-into-the-ole-db-provider.md).

## <a name="see-also"></a>Vedere anche

[Implementazione di un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md)<br/>
