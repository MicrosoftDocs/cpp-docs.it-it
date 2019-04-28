---
title: Uso di CString
ms.date: 06/18/2018
helpviewer_keywords:
- CString objects, C++ string manipulation
- CString objects, reference counting
- CString class (Visual C++)
ms.assetid: ed018aaf-8b10-46f9-828c-f9c092dc7609
ms.openlocfilehash: a84ae21b60d87971cb2f7b758dd369b4078607e6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62199209"
---
# <a name="using-cstring"></a>Uso di CString

Gli argomenti di questa sezione descrivono come programmare con `CString`. Per la documentazione di riferimento sul `CString` classe, vedere la documentazione relativa [CStringT](../atl-mfc-shared/reference/cstringt-class.md).

Per usare `CString`, includere l'intestazione `atlstr.h`.

Il `CString`, `CStringA`, e `CStringW` classi sono specializzazioni del modello di classe denominato [CStringT](../atl-mfc-shared/reference/cstringt-class.md) in base al tipo di dati carattere supportato.

Oggetto `CStringW` oggetto contiene il **wchar_t** digitare e supporta le stringhe Unicode. Oggetto `CStringA` oggetto contiene il **char** tipo e stringhe supporta a byte singolo e multibyte (MBCS). Oggetto `CString` oggetto supporta la **char** tipo o il `wchar_t` tipo, a seconda che sia definito il simbolo MBCS o UNICODE symbol in fase di compilazione.

Un oggetto `CString` mantiene i dati di tipo carattere in un oggetto `CStringData`. `CString` accetta stringhe in formato C con terminazione NULL. `CString` Registra la stringa di lunghezza per ottenere prestazioni più veloci, ma mantiene anche il carattere NULL nei dati di tipo carattere archiviati per supportare la conversione a LPCWSTR. `CString` include il carattere di terminazione null quando esporta una stringa in formato C. È possibile inserire un valore NULL in altre posizioni in un `CString`, ma potrebbe provocare risultati imprevisti.

Il set di classi stringa seguente può essere usato senza collegare una libreria MFC, con o senza il supporto della libreria run-time C: `CAtlString`, `CAtlStringA` e `CAtlStringW`.

`CString` viene usato nei progetti nativi. Per i progetti in codice gestito (C++/CLI), usare `System::String`.

Per aggiungere funzionalità rispetto a quelle offerte da `CString`, `CStringA` o `CStringW`, creare una sottoclasse di `CStringT` contenente le funzionalità aggiuntive.

Il codice seguente illustra come creare un oggetto `CString` e stamparlo in un output standard:

```cpp
#include <atlstr.h>

int main() {
    CString aCString = CString(_T("A string"));
    _tprintf(_T("%s"), (LPCTSTR) aCString);
}
```

## <a name="in-this-section"></a>In questa sezione

[Operazioni di base con CString](../atl-mfc-shared/basic-cstring-operations.md)<br/>
Descrive le operazioni di base di `CString`, inclusa la creazione di oggetti da stringhe letterali C, l'accesso ai caratteri in un oggetto `CString`, la concatenazione di due oggetti e il confronto di oggetti `CString`.

[Gestione dei dati di tipo stringa](../atl-mfc-shared/string-data-management.md)<br/>
Descrive l'uso di Unicode e MBCS con `CString`.

[Semantica di CString](../atl-mfc-shared/cstring-semantics.md)<br/>
Spiega come usare gli oggetti `CString`.

[Operazioni di CString relative alle stringhe in formato C](../atl-mfc-shared/cstring-operations-relating-to-c-style-strings.md)<br/>
Descrive la modifica del contenuto di un oggetto `CString` come una stringa in formato C con terminazione null.

[Allocazione e rilascio di memoria per un oggetto BSTR](../atl-mfc-shared/allocating-and-releasing-memory-for-a-bstr.md)<br/>
Viene illustrato l'utilizzo della memoria per un oggetto BSTR e COM.

[Pulizia delle eccezioni di CString](../atl-mfc-shared/cstring-exception-cleanup.md)<br/>
Spiega che la pulizia esplicita in MFC 3.0 e versione successiva non è più necessaria.

[Passaggio degli argomenti di CString](../atl-mfc-shared/cstring-argument-passing.md)<br/>
Spiega come passare gli oggetti CString alle funzioni e come restituire oggetti `CString` da funzioni.

[Supporto per set di caratteri Unicode e multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)<br/>
Descrive il supporto di Unicode e MBCS in MFC.

## <a name="reference"></a>Riferimenti

[CStringT](../atl-mfc-shared/reference/cstringt-class.md)<br/>
Fornisce informazioni di riferimento sulla classe `CStringT`.

[Classe CSimpleStringT](../atl-mfc-shared/reference/csimplestringt-class.md)<br/>
Fornisce informazioni di riferimento sulla classe `CSimpleStringT`.

## <a name="related-sections"></a>Sezioni correlate

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
Contiene collegamenti ad argomenti che descrivono diversi modi per gestire i dati di tipo stringa.

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)
