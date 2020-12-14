---
description: "Altre informazioni su: Descrizione dell'argomento"
title: Descrizione di argomenti
ms.date: 11/04/2016
helpviewer_keywords:
- envp argument
- main function, syntax
- arguments [C++], for main function
- argv argument
- argc argument
ms.assetid: 91c2cbe3-9aca-4277-afa1-6137eb8fb704
ms.openlocfilehash: 97a4bbd8c483f26aa43065cb14a567e1050116d7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97280197"
---
# <a name="argument-description"></a>Descrizione di argomenti

Il parametro `argc` nelle funzioni **main** e **wmain** corrisponde a un Integer che specifica il numero degli argomenti che vengono passati al programma dalla riga di comando. Poiché il nome del programma è considerato un argomento, il valore di `argc` è almeno uno.

## <a name="remarks"></a>Commenti

Il parametro `argv` è una matrice di puntatori a stringhe con terminazione null che rappresentano gli argomenti del programma. Ogni elemento della matrice punta a una rappresentazione di stringa di un argomento passato a **main** (o a **wmain**). Per informazioni sulle matrici, vedere dichiarazioni di [matrici](../c-language/array-declarations.md). Il `argv` parametro può essere dichiarato come una matrice di puntatori al tipo **`char`** ( `char *argv[]` ) o come puntatore a puntatori al tipo **`char`** ( `char **argv` ). Per **wmain**, il `argv` parametro può essere dichiarato come una matrice di puntatori al tipo **`wchar_t`** ( `wchar_t *argv[]` ) o come puntatore a puntatori al tipo **`wchar_t`** ( `wchar_t **argv` ).

Per convenzione, `argv`**[0]** è il comando con cui il programma viene chiamato.  Tuttavia, è possibile generare un processo utilizzando [CreateProcess](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessw) e se si utilizza sia il primo che il secondo argomento ( `lpApplicationName` e `lpCommandLine` ), `argv` **[0]** non può essere il nome eseguibile. utilizzare [GetModuleFileName](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) per recuperare il nome dell'eseguibile.

L'ultimo puntatore (`argv[argc]`) è **NULL**. Per informazioni su un metodo alternativo per ottenere informazioni sulle variabili di ambiente, vedere [getenv](../c-runtime-library/reference/getenv-wgetenv.md) in *Riferimenti della libreria di runtime*.

**Specifico di Microsoft**

Il parametro `envp` è un puntatore a una matrice di stringhe con terminazione null che rappresentano i valori impostati nelle variabili di ambiente dell'utente. Il `envp` parametro può essere dichiarato come una matrice di puntatori a **`char`** ( `char *envp[]` ) o come puntatore a puntatori a **`char`** ( `char **envp` ). In una funzione **wmain** , il `envp` parametro può essere dichiarato come una matrice di puntatori a **`wchar_t`** ( `wchar_t *envp[]` ) o come puntatore a puntatori a **`wchar_t`** ( `wchar_t **envp` ). La fine della matrice è indicata da un puntatore **NULL** \*. Si noti che il blocco di ambiente passato a **main** o **wmain** è una copia "bloccata" dell'ambiente corrente. Se successivamente si modifica l'ambiente tramite una chiamata a _ **putenv** o `_wputenv` , l'ambiente corrente (come restituito da `getenv` / `_wgetenv` e le `_environ` `_wenviron` variabili o) cambia, ma il blocco a cui punta `envp` non cambierà. Il parametro `envp` è compatibile con ANSI in C, ma non in C++.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Funzione principale ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)
