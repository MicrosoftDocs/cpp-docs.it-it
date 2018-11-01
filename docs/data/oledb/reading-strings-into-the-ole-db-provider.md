---
title: Lettura di stringhe in un provider OLE DB
ms.date: 10/13/2018
helpviewer_keywords:
- OLE DB providers, reading strings into
ms.assetid: 517f322c-f37e-4eed-bf5e-dd9a412c2f98
ms.openlocfilehash: 4883edf08097f8dcdb18b821e9a0ca37f1ff6b0f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50469667"
---
# <a name="reading-strings-into-the-ole-db-provider"></a>Lettura di stringhe in un provider OLE DB

Il `RCustomRowset::Execute` funzione apre un file e legge le stringhe. Il consumer passa il nome del file al provider chiamando [ICommandText:: SetCommandText](/previous-versions/windows/desktop/ms709757). Il provider riceve il nome del file e lo archivia nella variabile membro `m_szCommandText`. `Execute` legge il nome del file da `m_szCommandText`. Se il nome del file non è valido o non è disponibile, il file `Execute` restituisce un errore. In caso contrario, viene aperto il file e le chiamate `fgets` per recuperare le stringhe. Per ciascun insieme di stringhe, letture `Execute` crea un'istanza del record utente (`CAgentMan`) e lo inserisce in una matrice.

Se il file non può essere aperto, `Execute` dovrà restituire DB_E_NOTABLE. Se viene restituito E_FAIL, il provider non funzionerà con molti utenti e non passa OLE DB [test di conformità](../../data/oledb/testing-your-provider.md).

## <a name="example"></a>Esempio

```cpp
/////////////////////////////////////////////////////////////////////////
// CustomRS.h
class RCustomRowset : public CRowsetImpl< RCustomRowset, CAgentMan, CRCustomCommand>
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

[Implementazione di un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md)<br/>
