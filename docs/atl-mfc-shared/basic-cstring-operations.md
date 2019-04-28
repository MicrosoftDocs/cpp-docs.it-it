---
title: Operazioni di base con CString
ms.date: 11/04/2016
helpviewer_keywords:
- CString objects, basic operations
- string literals, CString operations
- literal strings, CString operations
- CString objects
- string comparison, CString operations
- characters, accessing in CStrings
ms.assetid: 41db66b2-9427-4bb3-845a-9b6869159a6c
ms.openlocfilehash: 08c496038efc9e24e1c1610da07b6824c3a50b64
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62216857"
---
# <a name="basic-cstring-operations"></a>Operazioni di base con CString

Questo argomento viene illustrato nell'esempio di basic [CString](../atl-mfc-shared/reference/cstringt-class.md) operazioni:

- [Creazione di oggetti CString da stringhe letterali C standard](#_core_creating_cstring_objects_from_standard_c_literal_strings)

- [L'accesso ai singoli caratteri in un oggetto CString](#_core_accessing_individual_characters_in_a_cstring)

- [Concatenazione di due oggetti CString](#_core_concatenating_two_cstring_objects)

- [Confronto di oggetti CString](#_core_comparing_cstring_objects)

- [Conversione di oggetti CString](#_core_converting_cstring_objects)

`Class CString` è basato sul modello di classe [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md). `CString` è un **typedef** di `CStringT`. Più precisamente, `CString` è un **typedef** di un *specializzazione esplicita* di `CStringT`, che è un modo comune per utilizzare un modello di classe per definire una classe. Sono classi definite in modo analogo `CStringA` e `CStringW`.

`CString`, `CStringA`, e `CStringW` sono definiti in atlstr. h. `CStringT` è definito in CStringT. h.

`CString`, `CStringA`, e `CStringW` ognuno ottenere un set di metodi e operatori definiti dalla `CStringT` per l'uso con i dati stringa supportati. Alcuni dei metodi di duplicati e, in alcuni casi, superare i servizi di stringa delle librerie di runtime C.

Nota: `CString` è una classe nativa. Per una classe di stringa che viene usata in un C++progetto, usare gestito /CLI `System.String`.

##  <a name="_core_creating_cstring_objects_from_standard_c_literal_strings"></a> Creazione di oggetti CString da stringhe letterali C Standard

È possibile assegnare le stringhe letterali di tipo C per un `CString` esattamente come è possibile assegnare uno `CString` oggetto a altro.

- Assegnare il valore di una stringa letterale di C per una `CString` oggetto.

   [!code-cpp[NVC_ATLMFC_Utilities#183](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_1.cpp)]

- Assegnare il valore di uno `CString` a un altro `CString` oggetto.

   [!code-cpp[NVC_ATLMFC_Utilities#184](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_2.cpp)]

   Il contenuto di un `CString` oggetto vengono copiati quando uno `CString` oggetto viene assegnato a un altro. Di conseguenza, le due stringhe non condividono un riferimento per i caratteri effettivi che costituiscono la stringa. Per altre informazioni su come usare `CString` oggetti come valori, vedere [semantica di CString](../atl-mfc-shared/cstring-semantics.md).

   > [!NOTE]
   > Per scrivere l'applicazione in modo che può essere compilato per Unicode o ANSI, le stringhe letterali di codice usando la macro t. Per altre informazioni, vedere [supporto Unicode e Set di caratteri Multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).

##  <a name="_core_accessing_individual_characters_in_a_cstring"></a> L'accesso ai singoli caratteri in un oggetto CString

È possibile accedere ai singoli caratteri in una `CString` utilizzando il `GetAt` e `SetAt` metodi. È anche possibile usare l'elemento, o un indice, operatore di matrice ([]) invece di `GetAt` ottenere singoli caratteri. (Ciò è simile a accesso agli elementi di matrice in base all'indice, come in stringhe standard in formato C.) Indicizzare i valori per `CString` caratteri sono a base zero.

##  <a name="_core_concatenating_two_cstring_objects"></a> Concatenazione di due oggetti CString

Per concatenare due `CString` oggetti, usare gli operatori di concatenazione (+ oppure + =), come indicato di seguito.

[!code-cpp[NVC_ATLMFC_Utilities#185](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_3.cpp)]

Almeno un argomento per gli operatori di concatenazione (+ oppure + =) deve essere un `CString` oggetto, ma è possibile usare una stringa costante carattere (ad esempio, `"big"`) o una **char** (ad esempio, ' x') per l'altro argomento.

##  <a name="_core_comparing_cstring_objects"></a> Confronto di oggetti CString

Il `Compare` (metodo) e l'operatore per = = `CString` sono equivalenti. `Compare`, **operatore = =**, e `CompareNoCase` compatibili con Unicode e MBCS; `CompareNoCase` è anche tra maiuscole e minuscole. Il `Collate` metodo di `CString` è dipendente dalla lingua e spesso è più lento `Compare`. Usare `Collate` solo in cui è necessario accettare l'ordinamento delle regole come specificato dalle impostazioni locali correnti.

Nella seguente tabella sono disponibili [CString](../atl-mfc-shared/reference/cstringt-class.md) le funzioni di confronto e le relative funzioni di formato portabile Unicode/MBCS equivalenti nella libreria di runtime C.

|CString (funzione)|Funzione MBCS|Unicode (funzione)|
|----------------------|-------------------|----------------------|
|`Compare`|`_mbscmp`|`wcscmp`|
|`CompareNoCase`|`_mbsicmp`|`_wcsicmp`|
|`Collate`|`_mbscoll`|`wcscoll`|

Il `CStringT` modello di classe definisce gli operatori relazionali (<, \<=, > =, >, = = e! =), che sono disponibili per l'uso da `CString`. È possibile confrontare due `CStrings` tramite questi operatori, come illustrato nell'esempio seguente.

[!code-cpp[NVC_ATLMFC_Utilities#186](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_4.cpp)]

##  <a name="_core_converting_cstring_objects"></a> Conversione di oggetti CString

Per informazioni sulla conversione di oggetti CString in altri tipi di stringa, vedere [come: Eseguire la conversione tra vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md).

## <a name="using-cstring-with-wcout"></a>Uso di CString con wcout

Da usare con un oggetto CString `wcout` deve esplicitamente il cast dell'oggetto un `const wchar_t*` come illustrato nell'esempio seguente:

```cpp
CString cs("meow");

wcout << (const wchar_t*) cs << endl;
```

Senza il cast `cs` viene considerato come un `void*` e `wcout` stampa l'indirizzo dell'oggetto. Questo comportamento è determinato dalle interazioni meno evidenti tra modello deduzione dei tipi e overload la risoluzione dell'argomento che sono di per sé corretto e conforme allo standard C++.

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[Classe CStringT](../atl-mfc-shared/reference/cstringt-class.md)<br/>
[Specializzazione modello](../cpp/template-specialization-cpp.md)<br/>
[Procedura: Convertire vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md)
