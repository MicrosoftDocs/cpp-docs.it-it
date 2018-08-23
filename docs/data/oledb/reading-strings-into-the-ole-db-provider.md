---
title: Lettura delle stringhe in un Provider OLE DB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, reading strings into
ms.assetid: 517f322c-f37e-4eed-bf5e-dd9a412c2f98
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7554e7ee59f1d25344c61bd208fd0341add797a9
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42571680"
---
# <a name="reading-strings-into-the-ole-db-provider"></a>Lettura di stringhe in un provider OLE DB
Il `RMyProviderRowset::Execute` funzione apre un file e legge le stringhe. Il consumer passa il nome del file al provider chiamando [ICommandText:: SetCommandText](/previous-versions/windows/desktop/ms709757\(v=vs.85\)). Il provider riceve il nome del file e lo archivia nella variabile membro `m_szCommandText`. `Execute` legge il nome del file da `m_szCommandText`. Se il nome del file non è valido o non è disponibile, il file `Execute` restituisce un errore. In caso contrario, viene aperto il file e le chiamate `fgets` per recuperare le stringhe. Per ciascun insieme di stringhe, letture `Execute` crea un'istanza del record utente (`CAgentMan`) e lo inserisce in una matrice.  
  
 Se il file non può essere aperto, `Execute` dovrà restituire DB_E_NOTABLE. Se viene restituito E_FAIL, il provider non funzionerà con molti utenti e non passerà OLE DB [test di conformità](../../data/oledb/testing-your-provider.md).  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 La versione modificata `Execute` funzione si presenta come segue:  
  
### <a name="code"></a>Codice  
  
```cpp
/////////////////////////////////////////////////////////////////////////  
// MyProviderRS.h  
class RMyProviderRowset : public CRowsetImpl< RMyProviderRowset, CAgentMan, CRMyProviderCommand>  
{  
public:  
    HRESULT Execute(DBPARAMS * pParams, LONG* pcRowsAffected)  
    {  
        enum {  
            sizeOfBuffer = 256,  
            sizeOfFile = MAX_PATH  
        };  
        USES_CONVERSION;  
        FILE* pFile = NULL;  
        TCHAR szString[sizeOfBuffer];  
        TCHAR szFile[sizeOfFile];  
        size_t nLength;        errcodeerr;  
  
        ObjectLock lock(this);  
  
        // From a filename, passed in as a command text, scan the file  
        // placing data in the data array.  
        if (!m_szCommandText)  
        {  
            ATLTRACE("No filename specified");  
            return E_FAIL;  
        }  
  
        // Open the file  
        _tcscpy_s(szFile, sizeOfFile, m_szCommandText);  
        if (szFile[0] == _T('\0') ||   
            ((err = fopen_s(&pFile, &szFile[0], "r")) == 0))  
        {  
            ATLTRACE("Could not open file");  
            return DB_E_NOTABLE;  
        }  
  
        // Scan and parse the file.  
        // The file should contain two strings per record  
        LONG cFiles = 0;  
        while (fgets(szString, sizeOfBuffer, pFile) != NULL)  
        {  
            nLength = strnlen(szString, sizeOfBuffer);  
            szString[nLength-1] = '\0';   // Strip off trailing CR/LF  
            CAgentMan am;  
            _tcscpy_s(am.szCommand, am.sizeOfCommand, szString);  
            _tcscpy_s(am.szCommand2, am.sizeOfCommand2, szString);  
  
            if (fgets(szString, sizeOfBuffer, pFile) != NULL)  
            {  
                nLength = strnlen(szString, sizeOfBuffer);  
                szString[nLength-1] = '\0'; // Strip off trailing CR/LF  
                _tcscpy_s(am.szText, am.sizeOfText, szString);  
                _tcscpy_s(am.szText2, am.sizeOfText2, szString);  
            }  
  
            am.dwBookmark = ++cFiles;  
            if (!m_rgRowData.Add(am))  
            {  
                ATLTRACE("Couldn't add data to array");  
                fclose(pFile);  
                return E_FAIL;  
            }  
        }  
  
        if (pcRowsAffected != NULL)  
            *pcRowsAffected = cFiles;  
        return S_OK;  
    }  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md)