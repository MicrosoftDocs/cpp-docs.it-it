---
description: 'Altre informazioni su: passaggio degli argomenti di CString'
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
ms.openlocfilehash: ee47898ffdfc5129b11b0f9480669fa142d12818
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167175"
---
# <a name="cstring-argument-passing"></a>Passaggio degli argomenti di CString

Questo articolo illustra come passare oggetti [CString](../atl-mfc-shared/reference/cstringt-class.md) alle funzioni e come restituire `CString` oggetti da funzioni.

## <a name="cstring-argument-passing-conventions"></a><a name="_core_cstring_argument.2d.passing_conventions"></a> Convenzioni Argument-Passing CString

Quando si definisce un'interfaccia di classe, è necessario determinare la convenzione di passaggio degli argomenti per le funzioni membro. Sono disponibili alcune regole standard per il passaggio e la restituzione di `CString` oggetti. Se si seguono le regole descritte in [stringhe come input di funzione](#_core_strings_as_function_inputs) e [stringhe come output della funzione](#_core_strings_as_function_outputs), si otterrà codice efficiente e corretto.

## <a name="strings-as-function-inputs"></a><a name="_core_strings_as_function_inputs"></a> Stringhe come input di funzione

Il modo più efficiente e sicuro per usare un `CString` oggetto in funzioni chiamate consiste nel passare un `CString` oggetto alla funzione. Nonostante il nome, un `CString` oggetto non archivia una stringa internamente come una stringa di tipo C con carattere di terminazione null. Al contrario, un `CString` oggetto tiene traccia dell'accuratezza del numero di caratteri. La `CString` fornitura di un puntatore LPCTSTR a una stringa con terminazione null è una piccola quantità di lavoro che può diventare significativa se il codice deve eseguire costantemente questa operazione. Il risultato è temporaneo perché qualsiasi modifica apportata al `CString` contenuto invalida le copie precedenti del puntatore LPCTSTR.

In alcuni casi è utile fornire una stringa di tipo C. Può ad esempio verificarsi una situazione in cui una funzione chiamata viene scritta in C e non supporta oggetti. In questo caso, assegnare il `CString` parametro a LPCTSTR e la funzione otterrà una stringa con terminazione null di tipo C. È anche possibile passare all'altra direzione e creare un `CString` oggetto usando il `CString` costruttore che accetta un parametro di stringa di tipo C.

Se il contenuto della stringa deve essere modificato da una funzione, dichiarare il parametro come riferimento non costante `CString` ( `CString&` ).

## <a name="strings-as-function-outputs"></a><a name="_core_strings_as_function_outputs"></a> Stringhe come output della funzione

In genere è possibile restituire `CString` oggetti da funzioni perché `CString` gli oggetti seguono la semantica del valore come i tipi primitivi. Per restituire una stringa di sola lettura, usare un `CString` riferimento costante ( `const CString&` ). Nell'esempio seguente viene illustrato l'utilizzo di `CString` parametri e tipi restituiti:

[!code-cpp[NVC_ATLMFC_Utilities#197](../atl-mfc-shared/codesnippet/cpp/cstring-argument-passing_1.cpp)]

[!code-cpp[NVC_ATLMFC_Utilities#198](../atl-mfc-shared/codesnippet/cpp/cstring-argument-passing_2.cpp)]

## <a name="see-also"></a>Vedi anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)
