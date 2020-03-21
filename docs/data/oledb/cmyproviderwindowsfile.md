---
title: CCustomWindowsFile
ms.date: 10/22/2018
f1_keywords:
- cmyproviderwindowsfile
- ccustomwindowsfile
helpviewer_keywords:
- CMyProviderWindowsFile class
- OLE DB providers, wizard-generated files
- CCustomWindowsFile class
ms.assetid: 0e9e72ac-1e1e-445f-a7ac-690c20031f9d
ms.openlocfilehash: 103a1ce5568c6137994056e574ce8eec04511d8f
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80079750"
---
# <a name="ccustomwindowsfile"></a>CCustomWindowsFile

La procedura guidata crea una classe con una riga di dati; in questo caso, viene chiamato `CCustomWindowsFile`. Il codice seguente per `CCustomWindowsFile` è la procedura guidata generata ed elenca tutti i file in una directory usando la struttura di `WIN32_FIND_DATA`. `CCustomWindowsFile` eredita dalla struttura `WIN32_FIND_DATA`:

```cpp
/////////////////////////////////////////////////////////////////////
// CustomRS.H

class CCustomWindowsFile:
   public WIN32_FIND_DATA
{
public:
BEGIN_PROVIDER_COLUMN_MAP(CCustomWindowsFile)
   PROVIDER_COLUMN_ENTRY("FileAttributes", 1, dwFileAttributes)
   PROVIDER_COLUMN_ENTRY("FileSizeHigh", 2, nFileSizeHigh)
   PROVIDER_COLUMN_ENTRY("FileSizeLow", 3, nFileSizeLow)
   PROVIDER_COLUMN_ENTRY_STR("FileName", 4, cFileName)
   PROVIDER_COLUMN_ENTRY_STR("AltFileName", 5, cAlternateFileName)
END_PROVIDER_COLUMN_MAP()
};
```

`CCustomWindowsFile` viene chiamato [classe di record utente](../../data/oledb/user-record.md) , perché include anche una mappa che descrive le colonne nel set di righe del provider. La mappa delle colonne del provider contiene una voce per ogni campo nel set di righe mediante le macro PROVIDER_COLUMN_ENTRY. Le macro specificano il nome della colonna, l'ordinale e l'offset in una voce della struttura. Le voci della colonna del provider nel codice precedente contengono gli offset nella struttura `WIN32_FIND_DATA`. Quando il consumer chiama `IRowset::GetData`, i dati vengono trasferiti in un buffer contiguo. Anziché eseguire l'aritmetica dei puntatori, la mappa consente di specificare un membro dati.

La classe `CCustomRowset` contiene anche il metodo `Execute`. `Execute` è il modo in cui i dati vengono effettivamente letti dall'origine nativa. Il codice seguente illustra il metodo di `Execute` generato dalla procedura guidata. La funzione usa le API Win32 `FindFirstFile` e `FindNextFile` per recuperare informazioni sui file nella directory e inserirli nelle istanze della classe `CCustomWindowsFile`.

```cpp
/////////////////////////////////////////////////////////////////////
// CustomRS.H

HRESULT Execute(DBPARAMS * pParams, LONG* pcRowsAffected)
{
   USES_CONVERSION;
   BOOL bFound = FALSE;
   HANDLE hFile;
   LPTSTR  szDir = (m_strCommandText == _T("")) ? _T("*.*") :
       OLE2T(m_strCommandText);
   CCustomWindowsFile wf;
   hFile = FindFirstFile(szDir, &wf);
   if (hFile == INVALID_HANDLE_VALUE)
      return DB_E_ERRORSINCOMMAND;
   LONG cFiles = 1;
   BOOL bMoreFiles = TRUE;
   while (bMoreFiles)
   {
      if (!m_rgRowData.Add(wf))
         return E_OUTOFMEMORY;
      bMoreFiles = FindNextFile(hFile, &wf);
      cFiles++;
   }
   FindClose(hFile);
   if (pcRowsAffected != NULL)
      *pcRowsAffected = cFiles;
   return S_OK;
}
```

La directory in cui eseguire la ricerca viene visualizzata `m_strCommandText`; contiene il testo rappresentato dall'interfaccia `ICommandText` nell'oggetto Command. Se non viene specificata alcuna directory, viene utilizzata la directory corrente.

Il metodo crea una voce per ogni file (corrispondente a una riga) e la inserisce nel membro dati `m_rgRowData`. La classe `CRowsetImpl` definisce il membro dati `m_rgRowData`. I dati in questa matrice vengono mostrati nell'intera tabella e usati in tutti i modelli.

## <a name="see-also"></a>Vedere anche

[File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)<br/>
