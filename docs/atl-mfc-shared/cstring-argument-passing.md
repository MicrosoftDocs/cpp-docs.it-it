---
title: Passaggio degli argomenti di CString
ms.date: 11/04/2016
helpviewer_keywords:
- strings [C++], as function input/output
- argument passing [C++]
- arguments [C++], passing
- functions [C++], strings as input/output
- argument passing [C++], C strings
- passing arguments, C strings
- CString objects, passing arguments
- string arguments
ms.assetid: a67bebff-edf1-4cf4-bbff-d1cc6a901099
ms.openlocfilehash: 53977eb47520a20571a2d5ba8aa105c567ff40d1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317929"
---
# <a name="cstring-argument-passing"></a>Passaggio degli argomenti di CString

In questo articolo viene illustrato come passare [cString](../atl-mfc-shared/reference/cstringt-class.md) oggetti alle funzioni e come restituire `CString` oggetti da funzioni.

## <a name="cstring-argument-passing-conventions"></a><a name="_core_cstring_argument.2d.passing_conventions"></a>Convenzioni di passaggio degli argomenti Di CStringCString Argument-Passing Conventions

Quando si definisce un'interfaccia di classe, è necessario determinare la convenzione di passaggio degli argomenti per le funzioni membro. Esistono alcune regole standard per `CString` il passaggio e la restituzione di oggetti. Se si seguono le regole descritte in [Stringhe come Input di funzione](#_core_strings_as_function_inputs) e Stringhe come Output di [funzione](#_core_strings_as_function_outputs), si dirà codice efficiente e corretto.

## <a name="strings-as-function-inputs"></a><a name="_core_strings_as_function_inputs"></a>Stringhe come input di funzioneStrings as Function Inputs

Il modo più efficiente e `CString` sicuro per utilizzare un `CString` oggetto nelle funzioni chiamate consiste nel passare un oggetto alla funzione. Nonostante il nome, un `CString` oggetto non archivia internamente una stringa come stringa di tipo C con un carattere di terminazione null. Al contrario, un `CString` oggetto tiene traccia attentamente del numero di caratteri che ha. Avere `CString` fornito un puntatore LPCTSTR a una stringa con terminazione null è una piccola quantità di lavoro che può diventare significativo se il codice deve farlo costantemente. Il risultato è temporaneo `CString` perché qualsiasi modifica apportata al contenuto invalida le vecchie copie del puntatore LPCTSTR.

Ha senso in alcuni casi per fornire una stringa di tipo C.It does sense sense in some cases to provide a C-style string. Ad esempio, può esserci una situazione in cui una funzione chiamata è scritta in C e non supporta gli oggetti. In questo caso, applicare `CString` l'operazione di coscia del parametro a LPCTSTR e la funzione otterrà una stringa con terminazione null di tipo C. È anche possibile andare nella `CString` direzione opposta e creare un oggetto utilizzando il costruttore che accetta un parametro di stringa di tipo C.You can also go the other direction and create a object by using the `CString` constructor that accepts a C-style string parameter.

Se il contenuto della stringa deve essere modificato da una `CString` funzione, dichiarare il parametro come riferimento non costante (`CString&`).

## <a name="strings-as-function-outputs"></a><a name="_core_strings_as_function_outputs"></a>Stringhe come output di funzioneStrings as Function Outputs

In genere `CString` è possibile `CString` restituire oggetti dalle funzioni perché gli oggetti seguono la semantica del valore come i tipi primitivi. Per restituire una stringa di sola `CString` lettura, utilizzare un riferimento costante (`const CString&`). Nell'esempio seguente viene `CString` illustrato l'utilizzo di parametri e tipi restituiti:

[!code-cpp[NVC_ATLMFC_Utilities#197](../atl-mfc-shared/codesnippet/cpp/cstring-argument-passing_1.cpp)]

[!code-cpp[NVC_ATLMFC_Utilities#198](../atl-mfc-shared/codesnippet/cpp/cstring-argument-passing_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)
