---
title: Lettura di stringhe in un provider OLE DB
ms.date: 10/13/2018
helpviewer_keywords:
- OLE DB providers, reading strings into
ms.assetid: 517f322c-f37e-4eed-bf5e-dd9a412c2f98
ms.openlocfilehash: 50df9f13b814eb00b309460894d704238bc3e7dc
ms.sourcegitcommit: 943c792fdabf01c98c31465f23949a829eab9aad
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/07/2018
ms.locfileid: "51264776"
---
# <a name="reading-strings-into-the-ole-db-provider"></a>Lettura di stringhe in un provider OLE DB

Il `CCustomRowset::Execute` funzione apre un file e legge le stringhe. Il consumer passa il nome del file al provider chiamando [ICommandText:: SetCommandText](/previous-versions/windows/desktop/ms709757). Il provider riceve il nome del file e lo archivia nella variabile membro `m_strCommandText`. `Execute` legge il nome del file da `m_strCommandText`. Se il nome del file non è valido o non è disponibile, il file `Execute` restituisce un errore. In caso contrario, viene aperto il file e le chiamate `fgets` per recuperare le stringhe. Per ciascun insieme di stringhe, operazioni di lettura, `Execute` crea un'istanza del record utente (modificato `CCustomWindowsFile` dalla [l'archiviazione di stringhe nel Provider OLE DB](../../data/oledb/storing-strings-in-the-ole-db-provider.md)) e lo inserisce in una matrice.

Se il file non può essere aperto, `Execute` dovrà restituire DB_E_NOTABLE. Se viene restituito E_FAIL, il provider non funzionerà con molti utenti e non passa OLE DB [test di conformità](../../data/oledb/testing-your-provider.md).

## <a name="example"></a>Esempio

```cpp
/////////////////////////////////////////////////////////////////////////
// CustomRS.h
class CCustomRowset : public CRowsetImpl< CCustomRowset, CCustomWindowsFile, CCustomCommand>
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
        size_t nLength;

        ObjectLock lock(this);

        // From a filename, passed in as a command text, scan the file
        // placing data in the data array.
        if (!m_strCommandText)
        {
            ATLTRACE("No filename specified");
            return E_FAIL;
        }

        // Open the file
        _tcscpy_s(szFile, sizeOfFile, m_strCommandText);
        if (szFile[0] == _T('\0') ||
            (fopen_s(&pFile, (char*)&szFile[0], "r") == 0))
        {
            ATLTRACE("Could not open file");
            return DB_E_NOTABLE;
        }

        // Scan and parse the file.
        // The file should contain two strings per record
        LONG cFiles = 0;
        while (fgets((char*)szString, sizeOfBuffer, pFile) != NULL)
        {
            nLength = strnlen((char*)szString, sizeOfBuffer);
            szString[nLength-1] = '\0';   // Strip off trailing CR/LF
            CCustomWindowsFile am;
            _tcscpy_s(am.szCommand, am.iSize, szString);
            _tcscpy_s(am.szCommand2, am.iSize, szString);

            if (fgets((char*)szString, sizeOfBuffer, pFile) != NULL)
            {
                nLength = strnlen((char*)szString, sizeOfBuffer);
                szString[nLength-1] = '\0'; // Strip off trailing CR/LF
                _tcscpy_s(am.szText, am.iSize, szString);
                _tcscpy_s(am.szText2, am.iSize, szString);
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
};
```

Quando questa operazione viene eseguita, il provider deve essere pronto per compilare ed eseguire. Per testare il provider, è necessario un consumer con funzionalità di corrispondenza. [Implementazione di un Consumer semplice](../../data/oledb/implementing-a-simple-consumer.md) viene illustrato come creare un consumer di test. Eseguire il consumer di test con il provider e verificare che il consumer di test consente di recuperare le stringhe corrette dal provider.

Quando è stata testata il provider, si potrebbe voler migliorare la funzionalità mediante l'implementazione di interfacce aggiuntive. Un esempio è illustrato nella [miglioramento di un Provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md).

## <a name="see-also"></a>Vedere anche

[Implementazione di un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md)<br/>
