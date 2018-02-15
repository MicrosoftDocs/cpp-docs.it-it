---
title: CMyProviderWindowsFile | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- cmyproviderwindowsfile
dev_langs:
- C++
helpviewer_keywords:
- CMyProviderWindowsFile class
- OLE DB providers, wizard-generated files
ms.assetid: 0e9e72ac-1e1e-445f-a7ac-690c20031f9d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e0ac247c418efa7800eeef469ecf54da75f5b15c
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cmyproviderwindowsfile"></a>CMyProviderWindowsFile
La procedura guidata crea una classe che contiene una riga di dati. In questo caso, viene chiamato `CMyProviderWindowsFile`. Nell'esempio di codice per `CMyProviderWindowsFile` viene generato dalla procedura guidata e sono elencati tutti i file in una directory tramite il **WIN32_FIND_DATA** struttura. `CMyProviderWindowsFile` eredita il **WIN32_FIND_DATA** struttura:  
  
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
  
 `CMyProviderWindowsFile` viene chiamato il [classe di record utente](../../data/oledb/user-record.md) poiché contiene anche una mappa che descrive le colonne nel set di righe del provider. In questa mappa contiene una voce per ogni campo nel set di righe utilizzando la macro PROVIDER_COLUMN_ENTRY. Le macro di specificare il nome di colonna, ordinale e offset a una voce di struttura. Le voci della colonna provider nel codice precedente contengano gli offset nel **WIN32_FIND_DATA** struttura. Quando il consumer chiama **IRowset:: GetData**, i dati vengono trasferiti in un buffer contiguo. Anziché ricorrere a operazioni aritmetica dei puntatori, la mappa consente di specificare un membro dati.  
  
 Il `CMyProviderRowset` classe contiene inoltre il `Execute` metodo. `Execute` è che legge effettivamente i dati dall'origine nativa. Il codice seguente illustra il generato dalla procedura guidata `Execute` metodo. La funzione utilizza Win32 **FindFirstFile** e `FindNextFile` API per recuperare informazioni sui file nella directory e inserirle in istanze del `CMyProviderWindowsFile` classe.  
  
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
  
 Directory in cui cercare è rappresentata da `m_strCommandText`; contiene il testo assegnato il `ICommandText` interfaccia nell'oggetto comando. Se non viene specificata alcuna directory, Usa la directory corrente.  
  
 Il metodo crea una voce per ogni file (corrispondente a una riga) e lo inserisce nel **m_rgRowData** (membro dati). Il `CRowsetImpl` classe definisce il **m_rgRowData** (membro dati). I dati in questa matrice rappresentano l'intera tabella e viene utilizzati in tutti i modelli.  
  
## <a name="see-also"></a>Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)