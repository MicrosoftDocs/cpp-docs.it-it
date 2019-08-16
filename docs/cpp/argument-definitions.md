---
title: Definizioni di argomenti
ms.date: 11/04/2016
helpviewer_keywords:
- envp argument
- main function, arguments
- arguments [C++], for main function
- argv argument
- argc argument
ms.assetid: 6148cbf3-ebe8-44f2-b277-de4b723991c7
ms.openlocfilehash: 14e5ea3a051d81828c5f88ac16df60b6ebb5b559
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69498811"
---
# <a name="argument-definitions"></a>Definizioni di argomenti

Gli argomenti nel prototipo

```cpp
int main( int argc, char* argv[], char* envp[]);
int wmain( int argc, wchar_t* argv[], wchar_t* envp[]);
```

consentono di eseguire l'utile analisi della riga di comando di argomenti e, facoltativamente, di accedere alle variabili di ambiente. Le definizioni degli argomenti sono le seguenti:

*argc*<br/>
Intero contenente il conteggio degli argomenti seguiti da *argv*. Il parametro *argc* è sempre maggiore o uguale a 1.

*argv*<br/>
Una matrice di stringhe con terminazione null che rappresentano gli argomenti della riga di comando immessi dall'utente del programma. Per convenzione, `argv[0]` è il comando con cui il programma viene richiamato `argv[1]` , è il primo argomento della riga di comando e così via, `argv[argc]`fino a, che è sempre null. Per informazioni sull'eliminazione dell'elaborazione da riga di comando, vedere [personalizzazione dell'elaborazione della riga](../cpp/customizing-cpp-command-line-processing.md) di comando.

Il primo argomento della riga di comando è sempre `argv[1]` e l'ultimo è `argv[argc - 1]`.

> [!NOTE]
> Per convenzione, `argv[0]` è il comando con cui viene richiamato il programma.  Tuttavia, è possibile generare un processo usando [CreateProcess](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) e se si usano sia il primo che il secondo argomento (*lpApplicationName* e *lpCommandLine*), `argv[0]` non può essere il nome eseguibile; usare [GetModuleFileName ](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew)per recuperare il nome dell'eseguibile e il percorso completo.

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

*envp*<br/>
La matrice *envp* , che è un'estensione comune in molti sistemi UNIX, viene utilizzata in Microsoft C++. È una matrice di stringhe che rappresentano le variabili impostate nell'ambiente dell'utente. Questa matrice viene terminata da una voce NULL. Può essere dichiarato come una matrice di puntatori a **char** `char *envp[]`() o come puntatore a puntatori a **char** (`char **envp`). Se il programma utilizza `wmain` `main`anziché, utilizzare il tipo di dati **wchar_t** anziché **char**. Il blocco di ambiente passato `main` a `wmain` e è una copia "bloccata" dell'ambiente corrente. Se successivamente si modifica l'ambiente tramite una chiamata a `putenv` o `_wputenv`, l'ambiente corrente (come restituito da `getenv` o `_wgetenv` e dalla `_environ` variabile `_wenviron` o) cambia, ma il blocco a cui punta envp non viene modificato. Per informazioni sull'eliminazione dell'elaborazione dell'ambiente, vedere [personalizzazione dell'elaborazione della riga di comando](../cpp/customizing-cpp-command-line-processing.md) . Questo argomento è compatibile con ANSI in C, ma non in C++.

**Fine sezione specifica Microsoft**

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare gli argomenti *argc*, *argv*e *envp* per `main`:

```cpp
// argument_definitions.cpp
// compile with: /EHsc
#include <iostream>
#include <string.h>

using namespace std;
int main( int argc, char *argv[], char *envp[] ) {
    int iNumberLines = 0;    // Default is no line numbers.

    // If /n is passed to the .exe, display numbered listing
    // of environment variables.

    if ( (argc == 2) && _stricmp( argv[1], "/n" ) == 0 )
         iNumberLines = 1;

    // Walk through list of strings until a NULL is encountered.
    for( int i = 0; envp[i] != NULL; ++i ) {
        if( iNumberLines )
            cout << i << ": " << envp[i] << "\n";
    }
}
```

## <a name="see-also"></a>Vedere anche

[main: avvio del programma](../cpp/main-program-startup.md)