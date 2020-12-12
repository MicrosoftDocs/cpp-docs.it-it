---
description: 'Altre informazioni su: CCustomWindowsFile'
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
ms.openlocfilehash: c0df2840b68a350f9d65102fdf0a962681edefd9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97170399"
---
# <a name="ccustomwindowsfile"></a>CCustomWindowsFile

La procedura guidata crea una classe con una riga di dati; in questo caso, viene chiamato `CCustomWindowsFile` . Il codice seguente per la `CCustomWindowsFile` procedura guidata viene generato ed elenca tutti i file in una directory tramite la `WIN32_FIND_DATA` struttura. `CCustomWindowsFile` eredita dalla `WIN32_FIND_DATA` struttura:

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

`CCustomWindowsFile` viene chiamato [classe di record utente](../../data/oledb/user-record.md) perché dispone anche di una mappa che descrive le colonne nel set di righe del provider. La mappa delle colonne del provider contiene una voce per ogni campo nel set di righe mediante le macro PROVIDER_COLUMN_ENTRY. Le macro specificano il nome della colonna, l'ordinale e l'offset in una voce della struttura. Le voci della colonna del provider nel codice precedente contengono gli offset nella `WIN32_FIND_DATA` struttura. Quando il consumer chiama `IRowset::GetData` , i dati vengono trasferiti in un buffer contiguo. Anziché eseguire l'aritmetica dei puntatori, la mappa consente di specificare un membro dati.

La `CCustomRowset` classe contiene anche il `Execute` metodo. `Execute` indica i dati effettivamente letti dall'origine nativa. Nel codice seguente viene illustrato il metodo generato dalla procedura guidata `Execute` . La funzione usa le `FindFirstFile` API Win32 e `FindNextFile` per recuperare informazioni sui file nella directory e inserirli nelle istanze della `CCustomWindowsFile` classe.

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

La directory in cui eseguire la ricerca viene mostrata da `m_strCommandText` , che contiene il testo rappresentato dall' `ICommandText` interfaccia nell'oggetto comando. Se non viene specificata alcuna directory, viene utilizzata la directory corrente.

Il metodo crea una voce per ogni file (corrispondente a una riga) e la inserisce nel `m_rgRowData` membro dati. La `CRowsetImpl` classe definisce il `m_rgRowData` membro dati. I dati in questa matrice vengono mostrati nell'intera tabella e usati in tutti i modelli.

## <a name="see-also"></a>Vedi anche

[File di Wizard-Generated del provider](../../data/oledb/provider-wizard-generated-files.md)<br/>
