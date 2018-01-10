---
title: Passaggio di argomenti di CString | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
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
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3d33c8cc46ada41f851c90aaae0cabfadb1466d0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cstring-argument-passing"></a>Passaggio degli argomenti di CString
In questo articolo viene illustrato come passare [CString](../atl-mfc-shared/reference/cstringt-class.md) oggetti in funzioni e come restituire `CString` oggetti dalle funzioni.  
  
##  <a name="_core_cstring_argument.2d.passing_conventions"></a>Convenzioni di passaggio di argomenti di CString  
 Quando si definisce un'interfaccia di classe, è necessario determinare la convenzione di passaggio di argomenti per le funzioni membro. Sono disponibili alcune regole standard per il passaggio e la restituzione `CString` oggetti. Se si seguono le regole descritte in [stringhe come input di funzione](#_core_strings_as_function_inputs) e [stringhe come output di funzioni](#_core_strings_as_function_outputs), sarà necessario codice efficiente e corretto.  
  
##  <a name="_core_strings_as_function_inputs"></a>Stringhe come input (funzione)  
 Modo più efficiente e sicuro utilizzare una `CString` oggetto nelle funzioni chiamate consiste nel passare una `CString` oggetto alla funzione. Nonostante il nome, un `CString` oggetto non archiviare una stringa internamente come una stringa in formato C con un carattere di terminazione null. Al contrario, un `CString` oggetto tiene traccia del numero di caratteri che contiene. Con `CString` forniscono un `LPCTSTR` puntatore a una stringa con terminazione null è una piccola quantità di lavoro che può diventare significativo se il codice deve eseguire l'operazione continua. Il risultato è temporaneo perché qualsiasi modifica di `CString` contenuto invalida vecchie copie del `LPCTSTR` puntatore.  
  
 In alcuni casi per fornire una stringa di tipo C senso. Ad esempio, può essere una situazione in cui una funzione chiamata è scritto in C e non supporta oggetti. In questo caso, vengono assegnati forzatamente il `CString` parametro `LPCTSTR`, e la funzione riceverà una stringa in formato C con terminazione null. È anche possibile passare nella direzione opposta e creare un `CString` oggetto utilizzando il `CString` costruttore che accetta un parametro di stringa di tipo C.  
  
 Se il contenuto della stringa devono essere modificati da una funzione, dichiarare il parametro come non costante `CString` riferimento (**CString &**).  
  
##  <a name="_core_strings_as_function_outputs"></a>Stringhe come output (funzione)  
 In genere è possibile restituire `CString` oggetti da funzioni perché `CString` gli oggetti seguono la semantica di valore come tipi primitivi. Per restituire una stringa di sola lettura, utilizzare una costante `CString` riferimento (**const CString &**). Nell'esempio seguente viene illustrato l'utilizzo di `CString` parametri e tipi restituiti:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#197](../atl-mfc-shared/codesnippet/cpp/cstring-argument-passing_1.cpp)]  
  
 [!code-cpp[NVC_ATLMFC_Utilities#198](../atl-mfc-shared/codesnippet/cpp/cstring-argument-passing_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)

