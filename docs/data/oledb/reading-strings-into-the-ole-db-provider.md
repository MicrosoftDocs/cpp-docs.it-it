---
description: 'Altre informazioni su: lettura di stringhe nel provider di OLE DB'
title: Lettura di stringhe in un provider OLE DB
ms.date: 10/13/2018
helpviewer_keywords:
- OLE DB providers, reading strings into
ms.assetid: 517f322c-f37e-4eed-bf5e-dd9a412c2f98
ms.openlocfilehash: 5df8812d5589dd457684bf5e36a8a49f798f99aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286631"
---
# <a name="reading-strings-into-the-ole-db-provider"></a>Lettura di stringhe in un provider OLE DB

La `CCustomRowset::Execute` funzione apre un file e legge le stringhe. Il consumer passa il nome del file al provider chiamando [ICommandText:: secommandtext](/previous-versions/windows/desktop/ms709757(v=vs.85)). Il provider riceve il nome del file e lo archivia nella variabile membro `m_strCommandText` . `Execute` legge il nome file da `m_strCommandText` . Se il nome file non è valido o il file non è disponibile, `Execute` restituisce un errore. In caso contrario, apre il file e chiama `fgets` per recuperare le stringhe. Per ogni set di stringhe letto, `Execute` Crea un'istanza del record utente (modificata `CCustomWindowsFile` dall'archiviazione delle [stringhe nel provider OLE DB](../../data/oledb/storing-strings-in-the-ole-db-provider.md)) e la inserisce in una matrice.

Se il file non può essere aperto, `Execute` deve restituire DB_E_NOTABLE. Se restituisce E_FAIL invece, il provider non funzionerà con molti consumer e non passerà i [test di conformità](../../data/oledb/testing-your-provider.md)del OLE DB.

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

Al termine di questa operazione, il provider deve essere pronto per la compilazione e l'esecuzione. Per testare il provider, è necessario un consumer con funzionalità di corrispondenza. [L'implementazione di un consumer semplice](../../data/oledb/implementing-a-simple-consumer.md) Mostra come creare un utente di test di questo tipo. Eseguire il consumer di test con il provider e verificare che il consumer di test recuperi le stringhe corrette dal provider.

Una volta testato correttamente il provider, è possibile migliorarne la funzionalità implementando interfacce aggiuntive. Per [migliorare il provider di Read-Only semplice](../../data/oledb/enhancing-the-simple-read-only-provider.md), viene illustrato un esempio.

## <a name="see-also"></a>Vedi anche

[Implementazione del provider di Read-Only semplice](../../data/oledb/implementing-the-simple-read-only-provider.md)<br/>
