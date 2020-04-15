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
ms.openlocfilehash: 68947dc37e5398ac7caa4754e9af40223cec7bf2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317952"
---
# <a name="basic-cstring-operations"></a>Operazioni di base con CString

In questo argomento vengono illustrate le seguenti operazioni [CString](../atl-mfc-shared/reference/cstringt-class.md) di base:

- [Creazione di oggetti CString da stringhe letterali C standardCreating CString objects from standard C literal strings](#_core_creating_cstring_objects_from_standard_c_literal_strings)

- [Accesso a singoli caratteri in un oggetto CStringAccessing individual characters in a CString](#_core_accessing_individual_characters_in_a_cstring)

- [Concatenazione di due oggetti CStringConcatenating two CString objects](#_core_concatenating_two_cstring_objects)

- [Confronto di oggetti CStringComparing CString objects](#_core_comparing_cstring_objects)

- [Conversione di oggetti CStringConverting CString objects](#_core_converting_cstring_objects)

`Class CString`è basato sul modello di classe [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md). `CString`è un **typedef** di `CStringT`. Più `CString` esattamente, è un **typedef** di `CStringT`una *specializzazione esplicita* di , che è un modo comune per utilizzare un modello di classe per definire una classe. Analogamente, `CStringA` le `CStringW`classi definite sono e .

`CString`, `CStringA`, `CStringW` e sono definiti in atlstr.h. `CStringT`è definito in cstringt.h.

`CString`, `CStringA`e `CStringW` ognuno ottiene un set di `CStringT` metodi e operatori definiti da per l'utilizzo con i dati stringa che supportano. Alcuni metodi duplicano e, in alcuni casi, superano i servizi di stringa delle librerie di runtime del linguaggio C.

Nota: `CString` è una classe nativa. Per una classe di stringhe che deve essere utilizzata in `System.String`un progetto gestito in Linguaggio C, utilizzare .

## <a name="creating-cstring-objects-from-standard-c-literal-strings"></a><a name="_core_creating_cstring_objects_from_standard_c_literal_strings"></a>Creazione di oggetti CString da stringhe letterali C standardCreating CString Objects from Standard C Literal Strings

È possibile assegnare stringhe letterali di tipo C a un `CString` oggetto come è possibile assegnare un `CString` oggetto a un altro.

- Assegnare il valore di una `CString` stringa letterale C a un oggetto .

   [!code-cpp[NVC_ATLMFC_Utilities#183](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_1.cpp)]

- Assegnare il `CString` valore `CString` di uno a un altro oggetto.

   [!code-cpp[NVC_ATLMFC_Utilities#184](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_2.cpp)]

   Il contenuto `CString` di un oggetto `CString` viene copiato quando un oggetto viene assegnato a un altro. Pertanto, le due stringhe non condividono un riferimento ai caratteri effettivi che costituiscono la stringa. Per ulteriori informazioni su `CString` come utilizzare gli oggetti come valori, vedere [CString Semantics](../atl-mfc-shared/cstring-semantics.md).

   > [!NOTE]
   > Per scrivere l'applicazione in modo che possa essere compilata per Unicode o per ANSI, codificare le stringhe letterali utilizzando la _T macro. Per ulteriori informazioni, vedere Supporto Unicode [e MBCS (Multibyte Character Set).](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)

## <a name="accessing-individual-characters-in-a-cstring"></a><a name="_core_accessing_individual_characters_in_a_cstring"></a>Accesso a singoli caratteri in un oggetto CStringAccessing Individual Characters in a CString

È possibile accedere ai singoli caratteri in un `CString` oggetto utilizzando i `GetAt` metodi e `SetAt` . È inoltre possibile utilizzare l'elemento array, o pedice, operatore ( [ ] ) anziché `GetAt` per ottenere singoli caratteri. (Questo è simile all'accesso agli elementi della matrice in base all'indice, come nelle stringhe standard di tipo C.) I valori `CString` di indice per i caratteri sono in base zero.

## <a name="concatenating-two-cstring-objects"></a><a name="_core_concatenating_two_cstring_objects"></a>Concatenazione di due oggetti CStringConcatenating Two CString Objects

Per concatenare `CString` due oggetti, utilizzare gli operatori di concatenazione (Sezione o ) come indicato di seguito.

[!code-cpp[NVC_ATLMFC_Utilities#185](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_3.cpp)]

`CString` Per l'altro argomento è possibile utilizzare una stringa di caratteri costante (ad esempio, `"big"`) o un **carattere** (ad esempio, 'x') per l'altro argomento.

## <a name="comparing-cstring-objects"></a><a name="_core_comparing_cstring_objects"></a>Confronto di oggetti CStringComparing CString Objects

Il `Compare` metodo e l'operatore per `CString` l'operatore di , sono equivalenti. `Compare`, **operator**, `CompareNoCase` e sono in grado di riconoscere MBCS e Unicode; `CompareNoCase` viene inoltre fatta distinzione tra maiuscole e minuscole. Il `Collate` metodo `CString` di è sensibile alle impostazioni `Compare`locali ed è spesso più lento di . Utilizzare `Collate` solo dove è necessario rispettare le regole di ordinamento come specificato dalle impostazioni locali correnti.

Nella tabella seguente vengono illustrate le funzioni di confronto [CString](../atl-mfc-shared/reference/cstringt-class.md) disponibili e le funzioni Unicode/MBCS-portabili equivalenti nella libreria di runtime del linguaggio C.

|CString (funzione)|MBCS (funzione MBCS)|Funzione Unicode|
|----------------------|-------------------|----------------------|
|`Compare`|`_mbscmp`|`wcscmp`|
|`CompareNoCase`|`_mbsicmp`|`_wcsicmp`|
|`Collate`|`_mbscoll`|`wcscoll`|

Il `CStringT` modello di classe definisce \<gli operatori relazionali (<, , >, >, `CString`, e ! ) che sono disponibili per l'utilizzo da parte di . È possibile `CStrings` confrontare due utilizzando questi operatori, come illustrato nell'esempio seguente.

[!code-cpp[NVC_ATLMFC_Utilities#186](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_4.cpp)]

## <a name="converting-cstring-objects"></a><a name="_core_converting_cstring_objects"></a>Conversione di oggetti CStringConverting CString Objects

Per informazioni sulla conversione di oggetti CString in altri tipi di stringa, vedere [Procedura: eseguire la conversione tra vari tipi di stringa](../text/how-to-convert-between-various-string-types.md).

## <a name="using-cstring-with-wcout"></a>Uso di CString con wcoutUsing CString with wcout

Per utilizzare un `wcout` CString con è necessario `const wchar_t*` eseguire in modo esplicito il cast dell'oggetto a un, come illustrato nell'esempio seguente:To use a CString with you must explicitly cast the object to a as shown in the following example:

```cpp
CString cs("meow");

wcout << (const wchar_t*) cs << endl;
```

Senza il `cs` cast, viene `void*` `wcout` trattato come a e stampa l'indirizzo dell'oggetto. Questo comportamento è causato da sottili interazioni tra la deduzione dell'argomento di modello e la risoluzione dell'overload che sono di per sé corrette e conformi allo standard C.

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[Classe CStringT](../atl-mfc-shared/reference/cstringt-class.md)<br/>
[Specializzazione modello](../cpp/template-specialization-cpp.md)<br/>
[Procedura: convertire vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md)
