---
title: Chiamata di funzioni DLL da applicazioni Visual Basic
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C++], calling DLL functions from Visual Basic
- DLL functions [C++]
- function calls [C++], DLL functions
- DLLs [C++], calling
- calling DLL functions from VB applications [C++]
- __stdcall keyword [C++]
- DLL functions [C++], calling
ms.assetid: 282f7fbf-a0f2-4b9f-b277-1982710be56c
ms.openlocfilehash: 88705b2a33e3eb82043d93c534477fce96849502
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417602"
---
# <a name="calling-dll-functions-from-visual-basic-applications"></a>Chiamata di funzioni DLL da applicazioni Visual Basic

Per le applicazioni Visual Basic (applicazioni o in altri linguaggi quali Pascal o Fortran) chiamare le funzioni in una DLL di C/C++, le funzioni devono essere esportate usando la convenzione di chiamata corretta senza le decorazioni dei nomi effettuate dal compilatore

`__stdcall` Crea la convenzione di chiamata corretta per la funzione (la funzione chiamata pulisce lo stack e i parametri vengono passati da destra a sinistra), ma decora il nome della funzione in modo diverso. Pertanto, quando **dllexport** viene usato in una funzione esportata in una DLL, viene esportato il nome decorato.

Il `__stdcall` decorazione dei nomi viene anteposto al nome di simbolo con un carattere di sottolineatura ( **\_** ) e aggiunge al simbolo con un simbolo di chiocciola (**\@**) carattere seguito dal numero di byte nell'elenco di argomenti (lo spazio dello stack richiesto). Di conseguenza, la funzione dichiarata come:

```C
int __stdcall func (int a, double b)
```

verrà decorata come `_func@12` nell'output.

La convenzione di chiamata C (`__cdecl`) decora il nome come `_func`.

Per ottenere il nome decorato, utilizzare [/Map](../build/reference/map-generate-mapfile.md). Sfrutta **dllexport** esegue le operazioni seguenti:

- Se la funzione viene esportata con la convenzione di chiamata C (`__cdecl`), e rimuove il carattere di sottolineatura ( **\_** ) quando viene esportato il nome.

- Se la funzione esportata non utilizza la convenzione di chiamata C (ad esempio, `__stdcall`), verrà esportato il nome decorato.

Poiché non è possibile eseguire l'override dove avviene la pulizia dello stack, è necessario usare `__stdcall`. Per rimuovere la decorazione nomi con `__stdcall`, è necessario specificarli mediante alias nella sezione EXPORTS del file def. Viene visualizzata come segue per la dichiarazione di funzione seguente:

```C
int  __stdcall MyFunc (int a, double b);
void __stdcall InitCode (void);
```

Nel. File DEF:

```
EXPORTS
   MYFUNC=_MyFunc@12
   INITCODE=_InitCode@0
```

Per le DLL vengano chiamate da programmi scritti in Visual Basic, è necessaria la tecnica degli alias illustrata in questo argomento nel file def. Se l'alias viene creato nel programma Visual Basic, non è necessario utilizzare gli alias nel file def. Può essere eseguita nel programma Visual Basic aggiungendo una clausola di alias per il [Declare](/dotnet/visual-basic/language-reference/statements/declare-statement) istruzione.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Esportazione da una DLL](../build/exporting-from-a-dll.md)

- [Esportazione da una DLL mediante. File DEF](../build/exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Scelta del metodo di esportazione da usare](../build/determining-which-exporting-method-to-use.md)

- [Nomi decorati](../build/reference/decorated-names.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)
