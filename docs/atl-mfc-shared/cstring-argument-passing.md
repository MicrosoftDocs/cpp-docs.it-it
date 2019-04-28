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
ms.openlocfilehash: 1729167786d71c107fe6a4369d5a0c7e7c8594f1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62236385"
---
# <a name="cstring-argument-passing"></a>Passaggio degli argomenti di CString

Questo articolo illustra come passare [CString](../atl-mfc-shared/reference/cstringt-class.md) oggetti alle funzioni e come restituire `CString` oggetti dalle funzioni.

##  <a name="_core_cstring_argument.2d.passing_conventions"></a> Convenzioni di passaggio degli argomenti di CString

Quando si definisce un'interfaccia di classe, è necessario determinare la convenzione di argomenti vengono passati per le funzioni membro. Esistono alcune regole standard per passaggio e restituzione `CString` oggetti. Se si seguono le regole descritte in [stringhe come input di funzione](#_core_strings_as_function_inputs) e [stringhe come output delle funzioni](#_core_strings_as_function_outputs), sarà necessario un codice efficiente e corretto.

##  <a name="_core_strings_as_function_inputs"></a> Stringhe come input (funzione)

Modo più efficiente e sicuro per usare un `CString` oggetto nelle funzioni chiamate consiste nel passare un `CString` oggetto alla funzione. Nonostante il nome, un `CString` oggetto non archivia una stringa internamente come una stringa in formato C con un carattere di terminazione null. Al contrario, un `CString` oggetto tiene traccia un'attenta del numero di caratteri ha. Visto `CString` garantisce un puntatore LPCTSTR a una stringa con terminazione null è una piccola quantità di lavoro che può diventare significativo se il codice deve farlo costantemente. Il risultato è temporaneo perché qualsiasi modifica di `CString` contenuto invalida le copie obsolete del puntatore LPCTSTR.

Ha senso in alcuni casi per fornire una stringa in formato C. Ad esempio, può essere una situazione in cui una funzione chiamata è scritto in C e non supporta gli oggetti. In questo caso, soggetti a coercizione di `CString` parametro LPCTSTR e la funzione otterrà una stringa di tipo C con terminazione null. È anche possibile tornare nella direzione opposta e creare un `CString` utilizzando il `CString` costruttore che accetta un parametro di stringa di tipo C.

Se il contenuto della stringa devono essere modificate da una funzione, dichiarare il parametro come non costante `CString` riferimento (`CString&`).

##  <a name="_core_strings_as_function_outputs"></a> Stringhe come output (funzione)

In genere è possibile tornare `CString` oggetti dalle funzioni perché `CString` gli oggetti seguono la semantica dei valori, ad esempio i tipi primitivi. Per restituire una stringa di sola lettura, usare una costante `CString` riferimento (`const CString&`). Nell'esempio seguente viene illustrato l'utilizzo di `CString` parametri e tipi restituiti:

[!code-cpp[NVC_ATLMFC_Utilities#197](../atl-mfc-shared/codesnippet/cpp/cstring-argument-passing_1.cpp)]

[!code-cpp[NVC_ATLMFC_Utilities#198](../atl-mfc-shared/codesnippet/cpp/cstring-argument-passing_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)
