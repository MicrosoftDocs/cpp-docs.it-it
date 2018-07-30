---
title: CMyProviderWindowsFile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- cmyproviderwindowsfile
dev_langs:
- C++
helpviewer_keywords:
- CMyProviderWindowsFile class
- OLE DB providers, wizard-generated files
ms.assetid: 0e9e72ac-1e1e-445f-a7ac-690c20031f9d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0f18f5a524cbfbfa7f17dfd3964c68329bc8a042
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39338506"
---
# <a name="cmyproviderwindowsfile"></a>CMyProviderWindowsFile
La procedura guidata crea una classe che contiene una riga di dati. In questo caso, viene chiamato `CMyProviderWindowsFile`. Nell'esempio di codice per `CMyProviderWindowsFile` viene generato dalla procedura guidata, sono elencati tutti i file in una directory tramite il `WIN32_FIND_DATA` struttura. `CMyProviderWindowsFile` eredita dal `WIN32_FIND_DATA` struttura:  
  
```cpp
/////////////////////////////////////////////////////////////////////  
// MyProviderRS.H  
  
class CMyProviderWindowsFile:   
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
  
 `CMyProviderWindowsFile` viene chiamato il [classe di record utente](../../data/oledb/user-record.md) poiché contiene anche una mappa che descrive le colonne nel set di righe del provider. In questa mappa contiene una voce per ogni campo nel set di righe usando le macro PROVIDER_COLUMN_ENTRY. Le macro di specificare il nome di colonna, ordinale e offset a una voce di struttura. Le voci delle colonne del provider nel codice precedente contengano gli offset nel `WIN32_FIND_DATA` struttura. Quando il consumer chiama `IRowset::GetData`, i dati vengono trasferiti in un buffer contiguo. Anziché ricorrere a operazioni di aritmetica dei puntatori, la mappa consente di specificare un membro dati.  
  
 Il `CMyProviderRowset` classe contiene inoltre il `Execute` (metodo). `Execute` è che legge effettivamente i dati dall'origine native. Il codice seguente illustra la procedura guidata genera `Execute` (metodo). La funzione Usa Win32 `FindFirstFile` e `FindNextFile` API per recuperare informazioni sui file nella directory e li inserisce nelle istanze del `CMyProviderWindowsFile` classe.  
  
```cpp
/////////////////////////////////////////////////////////////////////  
// MyProviderRS.H  
  
HRESULT Execute(DBPARAMS * pParams, LONG* pcRowsAffected)  
{  
   USES_CONVERSION;  
   BOOL bFound = FALSE;  
   HANDLE hFile;  
   LPTSTR  szDir = (m_strCommandText == _T("")) ? _T("*.*") :  
       OLE2T(m_strCommandText);  
   CMyProviderWindowsFile wf;  
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
  
 Directory in cui cercare è rappresentata da `m_strCommandText`; questo file contiene il testo rapprentato dal `ICommandText` interfaccia nell'oggetto comando. Se viene specificata alcuna directory, Usa la directory corrente.  
  
 Il metodo creerà una voce per ogni file (corrispondente a una riga) e lo inserisce nel `m_rgRowData` (membro dati). Il `CRowsetImpl` classe definisce il `m_rgRowData` (membro dati). I dati in questa matrice rappresentano l'intera tabella e viene usati in tutti i modelli.  
  
## <a name="see-also"></a>Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)