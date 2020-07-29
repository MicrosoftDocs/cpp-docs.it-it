---
title: Uso di CString
ms.date: 06/18/2018
helpviewer_keywords:
- CString objects, C++ string manipulation
- CString objects, reference counting
- CString class (Visual C++)
ms.assetid: ed018aaf-8b10-46f9-828c-f9c092dc7609
ms.openlocfilehash: 8ebf3441c7d8856fe412e2efed4c717b01ced362
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219014"
---
# <a name="using-cstring"></a>Uso di CString

Gli argomenti di questa sezione descrivono come programmare con `CString`. Per la documentazione di riferimento sulla `CString` classe, vedere la documentazione per [CStringT](../atl-mfc-shared/reference/cstringt-class.md).

Per usare `CString`, includere l'intestazione `atlstr.h`.

Le `CString` `CStringA` classi, e `CStringW` sono specializzazioni di un modello di classe denominato [CStringT](../atl-mfc-shared/reference/cstringt-class.md) in base al tipo di dati di tipo carattere supportati.

Un `CStringW` oggetto contiene il **`wchar_t`** tipo e supporta le stringhe Unicode. Un `CStringA` oggetto contiene il **`char`** tipo e supporta stringhe a byte singolo e multibyte (MBCS). Un `CString` oggetto supporta il **`char`** tipo o il **`wchar_t`** tipo, a seconda che il simbolo MBCS o il simbolo Unicode venga definito in fase di compilazione.

Un oggetto `CString` mantiene i dati di tipo carattere in un oggetto `CStringData`. `CString`accetta stringhe in formato C con terminazione NULL. `CString`tiene traccia della lunghezza della stringa per ottenere prestazioni più veloci, ma mantiene anche il carattere NULL nei dati di tipo carattere archiviati per supportare la conversione in LPCWSTR. `CString`include il carattere di terminazione null quando viene esportata una stringa di tipo C. È possibile inserire un valore NULL in altre posizioni in un oggetto `CString` , ma potrebbe produrre risultati imprevisti.

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

## <a name="in-this-section"></a>Contenuto della sezione

[Operazioni CString di base](../atl-mfc-shared/basic-cstring-operations.md)<br/>
Descrive le operazioni di base di `CString`, inclusa la creazione di oggetti da stringhe letterali C, l'accesso ai caratteri in un oggetto `CString`, la concatenazione di due oggetti e il confronto di oggetti `CString`.

[Gestione dati stringa](../atl-mfc-shared/string-data-management.md)<br/>
Descrive l'uso di Unicode e MBCS con `CString`.

[Semantica di CString](../atl-mfc-shared/cstring-semantics.md)<br/>
Spiega come usare gli oggetti `CString`.

[Operazioni di CString relative alle stringhe di tipo C](../atl-mfc-shared/cstring-operations-relating-to-c-style-strings.md)<br/>
Descrive la modifica del contenuto di un oggetto `CString` come una stringa in formato C con terminazione null.

[Allocazione e rilascio di memoria per un BSTR](../atl-mfc-shared/allocating-and-releasing-memory-for-a-bstr.md)<br/>
Viene illustrato l'utilizzo della memoria per gli oggetti BSTR e COM.

[Pulizia eccezioni CString](../atl-mfc-shared/cstring-exception-cleanup.md)<br/>
Spiega che la pulizia esplicita in MFC 3.0 e versione successiva non è più necessaria.

[Passaggio di argomenti CString](../atl-mfc-shared/cstring-argument-passing.md)<br/>
Spiega come passare gli oggetti CString alle funzioni e come restituire oggetti `CString` da funzioni.

[Supporto del set di caratteri Unicode e multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)<br/>
Descrive il supporto di Unicode e MBCS in MFC.

## <a name="reference"></a>Informazioni di riferimento

[CStringT](../atl-mfc-shared/reference/cstringt-class.md)<br/>
Fornisce informazioni di riferimento sulla classe `CStringT`.

[CSimpleStringT (classe)](../atl-mfc-shared/reference/csimplestringt-class.md)<br/>
Fornisce informazioni di riferimento sulla classe `CSimpleStringT`.

## <a name="related-sections"></a>Sezioni correlate

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
Contiene collegamenti ad argomenti che descrivono diversi modi per gestire i dati di tipo stringa.

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)
