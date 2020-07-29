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
ms.openlocfilehash: fa46e82f19d87c49f652779d0e86e78549935965
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220899"
---
# <a name="basic-cstring-operations"></a>Operazioni di base con CString

In questo argomento vengono illustrate le operazioni [CString](../atl-mfc-shared/reference/cstringt-class.md) di base seguenti:

- [Creazione di oggetti CString da stringhe letterali C standard](#_core_creating_cstring_objects_from_standard_c_literal_strings)

- [Accesso a singoli caratteri in un oggetto CString](#_core_accessing_individual_characters_in_a_cstring)

- [Concatenazione di due oggetti CString](#_core_concatenating_two_cstring_objects)

- [Confronto di oggetti CString](#_core_comparing_cstring_objects)

- [Conversione di oggetti CString](#_core_converting_cstring_objects)

`Class CString`è basato sulla classe del modello di classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md). `CString`è **`typedef`** di `CStringT` . Più precisamente, `CString` è un oggetto **`typedef`** di una *specializzazione esplicita* di `CStringT` , che rappresenta un modo comune per usare un modello di classe per definire una classe. Le classi definite in modo analogo sono `CStringA` e `CStringW` .

`CString`, `CStringA` e `CStringW` sono definiti in atlstr. h. `CStringT`è definito in CStringT. h.

`CString`, `CStringA` e `CStringW` ottengono un set di metodi e operatori definiti da da `CStringT` usare con i dati stringa supportati. Alcuni dei metodi duplicati e, in alcuni casi, superano i servizi di stringa delle librerie di runtime C.

Nota: `CString` è una classe nativa. Per una classe stringa da usare in un progetto gestito C++/CLI, usare `System.String` .

## <a name="creating-cstring-objects-from-standard-c-literal-strings"></a><a name="_core_creating_cstring_objects_from_standard_c_literal_strings"></a>Creazione di oggetti CString da stringhe letterali C standard

È possibile assegnare stringhe letterali di tipo C a un `CString` oggetto esattamente come è possibile assegnare un `CString` oggetto a un altro.

- Assegnare il valore di una stringa letterale C a un `CString` oggetto.

   [!code-cpp[NVC_ATLMFC_Utilities#183](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_1.cpp)]

- Assegnare il valore di uno `CString` a un altro `CString` oggetto.

   [!code-cpp[NVC_ATLMFC_Utilities#184](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_2.cpp)]

   Il contenuto di un `CString` oggetto viene copiato quando un `CString` oggetto viene assegnato a un altro. Pertanto, le due stringhe non condividono un riferimento ai caratteri effettivi che costituiscono la stringa. Per altre informazioni su come usare `CString` gli oggetti come valori, vedere [semantica di CString](../atl-mfc-shared/cstring-semantics.md).

   > [!NOTE]
   > Per scrivere l'applicazione in modo che possa essere compilata per Unicode o per ANSI, codificare stringhe letterali utilizzando la macro _T. Per ulteriori informazioni, vedere [Unicode e supporto del set di caratteri multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).

## <a name="accessing-individual-characters-in-a-cstring"></a><a name="_core_accessing_individual_characters_in_a_cstring"></a>Accesso a singoli caratteri in un oggetto CString

È possibile accedere ai singoli caratteri di un `CString` oggetto usando i `GetAt` `SetAt` metodi e. È anche possibile usare l'elemento di matrice, o pedice, operator ([]) anziché `GetAt` per ottenere singoli caratteri. (Simile all'accesso agli elementi della matrice in base all'indice, come nelle stringhe standard di tipo C). I valori di indice per i `CString` caratteri sono in base zero.

## <a name="concatenating-two-cstring-objects"></a><a name="_core_concatenating_two_cstring_objects"></a>Concatenazione di due oggetti CString

Per concatenare due `CString` oggetti, usare gli operatori di concatenazione (+ o + =), come indicato di seguito.

[!code-cpp[NVC_ATLMFC_Utilities#185](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_3.cpp)]

Almeno un argomento per gli operatori di concatenazione (+ o + =) deve essere un `CString` oggetto, ma è possibile usare una stringa di caratteri costante (ad esempio, `"big"` ) o un **`char`** (ad esempio,' x ') per l'altro argomento.

## <a name="comparing-cstring-objects"></a><a name="_core_comparing_cstring_objects"></a>Confronto di oggetti CString

Il `Compare` metodo e l'operatore = = per `CString` sono equivalenti. `Compare`, **operator = =**, e `CompareNoCase` sono compatibili con MBCS e Unicode; anche senza distinzione tra maiuscole e minuscole `CompareNoCase` . Il `Collate` metodo di `CString` è dipendente dalle impostazioni locali e spesso è più lento rispetto a `Compare` . Usare `Collate` solo dove è necessario rispettare le regole di ordinamento come specificato dalle impostazioni locali correnti.

Nella tabella seguente vengono illustrate le funzioni di confronto [CString](../atl-mfc-shared/reference/cstringt-class.md) disponibili e le relative funzioni equivalenti di Unicode/MBCS-portable nella libreria di runtime del linguaggio C.

|CString (funzione)|Funzione MBCS|Funzione Unicode|
|----------------------|-------------------|----------------------|
|`Compare`|`_mbscmp`|`wcscmp`|
|`CompareNoCase`|`_mbsicmp`|`_wcsicmp`|
|`Collate`|`_mbscoll`|`wcscoll`|

Il `CStringT` modello di classe definisce gli operatori relazionali (<, \<=, > =, >, = = e! =), che sono disponibili per l'utilizzo da parte di `CString` . È possibile confrontare due `CStrings` usando questi operatori, come illustrato nell'esempio seguente.

[!code-cpp[NVC_ATLMFC_Utilities#186](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_4.cpp)]

## <a name="converting-cstring-objects"></a><a name="_core_converting_cstring_objects"></a>Conversione di oggetti CString

Per informazioni sulla conversione di oggetti CString in altri tipi di stringa, vedere [procedura: eseguire la conversione tra diversi tipi di stringa](../text/how-to-convert-between-various-string-types.md).

## <a name="using-cstring-with-wcout"></a>Uso di CString con wcout

Per usare CString con `wcout` è necessario eseguire il cast esplicito dell'oggetto a un oggetto `const wchar_t*` , come illustrato nell'esempio seguente:

```cpp
CString cs("meow");

wcout << (const wchar_t*) cs << endl;
```

Senza il cast, `cs` viene considerato come un **`void*`** e `wcout` stampa l'indirizzo dell'oggetto. Questo comportamento è causato da sottili interazioni tra la deduzione dell'argomento di modello e la risoluzione dell'overload che sono a loro volta corrette e conformi allo standard C++.

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[CStringt (classe)](../atl-mfc-shared/reference/cstringt-class.md)<br/>
[Specializzazione modello](../cpp/template-specialization-cpp.md)<br/>
[Procedura: eseguire la conversione tra diversi tipi di stringa](../text/how-to-convert-between-various-string-types.md)
