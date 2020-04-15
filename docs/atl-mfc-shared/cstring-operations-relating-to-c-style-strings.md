---
title: Operazioni di CString relative alle stringhe in formato C
ms.date: 11/04/2016
helpviewer_keywords:
- CString objects, basic operations
- MFC [C++], string handling class
- string conversion [C++], C-style strings
- strings [C++], string operations
- standard run-time library string functions
- null values, Null-terminated string conversion
- string functions
- strings [C++], in C
- string arguments
- C-style strings
- strings [C++], class CString
- casting CString objects
ms.assetid: 5048de8a-5298-4891-b8a0-c554b5a3ac1b
ms.openlocfilehash: 406a934d3691c7787085cc319770074ac2ee5926
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317939"
---
# <a name="cstring-operations-relating-to-c-style-strings"></a>Operazioni di CString relative alle stringhe in formato C

Oggetto [CString](../atl-mfc-shared/using-cstring.md) oggetto contiene dati di stringa di caratteri. `CString`eredita il set di [metodi e operatori](../atl-mfc-shared/reference/cstringt-class.md) definiti nel modello di classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md) per lavorare con i dati di stringa. (`CString` è un **typedef** `CStringT` specializzato per lavorare con `CString` il tipo di dati di tipo carattere che supporta.)

`CString` non archivia i dati di tipo carattere internamente come stringa in formato C con terminazione null. `CString` tiene invece traccia della lunghezza dei dati di tipo carattere in modo da poter controllare con maggiore sicurezza i dati e lo spazio necessario.

`CString` non accetta stringhe in formato C ma consente di accedere ai dati di tipo carattere come stringa in formato C. Questo argomento contiene le seguenti sezioni che illustrano come usare l'oggetto `CString` come se fosse una stringa in formato C con terminazione null.

- [Conversione di stringhe in formato C con terminazione null](#_core_using_cstring_as_a_c.2d.style_null.2d.terminated_string)

- [Utilizzo delle funzioni stringa della libreria di runtime standardWorking with standard run-time library string functions](#_core_working_with_standard_run.2d.time_library_string_functions)

- [Modifica diretta del contenuto di CString](#_core_modifying_cstring_contents_directly)

- [Utilizzo di oggetti CString con funzioni di argomento variabiliUsing CString objects with variable argument functions](#_core_using_cstring_objects_with_variable_argument_functions)

- [Specifica dei parametri formali di CStringSpecifying CString formal parameters](#_core_specifying_cstring_formal_parameters)

## <a name="using-cstring-as-a-c-style-null-terminated-string"></a><a name="_core_using_cstring_as_a_c.2d.style_null.2d.terminated_string"></a>Utilizzo di CString come stringa con terminazione Null di tipo CUsing CString as a C-Style Null-Terminated String

Per utilizzare `CString` un oggetto come stringa di tipo C, eseguire il cast dell'oggetto a LPCTSTR. Nell'esempio seguente, `CString` restituisce un puntatore a una stringa in formato C con terminazione null di sola lettura. La funzione `strcpy` inserisce una copia della stringa in formato C nella variabile `myString`.

```cpp
CString aCString = "A string";
char myString[256];
strcpy(myString, (LPCTSTR)aCString);
```

È possibile usare i metodi di `CString`, ad esempio `SetAt`, per modificare i singoli caratteri nell'oggetto stringa. Tuttavia, il puntatore LPCTSTR è temporaneo e `CString`diventa non valido quando viene apportata una modifica a . L'oggetto `CString` può anche uscire dall'ambito ed essere eliminato automaticamente. Si consiglia di ottenere un nuovo puntatore `CString` LPCTSTR di un oggetto ogni volta che si utilizza uno.

Talvolta potrebbe essere necessaria una copia dei dati di `CString` da modificare direttamente. Usare la funzione `strcpy_s` più sicura (o `_tcscpy_s` per il formato portabile Unicode/MBCS) per copiare l'oggetto `CString` in un buffer separato, dove è possibile modificare i caratteri in modo sicuro, come illustrato nell'esempio seguente.

[!code-cpp[NVC_ATLMFC_Utilities#189](../atl-mfc-shared/codesnippet/cpp/cstring-operations-relating-to-c-style-strings_1.cpp)]

> [!NOTE]
> Il terzo `strcpy_s` argomento (o Unicode/MBCS-portable `_tcscpy_s`) `const wchar_t*` è un `const char*` (Unicode) o un (ANSI). L'esempio precedente passa un oggetto `CString` per questo argomento. Il compilatore C++ applica automaticamente la funzione di conversione definita per la classe `CString` che converte `CString` in `LPCTSTR`. La possibilità di definire le operazioni di cast da un tipo a un altro è una delle funzionalità più utili di C++.

## <a name="working-with-standard-run-time-library-string-functions"></a><a name="_core_working_with_standard_run.2d.time_library_string_functions"></a>Utilizzo delle funzioni stringa della libreria di runtime standardWorking with Standard Run-Time Library String Functions

È consigliabile trovare un metodo `CString` per eseguire un'operazione di stringa per cui potrebbe essere necessario usare le funzioni della libreria run-time C standard come `strcmp` (o `_tcscmp` per il formato portabile Unicode/MBCS).

Se è necessario utilizzare le funzioni stringa di runtime del linguaggio C, è possibile utilizzare le tecniche descritte in _core_using_cstring_as_a_c.2d.style_null.2d.terminated_string. È possibile copiare l'oggetto `CString` in un buffer di stringa in formato C equivalente, eseguire le operazioni nel buffer e quindi riassegnare la stringa in formato C risultante a un oggetto `CString`.

## <a name="modifying-cstring-contents-directly"></a><a name="_core_modifying_cstring_contents_directly"></a>Modifica diretta dei contenuti di CStringModifying CString Contents Directly

Nella maggior parte dei casi, è consigliabile usare le funzioni membro di `CString` per modificare il contenuto di un oggetto `CString` o per convertire l'oggetto `CString` in una stringa di caratteri in formato C.

Ci sono casi in cui è opportuno modificare direttamente il contenuto di `CString`, ad esempio quando si usano le funzioni del sistema operativo che richiedono un buffer di caratteri.

I metodi `GetBuffer` e `ReleaseBuffer` consentono di accedere al buffer di caratteri interno di un oggetto `CString` e di modificarlo direttamente. I passaggi seguenti mostrano come usare queste funzioni a tale scopo.

### <a name="to-use-getbuffer-and-releasebuffer-to-access-the-internal-character-buffer-of-a-cstring-object"></a>Per usare GetBuffer e ReleaseBuffer per accedere al buffer di caratteri interno di un oggetto CString

1. Chiamare `GetBuffer` per un oggetto `CString` e specificare la lunghezza del buffer necessaria.

1. Usare il puntatore restituito da `GetBuffer` per scrivere i caratteri direttamente nell'oggetto `CString`.

1. Chiamare `ReleaseBuffer` per l'oggetto `CString` per aggiornare tutte le informazioni interne sullo stato di `CString`, ad esempio la lunghezza della stringa. Dopo aver modificato direttamente il contenuto di un oggetto `CString`, è necessario chiamare `ReleaseBuffer` prima di poter chiamare altre funzioni membro di `CString`.

## <a name="using-cstring-objects-with-variable-argument-functions"></a><a name="_core_using_cstring_objects_with_variable_argument_functions"></a>Utilizzo di oggetti CString con funzioni di argomento variabiliUsing CString Objects with Variable Argument Functions

Alcune funzioni C accettano un numero variabile di argomenti. Un esempio rilevante è `printf_s`. A causa del modo in cui questo tipo di funzione è dichiarato, il compilatore non può essere certo del tipo di argomenti né determinare l'operazione di conversione da eseguire per ogni argomento. Pertanto, è essenziale usare un cast di tipo esplicito per passare un oggetto `CString` a una funzione che accetta un numero variabile di argomenti.

Per utilizzare `CString` un oggetto in una funzione `CString` di argomento variabile, eseguire in modo esplicito il cast di a una stringa LPCTSTR, come illustrato nell'esempio seguente.

[!code-cpp[NVC_ATLMFC_Utilities#190](../atl-mfc-shared/codesnippet/cpp/cstring-operations-relating-to-c-style-strings_2.cpp)]

## <a name="specifying-cstring-formal-parameters"></a><a name="_core_specifying_cstring_formal_parameters"></a>Specifica dei parametri formali di CStringSpecifying CString Formal Parameters

Per la maggior parte delle funzioni che richiedono un argomento stringa è consigliabile specificare il parametro formale nel prototipo di funzione come un puntatore `const` a un carattere (`LPCTSTR`) anziché `CString`. Quando un parametro formale `const` viene specificato come puntatore a un carattere, è possibile`"hi there"`passare un `CString` puntatore a una matrice TCHAR, una stringa letterale [ ] o un oggetto. L'oggetto `CString` verrà convertito automaticamente in Un LPCTSTR. Qualsiasi luogo in cui è possibile utilizzare un `CString` LPCTSTR, è anche possibile utilizzare un oggetto.

È inoltre possibile specificare un parametro formale `const CString&`come riferimento a una stringa costante, ovvero , se l'argomento non verrà modificato. Eliminare il modificatore **const** se la stringa verrà modificata dalla funzione. Per avere un valore null predefinito, inizializzarlo a una stringa null [`""`], come mostrato di seguito:

[!code-cpp[NVC_ATLMFC_Utilities#191](../atl-mfc-shared/codesnippet/cpp/cstring-operations-relating-to-c-style-strings_3.cpp)]

Per la maggior parte dei risultati di funzione, è sufficiente restituire un oggetto `CString` per valore.

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[Passaggio degli argomenti di CString](../atl-mfc-shared/cstring-argument-passing.md)
